#include "fizzbuzz-5.h"



undefined8 entry(ulong param_1)

{
  uint uVar1;
  int local_40;
  char *local_38 [2];
  long local_28;
  char *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_38[0] = "%d\n";
  local_38[1] = "Fizz\n";
  local_28 = (long)local_20 + 4;
  local_20 = "FizzBuzz\n";
  for (local_40 = 1; local_40 < 0x65; local_40 = local_40 + 1) {
    uVar1 = _printf(local_38[(int)((uint)(local_40 % 3 == 0) + (uint)(local_40 % 5 == 0) * 2)]);
    param_1 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


