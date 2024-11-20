#include "strip-a-set-of-characters-from-a-string-1.h"



void * _strip_chars(char *param_1,char *param_2)

{
  size_t sVar1;
  void *pvVar2;
  char *pcVar3;
  int local_2c;
  char *local_18;
  
  sVar1 = _strlen(param_1);
  pvVar2 = _malloc(sVar1 + 1);
  local_2c = 0;
  for (local_18 = param_1; *local_18 != '\0'; local_18 = local_18 + 1) {
    pcVar3 = _strchr(param_2,(int)*local_18);
    if (pcVar3 == (char *)0x0) {
      *(char *)((long)pvVar2 + (long)local_2c) = *local_18;
      local_2c = local_2c + 1;
    }
  }
  *(undefined *)((long)pvVar2 + (long)local_2c) = 0;
  return pvVar2;
}



undefined4 entry(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)_strip_chars("She was a soul stripper. She took my heart!","aei");
  _printf("%s\n");
  _free(pvVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004018)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}


