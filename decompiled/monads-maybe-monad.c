#include "monads-maybe-monad.h"



int _print_Maybe(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = _printf("Just %d : INT\n");
  }
  else if (*(int *)(param_1 + 0x10) == 1) {
    iVar1 = _printf("Just \"%s\" : STRING\n");
  }
  else {
    iVar1 = _printf("Nothing\n");
  }
  return iVar1;
}



undefined4 * _return_maybe(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_malloc(0x18);
  if (param_2 == 0) {
    *puVar1 = *param_1;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[4] = 0;
    *(undefined *)(puVar1 + 5) = 1;
  }
  else if (param_2 == 1) {
    *puVar1 = 0;
    *(undefined4 **)(puVar1 + 2) = param_1;
    puVar1[4] = 1;
    *(undefined *)(puVar1 + 5) = 1;
  }
  else {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[4] = 0;
    *(undefined *)(puVar1 + 5) = 0;
  }
  return puVar1;
}



undefined4 * _bind_maybe(undefined8 param_1,code *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)_malloc(0x18);
  lVar2 = (*param_2)(param_1);
  if ((*(byte *)(lVar2 + 0x14) & 1) == 0) {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[4] = 0;
    *(undefined *)(puVar1 + 5) = 0;
  }
  else {
    puVar3 = (undefined4 *)(*param_2)(param_1);
    *puVar1 = *puVar3;
    lVar2 = (*param_2)(param_1);
    *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(lVar2 + 8);
    lVar2 = (*param_2)(param_1);
    puVar1[4] = *(undefined4 *)(lVar2 + 0x10);
    *(undefined *)(puVar1 + 5) = 1;
  }
  return puVar1;
}



int * _f_1(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)_malloc(0x18);
  *piVar1 = *param_1 * *param_1;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  *(undefined *)(piVar1 + 5) = 1;
  return piVar1;
}



undefined4 * _f_2(int *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int local_24;
  
  puVar1 = (undefined4 *)_malloc(0x18);
  *puVar1 = 0;
  pvVar2 = _malloc((long)*param_1 + 1);
  *(void **)(puVar1 + 2) = pvVar2;
  for (local_24 = 0; local_24 < *param_1; local_24 = local_24 + 1) {
    *(undefined *)(*(long *)(puVar1 + 2) + (long)local_24) = 0x78;
  }
  *(undefined *)(*(long *)(puVar1 + 2) + (long)(*param_1 + 1)) = 0;
  puVar1[4] = 1;
  *(undefined *)(puVar1 + 5) = 1;
  return puVar1;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_14;
  
  local_14 = 7;
  uVar1 = _return_maybe(&local_14);
  uVar2 = _return_maybe("lorem ipsum dolor sit amet",1);
  _print_Maybe(uVar1);
  _print_Maybe(uVar2);
  _bind_maybe(uVar1);
  _print_Maybe();
  _bind_maybe(uVar1);
  _print_Maybe();
  uVar1 = _bind_maybe(uVar1,_f_1);
  _bind_maybe(uVar1,_f_2);
  _print_Maybe();
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


