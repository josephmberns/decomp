#include "stack-traces-1.h"



void _print_stack_trace(void)

{
  int iVar1;
  void *apvStack_668 [200];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  iVar1 = _backtrace(apvStack_668,200);
  _fprintf(*(FILE **)PTR____stderrp_100004010,"--- (depth %d) ---\n");
  _backtrace_symbols_fd(apvStack_668,iVar1,2);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



void _inner(void)

{
  _print_stack_trace();
  return;
}



void _middle(int param_1,int param_2)

{
  _inner(param_1 * param_2);
  return;
}



void _outer(int param_1,int param_2,int param_3)

{
  _middle(param_1 + param_2,param_2 + param_3);
  return;
}



undefined4 entry(void)

{
  _outer(2,3,5);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _backtrace(void **param_1,int param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__backtrace_100004018)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _backtrace_symbols_fd(void **param_1,int param_2,int param_3)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__backtrace_symbols_fd_100004020)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}


