#include "sum-of-elements-below-main-diagonal-of-matrix.h"



undefined  [16] _readMatrix(char *param_1)

{
  undefined auVar1 [16];
  FILE *pFVar2;
  void *pvVar3;
  void *pvVar4;
  int local_38;
  int local_34;
  int local_20;
  int iStack_1c;
  
  pFVar2 = _fopen(param_1,"r");
  _fscanf(pFVar2,"%d%d");
  pvVar3 = _malloc((long)local_20 << 3);
  for (local_34 = 0; local_34 < local_20; local_34 = local_34 + 1) {
    pvVar4 = _malloc((long)iStack_1c << 2);
    *(void **)((long)pvVar3 + (long)local_34 * 8) = pvVar4;
    for (local_38 = 0; local_38 < iStack_1c; local_38 = local_38 + 1) {
      _fscanf(pFVar2,"%d");
    }
  }
  _fclose(pFVar2);
  auVar1._4_4_ = iStack_1c;
  auVar1._0_4_ = local_20;
  auVar1._8_8_ = pvVar3;
  return auVar1;
}



ulong _printMatrix(ulong param_1)

{
  uint uVar1;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  ulong uVar2;
  
  uVar2 = param_1;
  for (local_24 = 0; local_20 = (int)param_1, local_24 < local_20; local_24 = local_24 + 1) {
    uVar1 = _printf("\n");
    for (local_28 = 0; uVar2 = (ulong)uVar1, iStack_1c = (int)(param_1 >> 0x20),
        local_28 < iStack_1c; local_28 = local_28 + 1) {
      uVar1 = _printf("%3d");
    }
  }
  return uVar2;
}



int _findSum(int param_1,long param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = 0;
  for (local_14 = 1; local_14 < param_1; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
      local_1c = local_1c + *(int *)(*(long *)(param_2 + (long)local_14 * 8) + (long)local_18 * 4);
    }
  }
  return local_1c;
}



int entry(int param_1,long param_2)

{
  undefined auVar1 [16];
  int local_14;
  
  if (param_1 == 2) {
    auVar1 = _readMatrix(*(undefined8 *)(param_2 + 8));
    _printf("\n\nMatrix is : \n\n");
    _printMatrix(auVar1._0_8_,auVar1._8_8_);
    _findSum(auVar1._0_8_,auVar1._8_8_);
    _printf("\n\nSum below main diagonal : %d");
    local_14 = 0;
  }
  else {
    local_14 = _printf("Usage : %s <filename>");
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004008)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


