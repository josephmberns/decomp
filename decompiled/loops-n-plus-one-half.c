#include "loops-n-plus-one-half.h"



undefined8 entry(void)

{
  char *pcVar1;
  int local_18;
  
  for (local_18 = 1; local_18 < 0xb; local_18 = local_18 + 1) {
    _printf("%d");
    pcVar1 = "\n";
    if (local_18 != 10) {
      pcVar1 = ", ";
    }
    _printf(pcVar1);
  }
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


