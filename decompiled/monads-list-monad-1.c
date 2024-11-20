#include "monads-list-monad-1.h"



undefined8 _boundInt(undefined8 param_1)

{
  return param_1;
}



void * _boundInt2str(void)

{
  int iVar1;
  void *pvVar2;
  undefined auStack_7c [100];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  iVar1 = ___sprintf_chk(auStack_7c,0,100);
  pvVar2 = _malloc((long)(iVar1 + 1));
  ___sprintf_chk(pvVar2,0,0xffffffffffffffff,"%d");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return pvVar2;
}



void _task(undefined4 param_1)

{
  void *pvVar1;
  undefined4 local_14;
  
  local_14 = param_1;
  _boundInt(&local_14);
  pvVar1 = (void *)_boundInt2str();
  _printf("%s\n");
  _free(pvVar1);
  return;
}



undefined8 entry(void)

{
  _task(0xd);
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


