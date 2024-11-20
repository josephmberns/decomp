#include "linear-congruential-generator.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  __rseed = __rseed * 0x41c64e6d + 0x3039 & 0x7fffffff;
  return __rseed;
}



undefined8 entry(void)

{
  int local_18;
  
  _printf("rand max is %d\n");
  for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
    _rand();
    _printf("%d\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


