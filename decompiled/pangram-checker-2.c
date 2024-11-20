#include "pangram-checker-2.h"



bool _pangram(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint local_10;
  char *local_8;
  
  local_10 = 0x3ffffff;
  local_8 = param_1;
  while( true ) {
    pcVar1 = local_8 + 1;
    if ((int)*local_8 == 0) break;
    uVar2 = (int)*local_8 & 0xffffffdf;
    local_8 = pcVar1;
    if (((int)uVar2 < 0x5b) && (0x40 < (int)uVar2)) {
      local_10 = local_10 & (1 << (ulong)(uVar2 - 0x41 & 0x1f) ^ 0xffffffffU);
    }
  }
  return local_10 == 0;
}



undefined8 entry(ulong param_1)

{
  uint uVar1;
  int local_38;
  char *local_30 [3];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_30[1] = "The five boxing wizards dump quickly.";
  local_30[0] = "The quick brown fox jumps over lazy dogs.";
  for (local_38 = 0; local_38 < 2; local_38 = local_38 + 1) {
    _pangram(local_30[local_38]);
    uVar1 = _printf("%s: %s\n");
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
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


