#include "twin-primes.h"



bool _isPrime(long param_1)

{
  long lVar1;
  long local_18;
  bool local_1;
  
  if (param_1 < 2) {
    local_1 = false;
  }
  else if (param_1 % 2 == 0) {
    local_1 = param_1 == 2;
  }
  else if (param_1 % 3 == 0) {
    local_1 = param_1 == 3;
  }
  else if (param_1 % 5 == 0) {
    local_1 = param_1 == 5;
  }
  else if (param_1 % 7 == 0) {
    local_1 = param_1 == 7;
  }
  else if (param_1 % 0xb == 0) {
    local_1 = param_1 == 0xb;
  }
  else if (param_1 % 0xd == 0) {
    local_1 = param_1 == 0xd;
  }
  else if (param_1 % 0x11 == 0) {
    local_1 = param_1 == 0x11;
  }
  else if (param_1 % 0x13 == 0) {
    local_1 = param_1 == 0x13;
  }
  else {
    for (local_18 = 0x17; local_18 * local_18 - param_1 == 0 || local_18 * local_18 < param_1;
        local_18 = local_18 + 2) {
      lVar1 = 0;
      if (local_18 != 0) {
        lVar1 = param_1 / local_18;
      }
      if (param_1 == lVar1 * local_18) {
        return false;
      }
    }
    local_1 = true;
  }
  return local_1;
}



int _countTwinPrimes(int param_1)

{
  ulong uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_18;
  
  local_18 = 0;
  local_28 = 1;
  local_30 = 0;
  for (local_38 = 5; uVar1 = local_28, local_38 <= param_1; local_38 = local_38 + 1) {
    local_28 = local_30;
    local_30 = _isPrime(local_38);
    local_30 = local_30 & 1;
    if ((uVar1 != 0) && (local_30 != 0)) {
      local_18 = local_18 + 1;
    }
  }
  return local_18;
}



int _test(undefined4 param_1)

{
  int iVar1;
  
  _countTwinPrimes(param_1);
  iVar1 = _printf("Number of twin prime pairs less than %d is %d\n");
  return iVar1;
}



undefined4 entry(void)

{
  _test(10);
  _test(100);
  _test(1000);
  _test(10000);
  _test(100000);
  _test(1000000);
  _test(10000000);
  _test(100000000);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


