#include "write-entire-file-2.h"



size_t _writeEntireFile(char *param_1,void *param_2,size_t param_3)

{
  FILE *pFVar1;
  size_t local_30;
  
  local_30 = 0;
  if (param_1 == (char *)0x0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("writeEntireFile","write-entire-file-2.c",0x1a,"fileName != NULL");
  }
  if (param_2 != (void *)0x0) {
    if (param_3 != 0) {
      if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
         (pFVar1 = _fopen(param_1,"wb"), pFVar1 != (FILE *)0x0)) {
        if (param_2 != (void *)0x0) {
          local_30 = _fwrite(param_2,1,param_3,pFVar1);
        }
        _fclose(pFVar1);
      }
      return local_30;
    }
                    // WARNING: Subroutine does not return
    ___assert_rtn("writeEntireFile","write-entire-file-2.c",0x1c,"size > 0");
  }
                    // WARNING: Subroutine does not return
  ___assert_rtn("writeEntireFile","write-entire-file-2.c",0x1b,"data != NULL");
}



bool entry(void)

{
  int iVar1;
  int local_18;
  
  for (local_18 = 0; local_18 < 0x2000; local_18 = local_18 + 1) {
    *(undefined *)((long)local_18 + 0x100008000) = 0x41;
  }
  iVar1 = _writeEntireFile("sample.txt",0x100008000,0x2000);
  return iVar1 != 0x2000;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
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

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004018)();
  return sVar1;
}


