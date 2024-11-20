#include "multisplit-1.h"



char * _parse_sep(char *param_1,long param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  size_t sVar3;
  int local_28;
  char *local_18;
  
  local_18 = param_1;
LAB_100003dc4:
  do {
    if (*local_18 == '\0') {
      return param_1;
    }
    local_28 = 0;
    while( true ) {
      bVar1 = true;
      if (param_3 <= local_28) {
        uVar2 = _putchar((int)*local_18);
        param_1 = (char *)(ulong)uVar2;
        bVar1 = uVar2 == 0;
        local_18 = local_18 + 1;
      }
      if (!bVar1) goto LAB_100003dc4;
      sVar3 = _strlen(*(char **)(param_2 + (long)local_28 * 8));
      uVar2 = _strncmp(local_18,*(char **)(param_2 + (long)local_28 * 8),(long)(int)sVar3);
      param_1 = (char *)(ulong)uVar2;
      if (uVar2 == 0) break;
      local_28 = local_28 + 1;
    }
    uVar2 = _printf("{%.*s}");
    param_1 = (char *)(ulong)uVar2;
    local_18 = local_18 + (int)sVar3;
  } while( true );
}



undefined8 entry(void)

{
  char *local_30;
  char *pcStack_28;
  char *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pcStack_28 = "!=";
  local_30 = "==";
  local_20 = "=";
  _parse_sep("a!===b=!=c",&local_30,3);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strncmp_100004028)((int)param_1);
  return iVar1;
}


