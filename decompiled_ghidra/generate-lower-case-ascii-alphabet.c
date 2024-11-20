#include "generate-lower-case-ascii-alphabet.h"



undefined8 entry(void)

{
  ulong local_40;
  char acStack_32 [26];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_40 = 0; local_40 < 0x1a; local_40 = local_40 + 1) {
    acStack_32[local_40] = (char)local_40 + 'a';
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003fa4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}


