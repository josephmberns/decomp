#include "gotchas-9.h"



undefined4 _foo(void)

{
  undefined4 local_4;
  
  return local_4;
}



undefined8 entry(void)

{
  undefined auStack_36 [30];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _foo(auStack_36,0x1e);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}


