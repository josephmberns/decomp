#include "convert-seconds-to-compound-duration-2.h"



undefined4 entry(int param_1,long param_2)

{
  uintmax_t uVar1;
  char *pcVar2;
  undefined4 local_14;
  
  if (param_1 < 2) {
    _printf("usage: %s #seconds\n");
    local_14 = 1;
  }
  else {
    uVar1 = _strtoumax(*(char **)(param_2 + 8),(char **)0x0,10);
    if (uVar1 == 0) {
      _printf("Bad input: %s\n");
      _printf("usage: %s #seconds\n");
      local_14 = 1;
    }
    else {
      _printf("Number entered: %ju\n");
      pcVar2 = (char *)_format_sec(uVar1);
      _printf(pcVar2);
      _free(pcVar2);
      local_14 = 0;
    }
  }
  return local_14;
}



undefined8 _format_sec(long param_1)

{
  long lVar1;
  int iVar2;
  undefined auStack_b8 [8];
  FILE *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char local_7d;
  int local_7c;
  long local_78;
  undefined8 local_70;
  undefined auStack_68 [40];
  undefined8 *local_40 [4];
  long *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_20 = &local_78;
  local_40[0] = &local_88;
  local_40[1] = &local_90;
  local_40[2] = &local_98;
  local_40[3] = &local_a0;
  local_78 = param_1;
  _memcpy(auStack_68,&PTR_s_wk_100004058,0x28);
  local_88 = _sec_to_week(local_78);
  lVar1 = local_78;
  local_78 = _week_to_sec(local_88);
  local_78 = lVar1 - local_78;
  local_90 = _sec_to_day(local_78);
  lVar1 = local_78;
  local_78 = _day_to_sec(local_90);
  local_78 = lVar1 - local_78;
  local_98 = _sec_to_hour(local_78);
  lVar1 = local_78;
  local_78 = _hour_to_sec(local_98);
  local_78 = lVar1 - local_78;
  local_a0 = _sec_to_min(local_78);
  lVar1 = local_78;
  local_78 = _min_to_sec(local_a0);
  local_78 = lVar1 - local_78;
  local_b0 = (FILE *)_open_memstream(&local_a8,auStack_b8);
  if (local_b0 == (FILE *)0x0) {
    iVar2 = _fprintf(*(FILE **)PTR____stderrp_100004010,"Unable to allocate memory");
    local_70 = 0;
  }
  else {
    local_7d = '\x01';
    for (local_7c = 0; local_7c < 5; local_7c = local_7c + 1) {
      if (*local_40[local_7c] != 0) {
        if (local_7d == '\0') {
          _fprintf(local_b0,", %ju %s");
        }
        else {
          _fprintf(local_b0,"%ju %s");
        }
        _fflush(local_b0);
        local_7d = '\0';
      }
    }
    _fprintf(local_b0,"\n");
    iVar2 = _fclose(local_b0);
    local_70 = local_a8;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return local_70;
}



ulong _sec_to_week(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = _sec_to_day(param_1);
  return uVar1 / 7;
}



void _week_to_sec(long param_1)

{
  _day_to_sec(param_1 * 7);
  return;
}



ulong _sec_to_day(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = _sec_to_hour(param_1);
  return uVar1 / 0x18;
}



void _day_to_sec(long param_1)

{
  _hour_to_sec(param_1 * 0x18);
  return;
}



ulong _sec_to_hour(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = _sec_to_min(param_1);
  return uVar1 / 0x3c;
}



void _hour_to_sec(long param_1)

{
  _min_to_sec(param_1 * 0x3c);
  return;
}



ulong _sec_to_min(ulong param_1)

{
  return param_1 / 0x3c;
}



long _min_to_sec(long param_1)

{
  return param_1 * 0x3c;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004038)();
  return pvVar1;
}



void _open_memstream(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__open_memstream_100004040)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uintmax_t _strtoumax(char *__nptr,char **__endptr,int __base)

{
  uintmax_t uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__strtoumax_100004050)(__nptr,__endptr,__base);
  return uVar1;
}


