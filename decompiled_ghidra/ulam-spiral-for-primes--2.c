#include "ulam-spiral-for-primes--2.h"



bool _isprime(int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 2;
  while( true ) {
    if (param_1 < local_c * local_c) {
      return 2 < param_1;
    }
    iVar1 = 0;
    if (local_c != 0) {
      iVar1 = param_1 / local_c;
    }
    if (param_1 == iVar1 * local_c) break;
    local_c = local_c + 1;
  }
  return false;
}



int _spiral(int param_1,int param_2,int param_3,int param_4)

{
  int local_24;
  
  local_24 = param_3;
  if (param_4 != 0) {
    local_24 = _spiral(param_2 + -1,param_1,param_4 + -1,(param_1 - param_3) + -1);
    local_24 = param_1 + local_24;
  }
  return local_24;
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_2c = 0x32;
  local_30 = 0x32;
  local_34 = 1;
  if (1 < param_1) {
    local_2c = _atoi(*(char **)(param_2 + 8));
    if (local_2c < 1) {
      local_2c = 0x32;
    }
  }
  if (2 < param_1) {
    local_30 = _atoi(*(char **)(param_2 + 0x10));
    if (local_30 < 1) {
      local_30 = local_2c;
    }
  }
  if (3 < param_1) {
    local_34 = _atoi(*(char **)(param_2 + 0x18));
    if (local_34 < 1) {
      local_34 = 1;
    }
  }
  for (local_24 = 0; local_24 < local_30; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < local_2c; local_28 = local_28 + 1) {
      iVar1 = _spiral(local_2c,local_30,local_28,local_24);
      iVar1 = _isprime((local_2c * local_30 + local_34 + -1) - iVar1);
      _putchar((int)" #"[iVar1]);
    }
    _putchar(10);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


