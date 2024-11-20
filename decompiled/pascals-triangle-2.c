#include "pascals-triangle-2.h"



undefined4 _pascals(long param_1,long param_2,int param_3)

{
  undefined4 local_2c;
  int local_28;
  
  for (local_28 = 1; local_28 < param_3; local_28 = local_28 + 1) {
    *(int *)(param_2 + (long)local_28 * 4) =
         *(int *)(param_1 + (long)(local_28 + -1) * 4) + *(int *)(param_1 + (long)local_28 * 4);
    _printf("%d%c");
  }
  if (param_3 < 0x20) {
    local_2c = _pascals(param_2,param_1,param_3 + 1);
  }
  else {
    local_2c = 0;
  }
  return local_2c;
}



undefined4 entry(void)

{
  undefined4 uVar1;
  undefined auStack_128 [128];
  undefined auStack_a8 [4];
  undefined4 local_a4;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memset(auStack_a8,0,0x80);
  local_a4 = 1;
  _memset(auStack_128,0,0x80);
  uVar1 = _pascals(auStack_a8,auStack_128,0);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return uVar1;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004010)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


