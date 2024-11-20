#include "feigenbaum-constant-calculation.h"



int _feigenbaum(void)

{
  int iVar1;
  double local_60;
  double local_58;
  double local_50;
  double local_40;
  double local_38;
  double local_30;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_50 = 1.0;
  local_58 = 0.0;
  local_60 = 3.2;
  iVar1 = _printf(" i       d\n");
  for (local_14 = 2; (int)local_14 < 0xe; local_14 = local_14 + 1) {
    local_30 = local_50 + (local_50 - local_58) / local_60;
    for (local_18 = 1; local_18 < 0xb; local_18 = local_18 + 1) {
      local_38 = 0.0;
      local_40 = 0.0;
      for (local_1c = 1; local_1c <= 1 << (ulong)(local_14 & 0x1f); local_1c = local_1c + 1) {
        local_40 = (double)NEON_fmsub(local_40 * 2.0,local_38,0x3ff0000000000000);
        local_38 = (double)NEON_fmsub(local_38,local_38,local_30);
      }
      local_30 = local_30 - local_38 / local_40;
    }
    local_60 = (local_50 - local_58) / (local_30 - local_50);
    iVar1 = _printf("%2d    %.8f\n");
    local_58 = local_50;
    local_50 = local_30;
  }
  return iVar1;
}



undefined4 entry(void)

{
  _feigenbaum();
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


