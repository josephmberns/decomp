#include "file-input-output-1.h"



undefined4 entry(void)

{
  int iVar1;
  FILE *pFVar2;
  FILE *pFVar3;
  undefined4 local_14;
  
  pFVar2 = _fopen("input.txt","r");
  if (pFVar2 == (FILE *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_100004000,"Error opening input.txt for reading.\n");
    local_14 = 1;
  }
  else {
    pFVar3 = _fopen("output.txt","w");
    if (pFVar3 == (FILE *)0x0) {
      _fprintf(*(FILE **)PTR____stderrp_100004000,"Error opening output.txt for writing.\n");
      _fclose(pFVar2);
      local_14 = 1;
    }
    else {
      while (iVar1 = _fgetc(pFVar2), iVar1 != -1) {
        _fputc(iVar1,pFVar3);
      }
      _fclose(pFVar3);
      _fclose(pFVar2);
      local_14 = 0;
    }
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004018)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fputc(int param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fputc_100004028)(param_1);
  return iVar1;
}


