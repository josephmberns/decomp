#include "regular-expressions-1.h"



undefined8 entry(void)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  void *pvVar6;
  undefined auStack_60 [36];
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_3c = 0;
  _regcomp();
  _regexec(auStack_60,"this is a matching string",0,0,0);
  _printf("\'%s\' %smatched with \'%s\'\n");
  _regexec(auStack_60,"this is not a matching string!",0,0,0);
  _printf("\'%s\' %smatched with \'%s\'\n");
  _regfree(auStack_60);
  _regcomp(auStack_60,"a[a-z]+",1);
  iVar3 = _regexec(auStack_60,"this is a matching string",1,&local_38,0);
  lVar1 = local_38;
  if (iVar3 == 0) {
    sVar4 = _strlen("istyfied");
    sVar5 = _strlen("this is a matching string");
    pvVar6 = _malloc(lVar1 + sVar4 + (sVar5 - local_30) + 3);
    ___memcpy_chk(pvVar6,"this is a matching string",local_38 + 1);
    lVar1 = (long)pvVar6 + local_38;
    sVar4 = _strlen("istyfied");
    ___memcpy_chk(lVar1,"istyfied",sVar4,0xffffffffffffffff);
    lVar1 = local_38;
    sVar4 = _strlen("istyfied");
    pcVar2 = "this is a matching string" + local_30;
    sVar5 = _strlen("this is a matching string" + local_30);
    ___memcpy_chk((long)pvVar6 + lVar1 + sVar4,pcVar2,sVar5,0xffffffffffffffff);
    sVar4 = _strlen("istyfied");
    sVar5 = _strlen("this is a matching string" + local_30);
    *(undefined *)((long)pvVar6 + local_38 + sVar4 + sVar5) = 0;
    _printf("mod string: \'%s\'\n");
    _free(pvVar6);
  }
  else {
    _printf("the string \'%s\' is the same: no matching!\n");
  }
  _regfree(auStack_60);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



void _regcomp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__regcomp_100004030)();
  return;
}



void _regexec(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__regexec_100004038)();
  return;
}



void _regfree(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__regfree_100004040)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004048)();
  return sVar1;
}


