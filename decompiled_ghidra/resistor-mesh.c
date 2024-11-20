#include "resistor-mesh.h"



void * _alloc2(int param_1,int param_2)

{
  void *pvVar1;
  undefined8 local_30;
  undefined4 local_1c;
  
  pvVar1 = _calloc(1,(long)param_2 * 8 + (long)param_1 * 0x10 * (long)param_2);
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    if (local_1c == 0) {
      local_30 = (void *)((long)pvVar1 + (long)param_2 * 8);
    }
    else {
      local_30 = (void *)(*(long *)((long)pvVar1 + (long)(local_1c + -1) * 8) + (long)param_1 * 0x10
                         );
    }
    *(void **)((long)pvVar1 + (long)local_1c * 8) = local_30;
  }
  return pvVar1;
}



void _set_boundary(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x10) = 0x3ff0000000000000;
  *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x78) = 0xffffffff;
  *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70) = 0xbff0000000000000;
  return;
}



undefined  [16] _calc_diff(long param_1,long param_2,int param_3,int param_4)

{
  byte bVar1;
  double dVar2;
  undefined auVar3 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_38 = 0;
  for (local_1c = 0; local_1c < param_4; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
      local_30 = 0.0;
      bVar1 = local_1c != 0;
      if ((bool)bVar1) {
        local_30 = *(double *)
                    (*(long *)(param_1 + (long)(local_1c + -1) * 8) + (long)local_20 * 0x10) + 0.0;
      }
      if (local_20 != 0) {
        local_30 = local_30 +
                   *(double *)
                    (*(long *)(param_1 + (long)local_1c * 8) + (long)(local_20 + -1) * 0x10);
        bVar1 = bVar1 + 1;
      }
      if (local_1c + 1 < param_4) {
        local_30 = local_30 +
                   *(double *)
                    (*(long *)(param_1 + (long)(local_1c + 1) * 8) + (long)local_20 * 0x10);
        bVar1 = bVar1 + 1;
      }
      if (local_20 + 1 < param_3) {
        local_30 = local_30 +
                   *(double *)
                    (*(long *)(param_1 + (long)local_1c * 8) + (long)(local_20 + 1) * 0x10);
        bVar1 = bVar1 + 1;
      }
      dVar2 = *(double *)(*(long *)(param_1 + (long)local_1c * 8) + (long)local_20 * 0x10) -
              local_30 / (double)bVar1;
      *(double *)(*(long *)(param_2 + (long)local_1c * 8) + (long)local_20 * 0x10) = dVar2;
      if (*(int *)(*(long *)(param_1 + (long)local_1c * 8) + (long)local_20 * 0x10 + 8) == 0) {
        local_38 = NEON_fmadd(dVar2,dVar2,local_38);
      }
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_38;
  return auVar3;
}



undefined  [16] _iter(long param_1,int param_2,int param_3)

{
  double *pdVar1;
  void *pvVar2;
  double dVar3;
  undefined auVar4 [16];
  double local_58;
  int local_50;
  int local_4c;
  double local_30 [3];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = (void *)_alloc2(param_2,param_3);
  local_58 = 10000000000.0;
  local_30[0] = 0.0;
  local_30[1] = 0.0;
  local_30[2] = 0.0;
  while (1e-24 < local_58) {
    _set_boundary(param_1);
    local_58 = (double)_calc_diff(param_1,pvVar2,param_2,param_3);
    for (local_4c = 0; local_4c < param_3; local_4c = local_4c + 1) {
      for (local_50 = 0; local_50 < param_2; local_50 = local_50 + 1) {
        pdVar1 = (double *)(*(long *)(param_1 + (long)local_4c * 8) + (long)local_50 * 0x10);
        *pdVar1 = *pdVar1 - *(double *)
                             (*(long *)((long)pvVar2 + (long)local_4c * 8) + (long)local_50 * 0x10);
      }
    }
  }
  for (local_4c = 0; local_4c < param_3; local_4c = local_4c + 1) {
    for (local_50 = 0; local_50 < param_2; local_50 = local_50 + 1) {
      dVar3 = (double)NEON_fmadd(*(undefined8 *)
                                  (*(long *)((long)pvVar2 + (long)local_4c * 8) +
                                  (long)local_50 * 0x10),
                                 (double)(byte)((local_4c != 0) + (local_50 != 0) +
                                                (local_4c < param_3 + -1) +
                                               (local_50 < param_2 + -1)),
                                 local_30[*(int *)(*(long *)(param_1 + (long)local_4c * 8) +
                                                   (long)local_50 * 0x10 + 8) + 1]);
      local_30[*(int *)(*(long *)(param_1 + (long)local_4c * 8) + (long)local_50 * 0x10 + 8) + 1] =
           dVar3;
    }
  }
  _free(pvVar2);
  auVar4._0_8_ = (local_30[2] - local_30[0]) / 2.0;
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    auVar4._8_8_ = 0;
    return auVar4;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined4 entry(void)

{
  undefined8 uVar1;
  
  uVar1 = _alloc2(10);
  _iter(uVar1,10);
  _printf("R = %g\n");
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


