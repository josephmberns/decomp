#include "fivenum.h"



undefined  [16] _median(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined auVar2 [16];
  double local_18;
  
  iVar1 = (param_3 - param_2) + 1;
  if (0 < iVar1) {
    param_2 = param_2 + iVar1 / 2;
    if (iVar1 % 2 == 0) {
      local_18 = (*(double *)(param_1 + (long)(param_2 + -1) * 8) +
                 *(double *)(param_1 + (long)param_2 * 8)) / 2.0;
    }
    else {
      local_18 = *(double *)(param_1 + (long)param_2 * 8);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_18;
    return auVar2;
  }
  _printf("Array slice cannot be empty\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



undefined4 _compare(double *param_1,double *param_2)

{
  undefined4 local_4;
  
  if (*param_1 <= *param_2) {
    if (*param_2 <= *param_1) {
      local_4 = 0;
    }
    else {
      local_4 = 0xffffffff;
    }
  }
  else {
    local_4 = 1;
  }
  return local_4;
}



undefined4 _fivenum(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_3c;
  int local_30;
  
  local_30 = 0;
  while( true ) {
    if (param_3 <= local_30) {
      _qsort(param_1,(long)param_3,8,(int *)_compare);
      *param_2 = *param_1;
      uVar2 = _median(param_1,0,param_3 + -1);
      param_2[2] = uVar2;
      param_2[4] = param_1[param_3 + -1];
      iVar1 = param_3 / 2;
      local_3c = iVar1;
      if (param_3 % 2 == 0) {
        local_3c = iVar1 + -1;
      }
      uVar2 = _median(param_1,0,local_3c);
      param_2[1] = uVar2;
      uVar2 = _median(param_1,iVar1,param_3 + -1);
      param_2[3] = uVar2;
      return 0;
    }
    if ((double)param_1[local_30] != (double)param_1[local_30]) break;
    local_30 = local_30 + 1;
  }
  _printf("Unable to deal with arrays containing NaN\n\n");
  return 1;
}



undefined4 _show(undefined8 param_1,undefined4 param_2)

{
  char acStack_2f [7];
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_14;
  
  local_24 = param_2;
  local_20 = param_1;
  ___sprintf_chk(acStack_2f,0,7,"%%.%dlf");
  _printf("[");
  for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
    _printf(acStack_2f);
    if (local_28 < 4) {
      _printf(", ");
    }
  }
  _printf("]\n\n");
  return local_14;
}



undefined8 entry(void)

{
  int iVar1;
  undefined auStack_178 [160];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined auStack_a8 [88];
  undefined auStack_50 [40];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _memcpy(auStack_a8,&DAT_100003e40,0x58);
  iVar1 = _fivenum(auStack_a8,auStack_50,0xb);
  if (iVar1 == 0) {
    _show(auStack_50,1);
  }
  _memset(&local_d8,0,0x30);
  local_d8 = 0x4042000000000000;
  local_d0 = 0x4044000000000000;
  local_c8 = 0x401c000000000000;
  local_c0 = 0x4043800000000000;
  local_b8 = 0x4044800000000000;
  local_b0 = 0x402e000000000000;
  iVar1 = _fivenum(&local_d8,auStack_50,6);
  if (iVar1 == 0) {
    _show(auStack_50,1);
  }
  _memcpy(auStack_178,&DAT_100003e98,0xa0);
  iVar1 = _fivenum(auStack_178,auStack_50,0x14);
  if (iVar1 == 0) {
    _show(auStack_50,9);
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dd4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003de0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003dec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004028)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004038)();
  return;
}


