#include "largest-proper-divisor-of-n.h"



uint _lpd(uint param_1)

{
  uint uVar1;
  uint local_c;
  uint local_4;
  
  if (param_1 < 2) {
    local_4 = 1;
  }
  else {
    for (local_c = param_1 - 1; 0 < (int)local_c; local_c = local_c - 1) {
      uVar1 = 0;
      if (local_c != 0) {
        uVar1 = param_1 / local_c;
      }
      if (param_1 == uVar1 * local_c) {
        return local_c;
      }
    }
  }
  return local_4;
}



undefined8 entry(void)

{
  int local_18;
  
  for (local_18 = 1; local_18 < 0x65; local_18 = local_18 + 1) {
    _lpd(local_18);
    _printf("%3d");
    if (local_18 % 10 == 0) {
      _printf("\n");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


