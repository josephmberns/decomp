#include "string-case.h"



void _str_toupper(char *param_1)

{
  int iVar1;
  char *local_18;
  
  for (local_18 = param_1; *local_18 != '\0'; local_18 = local_18 + 1) {
    iVar1 = _toupper((int)*local_18);
    *local_18 = (char)iVar1;
  }
  return;
}



void _str_tolower(char *param_1)

{
  int iVar1;
  char *local_18;
  
  for (local_18 = param_1; *local_18 != '\0'; local_18 = local_18 + 1) {
    iVar1 = _tolower((int)*local_18);
    *local_18 = (char)iVar1;
  }
  return;
}



undefined8 entry(void)

{
  int iVar1;
  undefined auStack_127 [255];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_127,"alphaBETA",0xff);
  _str_toupper(auStack_127);
  _printf("uppercase: %s\n");
  _str_tolower(auStack_127);
  iVar1 = _printf("lowercase: %s\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tolower(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tolower_100004020)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _toupper(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__toupper_100004028)(_c);
  return iVar1;
}


