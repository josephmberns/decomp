#include "motzkin-numbers.h"



bool _is_prime(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_18;
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
  else {
    for (local_18 = 5; local_18 * local_18 < param_1 || local_18 * local_18 - param_1 == 0;
        local_18 = local_18 + 6) {
      uVar1 = 0;
      if (local_18 != 0) {
        uVar1 = param_1 / local_18;
      }
      if (param_1 == uVar1 * local_18) {
        return false;
      }
      uVar1 = local_18 + 2;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_1 / uVar1;
      }
      if (param_1 == uVar2 * uVar1) {
        return false;
      }
    }
    local_1 = true;
  }
  return local_1;
}



undefined4 entry(void)

{
  ulong local_40;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  
  _setlocale(0,"");
  _printf(" n          M(n)             Prime?\n");
  _printf("-----------------------------------\n");
  local_20 = 1;
  local_28 = 1;
  for (local_30 = 0; local_30 < 0x2a; local_30 = local_30 + 1) {
    if (local_30 < 2) {
      local_40 = 1;
    }
    else {
      local_40 = 0;
      if (local_30 + 2 != 0) {
        local_40 = (local_28 * (local_30 * 2 + 1) + local_20 * (local_30 * 3 + -3)) / (local_30 + 2)
        ;
      }
    }
    _is_prime(local_40);
    _printf("%2llu%\'25llu  %s\n");
    local_20 = local_28;
    local_28 = local_40;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004008)();
  return;
}


