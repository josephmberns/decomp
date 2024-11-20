#include "draw-a-sphere-1.h"



void _normalize(double *param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  uVar2 = NEON_fmadd(*param_1,*param_1,param_1[1] * param_1[1]);
  dVar1 = (double)NEON_fmadd(param_1[2],param_1[2],uVar2);
  dVar1 = SQRT(dVar1);
  *param_1 = *param_1 / dVar1;
  param_1[1] = param_1[1] / dVar1;
  param_1[2] = param_1[2] / dVar1;
  return;
}



undefined  [16] _dot(undefined8 *param_1,undefined8 *param_2)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  double local_20;
  
  uVar2 = NEON_fmadd(*param_1,*param_2,(double)param_1[1] * (double)param_2[1]);
  local_20 = (double)NEON_fmadd(param_1[2],param_2[2],uVar2);
  if (0.0 <= local_20) {
    local_20 = 0.0;
  }
  else {
    local_20 = -local_20;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  return auVar1;
}



void _draw_sphere(double param_1,undefined8 param_2,double param_3,ulong param_4)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  uint local_54;
  int local_50;
  int local_4c;
  double local_30;
  double local_28;
  double local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_4c = (int)-param_1;
  while( true ) {
    if ((double)(long)param_1 < (double)(long)local_4c) break;
    dVar2 = (double)(long)local_4c + 0.5;
    for (local_50 = (int)(param_1 * -2.0); (double)(long)local_50 <= (double)(long)(param_1 * 2.0);
        local_50 = local_50 + 1) {
      dVar3 = (double)(long)local_50 / 2.0 + 0.5;
      dVar4 = (double)NEON_fmadd(dVar2,dVar2,dVar3 * dVar3);
      if (param_1 * param_1 < dVar4) {
        _putchar(0x20);
      }
      else {
        uVar5 = NEON_fnmsub(param_1,param_1,dVar2 * dVar2);
        local_20 = (double)NEON_fmsub(dVar3,dVar3,uVar5);
        local_20 = SQRT(local_20);
        local_30 = dVar2;
        local_28 = dVar3;
        _normalize();
        uVar5 = _dot(&_light,&local_30);
        dVar3 = (double)_pow(uVar5,param_2);
        local_54 = (uint)((1.0 - (dVar3 + param_3)) * 7.0);
        if ((int)local_54 < 0) {
          local_54 = 0;
        }
        if (6 < local_54) {
          local_54 = 6;
        }
        _putchar((int)(char)_shades[(int)local_54]);
      }
    }
    uVar1 = _putchar(10);
    param_4 = (ulong)uVar1;
    local_4c = local_4c + 1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_4);
  }
  return;
}



undefined4 entry(void)

{
  _normalize(&_light);
  _draw_sphere(0x4034000000000000,0x4010000000000000,0x3fb999999999999a);
  _draw_sphere(0x4024000000000000,0x4000000000000000,0x3fd999999999999a);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}


