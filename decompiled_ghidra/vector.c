#include "vector.h"



undefined  [16] _initVector(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)_cos(param_2);
  auVar2._0_8_ = param_1 * dVar1;
  _sin(param_2);
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined  [16] _addVector(double param_1,undefined param_2 [16],double param_3)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 + param_3;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _subtractVector(double param_1,undefined param_2 [16],double param_3)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 - param_3;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _multiplyVector(double param_1,undefined param_2 [16],double param_3)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_3 * param_1;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _divideVector(double param_1,undefined param_2 [16],double param_3)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 / param_3;
  auVar1._8_8_ = 0;
  return auVar1;
}



int _printVector(void)

{
  int iVar1;
  
  iVar1 = _printf("%lf %c %c %lf %c");
  return iVar1;
}



undefined4 entry(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = 0x3fe0c152382d7365;
  uVar2 = _initVector();
  uVar7 = 0x4000c152382d7365;
  uVar3 = _initVector(0x4014000000000000);
  iVar1 = _printf("\nVector a : ");
  _printVector(uVar2,uVar6,iVar1);
  iVar1 = _printf("\n\nVector b : ");
  _printVector(uVar3,uVar7,iVar1);
  iVar1 = _printf("\n\nSum of vectors a and b : ");
  uVar5 = uVar6;
  uVar4 = _addVector(uVar2,uVar6,uVar3,uVar7,iVar1);
  _printVector(uVar4,uVar5);
  iVar1 = _printf("\n\nDifference of vectors a and b : ");
  uVar5 = uVar6;
  uVar4 = _subtractVector(uVar2,uVar6,uVar3,uVar7,iVar1);
  _printVector(uVar4,uVar5);
  iVar1 = _printf("\n\nMultiplying vector a by 3 : ");
  uVar5 = _multiplyVector(uVar2,uVar6,0x4008000000000000,iVar1);
  _printVector(uVar5,uVar6);
  iVar1 = _printf("\n\nDividing vector b by 2.5 : ");
  uVar5 = _divideVector(uVar3,uVar7,0x4004000000000000,iVar1);
  _printVector(uVar5,uVar7);
  return 0;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004010)();
  return;
}


