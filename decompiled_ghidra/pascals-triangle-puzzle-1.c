#include "pascals-triangle-puzzle-1.h"



void _pascal(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(param_4 + (param_1 + param_2) * -4) / 7.0;
  dVar2 = (double)_fmod(dVar1,0x3ff0000000000000);
  if (dVar2 < 0.0001) {
    *param_6 = (int)dVar1;
    *param_5 = (param_3 + param_1 * -2) - *param_6;
    *param_7 = *param_6 - *param_5;
  }
  return;
}



undefined8 entry(void)

{
  undefined local_30 [4];
  undefined local_2c [4];
  int local_28 [6];
  
  local_28[5] = 0;
  local_28[4] = 0xb;
  local_28[3] = 4;
  local_28[2] = 0x28;
  local_28[1] = 0x97;
  _pascal(0xb,4,0x28,0x97,local_28,local_2c,local_30);
  if (local_28[0] == 0) {
    _printf("No solution\n");
  }
  else {
    _printf("x: %d, y: %d, z: %d\n");
  }
  return 0;
}



void _fmod(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__fmod_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


