#include "day-of-the-week.h"



int _wday(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (0xe - param_2) / 0xc;
  param_1 = param_1 - iVar1;
  return (((param_3 + ((param_2 + iVar1 * 0xc + -2) * 0xd + -1) / 5 + param_1 + param_1 / 4) -
          param_1 / 100) + param_1 / 400) % 7;
}



undefined8 entry(void)

{
  int iVar1;
  int local_18;
  
  for (local_18 = 0x7d8; local_18 < 0x84a; local_18 = local_18 + 1) {
    iVar1 = _wday(local_18,0xc,0x19);
    if (iVar1 == 0) {
      _printf("%04d-12-25\n");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


