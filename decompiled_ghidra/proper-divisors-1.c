#include "proper-divisors-1.h"



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
    iVar1 = _proper_divisors(local_24,0);
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
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


