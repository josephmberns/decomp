#include "sum-of-a-series.h"



undefined  [16] _Invsqr(double param_1)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = 1.0 / (param_1 * param_1);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined8 entry(void)

{
  int local_24;
  
  for (local_24 = 1; local_24 < 0x3e9; local_24 = local_24 + 1) {
    _Invsqr((double)(long)local_24);
  }
  _printf("%16.14f\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


