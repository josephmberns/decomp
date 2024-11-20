#include "flatten-a-list.h"



undefined4 * _new_list(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_malloc(0x10);
  puVar1[1] = 0;
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 2) = 0;
  return puVar1;
}



void _append(long param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = _realloc(*(void **)(param_1 + 8),(long)(*(int *)(param_1 + 4) + 1) * 8);
  *(void **)(param_1 + 8) = pvVar2;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 1;
  *(undefined8 *)(*(long *)(param_1 + 8) + (long)iVar1 * 8) = param_2;
  return;
}



long _from_string(char *param_1,long *param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long local_30;
  char *local_20 [2];
  
  local_20[0] = param_1;
  local_30 = param_3;
  if (param_3 == 0) {
    local_30 = _new_list();
  }
  while( true ) {
    if (*local_20[0] == '\0') {
      if (param_2 != (long *)0x0) {
        *param_2 = (long)local_20[0];
      }
      return local_30;
    }
    if (*local_20[0] == ']') break;
    if (*local_20[0] == '[') {
      puVar1 = (undefined4 *)_new_list();
      *puVar1 = 1;
      puVar1[1] = 0;
      _append(local_30,puVar1);
      _from_string(local_20[0] + 1,local_20,puVar1);
    }
    else if ((*local_20[0] < '0') || ('9' < *local_20[0])) {
      local_20[0] = local_20[0] + 1;
    }
    else {
      puVar1 = (undefined4 *)_new_list();
      *puVar1 = 0;
      lVar2 = _strtol(local_20[0],local_20,10);
      puVar1[1] = (int)lVar2;
      _append(local_30,puVar1);
    }
  }
  if (param_2 == (long *)0x0) {
    return local_30;
  }
  *param_2 = (long)(local_20[0] + 1);
  return local_30;
}



int _show_list(int *param_1)

{
  int iVar1;
  int local_1c;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else if (*param_1 == 0) {
    iVar1 = _printf("%d");
  }
  else {
    _printf("[");
    for (local_1c = 0; local_1c < param_1[1]; local_1c = local_1c + 1) {
      _show_list(*(undefined8 *)(*(long *)(param_1 + 2) + (long)local_1c * 8));
      if (local_1c < param_1[1] + -1) {
        _printf(", ");
      }
    }
    iVar1 = _printf("]");
  }
  return iVar1;
}



long _flatten(int *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_24;
  long local_20;
  
  local_20 = param_2;
  if (param_2 == 0) {
    local_20 = _new_list();
  }
  if (*param_1 == 0) {
    puVar1 = (undefined8 *)_new_list();
    uVar2 = *(undefined8 *)param_1;
    puVar1[1] = *(undefined8 *)(param_1 + 2);
    *puVar1 = uVar2;
    _append(local_20,puVar1);
  }
  else {
    for (local_24 = 0; local_24 < param_1[1]; local_24 = local_24 + 1) {
      _flatten(*(undefined8 *)(*(long *)(param_1 + 2) + (long)local_24 * 8),local_20);
    }
  }
  return local_20;
}



void _delete_list(int *param_1)

{
  int local_1c;
  
  if (param_1 != (int *)0x0) {
    if ((*param_1 != 0) && (param_1[1] != 0)) {
      for (local_1c = 0; local_1c < param_1[1]; local_1c = local_1c + 1) {
        _delete_list(*(undefined8 *)(*(long *)(param_1 + 2) + (long)local_1c * 8));
      }
      _free(*(void **)(param_1 + 2));
    }
    _free(param_1);
  }
  return;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  
  uVar1 = _from_string("[1], 2, [[3,4], 5], [[[]]], [[[6]]], 7, 8, []",0);
  _printf("Nested: ");
  _show_list(uVar1);
  _printf("\n");
  uVar1 = _flatten(uVar1,0);
  _printf("Flattened: ");
  _show_list(uVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004020)(param_1,param_2,param_3);
  return lVar1;
}


