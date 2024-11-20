#include "sorting-algorithms-bogosort.h"



undefined _is_sorted(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  local_14 = param_2;
  do {
    iVar1 = local_14 + -1;
    if (iVar1 < 1) {
      return 1;
    }
    iVar2 = local_14 + -2;
    local_14 = iVar1;
  } while (*(int *)(param_1 + (long)iVar2 * 4) <= *(int *)(param_1 + (long)iVar1 * 4));
  return 0;
}



void _shuffle(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    uVar1 = *(undefined4 *)(param_1 + (long)local_20 * 4);
    iVar3 = _rand();
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = iVar3 / param_2;
    }
    iVar3 = iVar3 - iVar2 * param_2;
    *(undefined4 *)(param_1 + (long)local_20 * 4) = *(undefined4 *)(param_1 + (long)iVar3 * 4);
    *(undefined4 *)(param_1 + (long)iVar3 * 4) = uVar1;
  }
  return;
}



void _bogosort(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  
  while (uVar1 = _is_sorted(param_1,param_2), (uVar1 & 1) == 0) {
    _shuffle(param_1,param_2);
  }
  return;
}



undefined4 entry(void)

{
  int iVar1;
  int local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_28 = 0x700000009;
  local_30 = 0xa00000001;
  local_20 = 3;
  _bogosort(&local_30,6);
  for (local_38 = 0; local_38 < 6; local_38 = local_38 + 1) {
    _printf("%d ");
  }
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}


