#include "munchausen-numbers.h"



undefined8 entry(ulong param_1)

{
  uint uVar1;
  double extraout_d0;
  int local_20;
  int local_1c;
  int local_18;
  
  for (local_18 = 1; local_18 < 5000; local_18 = local_18 + 1) {
    local_1c = 0;
    for (local_20 = local_18; 0 < local_20; local_20 = local_20 / 10) {
      param_1 = _pow((double)(long)(local_20 % 10),(double)(long)(local_20 % 10),param_1);
      local_1c = (int)((double)(long)local_1c + extraout_d0);
    }
    if (local_1c == local_18) {
      uVar1 = _printf("%i\n");
      param_1 = (ulong)uVar1;
    }
  }
  return 0;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


