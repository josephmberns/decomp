#include "permutations-rank-of-a-permutation.h"



void __mr_unrank1(int param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = param_1 / param_2;
    }
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = param_1 / param_2;
    }
    param_1 = param_1 - iVar3 * param_2;
    uVar1 = *(undefined4 *)(param_3 + (long)param_1 * 4);
    *(undefined4 *)(param_3 + (long)param_1 * 4) =
         *(undefined4 *)(param_3 + (long)(param_2 + -1) * 4);
    *(undefined4 *)(param_3 + (long)(param_2 + -1) * 4) = uVar1;
    __mr_unrank1(iVar2,param_2 + -1,param_3);
  }
  return;
}



int __mr_rank1(int param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  
  if (param_1 < 2) {
    local_14 = 0;
  }
  else {
    local_14 = *(int *)(param_2 + (long)(param_1 + -1) * 4);
    uVar1 = *(undefined4 *)(param_2 + (long)(param_1 + -1) * 4);
    *(undefined4 *)(param_2 + (long)(param_1 + -1) * 4) =
         *(undefined4 *)(param_2 + (long)*(int *)(param_3 + (long)(param_1 + -1) * 4) * 4);
    *(undefined4 *)(param_2 + (long)*(int *)(param_3 + (long)(param_1 + -1) * 4) * 4) = uVar1;
    uVar1 = *(undefined4 *)(param_3 + (long)local_14 * 4);
    *(undefined4 *)(param_3 + (long)local_14 * 4) =
         *(undefined4 *)(param_3 + (long)(param_1 + -1) * 4);
    *(undefined4 *)(param_3 + (long)(param_1 + -1) * 4) = uVar1;
    iVar2 = __mr_rank1(param_1 + -1,param_2,param_3);
    local_14 = local_14 + param_1 * iVar2;
  }
  return local_14;
}



void _get_permutation(undefined4 param_1,int param_2,long param_3)

{
  undefined4 local_24;
  
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    *(int *)(param_3 + (long)local_24 * 4) = local_24;
  }
  __mr_unrank1(param_1,param_2,param_3);
  return;
}



undefined4 _get_rank(int param_1,long param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 local_24;
  
  pvVar2 = _malloc((long)param_1 << 2);
  pvVar3 = _malloc((long)param_1 << 2);
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    *(undefined4 *)((long)pvVar2 + (long)local_24 * 4) =
         *(undefined4 *)(param_2 + (long)local_24 * 4);
    *(int *)((long)pvVar3 + (long)*(int *)(param_2 + (long)local_24 * 4) * 4) = local_24;
  }
  uVar1 = __mr_rank1(param_1,pvVar2,pvVar3);
  _free(pvVar3);
  _free(pvVar2);
  return uVar1;
}



undefined4 entry(ulong param_1)

{
  uint uVar1;
  int local_40;
  int local_3c;
  undefined auStack_28 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_40 = 0; local_40 < 0x18; local_40 = local_40 + 1) {
    _printf("%3d: ");
    _get_permutation(local_40,4,auStack_28);
    for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
      if (local_3c == 0) {
        _printf("[ ");
      }
      else {
        _printf(", ");
      }
      _printf("%d");
    }
    _get_rank(4,auStack_28);
    uVar1 = _printf(" ] = %d\n");
    param_1 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


