#include "file-size-distribution-2.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  char *local_38;
  ulong local_30;
  undefined4 local_14;
  
  _setlocale(0,"");
  if (param_1 < 2) {
    local_38 = ".";
  }
  else {
    local_38 = *(char **)(param_2 + 8);
  }
  iVar1 = _ftw(local_38,(int *)FUN_100003d64,0x200);
  if (iVar1 == 0) {
    _printf("File size distribution for \'%s\':\n");
    for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
      if (local_30 == 9) {
        _printf("> %\'lu");
      }
      else {
        _printf("%\'16lu");
      }
      _printf(" bytes: %\'lu\n");
    }
    _printf("Number of files: %\'lu\n");
    _printf("Total file size: %\'lu\n");
    local_14 = 0;
  }
  else {
    _perror(local_38);
    local_14 = 1;
  }
  return local_14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_100003d64(undefined8 param_1,long param_2,int param_3)

{
  long *plVar1;
  bool bVar2;
  ulong local_38;
  
  if (param_3 == 0) {
    _DAT_100008050 = _DAT_100008050 + 1;
    _DAT_100008058 = _DAT_100008058 + *(ulong *)(param_2 + 0x60);
    local_38 = 0;
    while( true ) {
      bVar2 = false;
      if (local_38 < 9) {
        bVar2 = *(ulong *)(&DAT_100003f60 + local_38 * 8) < *(ulong *)(param_2 + 0x60);
      }
      if (!bVar2) break;
      local_38 = local_38 + 1;
    }
    plVar1 = (long *)(local_38 * 8 + 0x100008000);
    *plVar1 = *plVar1 + 1;
  }
  else if (param_3 == 2) {
    _fprintf(*(FILE **)PTR____stderrp_100004000,"Cannot read directory %s.\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _ftw(char *param_1,int *param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__ftw_100004010)((int)param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004028)();
  return;
}


