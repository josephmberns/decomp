#include "generic-swap-3.h"



undefined8 entry(void)

{
  _printf("%d %d %d\n");
  _printf("%d %d %d\n");
  _printf("%d %d %d\n");
  _printf("%lf\n");
  _printf("%lf\n");
  _printf("%d\n");
  _printf("%d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


