#include "stream-merge.h"



void _merge(FILE *param_1,FILE *param_2)

{
  int iVar1;
  int local_30;
  int local_2c;
  FILE *local_20;
  FILE *local_18;
  
  local_18 = param_1;
  if ((param_1 != (FILE *)0x0) && (iVar1 = _fscanf(param_1,"%d"), iVar1 != 1)) {
    local_18 = (FILE *)0x0;
  }
  local_20 = param_2;
  if ((param_2 != (FILE *)0x0) && (iVar1 = _fscanf(param_2,"%d"), iVar1 != 1)) {
    local_20 = (FILE *)0x0;
  }
  while (local_18 != (FILE *)0x0 && local_20 != (FILE *)0x0) {
    if (local_30 < local_2c) {
      _printf("%d\n");
      iVar1 = _fscanf(local_20,"%d");
      if (iVar1 != 1) {
        local_20 = (FILE *)0x0;
      }
    }
    else {
      _printf("%d\n");
      iVar1 = _fscanf(local_18,"%d");
      if (iVar1 != 1) {
        local_18 = (FILE *)0x0;
      }
    }
  }
  while (local_18 != (FILE *)0x0) {
    _printf("%d\n");
    iVar1 = _fscanf(local_18,"%d");
    if (iVar1 != 1) {
      local_18 = (FILE *)0x0;
    }
  }
  while (local_20 != (FILE *)0x0) {
    _printf("%d\n");
    iVar1 = _fscanf(local_20,"%d");
    if (iVar1 != 1) {
      local_20 = (FILE *)0x0;
    }
  }
  return;
}



undefined8 entry(int param_1,long param_2)

{
  FILE *pFVar1;
  FILE *pFVar2;
  
  if ((2 < param_1) && (param_1 < 4)) {
    pFVar1 = _fopen(*(char **)(param_2 + 8),"r");
    pFVar2 = _fopen(*(char **)(param_2 + 0x10),"r");
    _merge(pFVar1,pFVar2,*(undefined8 *)PTR____stdoutp_100004000);
    return 0;
  }
  _puts("streammerge filename1 filename2");
                    // WARNING: Subroutine does not return
  _exit(1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004008)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004010)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004028)((int)param_1);
  return iVar1;
}


