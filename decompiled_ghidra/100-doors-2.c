#include "100-doors-2.h"



undefined4 entry(void)

{
  int local_1dc;
  uint *local_1d0;
  uint local_1b8 [100];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _bzero(local_1b8,400);
  for (local_1dc = 100; local_1dc != 0; local_1dc = local_1dc + -1) {
    for (local_1d0 = local_1b8 + (local_1dc + -1); local_1d0 < &local_28;
        local_1d0 = local_1d0 + local_1dc) {
      *local_1d0 = *local_1d0 ^ 1;
    }
  }
  for (local_1d0 = local_1b8; local_1d0 != (uint *)&local_28; local_1d0 = local_1d0 + 1) {
    _printf("door #%lld is %s\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


