#include "sum-and-product-puzzle.h"



undefined4 * _new_node(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_malloc(0x18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  return puVar1;
}



void _free_node(long *param_1)

{
  if (param_1 != (long *)0x0) {
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined8 *)(*param_1 + 0x10) = 0;
    _free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}



undefined  [16] _make_list(void)

{
  return ZEXT816(0);
}



void _append_node(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    lVar1 = _new_node(param_2,param_3);
    if (*param_1 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
    }
    else {
      *(long *)(lVar1 + 8) = param_1[1];
      *(long *)(param_1[1] + 0x10) = lVar1;
      param_1[1] = lVar1;
    }
  }
  return;
}



void _remove_node(undefined8 *param_1,long param_2)

{
  long local_20;
  undefined8 *local_18;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    if (*(long *)(param_2 + 8) == 0) {
      if (*(long *)(param_2 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_2 + 0x10) + 8) = 0;
        *param_1 = *(undefined8 *)(param_2 + 0x10);
      }
    }
    else {
      *(undefined8 *)(*(long *)(param_2 + 8) + 0x10) = *(undefined8 *)(param_2 + 0x10);
      if (*(long *)(param_2 + 0x10) == 0) {
        param_1[1] = *(undefined8 *)(param_2 + 8);
      }
      else {
        *(undefined8 *)(*(long *)(param_2 + 0x10) + 8) = *(undefined8 *)(param_2 + 8);
      }
    }
    local_20 = param_2;
    local_18 = param_1;
    _free_node(&local_20);
  }
  return;
}



void _free_list(long *param_1)

{
  long lVar1;
  long local_20;
  long *local_18;
  
  if (param_1 != (long *)0x0) {
    local_20 = *param_1;
    local_18 = param_1;
    while (local_20 != 0) {
      lVar1 = *(long *)(local_20 + 0x10);
      _free_node(&local_20);
      local_20 = lVar1;
    }
    *local_18 = 0;
    local_18[1] = 0;
  }
  return;
}



long * _print_list(long *param_1)

{
  uint uVar1;
  long local_20;
  
  if (param_1 != (long *)0x0) {
    for (local_20 = *param_1; local_20 != 0; local_20 = *(long *)(local_20 + 0x10)) {
      uVar1 = _printf("[%d, %d] S=%d P=%d\n");
      param_1 = (long *)(ulong)uVar1;
    }
  }
  return param_1;
}



int _print_count(long *param_1)

{
  int iVar1;
  int local_24;
  long local_20;
  
  local_24 = 0;
  if (param_1 == (long *)0x0) {
    iVar1 = 0;
  }
  else {
    for (local_20 = *param_1; local_20 != 0; local_20 = *(long *)(local_20 + 0x10)) {
      local_24 = local_24 + 1;
    }
    if (local_24 == 0) {
      iVar1 = _printf("no candidates\n");
    }
    else if (local_24 == 1) {
      iVar1 = _printf("one candidate\n");
    }
    else {
      iVar1 = _printf("%d candidates\n");
    }
  }
  return iVar1;
}



void _setup(long param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_1 != 0) {
    for (local_1c = 2; local_20 = local_1c, local_1c < 99; local_1c = local_1c + 1) {
      while (local_20 = local_20 + 1, local_20 < 99) {
        if (local_1c + local_20 < 0x65) {
          _append_node(param_1,local_1c,local_20);
        }
      }
    }
  }
  return;
}



void _remove_by_sum(undefined8 *param_1,int param_2)

{
  int *local_28;
  
  if (param_1 != (undefined8 *)0x0) {
    local_28 = (int *)*param_1;
    while (local_28 != (int *)0x0) {
      if (*local_28 + local_28[1] == param_2) {
        _remove_node(param_1,local_28);
        local_28 = (int *)*param_1;
      }
      else {
        local_28 = *(int **)(local_28 + 4);
      }
    }
  }
  return;
}



void _remove_by_prod(undefined8 *param_1,int param_2)

{
  int *local_28;
  
  if (param_1 != (undefined8 *)0x0) {
    local_28 = (int *)*param_1;
    while (local_28 != (int *)0x0) {
      if (*local_28 * local_28[1] == param_2) {
        _remove_node(param_1,local_28);
        local_28 = (int *)*param_1;
      }
      else {
        local_28 = *(int **)(local_28 + 4);
      }
    }
  }
  return;
}



void _statement1(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  void *pvVar3;
  int *local_28;
  
  pvVar3 = _calloc(100000,2);
  for (local_28 = (int *)*param_1; local_28 != (int *)0x0; local_28 = *(int **)(local_28 + 4)) {
    psVar1 = (short *)((long)pvVar3 + (long)(*local_28 * local_28[1]) * 2);
    *psVar1 = *psVar1 + 1;
  }
  piVar2 = (int *)*param_1;
  while (local_28 = piVar2, local_28 != (int *)0x0) {
    piVar2 = *(int **)(local_28 + 4);
    if (*(short *)((long)pvVar3 + (long)(*local_28 * local_28[1]) * 2) == 1) {
      _remove_by_sum(param_1,*local_28 + local_28[1]);
      piVar2 = (int *)*param_1;
    }
  }
  _free(pvVar3);
  return;
}



void _statement2(undefined8 *param_1)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  void *pvVar4;
  int *local_28;
  
  pvVar4 = _calloc(100000,2);
  for (local_28 = (int *)*param_1; local_28 != (int *)0x0; local_28 = *(int **)(local_28 + 4)) {
    psVar2 = (short *)((long)pvVar4 + (long)(*local_28 * local_28[1]) * 2);
    *psVar2 = *psVar2 + 1;
  }
  local_28 = (int *)*param_1;
  while (local_28 != (int *)0x0) {
    iVar3 = *local_28;
    piVar1 = local_28 + 1;
    local_28 = *(int **)(local_28 + 4);
    if (1 < *(short *)((long)pvVar4 + (long)(iVar3 * *piVar1) * 2)) {
      _remove_by_prod(param_1,iVar3 * *piVar1);
      local_28 = (int *)*param_1;
    }
  }
  _free(pvVar4);
  return;
}



void _statement3(undefined8 *param_1)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  void *pvVar4;
  int *local_28;
  
  pvVar4 = _calloc(100,2);
  for (local_28 = (int *)*param_1; local_28 != (int *)0x0; local_28 = *(int **)(local_28 + 4)) {
    psVar2 = (short *)((long)pvVar4 + (long)(*local_28 + local_28[1]) * 2);
    *psVar2 = *psVar2 + 1;
  }
  local_28 = (int *)*param_1;
  while (local_28 != (int *)0x0) {
    iVar3 = *local_28;
    piVar1 = local_28 + 1;
    local_28 = *(int **)(local_28 + 4);
    if (1 < *(short *)((long)pvVar4 + (long)(iVar3 + *piVar1) * 2)) {
      _remove_by_sum(param_1,iVar3 + *piVar1);
      local_28 = (int *)*param_1;
    }
  }
  _free(pvVar4);
  return;
}



undefined4 entry(void)

{
  undefined local_28 [16];
  undefined4 local_14;
  
  local_14 = 0;
  local_28 = _make_list();
  _setup();
  _print_count(local_28);
  _statement1(local_28);
  _print_count(local_28);
  _statement2(local_28);
  _print_count(local_28);
  _statement3(local_28);
  _print_count(local_28);
  _print_list(local_28);
  _free_list(local_28);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


