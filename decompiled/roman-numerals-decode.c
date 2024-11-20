#include "roman-numerals-decode.h"



int _decode(char *param_1)

{
  bool bVar1;
  int local_18;
  char *local_10;
  char *local_8;
  
  local_18 = 0;
  for (local_8 = param_1; *local_8 != '\0'; local_8 = local_8 + 1) {
    local_10 = local_8;
    do {
      bVar1 = false;
      if (*(int *)(&_digits + (long)(int)(((int)*local_10 & 0xffffffdfU) - 0x41) * 4) <=
          *(int *)(&_digits + (long)(int)(((int)*local_8 & 0xffffffdfU) - 0x41) * 4)) {
        bVar1 = local_10[1] != '\0';
        local_10 = local_10 + 1;
      }
    } while (bVar1);
    if (*local_10 == '\0') {
      local_18 = local_18 +
                 *(int *)(&_digits + (long)(int)(((int)*local_8 & 0xffffffdfU) - 0x41) * 4);
    }
    else {
      local_18 = local_18 +
                 *(int *)(&_digits + (long)(int)(((int)*local_10 & 0xffffffdfU) - 0x41) * 4);
      for (; local_8 < local_10; local_8 = local_8 + 1) {
        local_18 = local_18 -
                   *(int *)(&_digits + (long)(int)(((int)*local_8 & 0xffffffdfU) - 0x41) * 4);
      }
    }
  }
  return local_18;
}



undefined8 entry(ulong param_1)

{
  uint uVar1;
  int local_48;
  char *local_40 [5];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_40[1] = "MMVIII";
  local_40[0] = "MCmxC";
  local_40[3] = "MCXLUJ";
  local_40[2] = "MDClXVI";
  for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
    _decode(local_40[local_48]);
    uVar1 = _printf("%s\t%d\n");
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
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


