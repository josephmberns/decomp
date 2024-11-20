#include "subleq.h"



ulong _subleq(ulong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char local_2d;
  int local_2c;
  int local_1c;
  ulong uVar6;
  
  local_1c = 0;
  uVar6 = param_1;
  while (-1 < local_1c) {
    local_2c = local_1c + 3;
    iVar2 = *(int *)(param_1 + (long)local_1c * 4);
    iVar3 = *(int *)(param_1 + (long)(local_1c + 1) * 4);
    iVar4 = *(int *)(param_1 + (long)(local_1c + 2) * 4);
    if (iVar2 == -1) {
      uVar5 = _scanf("%c");
      uVar6 = (ulong)uVar5;
      *(int *)(param_1 + (long)iVar3 * 4) = (int)local_2d;
    }
    else if (iVar3 == -1) {
      uVar5 = _printf("%c");
      uVar6 = (ulong)uVar5;
    }
    else {
      piVar1 = (int *)(param_1 + (long)iVar3 * 4);
      *piVar1 = *piVar1 - *(int *)(param_1 + (long)iVar2 * 4);
      if (*(int *)(param_1 + (long)iVar3 * 4) < 1) {
        local_2c = iVar4;
      }
    }
    local_1c = local_2c;
  }
  return uVar6;
}



void _processFile(char *param_1)

{
  FILE *pFVar1;
  void *pvVar2;
  int local_28;
  int local_24;
  
  pFVar1 = _fopen(param_1,"r");
  _fscanf(pFVar1,"%d");
  pvVar2 = _malloc((long)local_28 << 2);
  for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
    _fscanf(pFVar1,"%d");
  }
  _fclose(pFVar1);
  _subleq(pvVar2);
  return;
}



undefined8 entry(int param_1,long param_2)

{
  if (param_1 == 2) {
    _processFile(*(undefined8 *)(param_2 + 8));
  }
  else {
    _printf("Usage : %s <subleq code file>\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004008)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004028)((int)param_1);
  return iVar1;
}


