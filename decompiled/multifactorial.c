#include "multifactorial.h"



int _multifact(int param_1,int param_2)

{
  undefined4 local_1c;
  
  local_1c = param_1;
  if (param_2 < param_1) {
    local_1c = _multifact(param_1 - param_2,param_2);
    local_1c = param_1 * local_1c;
  }
  return local_1c;
}



int _multifact_i(int param_1,int param_2)

{
  undefined4 local_c;
  undefined4 local_4;
  
  local_c = param_1;
  for (local_4 = param_1; param_2 + 1 <= local_4; local_4 = local_4 - param_2) {
    local_c = local_c * (local_4 - param_2);
  }
  return local_c;
}



undefined4 entry(void)

{
  int local_1c;
  int local_18;
  
  for (local_18 = 1; local_18 < 6; local_18 = local_18 + 1) {
    _printf("\nDegree %d: ");
    for (local_1c = 1; local_1c < 0xb; local_1c = local_1c + 1) {
      _multifact(local_1c,local_18);
      _printf("%d ");
    }
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


