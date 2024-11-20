#include "deepcopy-2.h"



void _addToList(long *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  long local_28;
  
  if (*param_1 == 0) {
    pvVar1 = _malloc(0x10);
    *param_1 = (long)pvVar1;
    *(undefined4 *)*param_1 = param_2;
    *(undefined8 *)(*param_1 + 8) = 0;
  }
  else {
    for (local_28 = *param_1; *(long *)(local_28 + 8) != 0; local_28 = *(long *)(local_28 + 8)) {
    }
    puVar2 = (undefined4 *)_malloc(0x10);
    *puVar2 = param_2;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined4 **)(local_28 + 8) = puVar2;
  }
  return;
}



undefined4 * _copyList(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  
  if (param_1 != (undefined4 *)0x0) {
    local_20 = (undefined4 *)_malloc(0x10);
    *local_20 = *param_1;
    *(undefined8 *)(local_20 + 2) = 0;
    local_30 = local_20;
    for (local_28 = *(undefined4 **)(param_1 + 2); local_28 != (undefined4 *)0x0;
        local_28 = *(undefined4 **)(local_28 + 2)) {
      puVar1 = (undefined4 *)_malloc(0x10);
      *puVar1 = *local_28;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined4 **)(local_30 + 2) = puVar1;
      local_30 = puVar1;
    }
  }
  return local_20;
}



int _printList(long param_1)

{
  int iVar1;
  long local_20;
  
  for (local_20 = param_1; local_20 != 0; local_20 = *(long *)(local_20 + 8)) {
    _printf("%d,");
  }
  iVar1 = _printf("\b");
  return iVar1;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  int local_2c;
  void *local_20;
  undefined4 local_14;
  
  local_14 = 0;
  for (local_2c = 1; local_2c < 6; local_2c = local_2c + 1) {
    _addToList(&local_20,local_2c);
  }
  _printf("List a is : ");
  _printList(local_20);
  uVar1 = _copyList(local_20);
  _free(local_20);
  _printf("\nList a destroyed, List b is : ");
  _printList(uVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


