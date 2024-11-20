#include "fizzbuzz-10.h"



undefined4 entry(ulong param_1)

{
  uint uVar1;
  int local_30;
  char local_28 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_30 = 0;
  while (local_30 = local_30 + 1, local_30 < 0x65) {
    builtin_strncpy(local_28,"FizzBuzz%d",0xb);
    local_28[(int)(8U - local_30 % 5 & 0xc)] = '\0';
    _printf(local_28 + (int)(-local_30 % 3 & (int)local_28[8] / 8 + 4U));
    uVar1 = _puts("");
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
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004018)((int)param_1);
  return iVar1;
}


