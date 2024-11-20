#include "bitmap-write-a-ppm-file-1.h"



undefined8 entry(void)

{
  FILE *pFVar1;
  int local_24;
  int local_20;
  
  pFVar1 = _fopen("first.ppm","wb");
  _fprintf(pFVar1,"P6\n%d %d\n255\n");
  for (local_24 = 0; local_24 < 800; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 800; local_20 = local_20 + 1) {
      DAT_100008000 = (char)local_20;
      DAT_100008001 = (char)local_24;
      DAT_100008002 = DAT_100008000 * DAT_100008001;
      _fwrite(&DAT_100008000,1,3,pFVar1);
    }
  }
  _fclose(pFVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004008)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004018)();
  return sVar1;
}


