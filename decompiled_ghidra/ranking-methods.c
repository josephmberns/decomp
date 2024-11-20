#include "ranking-methods.h"



int _ordinalRanking(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_20;
  
  iVar1 = _printf("\n\nOrdinal Ranking\n---------------");
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    iVar1 = _printf("\n%d\t%d\t%s");
  }
  return iVar1;
}



int _standardRanking(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_20;
  
  iVar1 = _printf("\n\nStandard Ranking\n----------------");
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    iVar1 = _printf("\n%d\t%d\t%s");
  }
  return iVar1;
}



int _denseRanking(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_20;
  
  iVar1 = _printf("\n\nDense Ranking\n-------------");
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    iVar1 = _printf("\n%d\t%d\t%s");
  }
  return iVar1;
}



int _modifiedRanking(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  
  _printf("\n\nModified Ranking\n----------------");
  for (local_20 = 0; local_20 < param_2 + -1; local_20 = local_20 + 1) {
    if (*(int *)(param_1 + (long)local_20 * 0x68) != *(int *)(param_1 + (long)(local_20 + 1) * 0x68)
       ) {
      _printf("\n%d\t%d\t%s");
      local_28 = 1;
      iVar2 = local_20;
      while( true ) {
        local_24 = iVar2 + 1;
        bVar1 = false;
        if (*(int *)(param_1 + (long)local_24 * 0x68) ==
            *(int *)(param_1 + (long)(iVar2 + 2) * 0x68)) {
          bVar1 = local_24 < param_2 + -1;
        }
        if (!bVar1) break;
        local_28 = local_28 + 1;
        iVar2 = local_24;
      }
      for (local_24 = 0; local_24 < local_28 + -1; local_24 = local_24 + 1) {
        _printf("\n%d\t%d\t%s");
      }
      local_20 = local_20 + local_28 + -1;
    }
  }
  iVar2 = _printf("\n%d\t%d\t%s");
  return iVar2;
}



int _fractionalRanking(long param_1,int param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  
  iVar1 = _printf("\n\nFractional Ranking\n------------------");
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    if ((local_20 == param_2 + -1) ||
       (*(int *)(param_1 + (long)local_20 * 0x68) != *(int *)(param_1 + (long)(local_20 + 1) * 0x68)
       )) {
      iVar1 = _printf("\n%.1f\t%d\t%s");
    }
    else if (*(int *)(param_1 + (long)local_20 * 0x68) ==
             *(int *)(param_1 + (long)(local_20 + 1) * 0x68)) {
      local_28 = 1;
      local_24 = local_20;
      while (*(int *)(param_1 + (long)local_24 * 0x68) ==
             *(int *)(param_1 + (long)(local_24 + 1) * 0x68)) {
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
      }
      for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
        iVar1 = _printf("\n%.1f\t%d\t%s");
      }
      local_20 = local_20 + local_28 + -1;
    }
  }
  return iVar1;
}



void _processFile(char *param_1)

{
  FILE *pFVar1;
  void *pvVar2;
  int local_30;
  int local_2c;
  
  pFVar1 = _fopen(param_1,"r");
  _fscanf(pFVar1,"%d");
  pvVar2 = _malloc((long)local_30 * 0x68);
  for (local_2c = 0; local_2c < local_30; local_2c = local_2c + 1) {
    _fscanf(pFVar1,"%d%s");
  }
  _fclose(pFVar1);
  _ordinalRanking(pvVar2,local_30);
  _standardRanking(pvVar2,local_30);
  _denseRanking(pvVar2,local_30);
  _modifiedRanking(pvVar2,local_30);
  _fractionalRanking(pvVar2,local_30);
  return;
}



undefined8 entry(int param_1,long param_2)

{
  if (param_1 == 2) {
    _processFile(*(undefined8 *)(param_2 + 8));
  }
  else {
    _printf("Usage %s <score list file>");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004008)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


