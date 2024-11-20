#include "command-line-arguments.h"



undefined8 entry(int param_1)

{
  int local_24;
  
  _printf("This program is named %s.\n");
  for (local_24 = 1; local_24 < param_1; local_24 = local_24 + 1) {
    _printf("the argument #%d is %s\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


