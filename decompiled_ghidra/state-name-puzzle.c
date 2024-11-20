#include "state-name-puzzle.h"



void _count_letters(long param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *local_10;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    *(char **)(param_1 + 0x20) = param_2;
    local_10 = param_2;
  }
  else {
    *(char **)(param_1 + 0x28) = param_2;
    local_10 = param_2;
  }
  while( true ) {
    pcVar2 = local_10 + 1;
    iVar3 = (int)*local_10;
    if (iVar3 == 0) break;
    if ((0x60 < iVar3) && (iVar3 < 0x7b)) {
      pcVar1 = (char *)(param_1 + (iVar3 + -0x61));
      *pcVar1 = *pcVar1 + '\x01';
    }
    local_10 = pcVar2;
    if ((0x40 < iVar3) && (iVar3 < 0x5b)) {
      pcVar2 = (char *)(param_1 + (iVar3 + -0x41));
      *pcVar2 = *pcVar2 + '\x01';
    }
  }
  return;
}



undefined4 _lcmp(long param_1,long param_2)

{
  int local_1c;
  
  local_1c = 0;
  while( true ) {
    if (0x19 < local_1c) {
      return 0;
    }
    if (*(byte *)(param_2 + local_1c) < *(byte *)(param_1 + local_1c)) break;
    if (*(byte *)(param_1 + local_1c) < *(byte *)(param_2 + local_1c)) {
      return 0xffffffff;
    }
    local_1c = local_1c + 1;
  }
  return 1;
}



int _scmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}



void _no_dup(void)

{
  bool bVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  _qsort(&_states,(long)_n_states,8,(int *)_scmp);
  local_18 = 0;
  local_14 = 0;
  while (local_14 < _n_states) {
    do {
      local_14 = local_14 + 1;
      bVar1 = false;
      if (local_14 < _n_states) {
        iVar2 = _strcmp((&_states)[local_14],(&_states)[local_18]);
        bVar1 = iVar2 == 0;
      }
    } while (bVar1);
    if (local_14 < _n_states) {
      local_18 = local_18 + 1;
      (&_states)[local_18] = (&_states)[local_14];
    }
  }
  _n_states = local_18 + 1;
  return;
}



void _find_mix(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  void *local_30;
  int local_18;
  int local_14;
  
  _no_dup();
  iVar1 = (_n_states * (_n_states + -1)) / 2;
  pvVar4 = _calloc((long)iVar1,0x30);
  local_30 = pvVar4;
  for (local_14 = 0; local_18 = local_14, local_14 < _n_states; local_14 = local_14 + 1) {
    while (local_18 = local_18 + 1, local_18 < _n_states) {
      _count_letters(local_30,(&_states)[local_14]);
      _count_letters(local_30,(&_states)[local_18]);
      local_30 = (void *)((long)local_30 + 0x30);
    }
  }
  _qsort(pvVar4,(long)iVar1,0x30,(int *)_lcmp);
  for (local_18 = 0; local_14 = local_18, local_18 < iVar1; local_18 = local_18 + 1) {
    while( true ) {
      local_14 = local_14 + 1;
      bVar2 = false;
      if (local_14 < iVar1) {
        iVar3 = _lcmp((void *)((long)pvVar4 + (long)local_18 * 0x30),
                      (void *)((long)pvVar4 + (long)local_14 * 0x30));
        bVar2 = iVar3 == 0;
      }
      if (!bVar2) break;
      if (((*(long *)((long)pvVar4 + (long)local_18 * 0x30 + 0x20) !=
            *(long *)((long)pvVar4 + (long)local_14 * 0x30 + 0x20)) &&
          (*(long *)((long)pvVar4 + (long)local_18 * 0x30 + 0x28) !=
           *(long *)((long)pvVar4 + (long)local_14 * 0x30 + 0x20))) &&
         (*(long *)((long)pvVar4 + (long)local_18 * 0x30 + 0x28) !=
          *(long *)((long)pvVar4 + (long)local_14 * 0x30 + 0x28))) {
        _printf("%s + %s => %s + %s\n");
      }
    }
  }
  _free(pvVar4);
  return;
}



undefined4 entry(void)

{
  _find_mix();
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d54. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003d60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003d78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004020)((int)param_1);
  return iVar1;
}


