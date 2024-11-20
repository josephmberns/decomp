#include "substring-top-and-tail.h"



undefined4 entry(void)

{
  size_t sVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  sVar1 = _strlen("knight");
  pvVar2 = _malloc(sVar1 - 1);
  sVar1 = _strlen("socks");
  pvVar3 = _malloc(sVar1 - 1);
  sVar1 = _strlen("brooms");
  pvVar4 = _malloc(sVar1 - 2);
  ___strcpy_chk(pvVar2,"night");
  sVar1 = _strlen("socks");
  ___strncpy_chk(pvVar3,"socks",sVar1 - 1,0xffffffffffffffff);
  sVar1 = _strlen("brooms");
  ___strncpy_chk(pvVar4,"rooms",sVar1 - 2,0xffffffffffffffff);
  _printf("%s\n%s\n%s\n");
  _free(pvVar2);
  _free(pvVar3);
  _free(pvVar4);
  return 0;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004000)();
  return;
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004028)();
  return sVar1;
}


