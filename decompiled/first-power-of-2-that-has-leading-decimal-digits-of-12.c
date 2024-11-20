#include "first-power-of-2-that-has-leading-decimal-digits-of-12.h"



int _p(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0;
  dVar1 = (double)_log(0x4000000000000000);
  dVar2 = (double)_log(0x4024000000000000);
  local_2c = 1;
  for (local_30 = param_1; local_18 = param_2, 10 < local_30; local_30 = local_30 / 10) {
    local_2c = local_2c * 10;
  }
  while (0 < local_18) {
    local_1c = local_1c + 1;
    uVar3 = _fmod((double)(long)local_1c * (dVar1 / dVar2),0x3ff0000000000000);
    dVar4 = (double)_pow(0x4024000000000000,uVar3);
    if ((int)((double)(long)local_2c * dVar4) == param_1) {
      local_18 = local_18 + -1;
    }
  }
  return local_1c;
}



int _runTest(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  _p(param_1,param_2);
  iVar1 = _printf("p(%d, %d) = %d\n");
  return iVar1;
}



undefined4 entry(void)

{
  _runTest(0xc,1);
  _runTest(0xc,2);
  _runTest(0x7b,0x2d);
  _runTest(0x7b,0x3039);
  _runTest(0x7b,0xa5bfe);
  return 0;
}



void _fmod(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__fmod_100004000)();
  return;
}



void _log(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log_100004008)();
  return;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


