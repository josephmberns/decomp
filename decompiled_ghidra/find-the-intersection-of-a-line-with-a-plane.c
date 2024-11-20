#include "find-the-intersection-of-a-line-with-a-plane.h"



undefined  [16]
_addVectors(double param_1,undefined param_2 [16],undefined param_3 [16],double param_4)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 + param_4;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16]
_subVectors(double param_1,undefined param_2 [16],undefined param_3 [16],double param_4)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 - param_4;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16]
_dotProduct(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,double param_5,
           undefined8 param_6)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = NEON_fmadd(param_1,param_4,param_2 * param_5);
  auVar1._0_8_ = NEON_fmadd(param_3,param_6,uVar2);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _scaleVector(double param_1,double param_2)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 * param_2;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16]
_intersectionPoint(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 param_9;
  undefined8 param_10;
  undefined8 param_11;
  undefined8 param_12;
  undefined8 param_13;
  undefined8 param_14;
  
  uVar1 = _subVectors(param_4,param_5,param_6,param_12,param_13,param_14);
  uVar6 = param_5;
  uVar7 = param_6;
  uVar2 = _addVectors(uVar1,param_5,param_6,param_12,param_13,param_14);
  dVar3 = (double)_dotProduct(uVar1,param_5,param_6,param_9,param_10,param_11);
  dVar4 = (double)_dotProduct(param_1,param_2,param_3,param_9,param_10,param_11);
  uVar1 = _scaleVector(-dVar3 / dVar4,param_1,param_2,param_3);
  auVar5._0_8_ = _addVectors(uVar2,uVar6,uVar7,uVar1,param_1,param_2);
  auVar5._8_8_ = 0;
  return auVar5;
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  double dVar2;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_1 == 5) {
    _sscanf(*(char **)(param_2 + 8),"(%lf,%lf,%lf)");
    iVar1 = _sscanf(*(char **)(param_2 + 0x18),"(%lf,%lf,%lf)");
    dVar2 = (double)_dotProduct(local_48,local_40,local_38,local_78,local_70,local_68,iVar1);
    if (dVar2 == 0.0) {
      _printf("Line and Plane do not intersect, either parallel or line is on the plane");
    }
    else {
      _sscanf(*(char **)(param_2 + 0x10),"(%lf,%lf,%lf)");
      iVar1 = _sscanf(*(char **)(param_2 + 0x20),"(%lf,%lf,%lf)");
      _intersectionPoint(local_48,local_40,local_38,local_60,local_58,local_50,iVar1);
      _printf("Intersection point is (%lf,%lf,%lf)");
    }
  }
  else {
    _printf(
           "Usage : %s <line direction, point on line, normal to plane and point on plane given as (x,y,z) tuples separated by space>"
           );
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_100004008)((int)param_1);
  return iVar1;
}


