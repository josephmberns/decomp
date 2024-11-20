#include "sphenic-numbers.h"



undefined * _sieve(int param_1)

{
  undefined *puVar1;
  int local_1c;
  int local_18;
  
  param_1 = param_1 + 1;
  puVar1 = (undefined *)_calloc((long)param_1,1);
  *puVar1 = 1;
  puVar1[1] = 1;
  for (local_18 = 4; local_18 < param_1; local_18 = local_18 + 2) {
    puVar1[local_18] = 1;
  }
  local_1c = 3;
  while (local_18 = local_1c * local_1c, local_18 < param_1) {
    for (; local_18 < param_1; local_18 = local_18 + local_1c * 2) {
      puVar1[local_18] = 1;
    }
    do {
      local_1c = local_1c + 2;
    } while ((puVar1[local_1c] & 1) != 0);
  }
  return puVar1;
}



void _primeFactors(int param_1,long param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  int local_64;
  int local_60;
  int local_5c;
  int local_44;
  int local_40 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  if (1 < param_1) {
    local_5c = 0;
    local_40[2] = 4;
    local_40[3] = 2;
    local_40[0] = 4;
    local_40[1] = 2;
    local_40[6] = 2;
    local_40[7] = 6;
    local_40[4] = 4;
    local_40[5] = 6;
    for (local_44 = param_1; local_44 % 2 == 0; local_44 = local_44 / 2) {
      lVar2 = (long)local_5c;
      local_5c = local_5c + 1;
      *(undefined4 *)(param_2 + lVar2 * 4) = 2;
    }
    for (; local_44 % 3 == 0; local_44 = local_44 / 3) {
      lVar2 = (long)local_5c;
      local_5c = local_5c + 1;
      *(undefined4 *)(param_2 + lVar2 * 4) = 3;
    }
    for (; local_44 % 5 == 0; local_44 = local_44 / 5) {
      lVar2 = (long)local_5c;
      local_5c = local_5c + 1;
      *(undefined4 *)(param_2 + lVar2 * 4) = 5;
    }
    local_60 = 7;
    local_64 = 0;
    iVar1 = local_44;
    while (local_44 = iVar1, local_60 * local_60 <= local_44) {
      iVar1 = 0;
      if (local_60 != 0) {
        iVar1 = local_44 / local_60;
      }
      if (local_44 == iVar1 * local_60) {
        lVar2 = (long)local_5c;
        local_5c = local_5c + 1;
        *(int *)(param_2 + lVar2 * 4) = local_60;
        iVar1 = 0;
        if (local_60 != 0) {
          iVar1 = local_44 / local_60;
        }
      }
      else {
        local_60 = local_60 + local_40[local_64];
        local_64 = (local_64 + 1) % 8;
        iVar1 = local_44;
      }
    }
    if (1 < local_44) {
      lVar2 = (long)local_5c;
      local_5c = local_5c + 1;
      *(int *)(param_2 + lVar2 * 4) = local_44;
    }
    *param_3 = local_5c;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



undefined4 _compare(int *param_1,int *param_2)

{
  undefined4 local_4;
  
  if (*param_1 < *param_2) {
    local_4 = 0xffffffff;
  }
  else if (*param_2 < *param_1) {
    local_4 = 1;
  }
  else {
    local_4 = 0;
  }
  return local_4;
}



undefined8 entry(void)

{
  int iVar1;
  long lVar2;
  double dVar3;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  void *local_80;
  void *local_78;
  void *local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_44 = 0;
  local_48 = 1000000;
  dVar3 = (double)_cbrt(0x412e848000000000);
  local_4c = (int)dVar3;
  local_5c = 0;
  local_60 = 0;
  local_70 = (void *)_sieve(0x28b0a);
  for (local_50 = 0; local_50 < 0x28b0a; local_50 = local_50 + 1) {
    if ((*(byte *)((long)local_70 + (long)local_50) & 1) == 0) {
      local_5c = local_5c + 1;
    }
  }
  local_78 = _malloc((long)local_5c << 2);
  local_54 = 0;
  for (local_50 = 0; local_50 < 0x28b0a; local_50 = local_50 + 1) {
    if ((*(byte *)((long)local_70 + (long)local_50) & 1) == 0) {
      lVar2 = (long)local_54;
      local_54 = local_54 + 1;
      *(int *)((long)local_78 + lVar2 * 4) = local_50;
    }
  }
  local_80 = _malloc(840000);
  _printf("Sphenic numbers less than 1,000:\n");
  local_50 = 0;
  while ((local_50 < local_5c + -2 &&
         (iVar1 = local_50, *(int *)((long)local_78 + (long)local_50 * 4) <= local_4c))) {
    while ((local_54 = iVar1 + 1, local_54 < local_5c + -1 &&
           (local_64 = *(int *)((long)local_78 + (long)local_50 * 4) *
                       *(int *)((long)local_78 + (long)local_54 * 4),
           local_64 * *(int *)((long)local_78 + (long)(iVar1 + 2) * 4) < 1000000))) {
      local_58 = iVar1 + 2;
      while ((iVar1 = local_54, local_58 < local_5c &&
             (local_68 = local_64 * *(int *)((long)local_78 + (long)local_58 * 4),
             local_68 < 1000000))) {
        lVar2 = (long)local_60;
        local_60 = local_60 + 1;
        *(int *)((long)local_80 + lVar2 * 4) = local_68;
        local_58 = local_58 + 1;
      }
    }
    local_50 = local_50 + 1;
  }
  _qsort(local_80,(long)local_60,4,(int *)_compare);
  local_50 = 0;
  while (*(int *)((long)local_80 + (long)local_50 * 4) < 1000) {
    _printf("%3d ");
    if ((local_50 + 1) % 0xf == 0) {
      _printf("\n");
    }
    local_50 = local_50 + 1;
  }
  _printf("\nSphenic triplets less than 10,000:\n");
  local_84 = 0;
  local_8c = 0;
  for (local_50 = 0; local_50 < local_60 + -2; local_50 = local_50 + 1) {
    local_88 = *(int *)((long)local_80 + (long)local_50 * 4);
    if ((*(int *)((long)local_80 + (long)(local_50 + 1) * 4) == local_88 + 1) &&
       (*(int *)((long)local_80 + (long)(local_50 + 2) * 4) == local_88 + 2)) {
      local_84 = local_84 + 1;
      if ((local_88 < 0x270e) && (_printf("[%d, %d, %d] "), local_84 % 3 == 0)) {
        _printf("\n");
      }
      if (local_84 == 5000) {
        local_8c = local_88;
      }
    }
  }
  _setlocale(4,"");
  _printf("\nThere are %\'d sphenic numbers less than 1,000,000.\n");
  _printf("There are %\'d sphenic triplets less than 1,000,000.\n");
  local_88 = *(undefined4 *)((long)local_80 + 0xc34fc);
  local_90 = 0;
  _primeFactors(local_88,auStack_40,&local_90);
  _printf("The 200,000th sphenic number is %\'d (");
  for (local_50 = 0; local_50 < local_90; local_50 = local_50 + 1) {
    _printf("%d");
    if (local_50 < local_90 + -1) {
      _printf("*");
    }
  }
  _printf(").\n");
  _printf("The 5,000th sphenic triplet is [%d, %d, %d].\n");
  _free(local_70);
  _free(local_78);
  _free(local_80);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003df8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



void _cbrt(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cbrt_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e28. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004038)();
  return;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004040)();
  return;
}


