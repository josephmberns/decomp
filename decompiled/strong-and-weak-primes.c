#include "strong-and-weak-primes.h"



undefined _isPrime(int param_1)

{
  int iVar1;
  int iVar2;
  uint local_c;
  undefined local_1;
  
  if (param_1 < 2) {
    local_1 = 0;
  }
  else {
    for (local_c = 0; local_c < 0x1bf; local_c = local_c + 1) {
      if (param_1 == *(int *)(&_PRIMES + (long)(int)local_c * 4)) {
        return 1;
      }
      iVar1 = *(int *)(&_PRIMES + (long)(int)local_c * 4);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = param_1 / iVar1;
      }
      if (param_1 == iVar2 * iVar1) {
        return 0;
      }
      if (param_1 < *(int *)(&_PRIMES + (long)(int)local_c * 4) *
                    *(int *)(&_PRIMES + (long)(int)local_c * 4)) break;
    }
    local_1 = 1;
  }
  return local_1;
}



undefined4 entry(void)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  int local_20;
  uint local_1c;
  
  pvVar1 = _calloc(700000,4);
  if (pvVar1 == (void *)0x0) {
    return 1;
  }
  for (local_1c = 0; local_1c < 0x1bf; local_1c = local_1c + 1) {
    *(undefined4 *)((long)pvVar1 + (long)(int)local_1c * 4) =
         *(undefined4 *)(&_PRIMES + (long)(int)local_1c * 4);
  }
  local_1c = local_1c - 1;
  local_20 = *(int *)(&_PRIMES + (long)(int)local_1c * 4) + 4;
  while (local_20 < 0x9896e4) {
    uVar2 = _isPrime(local_20);
    if ((uVar2 & 1) != 0) {
      lVar3 = (long)(int)local_1c;
      local_1c = local_1c + 1;
      *(int *)((long)pvVar1 + lVar3 * 4) = local_20;
    }
    uVar2 = _isPrime(local_20 + 2);
    if ((uVar2 & 1) != 0) {
      lVar3 = (long)(int)local_1c;
      local_1c = local_1c + 1;
      *(int *)((long)pvVar1 + lVar3 * 4) = local_20 + 2;
    }
    local_20 = local_20 + 6;
    if (699999 < (int)local_1c) {
      _printf("Allocate more memory.");
      return 1;
    }
  }
  _printf("First 36 strong primes:");
  local_20 = 0;
  for (local_1c = 1; (int)local_1c < 699999; local_1c = local_1c + 1) {
    if (*(int *)((long)pvVar1 + (long)(int)(local_1c + -1) * 4) +
        *(int *)((long)pvVar1 + (long)(int)(local_1c + 1) * 4) <
        *(int *)((long)pvVar1 + (long)(int)local_1c * 4) * 2) {
      if (local_20 < 0x24) {
        _printf("  %d");
        local_20 = local_20 + 1;
      }
      if ((999999 < *(int *)((long)pvVar1 + (long)(int)local_1c * 4)) &&
         (9999999 < *(int *)((long)pvVar1 + (long)(int)local_1c * 4))) break;
    }
  }
  _printf("\nThere are %d strong primes below 1,000,000");
  _printf("\nThere are %d strong primes below 10,000,000\n\n");
  _printf("First 37 weak primes:");
  local_20 = 0;
  for (local_1c = 1; (int)local_1c < 699999; local_1c = local_1c + 1) {
    if (*(int *)((long)pvVar1 + (long)(int)local_1c * 4) * 2 <
        *(int *)((long)pvVar1 + (long)(int)(local_1c + -1) * 4) +
        *(int *)((long)pvVar1 + (long)(int)(local_1c + 1) * 4)) {
      if (local_20 < 0x25) {
        _printf("  %d");
        local_20 = local_20 + 1;
      }
      if ((999999 < *(int *)((long)pvVar1 + (long)(int)local_1c * 4)) &&
         (9999999 < *(int *)((long)pvVar1 + (long)(int)local_1c * 4))) break;
    }
  }
  _printf("\nThere are %d weak primes below 1,000,000");
  _printf("\nThere are %d weak primes below 10,000,000\n\n");
  _free(pvVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010000378c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003798. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001000037a4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


