#include "loop-over-multiple-arrays-simultaneously.h"



undefined4 entry(void)

{
  int local_18;
  
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    _printf("%c%c%i\n");
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


