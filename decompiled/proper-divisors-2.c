#include "proper-divisors-2.h"



int _proper_divisors(int param_1,byte param_2)

{
  int iVar1;
  int local_20;
  int local_1c;
  
  local_1c = 0;
  for (local_20 = 1; local_20 < param_1; local_20 = local_20 + 1) {
    iVar1 = 0;
    if (local_20 != 0) {
      iVar1 = param_1 / local_20;
    }
    if ((param_1 == iVar1 * local_20) && (local_1c = local_1c + 1, (param_2 & 1) != 0)) {
      _printf("%d ");
    }
  }
  if ((param_2 & 1) != 0) {
    _printf("\n");
  }
  return local_1c;
}



int _countProperDivisors(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  for (local_4 = param_1; local_4 % 2 == 0; local_4 = local_4 / 2) {
    local_10 = local_10 + 1;
  }
  local_8 = local_10 + 1;
  for (local_c = 3; local_c * local_c <= local_4; local_c = local_c + 2) {
    local_10 = 0;
    iVar1 = local_4;
    while( true ) {
      local_4 = iVar1;
      iVar1 = 0;
      if (local_c != 0) {
        iVar1 = local_4 / local_c;
      }
      if (local_4 != iVar1 * local_c) break;
      local_10 = local_10 + 1;
      iVar1 = 0;
      if (local_c != 0) {
        iVar1 = local_4 / local_c;
      }
    }
    local_8 = local_8 * (local_10 + 1);
  }
  if (2 < local_4) {
    local_8 = local_8 << 1;
  }
  return local_8 + -1;
}



undefined8 entry(void)

{
  int iVar1;
  int local_24;
  int local_1c;
  int local_18;
  
  for (local_18 = 1; local_18 < 0xb; local_18 = local_18 + 1) {
    _printf("%d: ");
    _proper_divisors(local_18,1);
  }
  local_1c = 0;
  for (local_24 = 1; local_24 < 0x4e21; local_24 = local_24 + 1) {
    iVar1 = _countProperDivisors(local_24);
    if (local_1c <= iVar1) {
      local_1c = iVar1;
    }
  }
  _printf("%d with %d divisors\n");
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


