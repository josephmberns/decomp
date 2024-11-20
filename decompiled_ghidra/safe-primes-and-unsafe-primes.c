#include "safe-primes-and-unsafe-primes.h"



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
    for (local_c = 0; local_c < 0x43; local_c = local_c + 1) {
      if (param_1 == *(int *)(&_primes + (long)(int)local_c * 4)) {
        return 1;
      }
      iVar1 = *(int *)(&_primes + (long)(int)local_c * 4);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = param_1 / iVar1;
      }
      if (param_1 == iVar2 * iVar1) {
        return 0;
      }
      if (param_1 < *(int *)(&_primes + (long)(int)local_c * 4) *
                    *(int *)(&_primes + (long)(int)local_c * 4)) {
        return 1;
      }
    }
    for (local_c = DAT_100008108 + 2; (int)(local_c * local_c) <= param_1; local_c = local_c + 2) {
      iVar1 = 0;
      if (local_c != 0) {
        iVar1 = param_1 / (int)local_c;
      }
      if (param_1 == iVar1 * local_c) {
        return 0;
      }
    }
    local_1 = 1;
  }
  return local_1;
}



undefined8 entry(void)

{
  ulong uVar1;
  int local_24;
  int local_20;
  
  local_24 = 0;
  _printf("First 35 safe primes:\n");
  for (local_20 = 2; local_20 < 1000000; local_20 = local_20 + 1) {
    uVar1 = _isPrime(local_20);
    if (((uVar1 & 1) != 0) && (uVar1 = _isPrime((local_20 + -1) / 2), (uVar1 & 1) != 0)) {
      if (local_24 < 0x23) {
        _printf("%d ");
      }
      local_24 = local_24 + 1;
    }
  }
  _printf("\nThere are  %d safe primes below  %d\n");
  for (local_20 = 1000000; local_20 < 10000000; local_20 = local_20 + 1) {
    uVar1 = _isPrime(local_20);
    if ((uVar1 & 1) != 0) {
      _isPrime((local_20 + -1) / 2);
    }
  }
  _printf("There are %d safe primes below %d\n");
  local_24 = 0;
  _printf("\nFirst 40 unsafe primes:\n");
  for (local_20 = 2; local_20 < 1000000; local_20 = local_20 + 1) {
    uVar1 = _isPrime(local_20);
    if (((uVar1 & 1) != 0) && (uVar1 = _isPrime((local_20 + -1) / 2), (uVar1 & 1) == 0)) {
      if (local_24 < 0x28) {
        _printf("%d ");
      }
      local_24 = local_24 + 1;
    }
  }
  _printf("\nThere are  %d unsafe primes below  %d\n");
  for (local_20 = 1000000; local_20 < 10000000; local_20 = local_20 + 1) {
    uVar1 = _isPrime(local_20);
    if ((uVar1 & 1) != 0) {
      _isPrime((local_20 + -1) / 2);
    }
  }
  _printf("There are %d unsafe primes below %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


