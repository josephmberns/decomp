#include "factors-of-an-integer-2.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _sieve(void)

{
  long lVar1;
  int local_18;
  int local_14;
  
  _memset(&_bits,1,0x10000);
  DAT_100008001 = 0;
  _bits = 0;
  for (local_14 = 0; local_14 < 0x100; local_14 = local_14 + 1) {
    if ((&_bits)[local_14] != '\0') {
      for (local_18 = local_14 * local_14; local_18 < 0x10000; local_18 = local_18 + local_14) {
        (&_bits)[local_18] = 0;
      }
    }
  }
  local_18 = 0;
  for (local_14 = 0; local_14 < 0x10000; local_14 = local_14 + 1) {
    if ((&_bits)[local_14] != '\0') {
      lVar1 = (long)local_18;
      local_18 = local_18 + 1;
      *(long *)(&_primes + lVar1 * 8) = (long)local_14;
    }
  }
  __n_primes = (long)local_18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _get_prime_factors(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int local_30;
  int local_2c;
  long local_20;
  ulong local_18;
  ulong local_8;
  
  local_2c = 0;
  local_18 = 0;
  local_8 = param_1;
  while ((local_18 < __n_primes &&
         (uVar2 = *(ulong *)(&_primes + local_18 * 8),
         uVar2 * uVar2 < local_8 || uVar2 * uVar2 - local_8 == 0))) {
    local_20 = 0;
    while( true ) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = local_8 / uVar2;
      }
      if (local_8 != uVar1 * uVar2) break;
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = local_8 / uVar2;
      }
      local_20 = local_20 + 1;
      local_8 = uVar1;
    }
    if (local_20 != 0) {
      *(ulong *)(param_2 + (long)local_2c * 0x10) = uVar2;
      lVar3 = (long)local_2c;
      local_2c = local_2c + 1;
      *(long *)(param_2 + lVar3 * 0x10 + 8) = local_20;
    }
    local_18 = local_18 + 1;
  }
  if (local_8 == 1) {
    local_30 = local_2c;
  }
  else {
    *(ulong *)(param_2 + (long)local_2c * 0x10) = local_8;
    *(undefined8 *)(param_2 + (long)local_2c * 0x10 + 8) = 1;
    local_30 = local_2c + 1;
  }
  return local_30;
}



uint _ulong_cmp(ulong *param_1,ulong *param_2)

{
  undefined4 local_14;
  
  if (*param_1 < *param_2) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = (uint)(*param_2 < *param_1);
  }
  return local_14;
}



int _get_factors(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_694;
  int local_690;
  int local_68c;
  int local_688;
  int local_680;
  ulong auStack_668 [200];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  iVar2 = _get_prime_factors(param_1,auStack_668);
  *param_2 = 1;
  local_680 = 1;
  for (local_688 = 0; iVar1 = local_680, local_688 < iVar2; local_688 = local_688 + 1) {
    local_68c = 0;
    local_694 = (int)auStack_668[(long)local_688 * 2];
    for (; (ulong)(long)local_68c < auStack_668[(long)local_688 * 2 + 1]; local_68c = local_68c + 1)
    {
      for (local_690 = 0; local_690 < iVar1; local_690 = local_690 + 1) {
        lVar3 = (long)local_680;
        local_680 = local_680 + 1;
        param_2[lVar3] = param_2[local_690] * (long)local_694;
      }
      local_694 = local_694 * (int)auStack_668[(long)local_688 * 2];
    }
  }
  _qsort(param_2,(long)local_680,8,(int *)_ulong_cmp);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_680;
}



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iStack_138e0;
  int iStack_138dc;
  undefined8 auStack_138d0 [5];
  undefined auStack_138a8 [80008];
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar4 = *(long *)PTR____stack_chk_guard_100004010;
  auStack_138d0[1] = 0x78;
  auStack_138d0[0] = 3;
  auStack_138d0[3] = 0xd021fd10;
  auStack_138d0[2] = 0x400;
  uVar3 = _sieve();
  for (iStack_138dc = 0; iStack_138dc < 4; iStack_138dc = iStack_138dc + 1) {
    iVar1 = _get_factors(auStack_138d0[iStack_138dc],auStack_138a8);
    _printf("%lu:");
    for (iStack_138e0 = 0; iStack_138e0 < iVar1; iStack_138e0 = iStack_138e0 + 1) {
      _printf(" %lu");
    }
    uVar2 = _printf("\n");
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != lVar4) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar3);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004018)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004028)();
  return;
}


