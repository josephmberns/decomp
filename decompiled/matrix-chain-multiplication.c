#include "matrix-chain-multiplication.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _optimal_matrix_chain_order(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  param_2 = param_2 + -1;
  __m = _malloc((long)param_2 << 3);
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    pvVar3 = _calloc((long)param_2,4);
    *(void **)((long)__m + (long)local_24 * 8) = pvVar3;
  }
  __s = _malloc((long)param_2 << 3);
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    pvVar3 = _calloc((long)param_2,4);
    *(void **)((long)__s + (long)local_24 * 8) = pvVar3;
  }
  for (local_20 = 1; local_20 < param_2; local_20 = local_20 + 1) {
    for (local_24 = 0; local_24 < param_2 - local_20; local_24 = local_24 + 1) {
      iVar1 = local_24 + local_20;
      *(undefined4 *)(*(long *)((long)__m + (long)local_24 * 8) + (long)iVar1 * 4) = 0x7fffffff;
      for (local_2c = local_24; local_2c < iVar1; local_2c = local_2c + 1) {
        iVar2 = *(int *)(*(long *)((long)__m + (long)local_24 * 8) + (long)local_2c * 4) +
                *(int *)(*(long *)((long)__m + (long)(local_2c + 1) * 8) + (long)iVar1 * 4) +
                *(int *)(param_1 + (long)local_24 * 4) *
                *(int *)(param_1 + (long)(local_2c + 1) * 4) *
                *(int *)(param_1 + (long)(iVar1 + 1) * 4);
        if (iVar2 < *(int *)(*(long *)((long)__m + (long)local_24 * 8) + (long)iVar1 * 4)) {
          *(int *)(*(long *)((long)__m + (long)local_24 * 8) + (long)iVar1 * 4) = iVar2;
          *(int *)(*(long *)((long)__s + (long)local_24 * 8) + (long)iVar1 * 4) = local_2c;
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _print_optimal_chain_order(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    iVar1 = _printf("%c");
  }
  else {
    _printf("(");
    _print_optimal_chain_order
              (param_1,*(undefined4 *)(*(long *)(__s + (long)param_1 * 8) + (long)param_2 * 4));
    _print_optimal_chain_order
              (*(int *)(*(long *)(__s + (long)param_1 * 8) + (long)param_2 * 4) + 1,param_2);
    iVar1 = _printf(")");
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  int iVar1;
  int local_cc;
  int local_c8;
  int local_c0 [4];
  undefined *local_b0 [3];
  undefined auStack_94 [48];
  undefined auStack_64 [52];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_28 = 0x100000003;
  local_30 = 0x600000005;
  _memcpy(auStack_64,&DAT_100003f30,0x34);
  _memcpy(auStack_94,&DAT_100003f64,0x30);
  local_c0[0] = 4;
  local_c0[1] = 0xd;
  local_c0[2] = 0xc;
  local_b0[0] = (undefined *)&local_30;
  local_b0[1] = auStack_64;
  local_b0[2] = auStack_94;
  for (local_c8 = 0; local_c8 < 3; local_c8 = local_c8 + 1) {
    _printf("Dims  : [");
    iVar1 = local_c0[local_c8];
    for (local_cc = 0; local_cc < iVar1; local_cc = local_cc + 1) {
      _printf("%d");
      if (local_cc < iVar1 + -1) {
        _printf(", ");
      }
      else {
        _printf("]\n");
      }
    }
    _optimal_matrix_chain_order(local_b0[local_c8],iVar1);
    _printf("Order : ");
    _print_optimal_chain_order(0,iVar1 + -2);
    _printf("\nCost  : %d\n\n");
    for (local_cc = 0; local_cc <= iVar1 + -2; local_cc = local_cc + 1) {
      _free(*(void **)((long)__m + (long)local_cc * 8));
    }
    _free(__m);
    for (local_cc = 0; local_cc <= iVar1 + -2; local_cc = local_cc + 1) {
      _free(*(void **)((long)__s + (long)local_cc * 8));
    }
    _free(__s);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


