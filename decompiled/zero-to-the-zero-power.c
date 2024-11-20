#include "zero-to-the-zero-power.h"



undefined4 entry(void)

{
  int iVar1;
  
  _pow(0);
  iVar1 = _printf("0 ^ 0 = %f\n");
  _cpow(0,0,0,0,iVar1);
  _printf("0+0i ^ 0+0i = %f+%fi\n");
  return 0;
}



void _cpow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cpow_100004000)();
  return;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


