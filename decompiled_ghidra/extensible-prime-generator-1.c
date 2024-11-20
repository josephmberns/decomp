#include "extensible-prime-generator-1.h"



void _push(long *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  
  if (*(uint *)(param_1 + 1) <= *(uint *)((long)param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 1) = iVar1 << 1;
    if (iVar1 << 1 == 0) {
      *(undefined4 *)(param_1 + 1) = 0x10;
    }
    pvVar3 = _realloc((void *)*param_1,(ulong)*(uint *)(param_1 + 1) * 4);
    *param_1 = (long)pvVar3;
  }
  uVar2 = *(uint *)((long)param_1 + 0xc);
  *(uint *)((long)param_1 + 0xc) = uVar2 + 1;
  *(undefined4 *)(*param_1 + (ulong)uVar2 * 4) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _init(void)

{
  long lVar1;
  uint uStack_10030;
  uint uStack_1002c;
  char acStack_10028 [65544];
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar1 = *(long *)PTR____stack_chk_guard_100004010;
  _bzero(acStack_10028,0x10000);
  _push(&_primes,2);
  _push(&_offset,0);
  for (uStack_1002c = 3; uStack_1002c < 0x10000; uStack_1002c = uStack_1002c + 2) {
    if (acStack_10028[uStack_1002c] == '\0') {
      for (uStack_10030 = uStack_1002c * uStack_1002c; uStack_10030 < 0x10000;
          uStack_10030 = uStack_10030 + uStack_1002c * 2) {
        acStack_10028[uStack_10030] = '\x01';
      }
      _push(&_primes,uStack_1002c);
      _push(&_offset,uStack_10030);
    }
  }
  __low = 0x10000;
  if (*(long *)PTR____stack_chk_guard_100004010 == lVar1) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _sieve(void)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (__low == 0) {
    _init();
  }
  _bzero(&_field,0x8000);
  uVar1 = __low + 0x80000;
  dVar3 = (double)NEON_ucvtf((ulong)uVar1);
  dVar3 = (double)NEON_fmadd(SQRT(dVar3),0x4000000000000000,0x3ff0000000000000);
  local_14 = 1;
  while (uVar2 = *(int *)(__primes + (ulong)local_14 * 4) * 2, uVar2 < (uint)(int)dVar3) {
    for (local_1c = *(int *)(__offset + (ulong)local_14 * 4) - __low; local_1c < 0x80000;
        local_1c = local_1c + uVar2) {
      *(uint *)(&_field + (ulong)(local_1c >> 6) * 4) =
           *(uint *)(&_field + (ulong)(local_1c >> 6) * 4) | 1 << (ulong)(local_1c >> 1 & 0x1f);
    }
    *(uint *)(__offset + (ulong)local_14 * 4) = local_1c + __low;
    local_14 = local_14 + 1;
  }
  for (local_18 = 1; local_18 < 0x80000; local_18 = local_18 + 2) {
    if ((*(uint *)(&_field + (ulong)(local_18 >> 6) * 4) & 1 << (ulong)(local_18 >> 1 & 0x1f)) == 0)
    {
      _push(&_primes,__low + local_18);
    }
  }
  __low = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  uint local_20;
  uint local_18;
  
  while (_DAT_100010024 < 0x14) {
    _sieve();
  }
  _printf("First 20:");
  for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
    _printf(" %u");
  }
  uVar1 = _putchar(10);
  uVar2 = (ulong)uVar1;
  while (*(uint *)(__primes + (ulong)(_DAT_100010024 - 1) * 4) < 0x96) {
    uVar2 = _sieve(uVar2);
  }
  _printf("Between 100 and 150:");
  for (local_18 = 0; local_18 < _DAT_100010024; local_18 = local_18 + 1) {
    uVar1 = *(uint *)(__primes + (ulong)local_18 * 4);
    if ((99 < uVar1) && (uVar1 < 0x96)) {
      _printf(" %u");
    }
  }
  uVar1 = _putchar(10);
  uVar2 = (ulong)uVar1;
  while (*(uint *)(__primes + (ulong)(_DAT_100010024 - 1) * 4) < 8000) {
    uVar2 = _sieve(uVar2);
  }
  for (local_18 = 0; local_18 < _DAT_100010024; local_18 = local_18 + 1) {
  }
  uVar1 = _printf("%u primes between 7700 and 8000\n");
  for (local_20 = 10; uVar2 = (ulong)uVar1, local_20 < 0x5f5e101; local_20 = local_20 * 10) {
    while (_DAT_100010024 < local_20) {
      uVar2 = _sieve(uVar2);
    }
    uVar1 = _printf("%uth prime: %u\n");
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004028)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004030)();
  return pvVar1;
}


