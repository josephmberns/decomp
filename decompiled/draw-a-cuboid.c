#include "draw-a-cuboid.h"



void _vsub(double *param_1,double *param_2,double *param_3)

{
  *param_3 = *param_1 - *param_2;
  param_3[1] = param_1[1] - param_2[1];
  param_3[2] = param_1[2] - param_2[2];
  return;
}



undefined  [16] _normalize(double *param_1)

{
  double dVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  
  uVar3 = NEON_fmadd(*param_1,*param_1,param_1[1] * param_1[1]);
  dVar1 = (double)NEON_fmadd(param_1[2],param_1[2],uVar3);
  auVar2._0_8_ = SQRT(dVar1);
  *param_1 = *param_1 / auVar2._0_8_;
  param_1[1] = param_1[1] / auVar2._0_8_;
  param_1[2] = param_1[2] / auVar2._0_8_;
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined  [16] _dot(undefined8 *param_1,undefined8 *param_2)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = NEON_fmadd(*param_1,*param_2,(double)param_1[1] * (double)param_2[1]);
  auVar1._0_8_ = NEON_fmadd(param_1[2],param_2[2],uVar2);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined8 * _cross(double *param_1,double *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fnmsub(param_1[1],param_2[2],param_1[2] * param_2[1]);
  *param_3 = uVar1;
  uVar1 = NEON_fnmsub(param_1[2],*param_2,*param_1 * param_2[2]);
  param_3[1] = uVar1;
  uVar1 = NEON_fnmsub(*param_1,param_2[1],param_1[1] * *param_2);
  param_3[2] = uVar1;
  return param_3;
}



undefined8 * _madd(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmadd(*param_3,param_1,*param_2);
  *param_4 = uVar1;
  uVar1 = NEON_fmadd(param_3[1],param_1,param_2[1]);
  param_4[1] = uVar1;
  uVar1 = NEON_fmadd(param_3[2],param_1,param_2[2]);
  param_4[2] = uVar1;
  return param_4;
}



bool _in_range(double param_1,double param_2,double param_3)

{
  return (param_1 - param_2) * (param_1 - param_3) <= 0.0;
}



bool _face_hit(long *param_1,long param_2,long param_3,undefined8 *param_4,double *param_5)

{
  bool bVar1;
  int iVar2;
  double dVar3;
  double local_50;
  int local_44;
  
  for (local_44 = 0; local_44 < 3; local_44 = local_44 + 1) {
    if ((double)param_1[(long)local_44 + 4] != 0.0) {
      local_50 = (*(double *)(*param_1 + (long)local_44 * 8) -
                 *(double *)(param_2 + (long)local_44 * 8)) /
                 *(double *)(param_3 + (long)local_44 * 8);
    }
  }
  _madd(local_50,param_2,param_3,param_4);
  dVar3 = (double)_dot(param_3,param_1 + 4);
  *param_5 = ABS(dVar3 * local_50);
  if ((double)param_1[4] == 0.0) {
    if ((double)param_1[5] == 0.0) {
      if ((double)param_1[6] == 0.0) {
        bVar1 = false;
      }
      else {
        iVar2 = _in_range(*param_4,*(undefined8 *)*param_1,*(undefined8 *)param_1[2]);
        bVar1 = false;
        if (iVar2 != 0) {
          iVar2 = _in_range(param_4[1],*(undefined8 *)(*param_1 + 8),*(undefined8 *)(param_1[2] + 8)
                           );
          bVar1 = iVar2 != 0;
        }
      }
    }
    else {
      iVar2 = _in_range(*param_4,*(undefined8 *)*param_1,*(undefined8 *)param_1[2]);
      bVar1 = false;
      if (iVar2 != 0) {
        iVar2 = _in_range(param_4[2],*(undefined8 *)(*param_1 + 0x10),
                          *(undefined8 *)(param_1[2] + 0x10));
        bVar1 = iVar2 != 0;
      }
    }
  }
  else {
    iVar2 = _in_range(param_4[1],*(undefined8 *)(*param_1 + 8),*(undefined8 *)(param_1[2] + 8));
    bVar1 = false;
    if (iVar2 != 0) {
      iVar2 = _in_range(param_4[2],*(undefined8 *)(*param_1 + 0x10),
                        *(undefined8 *)(param_1[2] + 0x10));
      bVar1 = iVar2 != 0;
    }
  }
  return bVar1;
}



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double local_138;
  double local_130;
  long local_128;
  double local_120;
  int local_118;
  int local_114;
  int local_110;
  undefined4 local_10c;
  undefined auStack_108 [24];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined auStack_a8 [24];
  undefined auStack_90 [24];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_10c = 0;
  uStack_38 = 0x401c000000000000;
  local_40 = 0x401c000000000000;
  local_30 = 0x4018000000000000;
  uStack_58 = 0xbff0000000000000;
  local_60 = 0xbff0000000000000;
  local_50 = 0xbff0000000000000;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_b0 = 0x3ff0000000000000;
  uStack_e8 = 0x4020000000000000;
  local_f0 = 0x4018000000000000;
  local_e0 = 0x4018000000000000;
  _cross();
  _normalize();
  _cross(&local_40,auStack_a8,&local_c0);
  uVar3 = _normalize();
  for (local_110 = -10; local_110 < 0x12; local_110 = local_110 + 1) {
    for (local_114 = -0x23; local_114 < 0x23; local_114 = local_114 + 1) {
      _vsub(&local_78);
      uVar4 = _madd((double)(long)local_114 / 6.0,auStack_d8,auStack_a8);
      _madd((double)(long)local_110 / 3.0,uVar4,&local_c0,auStack_d8);
      _vsub(auStack_d8,&local_40,&local_60);
      local_130 = 1e+100;
      local_128 = 0;
      for (local_118 = 0; local_118 < 6; local_118 = local_118 + 1) {
        iVar1 = _face_hit(&_f + (long)local_118 * 7,&local_40,&local_60,auStack_90,&local_120);
        if ((iVar1 != 0) && (local_120 < local_130)) {
          local_130 = local_120;
          local_128 = (long)local_118 * 0x38 + 0x1000080e8;
        }
      }
      if (local_128 == 0) {
        _putchar(0x20);
      }
      else {
        _vsub(&local_f0,auStack_90);
        dVar5 = (double)_normalize(auStack_108);
        dVar6 = (double)_dot(local_128,auStack_108);
        local_138 = (dVar6 / dVar5) * 10.0;
        if (0.0 <= local_138) {
          if (1.0 < local_138) {
            local_138 = 1.0;
          }
        }
        else {
          local_138 = 0.0;
        }
        if (local_138 + 0.2 <= 1.0) {
          local_138 = 1.0 - (local_138 + 0.2);
        }
        else {
          local_138 = 0.0;
        }
        _putchar((int)(char)_shades[(int)(local_138 * 6.0)]);
      }
    }
    uVar2 = _putchar(10);
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar3);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004010)(param_1);
  return iVar1;
}


