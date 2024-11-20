#include "create-a-two-dimensional-array-at-runtime-1.h"



undefined4 entry(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong auStack_a0 [2];
  uint *local_90 [2];
  uint auStack_80 [2];
  uint *local_78;
  uint *local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_1c = 0;
  local_78 = &local_2c;
  local_2c = 0;
  local_70 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _printf("Enter two integers.  Space delimited, please:  ");
  local_90[0] = local_78;
  local_90[1] = local_70;
  iVar5 = _scanf("%d %d");
  local_60 = (ulong)local_2c;
  local_58 = (ulong)local_30;
  local_68 = local_60 * local_58 * 4 + 0xf & 0xfffffffffffffff0;
  local_38 = (undefined *)auStack_80;
  (*(code *)PTR____chkstk_darwin_100004000)(iVar5);
  uVar4 = local_58;
  lVar3 = -local_68;
  local_40 = local_60;
  local_48 = local_58;
  *(uint *)((long)auStack_80 +
           (long)((int)local_30 / 2) * 4 + (long)((int)local_2c / 2) * local_58 * 4 + lVar3 + -0x80
           + 0x80) = local_2c + local_30;
  uVar2 = (int)local_30 / 2;
  uVar1 = *(uint *)((long)auStack_80 +
                   (long)((int)local_30 / 2) * 4 +
                   (long)((int)local_2c / 2) * uVar4 * 4 + lVar3 + -0x80 + 0x80);
  *(ulong *)((long)auStack_a0 + lVar3) = (ulong)(uint)((int)local_2c / 2);
  *(ulong *)((long)auStack_a0 + lVar3 + 8) = (ulong)uVar2;
  *(ulong *)((long)local_90 + lVar3) = (ulong)uVar1;
  iVar5 = _printf("array[%d][%d] is %d\n");
  local_1c = 0;
  local_4c = 0;
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar5);
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


