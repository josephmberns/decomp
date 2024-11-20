#include "attractive-numbers.h"



bool _is_prime(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_c;
  
  local_c = 5;
  if (param_1 < 2) {
    bVar3 = false;
  }
  else if (param_1 % 2 == 0) {
    bVar3 = param_1 == 2;
  }
  else if (param_1 % 3 == 0) {
    bVar3 = param_1 == 3;
  }
  else {
    for (; local_c * local_c <= param_1; local_c = local_c + 6) {
      iVar1 = 0;
      if (local_c != 0) {
        iVar1 = param_1 / local_c;
      }
      if (param_1 == iVar1 * local_c) {
        return false;
      }
      iVar1 = local_c + 2;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = param_1 / iVar1;
      }
      if (param_1 == iVar2 * iVar1) {
        return false;
      }
    }
    bVar3 = true;
  }
  return bVar3;
}



int _count_prime_factors(int param_1)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0;
  local_20 = 2;
  if (param_1 == 1) {
    local_14 = 0;
  }
  else {
    iVar1 = _is_prime(param_1);
    local_18 = param_1;
    if (iVar1 == 0) {
      while( true ) {
        while( true ) {
          iVar1 = 0;
          if (local_20 != 0) {
            iVar1 = local_18 / local_20;
          }
          if (local_18 == iVar1 * local_20) break;
          if (local_20 < 3) {
            local_20 = 3;
          }
          else {
            local_20 = local_20 + 2;
          }
        }
        local_1c = local_1c + 1;
        iVar1 = 0;
        if (local_20 != 0) {
          iVar1 = local_18 / local_20;
        }
        local_14 = local_1c;
        if (iVar1 == 1) break;
        iVar2 = _is_prime(iVar1);
        local_18 = iVar1;
        if (iVar2 != 0) {
          local_20 = iVar1;
        }
      }
    }
    else {
      local_14 = 1;
    }
  }
  return local_14;
}



undefined8 entry(void)

{
  undefined4 uVar1;
  int iVar2;
  int local_20;
  int local_18;
  
  local_20 = 0;
  _printf("The attractive numbers up to and including %d are:\n");
  for (local_18 = 1; local_18 < 0x79; local_18 = local_18 + 1) {
    uVar1 = _count_prime_factors(local_18);
    iVar2 = _is_prime(uVar1);
    if (iVar2 != 0) {
      _printf("%4d");
      local_20 = local_20 + 1;
      if (local_20 % 0x14 == 0) {
        _printf("\n");
      }
    }
  }
  _printf("\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


