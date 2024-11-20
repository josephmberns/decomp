#include "bioinformatics-base-count-1.h"



int _numDigits(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 1;
  for (local_4 = param_1; 10 < local_4; local_4 = local_4 / 10) {
    local_8 = local_8 + 1;
  }
  return local_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _buildGenome(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *local_28;
  int local_20;
  
  sVar1 = _strlen(param_1);
  iVar4 = (int)sVar1;
  __totalLength = __totalLength + iVar4;
  for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
    switch(param_1[local_20]) {
    case 'A':
      __Adenine = __Adenine + 1;
      break;
    case 'C':
      __Cytosine = __Cytosine + 1;
      break;
    case 'G':
      __Guanine = __Guanine + 1;
      break;
    case 'T':
      __Thymine = __Thymine + 1;
    }
  }
  if (__genomeData == (undefined8 *)0x0) {
    __genomeData = (undefined8 *)_malloc(0x18);
    pvVar2 = _malloc((long)iVar4);
    *__genomeData = pvVar2;
    ___strcpy_chk(*__genomeData,param_1,0xffffffffffffffff);
    *(int *)(__genomeData + 1) = iVar4;
    __genomeData[2] = 0;
  }
  else {
    for (local_28 = __genomeData; local_28[2] != 0; local_28 = (undefined8 *)local_28[2]) {
    }
    puVar3 = (undefined8 *)_malloc(0x18);
    pvVar2 = _malloc((long)iVar4);
    *puVar3 = pvVar2;
    ___strcpy_chk(*puVar3,param_1,0xffffffffffffffff);
    *(int *)(puVar3 + 1) = iVar4;
    puVar3[2] = 0;
    local_28[2] = puVar3;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _printGenome(void)

{
  void *local_18;
  
  local_18 = __genomeData;
  _numDigits(__totalLength);
  _printf("Sequence:\n");
  for (; local_18 != (void *)0x0; local_18 = *(void **)((long)local_18 + 0x10)) {
    _printf("\n%*d%3s%3s");
  }
  _printf("\n\nBase Count\n----------\n\n");
  _printf("%3c%3s%*d\n");
  _printf("%3c%3s%*d\n");
  _printf("%3c%3s%*d\n");
  _printf("%3c%3s%*d\n");
  _printf("\n%3s%*d\n");
  _free(__genomeData);
  return;
}



undefined4 entry(int param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  FILE *pFVar3;
  ulong uVar4;
  undefined auStack_7c [100];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  if (param_1 == 2) {
    pFVar3 = _fopen(*(char **)(param_2 + 8),"r");
    while( true ) {
      iVar2 = _fscanf(pFVar3,"%s");
      if (iVar2 == -1) break;
      _buildGenome(auStack_7c);
    }
    iVar2 = _fclose(pFVar3);
    uVar4 = _printGenome(iVar2);
  }
  else {
    uVar1 = _printf("Usage : %s <Gene file name>\n");
    uVar4 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar4);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004048)();
  return sVar1;
}


