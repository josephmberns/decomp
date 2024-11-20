#include "death-star.h"



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



bool _hit_sphere(double param_1,double param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  undefined8 uVar2;
  
  uVar2 = NEON_fmadd(param_1 - *param_3,param_1 - *param_3,
                     (param_2 - param_3[1]) * (param_2 - param_3[1]));
  dVar1 = (double)NEON_fnmsub(param_3[3],param_3[3],uVar2);
  if (0.0 <= dVar1) {
    *param_4 = param_3[2] - SQRT(dVar1);
    *param_5 = param_3[2] + SQRT(dVar1);
  }
  return 0.0 <= dVar1;
}



void _draw_sphere(undefined8 param_1,double param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  undefined8 uVar4;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  double local_40;
  undefined8 local_38;
  double local_30;
  double local_28;
  double local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_40 = param_2;
  local_38 = param_1;
  for (local_44 = (int)(DAT_100008028 - DAT_100008038);
      (double)(long)local_44 <= (double)(long)(DAT_100008028 + DAT_100008038);
      local_44 = local_44 + 1) {
    local_68 = (double)(long)local_44 + 0.5;
    dVar3 = (double)NEON_fmadd(0xc000000000000000,DAT_100008038,_pos);
    for (local_48 = (int)dVar3; dVar3 = (double)NEON_fmadd(0x4000000000000000,DAT_100008038,_pos),
        (double)(long)local_48 <= (double)(long)dVar3; local_48 = local_48 + 1) {
      local_60 = ((double)(long)local_48 - _pos) / 2.0 + 0.5 + _pos;
      iVar1 = _hit_sphere(local_60,local_68,&_pos,&local_70,&local_78);
      if (iVar1 == 0) {
        local_50 = 0;
      }
      else {
        iVar1 = _hit_sphere(local_60,local_68,&_neg,&local_80,&local_88);
        if (iVar1 == 0) {
          local_50 = 1;
        }
        else if (local_80 <= local_70) {
          if (local_88 <= local_78) {
            if (local_88 <= local_70) {
              local_50 = 1;
            }
            else {
              local_50 = 2;
            }
          }
          else {
            local_50 = 0;
          }
        }
        else {
          local_50 = 1;
        }
      }
      if (local_50 == 0) {
        _putchar(0x2b);
      }
      else {
        if (local_50 == 1) {
          local_30 = local_60 - _pos;
          local_28 = local_68 - DAT_100008028;
          local_20 = local_70 - DAT_100008030;
        }
        else {
          local_30 = _neg - local_60;
          local_28 = DAT_100008048 - local_68;
          local_20 = DAT_100008050 - local_88;
        }
        _normalize();
        uVar4 = _dot(&_light,&local_30);
        local_58 = (double)_pow(uVar4,local_38);
        local_58 = local_58 + local_40;
        local_4c = (uint)((1.0 - local_58) * 7.0);
        if ((int)local_4c < 0) {
          local_4c = 0;
        }
        if (6 < local_4c) {
          local_4c = 6;
        }
        _putchar((int)(char)_shades[(int)local_4c]);
      }
    }
    uVar2 = _putchar(10);
    param_3 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(param_3);
}



void entry(void)

{
  int iVar1;
  double local_20;
  
  local_20 = 0.0;
  do {
    iVar1 = _printf("\x1b[H");
    DAT_100008010 = _cos(local_20 * 2.0,iVar1);
    DAT_100008018 = _cos(local_20);
    _light = _sin(local_20);
    _normalize(&_light);
    local_20 = local_20 + 0.05;
    _draw_sphere(0x4000000000000000,0x3fd3333333333333);
    _usleep(100000);
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004010)();
  return;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004028)(param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__usleep_100004038)(param_1);
  return iVar1;
}


