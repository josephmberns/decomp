#include "harmonic-series.h"



undefined  [16] _harmonic(int param_1)

{
  undefined auVar1 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0.0;
  for (local_18 = 1.0; local_18 <= (double)(long)param_1; local_18 = local_18 + 1.0) {
    local_10 = local_10 + 1.0 / local_18;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_10;
  return auVar1;
}



undefined8 entry(void)

{
  double dVar1;
  int local_20;
  int local_18;
  
  _printf("First 20 harmonic numbers:\n");
  for (local_18 = 1; local_18 < 0x15; local_18 = local_18 + 1) {
    _harmonic(local_18);
    _printf("%2d  %8.6lf\n");
  }
  for (local_18 = 1; local_18 < 6; local_18 = local_18 + 1) {
    local_20 = 2;
    while( true ) {
      dVar1 = (double)_harmonic(local_20);
      if ((double)(long)local_18 < dVar1) break;
      local_20 = local_20 + 1;
    }
    _printf("First term > %d is at position %d\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


