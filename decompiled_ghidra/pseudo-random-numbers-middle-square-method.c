#include "pseudo-random-numbers-middle-square-method.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention -- yet parameter storage is locked

long _random(void)

{
  __seed = ((__seed * __seed) / 1000) % 1000000;
  return __seed;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  int local_18;
  
  __seed = 0xa4db0;
  for (local_18 = 1; local_18 < 6; local_18 = local_18 + 1) {
    _random();
    _printf("%lld\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


