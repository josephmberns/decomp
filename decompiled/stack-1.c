#include "stack-1.h"



long * _stk_int_create(long param_1)

{
  void *pvVar1;
  long local_20;
  long *local_18;
  
  local_20 = param_1;
  if (param_1 == 0) {
    local_20 = 4;
  }
  local_18 = (long *)_malloc(0x18);
  if (local_18 == (long *)0x0) {
    local_18 = (long *)0x0;
  }
  else {
    pvVar1 = _malloc(local_20 * 4);
    *local_18 = (long)pvVar1;
    if (*local_18 == 0) {
      _free(local_18);
      local_18 = (long *)0x0;
    }
    else {
      local_18[2] = 0;
      local_18[1] = local_20;
    }
  }
  return local_18;
}



undefined4 _stk_int_push(long *param_1,undefined4 param_2)

{
  void *pvVar1;
  long lVar2;
  
  if ((ulong)param_1[1] <= (ulong)param_1[2]) {
    pvVar1 = _realloc((void *)*param_1,param_1[1] << 3);
    if (pvVar1 == (void *)0x0) {
      return 0xffffffff;
    }
    *param_1 = (long)pvVar1;
    param_1[1] = param_1[1] << 1;
  }
  lVar2 = param_1[2];
  param_1[2] = lVar2 + 1;
  *(undefined4 *)(*param_1 + lVar2 * 4) = param_2;
  return (int)param_1[2];
}



undefined4 _stk_int_pop(long *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    lVar3 = param_1[2];
    param_1[2] = lVar3 + -1;
    uVar1 = *(undefined4 *)(*param_1 + (lVar3 + -1) * 4);
    if (((ulong)(param_1[2] << 1) <= (ulong)param_1[1]) && (7 < (ulong)param_1[1])) {
      param_1[1] = (ulong)param_1[1] / 2;
      pvVar2 = _realloc((void *)*param_1,param_1[1] << 2);
      *param_1 = (long)pvVar2;
    }
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  _abort();
}



void _stk_int_delete(undefined8 *param_1)

{
  _free((void *)*param_1);
  _free(param_1);
  return;
}



undefined8 entry(void)

{
  long lVar1;
  int local_18;
  
  lVar1 = _stk_int_create(0);
  _printf("pushing: ");
  for (local_18 = 0x61; local_18 < 0x7b; local_18 = local_18 + 1) {
    _printf(" %c");
    _stk_int_push(lVar1,local_18);
  }
  _printf("\nsize now: %d");
  _printf("\nstack is%s empty\n");
  _printf("\npoppoing:");
  while (*(long *)(lVar1 + 0x10) != 0) {
    _stk_int_pop(lVar1);
    _printf(" %c");
  }
  _printf("\nsize now: %d");
  _printf("\nstack is%s empty\n");
  _stk_int_delete(lVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__abort_100004000)();
  return;
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004020)();
  return pvVar1;
}


