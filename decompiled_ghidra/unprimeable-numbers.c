#include "unprimeable-numbers.h"



bool _bit_array_create(int *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = _calloc((ulong)((param_2 + 0x1fU) / 0x20),4);
  if (pvVar1 != (void *)0x0) {
    *param_1 = param_2;
    *(void **)(param_1 + 2) = pvVar1;
  }
  return pvVar1 != (void *)0x0;
}



void _bit_array_destroy(long param_1)

{
  _free(*(void **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



void _bit_array_set(uint *param_1,uint param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if (*param_1 <= param_2) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("bit_array_set","unprimeable-numbers.c",0x1c,"index < b->size");
  }
  puVar1 = (uint *)(*(long *)(param_1 + 2) + (ulong)(param_2 >> 5) * 4);
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  if ((param_3 & 1) == 0) {
    *puVar1 = *puVar1 & (uVar2 ^ 0xffffffff);
  }
  else {
    *puVar1 = *puVar1 | uVar2;
  }
  return;
}



bool _bit_array_get(uint *param_1,uint param_2)

{
  if (*param_1 <= param_2) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("bit_array_get","unprimeable-numbers.c",0x26,"index < b->size");
  }
  return (*(uint *)(*(long *)(param_1 + 2) + (ulong)(param_2 >> 5) * 4) &
         1 << (ulong)(param_2 & 0x1f)) != 0;
}



undefined _sieve_create(uint *param_1,uint param_2)

{
  ulong uVar1;
  uint local_30;
  uint local_28;
  undefined local_11;
  
  uVar1 = _bit_array_create(param_1 + 2,param_2 / 2);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    for (local_28 = 3; local_28 * local_28 <= param_2; local_28 = local_28 + 2) {
      uVar1 = _bit_array_get(param_1 + 2,local_28 / 2 - 1);
      if ((uVar1 & 1) == 0) {
        for (local_30 = local_28 * local_28; local_30 <= param_2; local_30 = local_30 + local_28 * 2
            ) {
          _bit_array_set(param_1 + 2,local_30 / 2 - 1,1);
        }
      }
    }
    *param_1 = param_2;
    local_11 = 1;
  }
  return local_11;
}



void _sieve_destroy(long param_1)

{
  _bit_array_destroy(param_1 + 8);
  return;
}



bool _is_prime(uint *param_1,uint param_2)

{
  ulong uVar1;
  bool local_11;
  
  if (param_2 <= *param_1) {
    if (param_2 == 2) {
      local_11 = true;
    }
    else if ((param_2 < 2) || (param_2 % 2 == 0)) {
      local_11 = false;
    }
    else {
      uVar1 = _bit_array_get(param_1 + 2,param_2 / 2 - 1);
      local_11 = (uVar1 & 1) == 0;
    }
    return local_11;
  }
                    // WARNING: Subroutine does not return
  ___assert_rtn("is_prime","unprimeable-numbers.c",0x44,"n <= s->limit");
}



int _count_digits(uint param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  for (local_4 = param_1; local_4 != 0; local_4 = local_4 / 10) {
    local_8 = local_8 + 1;
  }
  return local_8;
}



int _change_digit(uint param_1,int param_2,int param_3)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 1;
  local_14 = 0;
  local_4 = param_1;
  for (local_8 = param_2; local_8 != 0; local_8 = local_8 + -1) {
    local_14 = local_14 + local_10 * (local_4 % 10);
    local_10 = local_10 * 10;
    local_4 = local_4 / 10;
  }
  return local_14 + ((local_4 / 10) * 10 + param_3) * local_10;
}



undefined _unprimeable(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint local_30;
  uint local_2c;
  undefined local_11;
  
  uVar3 = _is_prime(param_1,param_2);
  if ((uVar3 & 1) == 0) {
    uVar1 = _count_digits(param_2);
    for (local_2c = 0; local_2c < uVar1; local_2c = local_2c + 1) {
      for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
        iVar2 = _change_digit(param_2,local_2c,local_30);
        if ((iVar2 != param_2) && (uVar3 = _is_prime(param_1,iVar2), (uVar3 & 1) != 0)) {
          return 0;
        }
      }
    }
    local_11 = 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}



undefined4 entry(void)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  uint local_74;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  uint auStack_40 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_44 = 0;
  local_48 = 10000000;
  _setlocale(0,"");
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar3 = _sieve_create(&local_60,10000000);
  if ((uVar3 & 1) == 0) {
    uVar2 = _fprintf(*(FILE **)PTR____stderrp_100004018,"Out of memory\n");
    uVar3 = (ulong)uVar2;
    local_44 = 1;
  }
  else {
    _printf("First 35 unprimeable numbers:\n");
    local_64 = 100;
    _memset(auStack_40,0,0x28);
    local_68 = 0;
    local_6c = 0;
    while( true ) {
      bVar1 = false;
      if (local_64 < 10000000) {
        bVar1 = local_6c < 10 || local_68 < 600;
      }
      if (!bVar1) break;
      uVar3 = _unprimeable(&local_60,local_64);
      if ((uVar3 & 1) != 0) {
        if (local_68 < 0x23) {
          if (local_68 != 0) {
            _printf(", ");
          }
          _printf("%\'u");
        }
        local_68 = local_68 + 1;
        if (local_68 == 600) {
          _printf("\n600th unprimeable number: %\'u\n");
        }
        if (auStack_40[local_64 % 10] == 0) {
          auStack_40[local_64 % 10] = local_64;
          local_6c = local_6c + 1;
        }
      }
      local_64 = local_64 + 1;
    }
    uVar3 = _sieve_destroy(&local_60);
    for (local_74 = 0; local_74 < 10; local_74 = local_74 + 1) {
      uVar2 = _printf("Least unprimeable number ending in %u: %\'u\n");
      uVar3 = (ulong)uVar2;
    }
    local_44 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return local_44;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar3);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004038)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004048)();
  return;
}


