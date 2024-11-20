#include "jensens-device-2.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  for (__i = 1; __i < 0x65; __i = __i + 1) {
  }
  _printf("%f\n");
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


