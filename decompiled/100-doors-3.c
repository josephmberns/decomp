#include "100-doors-3.h"



undefined8 entry(void)

{
  int local_20;
  int local_1c;
  int local_18;
  
  local_18 = 1;
  local_1c = 3;
  for (local_20 = 1; local_20 < 0x65; local_20 = local_20 + 1) {
    _printf("door #%d");
    if (local_20 == local_18) {
      _printf(" is open.\n");
      local_18 = local_18 + local_1c;
      local_1c = local_1c + 2;
    }
    else {
      _printf(" is closed.\n");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


