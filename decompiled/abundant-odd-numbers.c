#include "abundant-odd-numbers.h"



int _sum_proper_divisors(uint param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  uint local_18;
  uint local_c;
  int local_8;
  
  local_8 = 1;
  local_c = 3;
  while( true ) {
    dVar2 = (double)NEON_ucvtf((ulong)local_c);
    dVar3 = (double)NEON_ucvtf((ulong)param_1);
    if (SQRT(dVar3) + 1.0 <= dVar2) break;
    uVar1 = 0;
    if (local_c != 0) {
      uVar1 = param_1 / local_c;
    }
    if (param_1 == uVar1 * local_c) {
      local_18 = 0;
      if (local_c != 0) {
        local_18 = param_1 / local_c;
      }
      if (local_c == local_18) {
        local_18 = 0;
      }
      local_8 = local_8 + local_c + local_18;
    }
    local_c = local_c + 2;
  }
  return local_8;
}



undefined8 entry(void)

{
  uint uVar1;
  uint local_28;
  uint local_24;
  
  local_24 = 1;
  local_28 = 0;
  while (local_28 < 0x19) {
    uVar1 = _sum_proper_divisors(local_24);
    if (local_24 < uVar1) {
      local_28 = local_28 + 1;
      _printf("%u: %u\n");
    }
    local_24 = local_24 + 2;
  }
  while (local_28 < 1000) {
    uVar1 = _sum_proper_divisors(local_24);
    if (local_24 < uVar1) {
      local_28 = local_28 + 1;
    }
    local_24 = local_24 + 2;
  }
  _printf("\nThe one thousandth abundant odd number is: %u\n");
  for (local_24 = 0x3b9aca01; uVar1 = _sum_proper_divisors(local_24), uVar1 <= local_24;
      local_24 = local_24 + 2) {
  }
  _printf("The first abundant odd number above one billion is: %u\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


