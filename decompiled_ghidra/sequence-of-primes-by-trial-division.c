#include "sequence-of-primes-by-trial-division.h"



bool _isPrime(uint param_1)

{
  uint uVar1;
  bool bVar2;
  uint local_c;
  
  if ((param_1 < 2) || ((param_1 & 1) == 0)) {
    bVar2 = param_1 == 2;
  }
  else {
    local_c = 3;
    while( true ) {
      uVar1 = 0;
      if (local_c != 0) {
        uVar1 = param_1 / local_c;
      }
      if (uVar1 < local_c) {
        return true;
      }
      uVar1 = 0;
      if (local_c != 0) {
        uVar1 = param_1 / local_c;
      }
      if (param_1 == uVar1 * local_c) break;
      local_c = local_c + 2;
    }
    bVar2 = false;
  }
  return bVar2;
}



undefined8 entry(void)

{
  int iVar1;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  _printf("Enter lower and upper bounds: ");
  _scanf("%ld%ld");
  for (local_20 = local_18; local_20 <= local_1c; local_20 = local_20 + 1) {
    iVar1 = _isPrime(local_20);
    if (iVar1 == 1) {
      _printf("\n%ld");
    }
  }
  _printf("\n\nPrime numbers found in [%ld,%ld] : %ld");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004008)((int)param_1);
  return iVar1;
}


