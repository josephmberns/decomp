#include "random-number-generator-device--1.h"



undefined4 entry(void)

{
  FILE *pFVar1;
  size_t sVar2;
  undefined local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  pFVar1 = _fopen("/dev/urandom","r");
  if (pFVar1 == (FILE *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_100004000,"%s: unable to open file\n");
    local_14 = 1;
  }
  else {
    sVar2 = _fread(local_18,1,4,pFVar1);
    if (sVar2 == 4) {
      _fclose(pFVar1);
      _printf("%lu\n");
      local_14 = 0;
    }
    else {
      _fprintf(*(FILE **)PTR____stderrp_100004000,"%s: not enough bytes (expected %u)\n");
      local_14 = 1;
    }
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004010)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004020)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


