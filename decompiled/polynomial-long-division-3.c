#include "polynomial-long-division-3.h"



int * _p_new(int param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined8 uVar3;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_1 < 0) {
    local_14 = -param_1;
  }
  piVar1 = (int *)_malloc(0x10);
  *piVar1 = local_14;
  local_14 = local_14 + 1;
  pvVar2 = _malloc((long)local_14 * 8);
  *(void **)(piVar1 + 2) = pvVar2;
  if (param_1 < 0) {
    for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
      *(undefined8 *)(*(long *)(piVar1 + 2) + (long)local_18 * 8) = 0;
    }
  }
  else {
    for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
      uVar3 = *(undefined8 *)register0x00000008;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + 8);
      *(undefined8 *)(*(long *)(piVar1 + 2) + (long)local_18 * 8) = uVar3;
    }
  }
  return piVar1;
}



void _p_del(void *param_1)

{
  _free(*(void **)((long)param_1 + 8));
  _free(param_1);
  return;
}



int _p_print(int *param_1)

{
  int iVar1;
  int local_1c;
  
  for (local_1c = 0; local_1c <= *param_1; local_1c = local_1c + 1) {
    _printf("%g ");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



long _p_copy(int *param_1)

{
  long lVar1;
  
  lVar1 = _p_new(-*param_1);
  ___memcpy_chk(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_1 + 2),(long)(*param_1 + 1) * 8,
                0xffffffffffffffff);
  return lVar1;
}



long _p_div(int *param_1,int *param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  int local_40;
  int local_3c;
  long local_18;
  
  if (*param_1 - *param_2 < 0) {
    local_18 = 0;
  }
  else {
    local_18 = _p_new(-(*param_1 - *param_2));
    lVar3 = _p_copy(param_1);
    *param_3 = lVar3;
    for (local_3c = *param_1; *param_2 <= local_3c; local_3c = local_3c + -1) {
      dVar4 = *(double *)(*(long *)(*param_3 + 8) + (long)local_3c * 8) /
              *(double *)(*(long *)(param_2 + 2) + (long)*param_2 * 8);
      *(double *)(*(long *)(local_18 + 8) + (long)(local_3c - *param_2) * 8) = dVar4;
      *(undefined8 *)(*(long *)(*param_3 + 8) + (long)local_3c * 8) = 0;
      for (local_40 = 0; local_40 < *param_2; local_40 = local_40 + 1) {
        puVar1 = (undefined8 *)
                 (*(long *)(*param_3 + 8) + (long)((local_3c - *param_2) + local_40) * 8);
        uVar5 = NEON_fmsub(*(undefined8 *)(*(long *)(param_2 + 2) + (long)local_40 * 8),dVar4,
                           *puVar1);
        *puVar1 = uVar5;
      }
    }
    do {
      lVar3 = *(long *)(*param_3 + 8);
      iVar2 = *(int *)*param_3 + -1;
      *(int *)*param_3 = iVar2;
    } while (*(double *)(lVar3 + (long)iVar2 * 8) == 0.0);
  }
  return local_18;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = _p_new(3);
  local_28 = _p_new(2);
  uVar1 = _p_div(local_20,local_28,&local_30);
  _printf("poly: ");
  _p_print(local_20);
  _printf("div:  ");
  _p_print(local_28);
  _printf("quot: ");
  _p_print(uVar1);
  _printf("rem:  ");
  _p_print(local_30);
  _p_del(local_20);
  _p_del(uVar1);
  _p_del(local_30);
  _p_del(local_28);
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


