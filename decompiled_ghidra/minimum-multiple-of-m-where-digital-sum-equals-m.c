#include "minimum-multiple-of-m-where-digital-sum-equals-m.h"



int _digit_sum(uint param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = param_1;
  do {
    local_8 = local_8 + local_4 % 10;
    local_4 = local_4 / 10;
  } while (local_4 != 0);
  return local_8;
}



int _a131382(int param_1)

{
  int iVar1;
  undefined4 local_18;
  
  local_18 = 1;
  while( true ) {
    iVar1 = _digit_sum(local_18 * param_1);
    if (param_1 == iVar1) break;
    local_18 = local_18 + 1;
  }
  return local_18;
}



undefined8 entry(void)

{
  uint local_18;
  
  for (local_18 = 1; local_18 < 0x47; local_18 = local_18 + 1) {
    _a131382(local_18);
    _printf("%9u");
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


