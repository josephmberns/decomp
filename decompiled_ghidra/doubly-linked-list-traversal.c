#include "doubly-linked-list-traversal.h"



undefined8 * _NewList(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
  }
  return puVar1;
}



bool _LL_Append(long param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  
  puVar1 = (undefined8 *)_malloc(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = _strdup(param_2);
    *puVar1 = pcVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[1] = 0;
    if (puVar1[2] == 0) {
      *(undefined8 **)(param_1 + 8) = puVar1;
    }
    else {
      *(undefined8 **)(puVar1[2] + 8) = puVar1;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar1;
  }
  return puVar1 != (undefined8 *)0x0;
}



bool _LI_Insert(long *param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  undefined8 local_38;
  
  lVar3 = *param_1;
  puVar1 = (undefined8 *)_malloc(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = _strdup(param_2);
    *puVar1 = pcVar2;
    if (lVar3 == param_1[1]) {
      puVar1[2] = 0;
      puVar1[1] = *(undefined8 *)(lVar3 + 8);
      *(undefined8 **)(lVar3 + 8) = puVar1;
      if (puVar1[1] == 0) {
        *(undefined8 **)(lVar3 + 0x10) = puVar1;
      }
      else {
        *(undefined8 **)(puVar1[1] + 0x10) = puVar1;
      }
    }
    else {
      if (lVar3 == 0) {
        local_38 = *(undefined8 *)(param_1[1] + 0x10);
      }
      else {
        local_38 = *(undefined8 *)(lVar3 + 0x10);
      }
      puVar1[2] = local_38;
      puVar1[1] = lVar3;
      if (puVar1[2] == 0) {
        *(undefined8 **)(param_1[1] + 8) = puVar1;
      }
      else {
        *(undefined8 **)(puVar1[2] + 8) = puVar1;
      }
      if (lVar3 == 0) {
        *(undefined8 **)(param_1[1] + 0x10) = puVar1;
      }
      else {
        *(undefined8 **)(lVar3 + 0x10) = puVar1;
      }
    }
  }
  return puVar1 != (undefined8 *)0x0;
}



undefined8 * _LL_GetIterator(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x10);
  puVar1[1] = param_1;
  *puVar1 = param_1;
  return puVar1;
}



bool _LLI_AtEnd(long *param_1)

{
  return *param_1 == 0;
}



undefined8 _LLI_Value(long *param_1)

{
  undefined8 local_10;
  
  if (*param_1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined8 *)*param_1;
  }
  return local_10;
}



bool _LLI_Next(long *param_1)

{
  if (*param_1 != 0) {
    *param_1 = *(long *)(*param_1 + 8);
  }
  return *param_1 != 0;
}



bool _LLI_Prev(long *param_1)

{
  if (*param_1 != 0) {
    *param_1 = *(long *)(*param_1 + 0x10);
  }
  return *param_1 != 0;
}



undefined8 entry(void)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  int local_18;
  
  uVar2 = _NewList();
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    _LL_Append(uVar2,(&PTR_s_Read_100008000)[local_18]);
  }
  pvVar3 = (void *)_LL_GetIterator(uVar2);
  _printf("forward\n");
  while( true ) {
    iVar1 = _LLI_Next(pvVar3);
    if (iVar1 == 0) break;
    _LLI_Value(pvVar3);
    _printf("value=%s\n");
  }
  _free(pvVar3);
  _printf("\nreverse\n");
  pvVar3 = (void *)_LL_GetIterator(uVar2);
  while( true ) {
    iVar1 = _LLI_Prev(pvVar3);
    if (iVar1 == 0) break;
    _LLI_Value(pvVar3);
    _printf("value=%s\n");
  }
  _free(pvVar3);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004018)();
  return pcVar1;
}


