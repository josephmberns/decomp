#include "successive-prime-differences.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined _isPrime(int param_1)

{
  long lVar1;
  long lVar2;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (__primeSize <= local_10) {
      return 1;
    }
    lVar2 = *(long *)(&_PRIMES + local_10 * 8);
    if (param_1 == lVar2) break;
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = (long)param_1 / lVar2;
    }
    if ((long)param_1 == lVar1 * lVar2) {
      return 0;
    }
    if (lVar2 * lVar2 - (long)param_1 != 0 && (long)param_1 <= lVar2 * lVar2) {
      return 1;
    }
    local_10 = local_10 + 1;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _initialize(void)

{
  long lVar1;
  ulong uVar2;
  int local_14;
  
  lVar1 = __primeSize * 8;
  __primeSize = __primeSize + 1;
  *(undefined8 *)(&_PRIMES + lVar1) = 2;
  lVar1 = __primeSize * 8;
  __primeSize = __primeSize + 1;
  *(undefined8 *)(&_PRIMES + lVar1) = 3;
  lVar1 = __primeSize * 8;
  __primeSize = __primeSize + 1;
  *(undefined8 *)(&_PRIMES + lVar1) = 5;
  lVar1 = __primeSize * 8;
  __primeSize = __primeSize + 1;
  *(undefined8 *)(&_PRIMES + lVar1) = 7;
  lVar1 = __primeSize * 8;
  __primeSize = __primeSize + 1;
  *(undefined8 *)(&_PRIMES + lVar1) = 0xb;
  lVar1 = __primeSize * 8;
  __primeSize = __primeSize + 1;
  *(undefined8 *)(&_PRIMES + lVar1) = 0xd;
  lVar1 = __primeSize * 8;
  __primeSize = __primeSize + 1;
  *(undefined8 *)(&_PRIMES + lVar1) = 0x11;
  lVar1 = __primeSize * 8;
  __primeSize = __primeSize + 1;
  *(undefined8 *)(&_PRIMES + lVar1) = 0x13;
  local_14 = 0x15;
  while (__primeSize < 100000) {
    uVar2 = _isPrime(local_14);
    if ((uVar2 & 1) != 0) {
      lVar1 = __primeSize * 8;
      __primeSize = __primeSize + 1;
      *(long *)(&_PRIMES + lVar1) = (long)local_14;
    }
    if ((__primeSize < 100000) && (uVar2 = _isPrime(local_14 + 2), (uVar2 & 1) != 0)) {
      lVar1 = __primeSize * 8;
      __primeSize = __primeSize + 1;
      *(long *)(&_PRIMES + lVar1) = (long)(local_14 + 2);
    }
    local_14 = local_14 + 4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _diff1(long param_1)

{
  int iVar1;
  long lVar2;
  ulong local_50;
  long local_30;
  long local_20;
  
  local_30 = 0;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    local_20 = __PRIMES;
    for (local_50 = 1;
        (local_50 < 100000 && (lVar2 = *(long *)(&_PRIMES + local_50 * 8), lVar2 < 0xf4241));
        local_50 = local_50 + 1) {
      if ((lVar2 - local_20 == param_1) && (local_30 == 0)) {
        local_30 = local_20;
      }
      local_20 = lVar2;
    }
    iVar1 = _printf("%ld|%d|%lld %lld|%lld %lld|\n");
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong _diff2(ulong param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *local_80;
  long local_78;
  ulong local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_80 = (undefined *)&local_d0;
  local_40 = 0;
  local_78 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_30 = __PRIMES;
    local_28 = _DAT_100008010;
    for (local_70 = 2; lVar1 = local_30, lVar3 = local_28, local_70 < 100000;
        local_70 = local_70 + 1) {
      local_38 = local_30;
      local_30 = local_28;
      lVar3 = *(long *)(&_PRIMES + local_70 * 8);
      if (1000000 < lVar3) break;
      if ((local_28 - lVar1 == param_1) && (lVar3 - local_28 == param_2)) {
        local_78 = local_78 + 1;
        if (local_40 == 0) {
          local_40 = lVar1;
          local_48 = local_28;
          local_50 = lVar3;
        }
        local_58 = lVar1;
        local_60 = local_28;
        local_68 = lVar3;
      }
      local_28 = lVar3;
    }
    local_28 = lVar3;
    local_c0 = local_78;
    local_b8 = local_40;
    local_b0 = local_48;
    local_a8 = local_50;
    local_a0 = local_58;
    local_98 = local_60;
    local_90 = local_68;
    local_d0 = param_1;
    local_c8 = param_2;
    local_20 = param_2;
    local_18 = param_1;
    uVar2 = _printf("%d %d|%d|%lld %lld %lld|%lld %lld %lld|\n");
    param_1 = (ulong)uVar2;
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong _diff3(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  ulong local_28;
  
  local_b0 = (undefined *)&local_110;
  local_60 = 0;
  local_a8 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_50 = __PRIMES;
    local_48 = _DAT_100008010;
    local_40 = _DAT_100008018;
    for (local_a0 = 3; lVar2 = local_48, lVar1 = local_50, lVar4 = local_40, local_a0 < 100000;
        local_a0 = local_a0 + 1) {
      local_58 = local_50;
      local_50 = local_48;
      local_48 = local_40;
      lVar4 = *(long *)(&_PRIMES + local_a0 * 8);
      if (1000000 < lVar4) break;
      if (((lVar2 - lVar1 == param_1) && (local_40 - lVar2 == param_2)) &&
         (lVar4 - local_40 == param_3)) {
        local_a8 = local_a8 + 1;
        if (local_60 == 0) {
          local_60 = lVar1;
          local_68 = lVar2;
          local_70 = local_40;
          local_78 = lVar4;
        }
        local_80 = lVar1;
        local_88 = lVar2;
        local_90 = local_40;
        local_98 = lVar4;
      }
      local_40 = lVar4;
    }
    local_40 = lVar4;
    local_f8 = local_a8;
    local_f0 = local_60;
    local_e8 = local_68;
    local_e0 = local_70;
    local_d8 = local_78;
    local_d0 = local_80;
    local_c8 = local_88;
    local_c0 = local_90;
    local_b8 = local_98;
    local_110 = param_1;
    local_108 = param_2;
    local_100 = param_3;
    local_38 = param_3;
    local_30 = param_2;
    local_28 = param_1;
    uVar3 = _printf("%d %d %d|%d|%lld %lld %lld %lld|%lld %lld %lld %lld|\n");
    param_1 = (ulong)uVar3;
  }
  return param_1;
}



undefined4 entry(void)

{
  _initialize();
  _printf("differences|count|first group|last group\n");
  _diff1();
  _diff1(1);
  _diff2(2);
  _diff2(2);
  _diff2(4,2);
  _diff3(6,4,2);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


