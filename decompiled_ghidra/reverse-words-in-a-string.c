#include "reverse-words-in-a-string.h"



char * _rev_print(char *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *local_28;
  char *local_18;
  
  local_18 = param_1;
  while( true ) {
    bVar1 = false;
    if (*local_18 != '\0') {
      uVar2 = _isspace((int)*local_18);
      param_1 = (char *)(ulong)uVar2;
      bVar1 = uVar2 != 0;
    }
    if (!bVar1) break;
    local_18 = local_18 + 1;
  }
  if (*local_18 != '\0') {
    local_28 = local_18;
    while( true ) {
      bVar1 = false;
      if (*local_28 != '\0') {
        iVar3 = _isspace((int)*local_28);
        bVar1 = iVar3 == 0;
      }
      if (!bVar1) break;
      local_28 = local_28 + 1;
    }
    _rev_print(local_28,0);
    uVar2 = _printf("%.*s%s");
    param_1 = (char *)(ulong)uVar2;
  }
  if (param_2 != 0) {
    uVar2 = _putchar(10);
    param_1 = (char *)(ulong)uVar2;
  }
  return param_1;
}



undefined8 entry(void)

{
  int local_78;
  long alStack_70 [11];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(alStack_70,&PTR_s____________Ice_and_Fire__________100004030,0x58);
  for (local_78 = 0; alStack_70[local_78] != 0; local_78 = local_78 + 1) {
    _rev_print(alStack_70[local_78],1);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004010)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004028)(param_1);
  return iVar1;
}


