#include "padovan-n-step-number-sequences.h"



void _padovanN(int param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int local_30;
  int local_2c;
  
  if ((param_1 < 2) || (param_2 < 3)) {
    for (local_2c = 0; (ulong)(long)local_2c < param_2; local_2c = local_2c + 1) {
      *(undefined4 *)(param_3 + (long)local_2c * 4) = 1;
    }
  }
  else {
    _padovanN(param_1 + -1,param_2,param_3);
    for (local_2c = param_1 + 1; (ulong)(long)local_2c < param_2; local_2c = local_2c + 1) {
      *(undefined4 *)(param_3 + (long)local_2c * 4) = 0;
      for (local_30 = local_2c + -2; (local_2c - param_1) + -1 <= local_30; local_30 = local_30 + -1
          ) {
        piVar1 = (int *)(param_3 + (long)local_2c * 4);
        *piVar1 = *piVar1 + *(int *)(param_3 + (long)local_30 * 4);
      }
    }
  }
  return;
}



undefined8 entry(void)

{
  int iVar1;
  uint local_60;
  int local_5c;
  undefined4 auStack_54 [15];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  iVar1 = _printf("First %ld terms of the Padovan n-step number sequences:\n");
  for (local_5c = 2; local_5c < 9; local_5c = local_5c + 1) {
    for (local_60 = 0; local_60 < 0xf; local_60 = local_60 + 1) {
      auStack_54[(int)local_60] = 0;
    }
    _padovanN(local_5c,0xf,auStack_54);
    _printf("%d: ");
    for (local_60 = 0; local_60 < 0xf; local_60 = local_60 + 1) {
      _printf("%3d ");
    }
    iVar1 = _printf("\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


