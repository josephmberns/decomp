#include "steffensens-method.h"



undefined  [16] _aitken(double param_1,code *param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  double dVar4;
  
  dVar1 = (double)(*param_2)(param_1);
  uVar2 = (*param_2)(dVar1);
  dVar4 = (double)NEON_fmadd(0xc000000000000000,dVar1,uVar2);
  auVar3._0_8_ = param_1 - ((dVar1 - param_1) * (dVar1 - param_1)) / (dVar4 + param_1);
  auVar3._8_8_ = 0;
  return auVar3;
}



undefined  [16] _steffensenAitken(double param_1,double param_2,undefined8 param_3,int param_4)

{
  undefined auVar1 [16];
  int local_4c;
  double local_48;
  double local_40;
  double local_18;
  
  local_48 = (double)_aitken(param_1,param_3);
  local_40 = param_1;
  for (local_4c = 1; param_2 < ABS(local_48 - local_40) && local_4c < param_4;
      local_4c = local_4c + 1) {
    local_40 = local_48;
    local_48 = (double)_aitken(local_48,param_3);
  }
  if (ABS(local_48 - local_40) <= param_2) {
    local_18 = local_48;
  }
  else {
    local_18 = (double)_nan("");
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_18;
  return auVar1;
}



undefined  [16] _deCasteljau(undefined8 param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  undefined auVar4 [16];
  
  dVar1 = 1.0 - param_4;
  uVar2 = NEON_fmadd(dVar1,param_1,param_4 * param_2);
  dVar3 = (double)NEON_fmadd(dVar1,param_2,param_4 * param_3);
  auVar4._0_8_ = NEON_fmadd(dVar1,uVar2,param_4 * dVar3);
  auVar4._8_8_ = 0;
  return auVar4;
}



void _xConvexLeftParabola(undefined8 param_1)

{
  _deCasteljau(0x4000000000000000,0xc020000000000000,0x4000000000000000,param_1);
  return;
}



void _yConvexRightParabola(undefined8 param_1)

{
  _deCasteljau(0x3ff0000000000000,0x4000000000000000,0x4008000000000000,param_1);
  return;
}



undefined  [16] _implicitEquation(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)NEON_fmadd(param_1 * 5.0,param_1,param_2);
  auVar2._0_8_ = dVar1 - 5.0;
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined  [16] _f(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined auVar4 [16];
  
  uVar1 = _xConvexLeftParabola(param_1);
  uVar2 = _yConvexRightParabola(param_1);
  dVar3 = (double)_implicitEquation(uVar1,uVar2);
  auVar4._0_8_ = dVar3 + param_1;
  auVar4._8_8_ = 0;
  return auVar4;
}



// WARNING: Removing unreachable block (ram,0x000100003dcc)
// WARNING: Removing unreachable block (ram,0x000100003df8)
// WARNING: Removing unreachable block (ram,0x000100003e30)
// WARNING: Removing unreachable block (ram,0x000100003e54)
// WARNING: Removing unreachable block (ram,0x000100003e58)

undefined8 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  int local_4c;
  double local_30;
  
  local_30 = 0.0;
  for (local_4c = 0; local_4c < 0xb; local_4c = local_4c + 1) {
    _printf("t0 = %0.1f : ");
    uVar1 = _steffensenAitken(local_30,0x3e45798ee2308c3a,_f,1000);
    uVar2 = _xConvexLeftParabola(uVar1);
    uVar1 = _yConvexRightParabola(uVar1);
    dVar3 = (double)_implicitEquation(uVar2,uVar1);
    if (1e-06 < ABS(dVar3)) {
      _printf("spurious solution\n");
    }
    else {
      _printf("intersection at (%f, %f)\n");
    }
    local_30 = local_30 + 0.1;
  }
  return 0;
}



void _nan(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__nan_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


