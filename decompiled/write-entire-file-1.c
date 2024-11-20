#include "write-entire-file-1.h"



bool entry(void)

{
  int iVar1;
  FILE *pFVar2;
  
  pFVar2 = _freopen("sample.txt","wb",*(FILE **)PTR____stdoutp_100004000);
  iVar1 = _fputs("ANY STRING TO WRITE TO A FILE AT ONCE.",pFVar2);
  return iVar1 < 1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fputs(char *param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fputs_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _freopen(char *param_1,char *param_2,FILE *param_3)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__freopen_100004010)();
  return pFVar1;
}


