#include "string-length-3.h"



undefined8 entry(void)

{
  if (*(long *)PTR____stack_chk_guard_100004008 != *(long *)PTR____stack_chk_guard_100004008) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}


