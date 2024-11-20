#include "user-input-text-1.h"



undefined8 entry(void)

{
  long lVar1;
  char acStack_828 [1024];
  char acStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _puts("Enter a string: ");
  _fgets(acStack_428,0x400,*(FILE **)PTR____stdinp_100004010);
  do {
    _puts("Enter 75000: ");
    _fgets(acStack_828,0x400,*(FILE **)PTR____stdinp_100004010);
    lVar1 = _strtol(acStack_828,(char **)0x0,10);
  } while (lVar1 != 75000);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004018)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004028)(param_1,param_2,param_3);
  return lVar1;
}


