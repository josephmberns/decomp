#include "babbage-problem.h"



undefined8 entry(void)

{
  int iVar1;
  int local_18;
  
  for (local_18 = 0; iVar1 = local_18 * local_18, iVar1 % 1000000 != 0x41d80 && iVar1 < 0x7fffffff;
      local_18 = local_18 + 1) {
  }
  if (iVar1 < -0x80000000) {
    _printf("The smallest number whose square ends in 269696 is %d\n");
  }
  else {
    _printf("Condition not satisfied before INT_MAX reached.");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


