#include "read-a-file-line-by-line-2.h"



void entry(void)

{
  ssize_t sVar1;
  size_t local_30;
  char *local_28;
  FILE *local_20;
  undefined4 local_14;
  
  local_14 = 0;
  local_28 = (char *)0x0;
  local_30 = 0;
  local_20 = _fopen("file.txt","r");
  if (local_20 != (FILE *)0x0) {
    while (sVar1 = _getline(&local_28,&local_30,local_20), sVar1 != -1) {
      _printf("Retrieved line of length %u :\n");
      _printf("%s");
    }
    _free(local_28);
    _fclose(local_20);
                    // WARNING: Subroutine does not return
    _exit(0);
  }
                    // WARNING: Subroutine does not return
  _exit(1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004000)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004010)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _getline(char **param_1,size_t *param_2,FILE *param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__getline_100004020)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


