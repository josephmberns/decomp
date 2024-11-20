#include "nonoblock.h"



ulong _nb(ulong param_1,int param_2,int *param_3,int param_4,long param_5,int param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_4c;
  int local_14;
  
  if (param_4 == 0) {
    *param_7 = *param_7 + 1;
    uVar3 = _printf("%2d  %s\n");
    param_1 = (ulong)uVar3;
  }
  else {
    iVar1 = *param_3;
    iVar2 = (int)param_1 - (param_2 + param_4 + -1);
    local_14 = (int)param_1 - (iVar1 + 1);
    for (local_4c = 0; local_4c <= iVar2; local_4c = local_4c + 1) {
      ___memset_chk(param_5 + param_6,0x2e,(long)(iVar2 + iVar1));
      ___memset_chk(param_5 + param_6 + (long)local_4c,0x23,(long)iVar1,0xffffffffffffffff);
      param_1 = _nb(local_14,param_2 - iVar1,param_3 + 1,param_4 + -1,param_5,
                    param_6 + iVar1 + local_4c + 1,param_7);
      local_14 = local_14 + -1;
    }
  }
  return param_1;
}



void _nonoblock(int param_1,long param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong local_60;
  long local_58;
  undefined4 local_4c [3];
  undefined *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  long local_28;
  int local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  local_2c = param_3;
  local_28 = param_2;
  local_1c = param_1;
  _printf("%d cells and blocks [");
  for (local_30 = 0; local_30 < local_2c; local_30 = local_30 + 1) {
    pcVar1 = "%d";
    if (local_30 != 0) {
      pcVar1 = ", %d";
    }
    _printf(pcVar1);
  }
  iVar2 = _printf("]:\n");
  local_34 = 0;
  for (local_38 = 0; local_38 < local_2c; local_38 = local_38 + 1) {
    local_34 = local_34 + *(int *)(local_28 + (long)local_38 * 4);
  }
  if (local_1c < local_34 + local_2c + -1) {
    uVar3 = _printf("no solution\n");
    uVar4 = (ulong)uVar3;
  }
  else {
    local_60 = (ulong)(local_1c + 1) + 0xf & 0xfffffffffffffff0;
    local_40 = (undefined *)&local_60;
    (*(code *)PTR____chkstk_darwin_100004000)(iVar2);
    local_58 = (long)&local_60 - local_60;
    ___memset_chk(local_58,0x2e,(long)local_1c,0xffffffffffffffff);
    *(undefined *)(local_58 + local_1c) = 0;
    local_4c[0] = 0;
    uVar4 = _nb(local_1c,local_34,local_28,local_2c,local_58,0,local_4c);
  }
  if (*(long *)PTR____stack_chk_guard_100004018 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar4);
  }
  return;
}



undefined8 entry(void)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  local_3c = 0;
  local_20 = 0x100000002;
  _nonoblock(5,&local_20);
  _printf("\n");
  _nonoblock(5,0,0);
  _printf("\n");
  local_40 = 8;
  _nonoblock(10,&local_40,1);
  _printf("\n");
  uStack_28 = 0x300000002;
  local_30 = 0x300000002;
  _nonoblock(0xf,&local_30,4);
  _printf("\n");
  local_38 = 0x300000002;
  _nonoblock(5,&local_38,2);
  if (*(long *)PTR____stack_chk_guard_100004018 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004008)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


