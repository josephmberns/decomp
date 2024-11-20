#include "guess-the-number-with-feedback-player--1.h"



// WARNING: Removing unreachable block (ram,0x000100003e60)
// WARNING: Removing unreachable block (ram,0x000100003e54)
// WARNING: Removing unreachable block (ram,0x000100003e6c)

undefined4 entry(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100004008;
  _printf("Choose a number between %d and %d.\n");
  do {
    _printf("Is the number %d? (Y/H/L) ");
    iVar1 = _scanf("%1s");
  } while (iVar1 == 1);
  if (*(long *)PTR____stack_chk_guard_100004008 != lVar2) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004018)((int)param_1);
  return iVar1;
}


