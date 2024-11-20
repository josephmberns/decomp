#include "infinity-1.h"



undefined  [16] _inf(void)

{
  return ZEXT816(0x7ff0000000000000);
}



undefined4 entry(void)

{
  _inf();
  _printf("%g\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


