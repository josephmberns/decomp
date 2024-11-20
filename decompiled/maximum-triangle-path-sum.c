#include "maximum-triangle-path-sum.h"



undefined8 entry(void)

{
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_20 = 0x11;
  local_24 = 0;
  for (local_28 = 0x98; -1 < local_28; local_28 = local_28 + -1) {
    if ((int)(&_tri)[local_28 + local_20 + 1] < (int)(&_tri)[local_28 + local_20]) {
      local_2c = (&_tri)[local_28 + local_20];
    }
    else {
      local_2c = (&_tri)[local_28 + local_20 + 1];
    }
    (&_tri)[local_28] = (&_tri)[local_28] + local_2c;
    local_24 = local_24 + 1;
    if (local_24 == local_20) {
      local_20 = local_20 + -1;
      local_24 = 0;
    }
  }
  _printf("%d\n");
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


