#include "abundant-deficient-and-perfect-number-classifications.h"



undefined8 entry(void)

{
  int iVar1;
  long lVar2;
  int local_3c;
  int local_38;
  int local_34;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_34 = 2; local_34 < 0x4e21; local_34 = local_34 + 1) {
    local_3c = local_34 / 2;
    for (local_38 = 2; local_38 < local_3c; local_38 = local_38 + 1) {
      iVar1 = 0;
      if (local_38 != 0) {
        iVar1 = local_34 / local_38;
      }
      if ((local_34 == iVar1 * local_38) && (local_3c = 0, local_38 != 0)) {
        local_3c = local_34 / local_38;
      }
    }
  }
  _printf("\nThere are %d deficient,");
  _printf(" %d perfect,");
  iVar1 = _printf(" %d abundant numbers between 1 and 20000.\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != lVar2) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


