#include "summarize-primes.h"



bool _is_prime(int param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  bool local_1;
  
  local_c = 5;
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
    local_1 = true;
  }
  return local_1;
}



undefined8 entry(void)

{
  ulong uVar1;
  int local_2c;
  int local_20;
  
  local_20 = 0;
  for (local_2c = 1; local_2c < 1000; local_2c = local_2c + 1) {
    uVar1 = _is_prime(local_2c);
    if ((uVar1 & 1) != 0) {
      local_20 = local_20 + local_2c;
      uVar1 = _is_prime(local_20);
      if ((uVar1 & 1) != 0) {
        _printf("The sum of %3d primes in [2, %3d] is %5d which is also prime\n");
      }
    }
  }
  _printf("There are %d summerized primes in [%d, %d)\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


