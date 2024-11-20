#include "casting-out-nines.h"



undefined8 entry(ulong param_1)

{
  uint uVar1;
  double extraout_d0;
  int local_28;
  
  for (local_28 = 1; param_1 = _pow(0x4024000000000000,0x4000000000000000,param_1),
      (double)(long)local_28 < extraout_d0; local_28 = local_28 + 1) {
    if (local_28 % 9 == (local_28 * local_28) % 9) {
      uVar1 = _printf("%d ");
      param_1 = (ulong)uVar1;
    }
  }
  _printf("\nTring %d numbers instead of %d numbers saves %f%%\n");
  return 0;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


