#include "n-queens-problem-2.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong _solve(ulong param_1,int param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar2 = (int)param_1;
  if (param_2 == iVar2) {
    __count = __count + 1;
    uVar3 = _printf("\nNo. %d\n-----\n");
    local_24 = 0;
    while (param_1 = (ulong)uVar3, local_24 < iVar2) {
      for (local_28 = 0; local_28 < iVar2; local_28 = local_28 + 1) {
        if (local_28 == *(int *)(param_3 + (long)local_24 * 4)) {
          local_34 = 0x51;
        }
        else {
          local_34 = 0x20;
          if ((local_24 + local_28 & 1U) == 0) {
            local_34 = 0x2e;
          }
        }
        _putchar(local_34);
      }
      local_24 = local_24 + 1;
      uVar3 = _putchar(10);
    }
  }
  else {
    for (local_2c = 0; local_2c < iVar2; local_2c = local_2c + 1) {
      local_30 = 0;
      while( true ) {
        bVar1 = false;
        if (local_30 < param_2) {
          bVar1 = true;
          if (*(int *)(param_3 + (long)local_30 * 4) != local_2c) {
            uVar3 = _abs(*(int *)(param_3 + (long)local_30 * 4) - local_2c);
            param_1 = (ulong)uVar3;
            bVar1 = uVar3 == param_2 - local_30;
          }
          bVar1 = (bool)(bVar1 ^ 1);
        }
        if (!bVar1) break;
        local_30 = local_30 + 1;
      }
      if (param_2 <= local_30) {
        *(int *)(param_3 + (long)param_2 * 4) = local_2c;
        param_1 = _solve(iVar2,param_2 + 1,param_3);
      }
    }
  }
  return param_1;
}



undefined4 entry(int param_1,long param_2)

{
  undefined auStack_50 [8];
  ulong local_48;
  undefined4 local_3c;
  undefined *local_30;
  long local_28;
  uint local_20;
  undefined4 local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_1c = 0;
  local_28 = param_2;
  if ((param_1 < 2) ||
     (local_20 = param_1, local_20 = _atoi(*(char **)(param_2 + 8)), (int)local_20 < 1)) {
    local_20 = 8;
  }
  local_48 = (ulong)local_20 * 4 + 0xf & 0xfffffffffffffff0;
  local_30 = auStack_50;
  (*(code *)PTR____chkstk_darwin_100004000)();
  _solve(local_20,0);
  local_3c = local_1c;
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return local_1c;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _abs(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__abs_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004030)(param_1);
  return iVar1;
}


