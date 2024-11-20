#include "lucas-lehmer-test-2.h"



int _is_prime(int param_1)

{
  int iVar1;
  int local_14;
  int local_c;
  int local_4;
  
  if (param_1 == 2) {
    local_4 = 1;
  }
  else if ((param_1 < 2) || (param_1 % 2 == 0)) {
    local_4 = 0;
  }
  else {
    local_c = 1;
    for (local_14 = 3; local_14 <= (int)SQRT((double)(long)param_1); local_14 = local_14 + 2) {
      iVar1 = 0;
      if (local_14 != 0) {
        iVar1 = param_1 / local_14;
      }
      local_c = param_1 - iVar1 * local_14;
      if (local_c == 0) break;
    }
    local_4 = local_c;
  }
  return local_4;
}



bool _is_mersenne_prime(uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  int local_1c;
  long local_18;
  
  if (param_1 == 2) {
    bVar4 = true;
  }
  else {
    uVar1 = (1L << ((ulong)param_1 & 0x3f)) - 1;
    local_18 = 4;
    for (local_1c = 3; local_1c <= (int)param_1; local_1c = local_1c + 1) {
      uVar2 = local_18 * local_18 - 2;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar2 / uVar1;
      }
      local_18 = uVar2 - uVar3 * uVar1;
    }
    bVar4 = local_18 == 0;
  }
  return bVar4;
}



undefined4 entry(void)

{
  int iVar1;
  double dVar2;
  int local_28;
  
  dVar2 = (double)_log2(0x43f0000000000000);
  _printf(" Mersenne primes:\n");
  for (local_28 = 2; local_28 <= (int)(dVar2 / 2.0); local_28 = local_28 + 1) {
    iVar1 = _is_prime(local_28);
    if ((iVar1 != 0) && (iVar1 = _is_mersenne_prime(local_28), iVar1 != 0)) {
      _printf(" M%u");
    }
  }
  _printf("\n");
  return 0;
}



void _log2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log2_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


