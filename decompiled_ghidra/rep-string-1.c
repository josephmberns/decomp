#include "rep-string-1.h"



undefined4 _repstr(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  ulong local_28;
  
  if (param_1 != (char *)0x0) {
    sVar1 = _strlen(param_1);
    for (local_28 = sVar1 / 2; local_28 != 0; local_28 = local_28 - 1) {
      pcVar2 = _strstr(param_1,param_1 + local_28);
      if (pcVar2 == param_1) {
        return (int)local_28;
      }
    }
  }
  return 0;
}



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  ulong local_80;
  undefined8 auStack_68 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar3 = _memcpy(auStack_68,&PTR_s_1001110011_100004030,0x50);
  for (local_80 = 0; local_80 < 10; local_80 = local_80 + 1) {
    iVar1 = _repstr(auStack_68[local_80]);
    if (iVar1 == 0) {
      uVar2 = _printf("\"%s\" = not a rep-string\n");
    }
    else {
      uVar2 = _printf("\"%s\" = rep-string \"%.*s\"\n");
    }
    pvVar3 = (void *)(ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar3);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strstr_100004028)();
  return pcVar1;
}


