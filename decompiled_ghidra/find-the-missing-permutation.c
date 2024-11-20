#include "find-the-missing-permutation.h"



undefined8 entry(void)

{
  bool bVar1;
  int iVar2;
  char acStack_3c [4];
  int local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  int aiStack_28 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_2c = 0;
  local_38 = 1;
  for (local_30 = 1; local_30 < 4; local_30 = local_30 + 1) {
    local_38 = local_38 * local_30;
  }
  for (local_30 = 0; local_30 < 4; local_30 = local_30 + 1) {
    for (local_34 = 0; (int)local_34 < 4; local_34 = local_34 + 1) {
      aiStack_28[(int)local_34] = 0;
    }
    for (local_34 = 0; local_34 < 0x17; local_34 = local_34 + 1) {
      aiStack_28[(char)(&_perms)[(int)local_34][local_30] + -0x41] =
           aiStack_28[(char)(&_perms)[(int)local_34][local_30] + -0x41] + 1;
    }
    local_34 = 0;
    while( true ) {
      bVar1 = false;
      if ((int)local_34 < 4) {
        bVar1 = aiStack_28[(int)local_34] == local_38;
      }
      if (!bVar1) break;
      local_34 = local_34 + 1;
    }
    acStack_3c[local_30] = (char)local_34 + 'A';
  }
  iVar2 = _printf("Missing: %.*s\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


