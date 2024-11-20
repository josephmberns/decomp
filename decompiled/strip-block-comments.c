#include "strip-block-comments.h"



void * _loadfile(char *param_1)

{
  FILE *pFVar1;
  long lVar2;
  void *local_30;
  
  pFVar1 = _fopen(param_1,"rb");
  if (pFVar1 != (FILE *)0x0) {
    _fseek(pFVar1,0,2);
    lVar2 = _ftell(pFVar1);
    local_30 = _malloc((long)((int)lVar2 + 1));
    _rewind(pFVar1);
    if (local_30 != (void *)0x0) {
      _fread(local_30,1,(long)(int)lVar2,pFVar1);
    }
    _fclose(pFVar1);
  }
  return local_30;
}



void _stripcomments(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  
  sVar1 = _strlen(param_1);
  while ((pcVar2 = _strstr(param_1,_ca), pcVar2 != (char *)0x0 &&
         (pcVar3 = _strstr(pcVar2 + _al,_cb), pcVar3 != (char *)0x0))) {
    ___memmove_chk(pcVar2,pcVar3 + _bl,
                   (long)((int)sVar1 + 1) - ((long)(pcVar3 + _bl) - (long)pcVar2),0xffffffffffffffff
                  );
  }
  return;
}



undefined8 entry(int param_1,long param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *local_28;
  
  local_28 = "input.txt";
  if (1 < param_1) {
    local_28 = *(char **)(param_2 + 8);
  }
  pcVar1 = (char *)_loadfile(local_28);
  if (param_1 == 4) {
    _ca = *(undefined **)(param_2 + 0x10);
    sVar2 = _strlen(_ca);
    _al = (undefined4)sVar2;
    _cb = *(undefined **)(param_2 + 0x18);
    sVar2 = _strlen(_cb);
    _bl = (undefined4)sVar2;
  }
  _stripcomments(pcVar1);
  _puts(pcVar1);
  _free(pcVar1);
  return 0;
}



void ___memmove_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memmove_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004010)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004018)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fseek(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fseek_100004028)((int)param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _ftell(FILE *param_1)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__ftell_100004030)();
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _rewind(FILE *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__rewind_100004048)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004050)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strstr_100004058)();
  return pcVar1;
}


