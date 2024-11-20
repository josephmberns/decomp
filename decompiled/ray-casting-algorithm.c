#include "ray-casting-algorithm.h"



undefined  [16] _vsub(double param_1,undefined param_2 [16],double param_3)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 - param_3;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _vadd(double param_1,undefined param_2 [16],double param_3)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 + param_3;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _vdot(undefined8 param_1,double param_2,undefined8 param_3,double param_4)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = NEON_fmadd(param_1,param_3,param_2 * param_4);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _vcross(undefined8 param_1,double param_2,double param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = NEON_fnmsub(param_1,param_4,param_2 * param_3);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16]
_vmadd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
      undefined8 param_5)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = NEON_fmadd(param_3,param_4,param_1);
  NEON_fmadd(param_3,param_5,param_2);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined4
_intersect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 *param_9_00)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double param_9;
  undefined4 local_14;
  
  uVar1 = _vsub(param_3,param_4,param_1,param_2);
  uVar2 = _vsub(param_7,param_8,param_5,param_6);
  dVar3 = (double)_vcross(uVar2,param_8,uVar1,param_4);
  if (dVar3 == 0.0) {
    local_14 = 0;
  }
  else {
    dVar4 = (double)_vcross(param_1,param_2,uVar1,param_4);
    dVar5 = (double)_vcross(param_5,param_6,uVar1,param_4);
    dVar4 = (dVar4 - dVar5) / dVar3;
    if (param_9_00 != (undefined8 *)0x0) {
      uVar1 = param_6;
      uVar6 = _vmadd(param_5,param_6,dVar4,uVar2,param_8);
      param_9_00[1] = uVar1;
      *param_9_00 = uVar6;
    }
    if ((dVar4 < -param_9) || (param_9 + 1.0 < dVar4)) {
      local_14 = 0xffffffff;
    }
    else if ((dVar4 < param_9) || (1.0 - param_9 < dVar4)) {
      local_14 = 0;
    }
    else {
      dVar4 = (double)_vcross(param_1,param_2,uVar2,param_8);
      dVar5 = (double)_vcross(param_5,param_6,uVar2,param_8);
      dVar3 = (dVar4 - dVar5) / dVar3;
      if ((dVar3 < 0.0) || (1.0 < dVar3)) {
        local_14 = 0xffffffff;
      }
      else {
        local_14 = 1;
      }
    }
  }
  return local_14;
}



undefined  [16]
_dist(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
     double param_6,undefined8 param_7)

{
  int iVar1;
  undefined auVar2 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_50 = param_7;
  local_48 = param_5;
  local_40 = param_6;
  local_38 = param_3;
  local_30 = param_4;
  local_28 = param_1;
  local_20 = param_2;
  local_60 = (double)_vsub(param_5,param_6,param_3,param_4);
  local_70 = local_28 + param_6;
  local_68 = local_20 - local_60;
  local_58 = param_6;
  iVar1 = _intersect(local_28,local_20,local_70,local_68,local_38,local_30,local_48,local_40,
                     &local_80);
  if (iVar1 == -1) {
    local_18 = INFINITY;
  }
  else {
    local_80 = _vsub(local_80,uStack_78,local_28,local_20);
    local_18 = (double)_vdot(local_80,uStack_78,local_80,uStack_78);
    local_18 = SQRT(local_18);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_18;
  return auVar2;
}



undefined4 _inside(double param_1,double param_2,double param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double *local_50;
  int local_3c;
  undefined4 local_14;
  
  for (local_3c = 0; local_3c < *param_4; local_3c = local_3c + 1) {
    iVar5 = *param_4;
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = (local_3c + 1) / iVar5;
    }
    puVar1 = (undefined8 *)(*(long *)(param_4 + 2) + (long)local_3c * 0x10);
    puVar2 = (undefined8 *)(*(long *)(param_4 + 2) + (long)((local_3c + 1) - iVar3 * iVar5) * 0x10);
    dVar6 = (double)_dist(param_1,param_2,*puVar1,puVar1[1],*puVar2,puVar2[1],param_3);
    if (dVar6 < param_3) {
      return 0;
    }
  }
  local_60 = **(double **)(param_4 + 2);
  local_70 = *(double *)(*(long *)(param_4 + 2) + 0x18);
  local_3c = 0;
  local_50 = *(double **)(param_4 + 2);
  local_68 = local_70;
  local_58 = local_60;
  for (; local_3c < *param_4; local_3c = local_3c + 1) {
    if (local_60 < *local_50) {
      local_60 = *local_50;
    }
    if (*local_50 < local_58) {
      local_58 = *local_50;
    }
    if (local_70 < local_50[1]) {
      local_70 = local_50[1];
    }
    if (local_50[1] < local_68) {
      local_68 = local_50[1];
    }
    local_50 = local_50 + 2;
  }
  if ((((param_1 < local_58) || (local_60 < param_1)) || (param_2 < local_68)) ||
     (local_70 < param_2)) {
    local_14 = 0xffffffff;
  }
  else {
    dVar6 = (local_60 - local_58) * 2.0 + (local_70 - local_68) * 2.0;
    do {
      bVar4 = 0;
      iVar5 = _rand();
      uVar7 = NEON_fmadd((double)iVar5 / 2147483648.0 + 1.0,dVar6,param_1);
      iVar5 = _rand();
      uVar8 = NEON_fmadd((double)iVar5 / 2147483648.0 + 1.0,dVar6,param_2);
      for (local_3c = 0; local_3c < *param_4; local_3c = local_3c + 1) {
        iVar5 = *param_4;
        iVar3 = 0;
        if (iVar5 != 0) {
          iVar3 = (local_3c + 1) / iVar5;
        }
        puVar1 = (undefined8 *)(*(long *)(param_4 + 2) + (long)local_3c * 0x10);
        puVar2 = (undefined8 *)
                 (*(long *)(param_4 + 2) + (long)((local_3c + 1) - iVar3 * iVar5) * 0x10);
        iVar5 = _intersect(param_1,param_2,uVar7,uVar8,*puVar1,puVar1[1],*puVar2,puVar2[1],0);
        if (iVar5 == 0) break;
        if (iVar5 == 1) {
          bVar4 = bVar4 + 1;
        }
      }
    } while (local_3c != *param_4);
    local_14 = 0xffffffff;
    if ((bool)(bVar4 & 1)) {
      local_14 = 1;
    }
  }
  return local_14;
}



undefined8 entry(void)

{
  int iVar1;
  undefined4 local_d0 [2];
  undefined *local_c8;
  undefined4 local_c0 [2];
  undefined *local_b8;
  undefined4 local_ac;
  undefined auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_ac = 0;
  _memcpy(auStack_a8,&DAT_100003ed8,0x80);
  local_c0[0] = 4;
  local_d0[0] = 8;
  local_c8 = auStack_a8;
  local_b8 = auStack_a8;
  _inside(0x4024000000000000,0x4014000000000000);
  _printf("%d\n");
  _inside(0x4024000000000000,0x4014000000000000,0x3ddb7cdfd9d7bdbb,local_d0);
  _printf("%d\n");
  _inside(0x4014000000000000,0x4014000000000000,0x3ddb7cdfd9d7bdbb,local_c0);
  _printf("%d\n");
  _inside(0x4014000000000000,0x4014000000000000,0x3ddb7cdfd9d7bdbb,local_d0);
  iVar1 = _printf("%d\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}


