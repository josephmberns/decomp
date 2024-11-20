#include "statistics-basic.h"



undefined  [16] _rand01(void)

{
  int iVar1;
  undefined auVar2 [16];
  
  iVar1 = _rand();
  auVar2._0_8_ = (double)iVar1 / 2147483648.0;
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined  [16] _avg(uint param_1,double *param_2,long param_3)

{
  int *piVar1;
  double dVar2;
  undefined auVar3 [16];
  double local_80;
  undefined *local_78;
  ulong local_70;
  long local_68;
  int local_5c;
  int local_58;
  int local_54;
  double local_50;
  double local_48;
  undefined *local_38;
  long local_30;
  double *local_28;
  uint local_1c;
  long local_18;
  
  local_38 = (undefined *)&local_80;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_70 = (ulong)param_1 * 8 + 0xf & 0xfffffffffffffff0;
  local_30 = param_3;
  local_28 = param_2;
  local_1c = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_68 = (long)&local_80 - local_70;
  local_48 = 0.0;
  local_50 = 0.0;
  for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
    *(undefined4 *)(local_30 + (long)local_54 * 4) = 0;
  }
  for (local_58 = 0; local_58 < (int)local_1c; local_58 = local_58 + 1) {
    dVar2 = (double)_rand01();
    *(double *)(local_68 + (long)local_58 * 8) = dVar2;
    local_48 = local_48 + dVar2;
    piVar1 = (int *)(local_30 + (long)(int)(*(double *)(local_68 + (long)local_58 * 8) * 10.0) * 4);
    *piVar1 = *piVar1 + 1;
  }
  auVar3._0_8_ = local_48 / (double)(long)(int)local_1c;
  for (local_5c = 0; local_5c < (int)local_1c; local_5c = local_5c + 1) {
    local_50 = (double)NEON_fmadd(*(undefined8 *)(local_68 + (long)local_5c * 8),
                                  *(undefined8 *)(local_68 + (long)local_5c * 8),local_50);
  }
  dVar2 = (double)NEON_fmsub(auVar3._0_8_,auVar3._0_8_,local_50 / (double)(long)(int)local_1c);
  *local_28 = SQRT(dVar2);
  local_78 = local_38;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
    local_80 = auVar3._0_8_;
    local_48 = auVar3._0_8_;
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  auVar3._8_8_ = 0;
  return auVar3;
}



ulong _hist_plot(ulong param_1)

{
  uint uVar1;
  int local_34;
  int local_30;
  int local_2c;
  int local_20;
  int local_1c;
  ulong uVar2;
  
  local_1c = 0;
  local_20 = 1;
  for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
    if (local_1c < *(int *)(param_1 + (long)local_2c * 4)) {
      local_1c = *(int *)(param_1 + (long)local_2c * 4);
    }
  }
  if (0x3b < local_1c) {
    local_20 = (local_1c + 0x3b) / 0x3c;
  }
  uVar2 = param_1;
  for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
    _printf("[%5.2g,%5.2g]%5d ");
    for (local_34 = 0; local_34 < *(int *)(param_1 + (long)local_30 * 4);
        local_34 = local_34 + local_20) {
      _printf("#");
    }
    uVar1 = _printf("\n");
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
}



void _moving_avg(long *param_1,long param_2,int param_3)

{
  int local_2c;
  double local_28;
  double local_20;
  
  local_20 = 0.0;
  local_28 = 0.0;
  for (local_2c = 0; local_2c < param_3; local_2c = local_2c + 1) {
    local_20 = local_20 + *(double *)(param_2 + (long)local_2c * 8);
    local_28 = (double)NEON_fmadd(*(undefined8 *)(param_2 + (long)local_2c * 8),
                                  *(undefined8 *)(param_2 + (long)local_2c * 8),local_28);
    param_1[(long)(int)(*(double *)(param_2 + (long)local_2c * 8) * 10.0) + 3] =
         param_1[(long)(int)(*(double *)(param_2 + (long)local_2c * 8) * 10.0) + 3] + 1;
  }
  param_1[1] = (long)((double)param_1[1] + local_20);
  param_1[2] = (long)((double)param_1[2] + local_28);
  *param_1 = *param_1 + (long)param_3;
  return;
}



undefined4 entry(void)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  int local_400;
  int local_3fc;
  undefined8 local_3f8;
  double local_3f0;
  undefined8 local_3e8;
  int local_38c;
  undefined local_388 [8];
  undefined8 local_380;
  undefined4 local_374;
  undefined8 auStack_370 [100];
  undefined auStack_50 [40];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_374 = 0;
  for (local_38c = 10; local_38c < 0x2711; local_38c = local_38c * 10) {
    local_380 = _avg(local_38c,local_388,auStack_50);
    _printf("size %5d: %g %g\n");
  }
  _printf("\nHistograph:\n");
  _hist_plot(auStack_50);
  _printf("\nMoving average:\n  N     Mean    Sigma\n");
  pvVar2 = _memset(&local_3f8,0,0x68);
  for (local_3fc = 0; local_3fc < 10000; local_3fc = local_3fc + 1) {
    for (local_400 = 0; local_400 < 100; local_400 = local_400 + 1) {
      uVar3 = _rand01();
      auStack_370[local_400] = uVar3;
    }
    pvVar2 = (void *)_moving_avg(&local_3f8,auStack_370,100);
    if (local_3fc % 1000 == 999) {
      NEON_ucvtf(local_3f8);
      uVar3 = NEON_ucvtf(local_3f8);
      NEON_fnmsub(local_3e8,uVar3,local_3f0 * local_3f0);
      NEON_ucvtf(local_3f8);
      uVar1 = _printf("%4lluk %f %f\n");
      pvVar2 = (void *)(ulong)uVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return local_374;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(pvVar2);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004018)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}


