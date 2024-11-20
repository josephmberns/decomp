#include "return-multiple-values-2.h"



undefined  [16] _whatsMyName(void)

{
  undefined auVar1 [16];
  
  auVar1._8_8_ = "Bond";
  auVar1._0_8_ = "James";
  return auVar1;
}



undefined4 entry(void)

{
  _whatsMyName();
  _printf("The name\'s %s. %s %s.\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


