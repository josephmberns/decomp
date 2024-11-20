#include "kernighans-large-earthquake-problem.h"



undefined8 entry(void)

{
  ssize_t sVar1;
  char *pcVar2;
  double dVar3;
  char *local_40;
  size_t local_30;
  char *local_28;
  FILE *local_20;
  undefined4 local_14;
  
  local_14 = 0;
  local_28 = (char *)0x0;
  local_30 = 0;
  local_20 = _fopen("data.txt","r");
  if (local_20 != (FILE *)0x0) {
    _printf("Those earthquakes with a magnitude > 6.0 are:\n\n");
    while (sVar1 = _getline(&local_28,&local_30,local_20), sVar1 != -1) {
      if (1 < sVar1) {
        local_40 = _strrchr(local_28,0x20);
        pcVar2 = _strrchr(local_28,9);
        if ((local_40 != (char *)0x0) || (pcVar2 != (char *)0x0)) {
          if (local_40 < pcVar2) {
            local_40 = pcVar2;
          }
          dVar3 = _atof(local_40 + 1);
          if (6.0 < dVar3) {
            _printf("%s");
          }
        }
      }
    }
    _fclose(local_20);
    if (local_28 != (char *)0x0) {
      _free(local_28);
    }
    return 0;
  }
  _printf("Unable to open file\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__atof_100004000)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004008)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004018)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _getline(char **param_1,size_t *param_2,FILE *param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__getline_100004028)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strrchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strrchr_100004038)(param_1,param_2);
  return pcVar1;
}


