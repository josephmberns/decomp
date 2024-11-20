#include "floyds-triangle.h"



ulong _t(ulong param_1)

{
  int iVar1;
  uint uVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = (int)param_1;
  for (local_20 = 1; local_20 < (iVar1 * (iVar1 + -1)) / 2; local_20 = local_20 * 10) {
  }
  for (local_18 = 1; local_18 <= iVar1; local_18 = local_18 + 1) {
    for (local_1c = 1; local_1c <= local_18; local_1c = local_1c + 1) {
      uVar2 = _printf("%*d%c");
      param_1 = (ulong)uVar2;
    }
  }
  return param_1;
}



undefined4 entry(void)

{
  _t(5);
  _t(0xe);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


