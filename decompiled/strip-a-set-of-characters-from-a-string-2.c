#include "strip-a-set-of-characters-from-a-string-2.h"



void * _strip(char *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  void *pvVar3;
  long lVar4;
  int local_23c;
  char *local_238;
  char *local_230;
  int aiStack_228 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_23c = 0;
  _bzero(aiStack_228,0x200);
  local_238 = param_2;
  while (*local_238 != '\0') {
    aiStack_228[*local_238] = 1;
    local_238 = local_238 + 1;
  }
  sVar2 = _strlen(param_1);
  pvVar3 = _malloc(sVar2 + 1);
  local_230 = param_1;
  do {
    if (aiStack_228[*local_230] == 0) {
      lVar4 = (long)local_23c;
      local_23c = local_23c + 1;
      *(char *)((long)pvVar3 + lVar4) = *local_230;
    }
    cVar1 = *local_230;
    local_230 = local_230 + 1;
  } while (cVar1 != '\0');
  pvVar3 = _realloc(pvVar3,(long)local_23c);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return pvVar3;
}



undefined4 entry(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)_strip("She was a soul stripper. She took my heart!","aei");
  _printf(pcVar1);
  _free(pcVar1);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004038)();
  return sVar1;
}


