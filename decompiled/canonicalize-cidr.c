#include "canonicalize-cidr.h"



undefined _cidr_parse(char *param_1,uint *param_2)

{
  int iVar1;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined local_11;
  
  iVar1 = _sscanf(param_1,"%d.%d.%d.%d/%d");
  if (iVar1 == 5) {
    if (((((((int)local_3c < 1) || (0x20 < (int)local_3c)) || (local_2c < 0)) ||
         ((0xff < local_2c || (local_30 < 0)))) ||
        ((0xff < local_30 || ((local_34 < 0 || (0xff < local_34)))))) ||
       ((local_38 < 0 || (0xff < local_38)))) {
      local_11 = 0;
    }
    else {
      *param_2 = local_30 * 0x10000 + local_2c * 0x1000000 + local_34 * 0x100 + local_38 &
                 ~((1 << (ulong)(0x20 - local_3c & 0x1f)) - 1U);
      param_2[1] = local_3c;
      local_11 = 1;
    }
  }
  else {
    local_11 = 0;
  }
  return local_11;
}



void _cidr_format(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ___snprintf_chk(param_2,param_3,0,0xffffffffffffffff,"%u.%u.%u.%u/%u");
  return;
}



undefined8 entry(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined auStack_84 [8];
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined auStack_68 [32];
  undefined8 auStack_48 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_6c = 0;
  local_78 = param_2;
  local_70 = param_1;
  pvVar2 = _memcpy(auStack_48,&PTR_s_87_70_141_1_22_100004040,0x30);
  for (local_7c = 0; local_7c < 6; local_7c = local_7c + 1) {
    uVar3 = _cidr_parse(auStack_48[(int)local_7c],auStack_84);
    if ((uVar3 & 1) == 0) {
      uVar1 = _fprintf(*(FILE **)PTR____stderrp_100004018,"%s: invalid CIDR\n");
    }
    else {
      _cidr_format(auStack_84,auStack_68,0x20);
      uVar1 = _printf("%-18s -> %s\n");
    }
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___snprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____snprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_100004038)((int)param_1);
  return iVar1;
}


