#include "angle-difference-between-two-bearings.h"



int _processFile(char *param_1)

{
  int iVar1;
  FILE *pFVar2;
  double local_38;
  double local_30;
  int local_20;
  int local_1c;
  
  pFVar2 = _fopen(param_1,"r");
  _fscanf(pFVar2,"%d\n");
  for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
    iVar1 = _fscanf(pFVar2,"%lf%lf");
    _fmod(local_38 - local_30,0x4076800000000000,iVar1);
    _printf("\nDifference between b2(%lf) and b1(%lf) is %lf");
  }
  iVar1 = _fclose(pFVar2);
  return iVar1;
}



undefined8 entry(int param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  if (param_1 < 2) {
    _printf(
           "Usage : %s <bearings separated by a space OR full file name which contains the bearing list>"
           );
  }
  else if (param_1 == 2) {
    _processFile(*(undefined8 *)(param_2 + 8));
  }
  else {
    dVar1 = _atof(*(char **)(param_2 + 0x10));
    dVar2 = _atof(*(char **)(param_2 + 8));
    _fmod(dVar1 - dVar2,0x4076800000000000);
    _printf("Difference between b2(%s) and b1(%s) is %lf");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__atof_100004000)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004008)((int)param_1);
  return iVar1;
}



void _fmod(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__fmod_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004018)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


