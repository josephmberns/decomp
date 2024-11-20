#include "mayan-numerals.h"



long _base20(uint param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *local_18;
  char *local_10;
  uint local_4;
  
  local_10 = param_2;
  local_4 = param_1;
  do {
    pcVar1 = local_10 + 1;
    *local_10 = (char)local_4 + (char)(local_4 / 0x14) * -0x14;
    local_4 = local_4 / 0x14;
    local_10 = pcVar1;
  } while (local_4 != 0);
  local_18 = param_2;
  while (local_18 < local_10) {
    local_10 = local_10 + -1;
    cVar2 = *local_10;
    *local_10 = *local_18;
    *local_18 = cVar2;
    local_18 = local_18 + 1;
  }
  return (long)pcVar1 - (long)param_2;
}



void _make_digit(int param_1,long param_2,long param_3)

{
  int local_44;
  int local_40;
  int local_3c;
  int local_2c;
  int local_14;
  
  local_14 = param_1;
  for (local_2c = 4; 0 < local_2c; local_2c = local_2c + -1) {
    if (local_14 < 6) {
      local_3c = local_14;
    }
    else {
      local_3c = 5;
    }
    if (local_3c < 0) {
      local_40 = 0;
    }
    else {
      if (local_14 < 6) {
        local_44 = local_14;
      }
      else {
        local_44 = 5;
      }
      local_40 = local_44;
    }
    ___memcpy_chk(param_2 + local_2c * param_3,(&PTR_s__100008000)[local_40],4,0xffffffffffffffff);
    local_14 = local_14 + -5;
  }
  if (local_14 == -0x14) {
    *(undefined *)(param_2 + param_3 * 4 + 1) = 0x40;
  }
  return;
}



void * _mayan(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint local_5c;
  void *local_58;
  void *local_30;
  undefined auStack_27 [15];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  if (param_1 == 0) {
    local_30 = (void *)0x0;
  }
  else {
    uVar2 = _base20(param_1,auStack_27);
    uVar1 = uVar2 * 5 + 2;
    local_30 = _malloc(uVar1 * 6 + 1);
    if (local_30 == (void *)0x0) {
      local_30 = (void *)0x0;
    }
    else {
      *(undefined *)((long)local_30 + uVar1 * 6) = 0;
      local_58 = local_30;
      for (local_5c = 0; local_5c < uVar1; local_5c = local_5c + 5) {
        ___memcpy_chk(local_58,"+----",5,0xffffffffffffffff);
        local_58 = (void *)((long)local_58 + 5);
      }
      ___memcpy_chk((long)local_58 + -5,"+\n",2);
      ___memcpy_chk((void *)((long)local_30 + uVar1 * 5),local_30,uVar1,0xffffffffffffffff);
      local_58 = (void *)((long)local_30 + uVar1);
      for (local_5c = 0; local_5c < uVar1; local_5c = local_5c + 5) {
        ___memcpy_chk(local_58,"|    ",5,0xffffffffffffffff);
        local_58 = (void *)((long)local_58 + 5);
      }
      ___memcpy_chk((long)local_58 + -5,"|\n");
      ___memcpy_chk((void *)((long)local_30 + uVar1 * 2),(long)local_30 + uVar1,uVar1,
                    0xffffffffffffffff);
      ___memcpy_chk((void *)((long)local_30 + uVar1 * 3),(long)local_30 + uVar1,uVar1 * 2,
                    0xffffffffffffffff);
      for (local_5c = 0; local_5c < uVar2; local_5c = local_5c + 1) {
        _make_digit(auStack_27[local_5c],(long)local_30 + (ulong)(local_5c * 5) + 1,uVar1);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return local_30;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_14;
  
  if (param_1 == 2) {
    iVar1 = _atoi(*(char **)(param_2 + 8));
    if (iVar1 < 1) {
      _fprintf(*(FILE **)PTR____stderrp_100004018,"number must be positive\n");
      local_14 = 1;
    }
    else {
      pvVar2 = (void *)_mayan(iVar1);
      _printf("%s");
      _free(pvVar2);
      local_14 = 0;
    }
  }
  else {
    _fprintf(*(FILE **)PTR____stderrp_100004018,"usage: mayan <number>\n");
    local_14 = 1;
  }
  return local_14;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}


