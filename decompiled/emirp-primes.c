#include "emirp-primes.h"



undefined4 _is_prime(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_c;
  
  if ((param_1 % 2 != 0) && (param_1 % 3 != 0)) {
    local_c = 1;
    do {
      if (param_1 <= local_c * local_c) {
        return 1;
      }
      uVar1 = local_c + 4;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_1 / uVar1;
      }
      if (param_1 == uVar2 * uVar1) {
        return 0;
      }
      local_c = local_c + 6;
      uVar1 = 0;
      if (local_c != 0) {
        uVar1 = param_1 / local_c;
      }
    } while (param_1 != uVar1 * local_c);
  }
  return 0;
}



int _reverse(uint param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  for (local_4 = param_1; local_4 != 0; local_4 = local_4 / 10) {
    local_8 = local_8 * 10 + local_4 % 10;
  }
  return local_8;
}



bool _is_emirp(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _reverse(param_1);
  bVar1 = false;
  if (iVar2 != param_1) {
    iVar3 = _is_prime(param_1);
    bVar1 = false;
    if (iVar3 != 0) {
      iVar2 = _is_prime(iVar2);
      bVar1 = iVar2 != 0;
    }
  }
  return bVar1;
}



undefined8 entry(int param_1)

{
  int iVar1;
  uint local_28;
  uint local_24;
  
  local_28 = 0;
  if (param_1 == 1) {
    local_24 = 0xb;
    while (local_28 < 0x14) {
      iVar1 = _is_emirp(local_24);
      if (iVar1 != 0) {
        _printf(" %u");
        local_28 = local_28 + 1;
      }
      local_24 = local_24 + 2;
    }
  }
  else if (param_1 == 2) {
    for (local_24 = 0x1e15; local_24 < 8000; local_24 = local_24 + 2) {
      iVar1 = _is_emirp(local_24);
      if (iVar1 != 0) {
        _printf(" %u");
      }
    }
  }
  else {
    local_24 = 0xb;
    while ((iVar1 = _is_emirp(local_24), iVar1 == 0 || (local_28 = local_28 + 1, local_28 != 10000))
          ) {
      local_24 = local_24 + 2;
    }
    _printf("%u");
  }
  _putchar(10);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


