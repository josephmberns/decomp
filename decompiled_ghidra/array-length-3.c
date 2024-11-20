#include "array-length-3.h"



size_t * _StringArray_new(size_t param_1)

{
  void *pvVar1;
  size_t *local_20;
  
  local_20 = (size_t *)_calloc(1,0x18);
  if (local_20 != (size_t *)0x0) {
    pvVar1 = _calloc(param_1,4);
    local_20[2] = (size_t)pvVar1;
    if (local_20[2] == 0) {
      _free(local_20);
      local_20 = (size_t *)0x0;
    }
    else {
      *local_20 = param_1;
    }
  }
  return local_20;
}



void _StringArray_delete(undefined8 *param_1)

{
  ulong *puVar1;
  ulong local_28;
  
  if (param_1 == (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("StringArray_delete","array-length-3.c",0x26,"ptr_to_this != NULL");
  }
  puVar1 = (ulong *)*param_1;
  if (puVar1 != (ulong *)0x0) {
    for (local_28 = 0; local_28 < *puVar1; local_28 = local_28 + 1) {
      _free(*(void **)(puVar1[2] + local_28 * 8));
    }
    _free((void *)puVar1[2]);
    _free(puVar1);
  }
  return;
}



void _StringArray_add(ulong *param_1)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  char *local_20;
  
  while( true ) {
    bVar1 = false;
    if (param_1[1] < *param_1) {
      local_20 = *(char **)register0x00000008;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + 8);
      bVar1 = local_20 != (char *)0x0;
    }
    if (!bVar1) break;
    pcVar2 = _strdup(local_20);
    uVar3 = param_1[1];
    param_1[1] = uVar3 + 1;
    *(char **)(param_1[2] + uVar3 * 8) = pcVar2;
  }
  return;
}



undefined8 entry(undefined4 param_1,undefined8 param_2)

{
  ulong local_30;
  long local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = param_2;
  local_18 = param_1;
  local_28 = _StringArray_new(10);
  _StringArray_add(local_28);
  _printf("There are %d elements in an array with a capacity of %d elements:\n\n");
  for (local_30 = 0; local_30 < *(ulong *)(local_28 + 8); local_30 = local_30 + 1) {
    _printf("    the element %d is the string \"%s\"\n");
  }
  _StringArray_delete(&local_28);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004020)();
  return pcVar1;
}


