#include "set-puzzle.h"



void _init_sets(void)

{
  int iVar1;
  int local_1c;
  int local_c;
  int local_8;
  int local_4;
  
  for (local_4 = 0; local_4 < 0x51; local_4 = local_4 + 1) {
    for (local_8 = 0; local_8 < 0x51; local_8 = local_8 + 1) {
      for (local_c = 0x1b; local_c != 0; local_c = local_c / 3) {
        local_1c = 0;
        if (local_c != 0) {
          local_1c = local_4 / local_c;
        }
        local_1c = local_1c % 3;
        iVar1 = 0;
        if (local_c != 0) {
          iVar1 = local_8 / local_c;
        }
        if (local_1c != iVar1 % 3) {
          local_1c = (3 - local_1c) - iVar1 % 3;
        }
        *(int *)(&_set + (long)local_8 * 4 + (long)local_4 * 0x144) =
             *(int *)(&_set + (long)local_8 * 4 + (long)local_4 * 0x144) + local_c * local_1c;
      }
    }
  }
  return;
}



void _deal(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_180;
  int aiStack_16c [81];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_180 = 0; local_180 < 0x51; local_180 = local_180 + 1) {
    aiStack_16c[local_180] = local_180;
  }
  for (local_180 = 0; local_180 < param_2; local_180 = local_180 + 1) {
    iVar3 = _rand();
    iVar2 = 0x51 - local_180;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
    iVar1 = local_180 + (iVar3 - iVar1 * iVar2);
    iVar2 = aiStack_16c[local_180];
    iVar3 = aiStack_16c[iVar1];
    *(int *)(param_1 + (long)local_180 * 4) = iVar3;
    aiStack_16c[local_180] = iVar3;
    aiStack_16c[iVar1] = iVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



int _get_sets(long param_1,int param_2,long param_3)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_28 = 0;
  for (local_1c = 0; iVar1 = local_1c, local_1c < param_2; local_1c = local_1c + 1) {
    while (local_20 = iVar1 + 1, local_20 < param_2) {
      for (local_24 = iVar1 + 2; iVar1 = local_20, local_24 < param_2; local_24 = local_24 + 1) {
        if (*(int *)(&_set + (long)*(int *)(param_1 + (long)local_20 * 4) * 4 +
                             (long)*(int *)(param_1 + (long)local_1c * 4) * 0x144) ==
            *(int *)(param_1 + (long)local_24 * 4)) {
          *(int *)(param_3 + (long)local_28 * 0xc) = local_1c;
          *(int *)(param_3 + (long)local_28 * 0xc + 4) = local_20;
          *(int *)(param_3 + (long)local_28 * 0xc + 8) = local_24;
          local_28 = local_28 + 1;
        }
      }
    }
  }
  return local_28;
}



int _show_card(void)

{
  int iVar1;
  int local_1c;
  
  for (local_1c = 0x1b; local_1c != 0; local_1c = local_1c / 3) {
    _printf("%9s");
  }
  iVar1 = _putchar(10);
  return iVar1;
}



void _deal_sets(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_548;
  int local_544;
  int aiStack_538 [243];
  undefined4 auStack_16c [81];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  do {
    _deal(auStack_16c,param_1);
    iVar1 = _get_sets(auStack_16c,param_1,aiStack_538);
  } while (iVar1 != param_2);
  _printf("dealt %d cards\n");
  for (local_544 = 0; local_544 < param_1; local_544 = local_544 + 1) {
    _printf("%2d:");
    _show_card(auStack_16c[local_544]);
  }
  iVar2 = _printf("\nsets:\n");
  for (local_544 = 0; local_544 < iVar1; local_544 = local_544 + 1) {
    for (local_548 = 0; local_548 < 3; local_548 = local_548 + 1) {
      _printf("%2d:");
      _show_card(auStack_16c[aiStack_538[(long)local_544 * 3 + (long)local_548]]);
    }
    iVar2 = _putchar(10);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return;
}



void entry(void)

{
  _init_sets();
  _deal_sets(9,4);
  do {
    _deal_sets(0xc,6);
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}


