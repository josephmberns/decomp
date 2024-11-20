#include "rock-paper-scissors-1.h"



int _rand_idx(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_2c;
  undefined8 local_28;
  
  iVar2 = _rand();
  local_28 = (double)iVar2 / 2147483648.0;
  local_2c = 0;
  while( true ) {
    bVar1 = false;
    if (local_2c < param_2 + -1) {
      local_28 = local_28 - *(double *)(param_1 + (long)local_2c * 8);
      bVar1 = 0.0 <= local_28;
    }
    if (!bVar1) break;
    local_2c = local_2c + 1;
  }
  return local_2c;
}



undefined8 entry(void)

{
  int iVar1;
  char local_8e;
  int local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *local_60;
  char *pcStack_58;
  char *local_50;
  char *local_40;
  char *pcStack_38;
  char *local_30;
  int local_28 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  pcStack_38 = "Paper";
  local_40 = "Rock";
  local_30 = "Scissors";
  pcStack_58 = "Meself winned.";
  local_60 = "We tied.";
  local_50 = "You win.";
  uStack_78 = 0x3fd5555555555555;
  local_80 = 0x3fd5555555555555;
  local_70 = 0x3fd5555555555555;
  do {
    while( true ) {
      _rand_idx(&local_80,3);
      _printf("\nYour choice [1-3]:\n  1. Rock\n  2. Paper\n  3. Scissors\n> ");
      iVar1 = _scanf("%d");
      if (iVar1 == 0) break;
      local_88 = local_88 + -1;
      if ((local_88 < 3) && (-1 < local_88)) {
        _printf("You chose %s; I chose %s. %s\n");
        local_28[local_88] = local_28[local_88] + 1;
      }
      else {
        _printf("invalid choice; again\n");
      }
    }
    _scanf("%1s");
  } while (local_8e != 'q');
  iVar1 = _printf("Your choices [rock : %d , paper :  %d , scissors %d] ");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004020)((int)param_1);
  return iVar1;
}


