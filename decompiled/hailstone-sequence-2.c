#include "hailstone-sequence-2.h"



long _hailstone(ulong param_1)

{
  int iVar1;
  ulong local_30;
  long local_18;
  
  if (param_1 == 1) {
    local_18 = 1;
  }
  else if ((param_1 < 10000000) && (*(long *)(&_cache + param_1 * 8) != 0)) {
    local_18 = *(long *)(&_cache + param_1 * 8);
  }
  else {
    if ((param_1 & 1) == 0) {
      local_30 = param_1 / 2;
    }
    else {
      local_30 = param_1 * 3 + 1;
    }
    iVar1 = _hailstone(local_30);
    if (param_1 < 10000000) {
      *(long *)(&_cache + param_1 * 8) = (long)(iVar1 + 1);
    }
    local_18 = (long)(iVar1 + 1);
  }
  return local_18;
}



undefined8 entry(void)

{
  int iVar1;
  int local_20;
  int local_18;
  
  local_20 = 0;
  for (local_18 = 1; local_18 < 10000000; local_18 = local_18 + 1) {
    iVar1 = _hailstone((long)local_18);
    if (local_20 < iVar1) {
      local_20 = iVar1;
    }
  }
  _printf("max below %d: %d, length %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


