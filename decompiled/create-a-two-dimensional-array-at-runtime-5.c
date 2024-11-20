#include "create-a-two-dimensional-array-at-runtime-5.h"



undefined8 entry(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong auStack_90 [2];
  int *local_80 [2];
  long lStack_70;
  int *local_68;
  int *local_60;
  ulong local_58;
  ulong local_50;
  int local_44;
  long local_40;
  long local_38;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_1c = 0;
  local_68 = &local_2c;
  local_2c = 0;
  local_60 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _printf("Enter two integers.  Space delimited, please:  ");
  local_80[0] = local_68;
  local_80[1] = local_60;
  iVar4 = _scanf("%d %d");
  local_58 = (long)(local_2c * local_30) * 4 + 0xfU & 0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_100004000)(iVar4);
  lVar3 = (long)&lStack_70 - local_58;
  local_50 = (long)local_2c * 8 + 0xfU & 0xfffffffffffffff0;
  local_38 = lVar3;
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar3 = lVar3 - local_50;
  for (local_44 = 0; local_44 < local_2c; local_44 = local_44 + 1) {
    *(long *)(lVar3 + (long)local_44 * 8) = local_38 + (long)(local_44 * local_30) * 4;
  }
  *(int *)(*(long *)(lVar3 + (long)(local_2c / 2) * 8) + (long)(local_30 / 2) * 4) =
       local_2c + local_30;
  uVar2 = local_30 / 2;
  uVar1 = *(uint *)(*(long *)(lVar3 + (long)(local_2c / 2) * 8) + (long)(local_30 / 2) * 4);
  local_40 = lVar3;
  *(ulong *)(lVar3 + -0x20) = (ulong)(uint)(local_2c / 2);
  *(ulong *)(lVar3 + -0x18) = (ulong)uVar2;
  *(ulong *)(lVar3 + -0x10) = (ulong)uVar1;
  iVar4 = _printf("array[%d][%d] is %d\n");
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar4);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004020)((int)param_1);
  return iVar1;
}


