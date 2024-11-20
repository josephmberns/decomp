#include "cramers-rule.h"



undefined  [16] _init_square_matrix(uint param_1,long param_2)

{
  undefined auVar1 [16];
  void *pvVar2;
  void *pvVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_1c;
  
  pvVar2 = _malloc((long)(int)param_1 << 3);
  for (local_34 = 0; local_34 < (int)param_1; local_34 = local_34 + 1) {
    pvVar3 = _malloc((long)(int)param_1 << 3);
    *(void **)((long)pvVar2 + (long)local_34 * 8) = pvVar3;
    for (local_38 = 0; local_38 < (int)param_1; local_38 = local_38 + 1) {
      *(undefined8 *)(*(long *)((long)pvVar2 + (long)local_34 * 8) + (long)local_38 * 8) =
           *(undefined8 *)(param_2 + (long)local_34 * (ulong)param_1 * 8 + (long)local_38 * 8);
    }
  }
  auVar1._4_4_ = uStack_1c;
  auVar1._0_4_ = param_1;
  auVar1._8_8_ = pvVar2;
  return auVar1;
}



undefined  [16] _copy_square_matrix(int param_1,long param_2)

{
  undefined auVar1 [16];
  void *pvVar2;
  void *pvVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_1c;
  
  pvVar2 = _malloc((long)param_1 << 3);
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    pvVar3 = _malloc((long)param_1 << 3);
    *(void **)((long)pvVar2 + (long)local_34 * 8) = pvVar3;
    for (local_38 = 0; local_38 < param_1; local_38 = local_38 + 1) {
      *(undefined8 *)(*(long *)((long)pvVar2 + (long)local_34 * 8) + (long)local_38 * 8) =
           *(undefined8 *)(*(long *)(param_2 + (long)local_34 * 8) + (long)local_38 * 8);
    }
  }
  auVar1._4_4_ = uStack_1c;
  auVar1._0_4_ = param_1;
  auVar1._8_8_ = pvVar2;
  return auVar1;
}



ulong _det(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  int local_60;
  int local_5c;
  int local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_28;
  ulong uVar3;
  
  local_34 = 0;
  uVar3 = param_1;
  while( true ) {
    local_28 = (int)param_1;
    if (local_28 <= local_34) {
      for (local_60 = 0; local_60 < local_28; local_60 = local_60 + 1) {
      }
      return uVar3;
    }
    local_38 = local_34;
    for (local_3c = local_34; local_3c < local_28; local_3c = local_3c + 1) {
      if (*(double *)(*(long *)(param_2 + (long)local_38 * 8) + (long)local_34 * 8) <
          *(double *)(*(long *)(param_2 + (long)local_3c * 8) + (long)local_34 * 8)) {
        local_38 = local_3c;
      }
    }
    if (local_38 != local_34) {
      for (local_40 = 0; local_40 < local_28; local_40 = local_40 + 1) {
        uVar4 = *(undefined8 *)(*(long *)(param_2 + (long)local_38 * 8) + (long)local_40 * 8);
        *(undefined8 *)(*(long *)(param_2 + (long)local_38 * 8) + (long)local_40 * 8) =
             *(undefined8 *)(*(long *)(param_2 + (long)local_34 * 8) + (long)local_40 * 8);
        *(undefined8 *)(*(long *)(param_2 + (long)local_34 * 8) + (long)local_40 * 8) = uVar4;
      }
    }
    uVar2 = _abs((int)*(double *)(*(long *)(param_2 + (long)local_34 * 8) + (long)local_34 * 8));
    uVar3 = (ulong)uVar2;
    local_4c = local_34;
    if ((double)(int)uVar2 < 1e-12) break;
    while (local_4c = local_4c + 1, local_4c < local_28) {
      dVar5 = *(double *)(*(long *)(param_2 + (long)local_4c * 8) + (long)local_34 * 8);
      dVar6 = *(double *)(*(long *)(param_2 + (long)local_34 * 8) + (long)local_34 * 8);
      for (local_5c = 0; local_5c < local_28; local_5c = local_5c + 1) {
        puVar1 = (undefined8 *)(*(long *)(param_2 + (long)local_4c * 8) + (long)local_5c * 8);
        uVar4 = NEON_fmadd(-dVar5 / dVar6,
                           *(undefined8 *)
                            (*(long *)(param_2 + (long)local_34 * 8) + (long)local_5c * 8),*puVar1);
        *puVar1 = uVar4;
      }
    }
    local_34 = local_34 + 1;
  }
  uVar2 = _puts("Singular matrix!");
  return (ulong)uVar2;
}



void _deinit_square_matrix(int param_1,void *param_2)

{
  undefined4 local_24;
  
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    _free(*(void **)((long)param_2 + (long)local_24 * 8));
  }
  _free(param_2);
  return;
}



undefined  [16]
_cramer_solve(double param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  double dVar2;
  undefined auVar3 [16];
  int local_4c;
  int local_48;
  
  auVar3 = _copy_square_matrix(param_2,param_3);
  lVar1 = auVar3._8_8_;
  for (local_4c = 0; local_48 = auVar3._0_4_, local_4c < local_48; local_4c = local_4c + 1) {
    *(undefined8 *)(*(long *)(lVar1 + (long)local_4c * 8) + (long)param_5 * 8) =
         *(undefined8 *)(param_4 + (long)local_4c * 8);
  }
  dVar2 = (double)_det(auVar3._0_8_,lVar1);
  _deinit_square_matrix(auVar3._0_8_,lVar1);
  auVar3._0_8_ = dVar2 / param_1;
  auVar3._8_8_ = 0;
  return auVar3;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined auVar4 [16];
  int local_108;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_a8,&DAT_100003ee0,0x80);
  auVar4 = _init_square_matrix(4,auStack_a8);
  uVar2 = auVar4._8_8_;
  uVar1 = auVar4._0_8_;
  auVar4 = _copy_square_matrix(uVar1,uVar2);
  dVar3 = (double)_det(auVar4._0_8_,auVar4._8_8_);
  _deinit_square_matrix(auVar4._0_8_,auVar4._8_8_);
  uStack_c8 = 0xc040000000000000;
  local_d0 = 0xc008000000000000;
  uStack_b8 = 0x4048800000000000;
  local_c0 = 0xc047800000000000;
  for (local_108 = 0; local_108 < 4; local_108 = local_108 + 1) {
    _cramer_solve((double)(long)(int)dVar3,uVar1,uVar2,&local_d0,local_108);
    _printf("%7.3lf\n");
  }
  _deinit_square_matrix(uVar1,uVar2);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _abs(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__abs_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004038)((int)param_1);
  return iVar1;
}


