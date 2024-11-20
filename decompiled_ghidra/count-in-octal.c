#include "count-in-octal.h"



undefined8 entry(void)

{
  int local_18;
  
  local_18 = 0;
  do {
    local_18 = local_18 + 1;
    _printf("%o\n");
  } while (local_18 != 0);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


