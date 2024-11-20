#include "anti-primes.h"



int _countDivisors(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  if (param_1 < 2) {
    local_4 = 1;
  }
  else {
    local_10 = 2;
    for (local_c = 2; local_c <= param_1 / 2; local_c = local_c + 1) {
      iVar1 = 0;
      if (local_c != 0) {
        iVar1 = param_1 / local_c;
      }
      if (param_1 == iVar1 * local_c) {
        local_10 = local_10 + 1;
      }
    }
    local_4 = local_10;
  }
  return local_4;
}



undefined8 entry(void)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_18;
  
  local_20 = 0;
  local_24 = 0;
  _printf("The first 20 anti-primes are:\n");
  local_18 = 1;
  while (local_24 < 0x14) {
    iVar1 = _countDivisors(local_18);
    if (local_20 < iVar1) {
      _printf("%d ");
      local_24 = local_24 + 1;
      local_20 = iVar1;
    }
    local_18 = local_18 + 1;
  }
  _printf("\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


