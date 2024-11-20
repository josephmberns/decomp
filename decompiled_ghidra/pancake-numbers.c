#include "pancake-numbers.h"



int _pancake(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 2;
  local_10 = -1;
  for (local_c = 2; local_c < param_1; local_c = local_c + local_8) {
    local_10 = local_10 + 1;
    local_8 = local_8 * 2 + -1;
  }
  return param_1 + local_10;
}



undefined8 entry(void)

{
  int local_1c;
  int local_18;
  
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    for (local_1c = 1; local_1c < 6; local_1c = local_1c + 1) {
      _pancake(local_18 * 5 + local_1c);
      _printf("p(%2d) = %2d  ");
    }
    _printf("\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


