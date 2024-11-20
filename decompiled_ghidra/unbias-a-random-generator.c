#include "unbias-a-random-generator.h"



bool _biased(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0x7fffffff / param_1;
  }
  iVar1 = 0x7fffffff - (0x7fffffff - iVar1 * param_1);
  do {
    iVar3 = _rand();
  } while (iVar1 < iVar3);
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = iVar1 / param_1;
  }
  return iVar3 < iVar2;
}



int _unbiased(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = _biased(param_1);
    iVar2 = _biased(param_1);
  } while (iVar1 == iVar2);
  return iVar1;
}



undefined8 entry(void)

{
  int local_28;
  int local_18;
  
  for (local_18 = 3; local_18 < 7; local_18 = local_18 + 1) {
    for (local_28 = 0; local_28 < 10000; local_28 = local_28 + 1) {
      _biased(local_18);
      _unbiased(local_18);
    }
    _printf("bias %d: %5.3f%% vs %5.3f%%\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004008)();
  return iVar1;
}


