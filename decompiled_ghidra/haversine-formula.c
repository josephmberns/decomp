#include "haversine-formula.h"



undefined  [16] _dist(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined auVar8 [16];
  
  dVar1 = (param_2 - param_4) * 0.01745329252;
  param_1 = param_1 * 0.01745329252;
  dVar2 = (double)_sin(param_1);
  dVar3 = (double)_sin(param_3 * 0.01745329252);
  uVar4 = _cos(dVar1);
  uVar5 = _cos(param_1);
  uVar6 = _cos(param_3 * 0.01745329252);
  uVar4 = NEON_fnmsub(uVar4,uVar5,uVar6);
  dVar1 = (double)_sin(dVar1);
  dVar7 = (double)_cos(param_1);
  uVar4 = NEON_fmadd(uVar4,uVar4,dVar1 * dVar7 * dVar1 * dVar7);
  dVar1 = (double)NEON_fmadd(dVar2 - dVar3,dVar2 - dVar3,uVar4);
  dVar1 = (double)_asin(SQRT(dVar1) / 2.0);
  auVar8._0_8_ = dVar1 * 2.0 * 6371.0;
  auVar8._8_8_ = 0;
  return auVar8;
}



undefined4 entry(void)

{
  _dist(0x40420f5c28f5c28f,0xc055aae147ae147b,0x4040f851eb851eb8,0xc05d99999999999a);
  _printf("dist: %.1f km (%.1f mi.)\n");
  return 0;
}



void _asin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__asin_100004000)();
  return;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004018)();
  return;
}


