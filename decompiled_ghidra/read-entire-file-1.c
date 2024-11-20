#include "read-entire-file-1.h"



undefined8 entry(void)

{
  size_t sVar1;
  void *pvVar2;
  FILE *local_28;
  
  local_28 = _fopen("readentirefile.c","rb");
  if (local_28 != (FILE *)0x0) {
    _fseek(local_28,0,2);
    sVar1 = _ftell(local_28);
    _rewind(local_28);
    pvVar2 = _malloc(sVar1);
    if (pvVar2 != (void *)0x0) {
      _fread(pvVar2,sVar1,1,local_28);
      _fclose(local_28);
      local_28 = (FILE *)0x0;
      _fwrite(pvVar2,sVar1,1,*(FILE **)PTR____stdoutp_100004000);
      _free(pvVar2);
    }
    if (local_28 != (FILE *)0x0) {
      _fclose(local_28);
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004010)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004018)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fseek(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fseek_100004028)((int)param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _ftell(FILE *param_1)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__ftell_100004030)();
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004038)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004040)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _rewind(FILE *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__rewind_100004048)();
  return;
}


