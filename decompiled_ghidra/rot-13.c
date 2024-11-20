#include "rot-13.h"



undefined4 entry(int param_1,long param_2)

{
  FILE *pFVar1;
  int local_24;
  
  FUN_100003d84();
  if (param_1 < 2) {
    FUN_100003ecc(*(undefined8 *)PTR____stdinp_100004000);
  }
  else {
    for (local_24 = 1; local_24 < param_1; local_24 = local_24 + 1) {
      pFVar1 = _fopen(*(char **)(param_2 + (long)local_24 * 8),"r");
      if (pFVar1 == (FILE *)0x0) {
        _perror(*(char **)(param_2 + (long)local_24 * 8));
        return 1;
      }
      FUN_100003ecc(pFVar1);
      _fclose(pFVar1);
    }
  }
  return 0;
}



void FUN_100003d84(void)

{
  byte *local_18;
  byte *local_10;
  int local_4;
  
  for (local_4 = 0; local_4 < 0x100; local_4 = local_4 + 1) {
    *(char *)((long)local_4 + 0x100008000) = (char)local_4;
  }
  for (local_10 = (byte *)0x100003f6a; local_10[0xd] != 0; local_10 = local_10 + 1) {
    *(byte *)((ulong)*local_10 + 0x100008000) = local_10[0xd];
    *(byte *)((ulong)local_10[0xd] + 0x100008000) = *local_10;
  }
  for (local_18 = (byte *)0x100003f85; local_18[0xd] != 0; local_18 = local_18 + 1) {
    *(byte *)((ulong)*local_18 + 0x100008000) = local_18[0xd];
    *(byte *)((ulong)local_18[0xd] + 0x100008000) = *local_18;
  }
  return;
}



void FUN_100003ecc(FILE *param_1)

{
  int iVar1;
  
  while( true ) {
    iVar1 = _fgetc(param_1);
    if (iVar1 == -1) break;
    _fputc((int)*(char *)((long)iVar1 + 0x100008000),*(FILE **)PTR____stdoutp_100004008);
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fputc(int param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fputc_100004028)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004030)();
  return;
}


