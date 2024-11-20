#include "primality-by-wilsons-theorem.h"



ulong _factorial(ulong param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_28 = 1;
  local_20 = param_1;
  if (param_1 < 2) {
    local_18 = 1;
  }
  else {
    for (; local_20 != 0; local_20 = local_20 - 1) {
      uVar1 = local_28 * local_20;
      if (uVar1 < local_28) {
        _fprintf(*(FILE **)PTR____stderrp_100004000,"Overflowed\n");
        return uVar1;
      }
      local_28 = uVar1;
    }
    local_18 = local_28;
  }
  return local_18;
}



bool _isPrime(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = _factorial(param_1 - 1);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (lVar2 + 1U) / param_1;
  }
  return lVar2 + 1U == uVar1 * param_1;
}



undefined8 entry(void)

{
  ulong local_20;
  
  for (local_20 = 2; local_20 < 0x16; local_20 = local_20 + 1) {
    _isPrime(local_20);
    _printf("Is %llu prime: %d\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


