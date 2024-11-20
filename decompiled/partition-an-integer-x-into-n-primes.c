#include "partition-an-integer-x-into-n-primes.h"



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
    ___assert_rtn("bit_array_set","partition-an-integer-x-into-n-primes.c",0x1b,"index < b->size");
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
    ___assert_rtn("bit_array_get","partition-an-integer-x-into-n-primes.c",0x25,"index < b->size");
  }
  return (*(uint *)(*(long *)(param_1 + 2) + (ulong)(param_2 >> 5) * 4) &
         1 << (ulong)(param_2 & 0x1f)) != 0;
}



undefined _sieve_create(uint *param_1,uint param_2)

{
  ulong uVar1;
  uint local_2c;
  int local_28;
  undefined local_11;
  
  uVar1 = _bit_array_create(param_1 + 2,param_2 + 1);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    _bit_array_set(param_1 + 2,0,1);
    _bit_array_set(param_1 + 2,1,1);
    for (local_28 = 2; (uint)(local_28 * local_28) <= param_2; local_28 = local_28 + 1) {
      uVar1 = _bit_array_get(param_1 + 2,local_28);
      if ((uVar1 & 1) == 0) {
        for (local_2c = local_28 * local_28; local_2c <= param_2; local_2c = local_2c + local_28) {
          _bit_array_set(param_1 + 2,local_2c,1);
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
  
  if (*param_1 < param_2) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("is_prime","partition-an-integer-x-into-n-primes.c",0x43,"n <= s->limit");
  }
  uVar1 = _bit_array_get(param_1 + 2,param_2);
  return (uVar1 & 1) == 0;
}



undefined _find_prime_partition
                    (undefined8 param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  ulong uVar1;
  uint local_3c;
  undefined local_11;
  
  local_3c = param_4;
  if (param_3 == 1) {
    if ((param_2 < param_4) || (uVar1 = _is_prime(param_1,param_2), (uVar1 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      *param_5 = param_2;
      local_11 = 1;
    }
  }
  else {
    for (; local_3c < param_2; local_3c = local_3c + 1) {
      uVar1 = _is_prime(param_1,local_3c);
      if (((uVar1 & 1) != 0) &&
         (uVar1 = _find_prime_partition
                            (param_1,param_2 - local_3c,param_3 + -1,local_3c + 1,param_5 + 1),
         (uVar1 & 1) != 0)) {
        *param_5 = local_3c;
        return 1;
      }
    }
    local_11 = 0;
  }
  return local_11;
}



void _print_prime_partition(undefined8 param_1,undefined4 param_2,uint param_3)

{
  void *pvVar1;
  ulong uVar2;
  uint local_2c;
  
  if (param_3 == 0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("print_prime_partition","partition-an-integer-x-into-n-primes.c",0x5d,"count > 0")
    ;
  }
  pvVar1 = _malloc((ulong)param_3 << 2);
  if (pvVar1 == (void *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_100004008,"Out of memory\n");
  }
  else {
    uVar2 = _find_prime_partition(param_1,param_2,param_3,2,pvVar1);
    if ((uVar2 & 1) == 0) {
      _printf("%u cannot be partitioned into %u primes.\n");
    }
    else {
      _printf("%u = %u");
      for (local_2c = 1; local_2c < param_3; local_2c = local_2c + 1) {
        _printf(" + %u");
      }
      _printf("\n");
    }
    _free(pvVar1);
  }
  return;
}



bool entry(void)

{
  bool bVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 100000;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  uVar2 = _sieve_create(&local_30);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    _print_prime_partition(&local_30,0x185e1);
    _print_prime_partition(&local_30,0x12);
    _print_prime_partition(&local_30,0x13);
    _print_prime_partition(&local_30,0x14);
    _print_prime_partition(&local_30,0x7e1,0x18);
    _print_prime_partition(&local_30,0x58ab,1);
    _print_prime_partition(&local_30,0x58ab,2);
    _print_prime_partition(&local_30,0x58ab,3);
    _print_prime_partition(&local_30,0x58ab,4);
    _print_prime_partition(&local_30,0x9da3,3);
    _sieve_destroy(&local_30);
  }
  else {
    _fprintf(*(FILE **)PTR____stderrp_100004008,"Out of memory\n");
  }
  return !bVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


