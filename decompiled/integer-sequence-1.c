#include "integer-sequence-1.h"



undefined8 entry(void)

{
  int local_18;
  
  local_18 = 0;
  while (local_18 = local_18 + 1, local_18 != 0) {
    _printf("%u\n");
  }
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


