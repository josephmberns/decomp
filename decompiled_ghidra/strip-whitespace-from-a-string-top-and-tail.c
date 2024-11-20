#include "strip-whitespace-from-a-string-top-and-tail.h"



void _rtrim(char *param_1)

{
  bool bVar1;
  int iVar2;
  char *local_18;
  
  local_18 = param_1;
  while( true ) {
    iVar2 = _isspace((int)*local_18);
    bVar1 = true;
    if (iVar2 == 0) {
      iVar2 = _isprint((int)*local_18);
      bVar1 = iVar2 == 0;
    }
    if (!bVar1) break;
    local_18 = local_18 + 1;
  }
  _strdup(local_18);
  return;
}



char * _ltrim(char *param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  char *local_28;
  
  pcVar4 = _strdup(param_1);
  if (pcVar4 != (char *)0x0) {
    sVar5 = _strlen(param_1);
    local_28 = pcVar4 + sVar5;
    do {
      pcVar1 = local_28;
      local_28 = pcVar1 + -1;
      iVar3 = _isspace((int)*local_28);
      if (((iVar3 != 0) || (iVar3 = _isprint((int)*local_28), iVar3 == 0)) ||
         (bVar2 = false, *local_28 == '\0')) {
        bVar2 = pcVar4 <= local_28;
      }
    } while (bVar2);
    *pcVar1 = '\0';
  }
  return pcVar4;
}



undefined8 _trim(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = (void *)_rtrim(param_1);
  uVar2 = _ltrim(pvVar1);
  _free(pvVar1);
  return uVar2;
}



undefined4 entry(void)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)_rtrim(_a);
  pvVar2 = (void *)_ltrim(_a);
  pvVar3 = (void *)_trim(_a);
  _printf("\'%s\'\n\'%s\'\n\'%s\'\n");
  _free(pvVar1);
  _free(pvVar2);
  _free(pvVar3);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isprint(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isprint_100004008)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004010)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004020)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004028)();
  return sVar1;
}


