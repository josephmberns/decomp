#include "fasta-format.h"



void entry(void)

{
  bool bVar1;
  ssize_t sVar2;
  size_t local_28;
  char *local_20;
  FILE *local_18;
  
  local_20 = (char *)0x0;
  local_28 = 0;
  local_18 = _fopen("fasta.txt","r");
  if (local_18 != (FILE *)0x0) {
    bVar1 = false;
    while (sVar2 = _getline(&local_20,&local_28,local_18), sVar2 != -1) {
      if (local_20[sVar2 + -1] == '\n') {
        local_20[sVar2 + -1] = '\0';
      }
      if (*local_20 == '>') {
        if (bVar1) {
          _printf("\n");
        }
        _printf("%s: ");
        bVar1 = true;
      }
      else {
        _printf("%s");
      }
    }
    _printf("\n");
    _fclose(local_18);
    if (local_20 != (char *)0x0) {
      _free(local_20);
    }
                    // WARNING: Subroutine does not return
    _exit(0);
  }
                    // WARNING: Subroutine does not return
  _exit(1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004000)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004010)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _getline(char **param_1,size_t *param_2,FILE *param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__getline_100004020)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


