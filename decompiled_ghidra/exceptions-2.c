#include "exceptions-2.h"



void _g(int *param_1)

{
  _printf("g !\n");
  if (param_1 != (int *)0x0) {
                    // WARNING: Subroutine does not return
    _longjmp(param_1,1);
  }
  _printf("uncaught exception %d\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



void _h(int *param_1)

{
  _printf("h %d!\n");
  if (param_1 != (int *)0x0) {
                    // WARNING: Subroutine does not return
    _longjmp(param_1,2);
  }
  _printf("uncaught exception %d\n");
                    // WARNING: Subroutine does not return
  _exit(2);
}



void _f(int *param_1)

{
  int iVar1;
  int aiStack_e8 [48];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  iVar1 = _setjmp(aiStack_e8);
  if (iVar1 == 0) {
    _g(aiStack_e8);
  }
  else {
    if (iVar1 != 1) {
      if (param_1 != (int *)0x0) {
                    // WARNING: Subroutine does not return
        _longjmp(param_1,iVar1);
      }
      _printf("uncaught exception %d\n");
                    // WARNING: Subroutine does not return
      _exit(iVar1);
    }
    _printf("exception 1\n");
    _h(param_1,0x32);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000100003e8c)

undefined8 entry(void)

{
  int iVar1;
  int aiStack_e8 [48];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  iVar1 = _setjmp(aiStack_e8);
  if (iVar1 == 0) {
    _f(aiStack_e8);
  }
  else if (iVar1 == 2) {
    _printf("exception 2\n");
  }
  else {
    if (iVar1 != 3) {
      _printf("uncaught exception %d\n");
                    // WARNING: Subroutine does not return
      _exit(iVar1);
    }
    _printf("exception 3\n");
  }
  _h(0,0x3c);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _longjmp(int *param_1,int param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__longjmp_100004018)(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _setjmp(int *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__setjmp_100004028)((int)param_1);
  return iVar1;
}


