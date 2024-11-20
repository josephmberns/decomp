#include "consecutive-primes-with-ascending-or-descending-differences.h"



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



void _longestSeq(long param_1,int param_2,byte param_3)

{
  int iVar1;
  long lVar2;
  int local_4c8;
  int local_4c4;
  int local_4c0;
  int local_4b8;
  int local_4b4;
  undefined4 local_49c [10];
  int local_474 [25];
  undefined4 local_410 [250];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_4c0 = 0;
  local_4c4 = 1;
  local_4c8 = 1;
  _bzero(local_410,1000);
  local_410[0] = 2;
  _memset(local_474,0,100);
  local_474[0] = 1;
  _memset(local_49c,0,0x28);
  local_49c[0] = 2;
  for (local_4b4 = 1; local_4b4 < param_2; local_4b4 = local_4b4 + 1) {
    iVar1 = *(int *)(param_1 + (long)local_4b4 * 4) - *(int *)(param_1 + (long)(local_4b4 + -1) * 4)
    ;
    if ((((param_3 & 1) == 0) || (local_4c0 < iVar1)) &&
       (((param_3 & 1) != 0 || (iVar1 < local_4c0)))) {
      lVar2 = (long)local_4c8;
      local_4c8 = local_4c8 + 1;
      local_49c[lVar2] = *(undefined4 *)(param_1 + (long)local_4b4 * 4);
    }
    else {
      if (local_474[0] < local_4c8) {
        ___memcpy_chk(local_410,local_49c,(long)local_4c8 << 2,1000);
        local_474[0] = local_4c8;
        local_4c4 = 1;
      }
      else if (local_4c8 == local_474[0]) {
        ___memcpy_chk(local_410 + (long)local_4c4 * 10,local_49c,(long)local_4c8 << 2,
                      0xffffffffffffffff);
        lVar2 = (long)local_4c4;
        local_4c4 = local_4c4 + 1;
        local_474[lVar2] = local_4c8;
      }
      local_49c[0] = *(undefined4 *)(param_1 + (long)(local_4b4 + -1) * 4);
      local_49c[1] = *(undefined4 *)(param_1 + (long)local_4b4 * 4);
      local_4c8 = 2;
    }
    local_4c0 = iVar1;
  }
  if (local_474[0] < local_4c8) {
    ___memcpy_chk(local_410,local_49c,(long)local_4c8 << 2,1000);
    local_474[0] = local_4c8;
    local_4c4 = 1;
  }
  else if (local_4c8 == local_474[0]) {
    ___memcpy_chk(local_410 + (long)local_4c4 * 10,local_49c,(long)local_4c8 << 2,0xffffffffffffffff
                 );
    lVar2 = (long)local_4c4;
    local_4c4 = local_4c4 + 1;
    local_474[lVar2] = local_4c8;
  }
  _printf("Longest run(s) of primes with %s differences is %d:\n");
  for (local_4b4 = 0; local_4b4 < local_4c4; local_4b4 = local_4b4 + 1) {
    for (local_4b8 = 0; local_4b8 < local_474[local_4b4] + -1; local_4b8 = local_4b8 + 1) {
      _printf("%d (%d) ");
    }
    _printf("%d\n");
  }
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined4 entry(void)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  int local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  pvVar1 = (void *)_sieve();
  for (local_1c = 0; local_1c < 999999; local_1c = local_1c + 1) {
    if ((*(byte *)((long)pvVar1 + (long)local_1c) & 1) == 0) {
      local_24 = local_24 + 1;
    }
  }
  pvVar2 = _malloc((long)local_24 << 2);
  local_20 = 0;
  for (local_1c = 0; local_1c < 999999; local_1c = local_1c + 1) {
    if ((*(byte *)((long)pvVar1 + (long)local_1c) & 1) == 0) {
      lVar3 = (long)local_20;
      local_20 = local_20 + 1;
      *(int *)((long)pvVar2 + lVar3 * 4) = local_1c;
    }
  }
  _free(pvVar1);
  _printf("For primes < 1 million:\n");
  _longestSeq(pvVar2,local_24,1);
  _longestSeq(pvVar2,local_24,0);
  _free(pvVar2);
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004038)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}


