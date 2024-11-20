#include "magic-8-ball.h"



undefined8 entry(void)

{
  time_t tVar1;
  ssize_t sVar2;
  size_t local_d0;
  char *local_c8;
  undefined4 local_bc;
  undefined auStack_b8 [160];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_bc = 0;
  local_c8 = (char *)0x0;
  local_d0 = 0;
  _memcpy(auStack_b8,&PTR_s_It_is_certain_100004050,0xa0);
  tVar1 = _time((time_t *)0x0);
  _srand((uint)tVar1);
  _printf("Please enter your question or a blank line to quit.\n");
  while( true ) {
    _printf("\n? : ");
    sVar2 = _getline(&local_c8,&local_d0,*(FILE **)PTR____stdinp_100004010);
    if (sVar2 < 2) break;
    _rand();
    _printf("\n%s\n");
  }
  if (local_c8 != (char *)0x0) {
    _free(local_c8);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dbc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003dc8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _getline(char **param_1,size_t *param_2,FILE *param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__getline_100004020)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004038)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004040)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e10. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004048)();
  return tVar1;
}


