#include "sudoku.h"



ulong _show(ulong param_1)

{
  char *pcVar1;
  uint uVar2;
  int local_20;
  int local_1c;
  
  for (local_1c = 0; local_1c < 9; local_1c = local_1c + 1) {
    if (local_1c % 3 == 0) {
      _putchar(10);
    }
    for (local_20 = 0; local_20 < 9; local_20 = local_20 + 1) {
      pcVar1 = "%2d";
      if (local_20 % 3 == 0) {
        pcVar1 = "%3d";
      }
      _printf(pcVar1);
    }
    uVar2 = _putchar(10);
    param_1 = (ulong)uVar2;
  }
  return param_1;
}



undefined4 _trycell(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  int local_34;
  int local_30;
  undefined4 local_14;
  
  local_38 = 0;
  if (param_2 == 0x51) {
    local_14 = 1;
  }
  else if (*(int *)(param_1 + (long)param_2 * 4) == 0) {
    for (local_30 = 0; local_30 < 9; local_30 = local_30 + 1) {
      local_38 = local_38 |
                 1 << (ulong)(*(int *)(param_1 + (long)(local_30 * 9 + param_2 % 9) * 4) - 1U & 0x1f
                             );
    }
    for (local_34 = 0; local_34 < 9; local_34 = local_34 + 1) {
      local_38 = local_38 |
                 1 << (ulong)(*(int *)(param_1 + (long)((param_2 / 9) * 9 + local_34) * 4) - 1U &
                             0x1f);
    }
    iVar2 = ((param_2 % 9) / 3) * 3;
    iVar3 = ((param_2 / 9) / 3) * 3;
    for (local_30 = iVar3; local_34 = iVar2, local_30 < iVar3 + 3; local_30 = local_30 + 1) {
      for (; local_34 < iVar2 + 3; local_34 = local_34 + 1) {
        local_38 = local_38 |
                   1 << (ulong)(*(int *)(param_1 + (long)(local_30 * 9 + local_34) * 4) - 1U & 0x1f)
        ;
      }
    }
    *(undefined4 *)(param_1 + (long)param_2 * 4) = 1;
    while (*(int *)(param_1 + (long)param_2 * 4) < 10) {
      if (((local_38 & 1) == 0) && (iVar3 = _trycell(param_1,param_2 + 1), iVar3 != 0)) {
        return 1;
      }
      piVar1 = (int *)(param_1 + (long)param_2 * 4);
      *piVar1 = *piVar1 + 1;
      local_38 = (int)local_38 >> 1;
    }
    *(undefined4 *)(param_1 + (long)param_2 * 4) = 0;
    local_14 = 0;
  }
  else {
    local_14 = _trycell(param_1,param_2 + 1);
  }
  return local_14;
}



void _solve(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int local_180;
  int local_17c;
  int aiStack_16c [81];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_17c = 0; local_17c < 0x51; local_17c = local_17c + 1) {
    if ((*(char *)(param_1 + local_17c) < '1') || ('9' < *(char *)(param_1 + local_17c))) {
      local_180 = 0;
    }
    else {
      local_180 = *(char *)(param_1 + local_17c) + -0x30;
    }
    aiStack_16c[local_17c] = local_180;
  }
  iVar1 = _trycell(aiStack_16c,0);
  if (iVar1 == 0) {
    uVar2 = _puts("no solution");
    uVar3 = (ulong)uVar2;
  }
  else {
    uVar3 = _show(aiStack_16c);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar3);
  }
  return;
}



undefined4 entry(void)

{
  _solve("5x..7....6..195....98....6.8...6...34..8.3..17...2...6.6....28....419..5....8..79");
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004020)((int)param_1);
  return iVar1;
}


