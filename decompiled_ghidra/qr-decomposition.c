#include "qr-decomposition.h"



int * _matrix_new(int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int local_24;
  
  piVar1 = (int *)_malloc(0x10);
  pvVar2 = _malloc((long)param_1 * 8);
  *(void **)(piVar1 + 2) = pvVar2;
  pvVar2 = _calloc(8,(long)(param_1 * param_2));
  **(undefined8 **)(piVar1 + 2) = pvVar2;
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    *(long *)(*(long *)(piVar1 + 2) + (long)local_24 * 8) =
         **(long **)(piVar1 + 2) + (long)(param_2 * local_24) * 8;
  }
  *piVar1 = param_1;
  piVar1[1] = param_2;
  return piVar1;
}



void _matrix_delete(void *param_1)

{
  _free((void *)**(undefined8 **)((long)param_1 + 8));
  _free(*(void **)((long)param_1 + 8));
  _free(param_1);
  return;
}



void _matrix_transpose(int *param_1)

{
  undefined8 uVar1;
  int local_10;
  int local_c;
  
  for (local_c = 0; local_c < *param_1; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < local_c; local_10 = local_10 + 1) {
      uVar1 = *(undefined8 *)
               (*(long *)(*(long *)(param_1 + 2) + (long)local_c * 8) + (long)local_10 * 8);
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 2) + (long)local_c * 8) + (long)local_10 * 8) =
           *(undefined8 *)
            (*(long *)(*(long *)(param_1 + 2) + (long)local_10 * 8) + (long)local_c * 8);
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 2) + (long)local_10 * 8) + (long)local_c * 8) =
           uVar1;
    }
  }
  return;
}



long _matrix_copy(uint param_1,long param_2,int param_3)

{
  long lVar1;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar1 = _matrix_new(param_3,param_1);
  for (local_34 = 0; local_34 < param_3; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < (int)param_1; local_38 = local_38 + 1) {
      *(undefined8 *)(*(long *)(*(long *)(lVar1 + 8) + (long)local_34 * 8) + (long)local_38 * 8) =
           *(undefined8 *)(param_2 + (long)local_34 * (ulong)param_1 * 8 + (long)local_38 * 8);
    }
  }
  return lVar1;
}



long _matrix_mul(int *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_3c;
  int local_38;
  int local_34;
  long local_18;
  
  if (param_1[1] == *param_2) {
    local_18 = _matrix_new(*param_1,param_2[1]);
    for (local_34 = 0; local_34 < *param_1; local_34 = local_34 + 1) {
      for (local_38 = 0; local_38 < param_2[1]; local_38 = local_38 + 1) {
        for (local_3c = 0; local_3c < param_1[1]; local_3c = local_3c + 1) {
          puVar1 = (undefined8 *)
                   (*(long *)(*(long *)(local_18 + 8) + (long)local_34 * 8) + (long)local_38 * 8);
          uVar2 = NEON_fmadd(*(undefined8 *)
                              (*(long *)(*(long *)(param_1 + 2) + (long)local_34 * 8) +
                              (long)local_3c * 8),
                             *(undefined8 *)
                              (*(long *)(*(long *)(param_2 + 2) + (long)local_3c * 8) +
                              (long)local_38 * 8),*puVar1);
          *puVar1 = uVar2;
        }
      }
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



long _matrix_minor(int *param_1,int param_2)

{
  long lVar1;
  int local_34;
  int local_30;
  int local_2c;
  
  lVar1 = _matrix_new(*param_1,param_1[1]);
  for (local_2c = 0; local_30 = param_2, local_2c < param_2; local_2c = local_2c + 1) {
    *(undefined8 *)(*(long *)(*(long *)(lVar1 + 8) + (long)local_2c * 8) + (long)local_2c * 8) =
         0x3ff0000000000000;
  }
  for (; local_34 = param_2, local_30 < *param_1; local_30 = local_30 + 1) {
    for (; local_34 < param_1[1]; local_34 = local_34 + 1) {
      *(undefined8 *)(*(long *)(*(long *)(lVar1 + 8) + (long)local_30 * 8) + (long)local_34 * 8) =
           *(undefined8 *)
            (*(long *)(*(long *)(param_1 + 2) + (long)local_30 * 8) + (long)local_34 * 8);
    }
  }
  return lVar1;
}



long _vmadd(undefined8 param_1,long param_2,long param_3,long param_4,int param_5)

{
  undefined8 uVar1;
  undefined4 local_28;
  
  for (local_28 = 0; local_28 < param_5; local_28 = local_28 + 1) {
    uVar1 = NEON_fmadd(param_1,*(undefined8 *)(param_3 + (long)local_28 * 8),
                       *(undefined8 *)(param_2 + (long)local_28 * 8));
    *(undefined8 *)(param_4 + (long)local_28 * 8) = uVar1;
  }
  return param_4;
}



long _vmul(long param_1,int param_2)

{
  double *pdVar1;
  long lVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  lVar2 = _matrix_new(param_2,param_2);
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      *(double *)(*(long *)(*(long *)(lVar2 + 8) + (long)local_2c * 8) + (long)local_30 * 8) =
           *(double *)(param_1 + (long)local_2c * 8) * -2.0 *
           *(double *)(param_1 + (long)local_30 * 8);
    }
  }
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    pdVar1 = (double *)(*(long *)(*(long *)(lVar2 + 8) + (long)local_34 * 8) + (long)local_34 * 8);
    *pdVar1 = *pdVar1 + 1.0;
  }
  return lVar2;
}



undefined  [16] _vnorm(long param_1,int param_2)

{
  undefined auVar1 [16];
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0.0;
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    local_18 = (double)NEON_fmadd(*(undefined8 *)(param_1 + (long)local_1c * 8),
                                  *(undefined8 *)(param_1 + (long)local_1c * 8),local_18);
  }
  auVar1._0_8_ = SQRT(local_18);
  auVar1._8_8_ = 0;
  return auVar1;
}



long _vdiv(double param_1,long param_2,long param_3,int param_4)

{
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_4; local_20 = local_20 + 1) {
    *(double *)(param_3 + (long)local_20 * 8) = *(double *)(param_2 + (long)local_20 * 8) / param_1;
  }
  return param_3;
}



long _mcol(int *param_1,long param_2,int param_3)

{
  int local_18;
  
  for (local_18 = 0; local_18 < *param_1; local_18 = local_18 + 1) {
    *(undefined8 *)(param_2 + (long)local_18 * 8) =
         *(undefined8 *)(*(long *)(*(long *)(param_1 + 2) + (long)local_18 * 8) + (long)param_3 * 8)
    ;
  }
  return param_2;
}



int _matrix_show(int *param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  
  for (local_1c = 0; local_1c < *param_1; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < param_1[1]; local_20 = local_20 + 1) {
      _printf(" %8.3f");
    }
    _printf("\n");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



void _householder(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *apuStack_d0 [2];
  uint local_bc;
  ulong local_b8;
  long local_b0;
  ulong local_a8;
  long local_a0;
  uint local_94;
  ulong local_90;
  undefined8 *local_88;
  int local_80;
  int local_7c;
  double local_78;
  undefined *local_60;
  int local_54;
  uint *local_50;
  uint *local_48;
  undefined *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  uint *local_20;
  long local_18;
  
  local_38 = (undefined *)apuStack_d0;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_90 = (ulong)*param_1 * 8 + 0xf & 0xfffffffffffffff0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_88 = (undefined8 *)((long)apuStack_d0 - local_90);
  local_48 = local_20;
  local_54 = 0;
  puVar2 = local_88;
  while( true ) {
    local_94 = 0;
    if (local_54 < (int)local_20[1]) {
      local_94 = (uint)(local_54 < (int)(*local_20 - 1));
    }
    if (local_94 == 0) break;
    local_b8 = (ulong)*local_20 * 8 + 0xf & 0xfffffffffffffff0;
    local_60 = (undefined *)puVar2;
    (*(code *)PTR____chkstk_darwin_100004000)();
    lVar1 = (long)puVar2 - local_b8;
    local_a8 = (ulong)*local_20 * 8 + 0xf & 0xfffffffffffffff0;
    local_b0 = lVar1;
    (*(code *)PTR____chkstk_darwin_100004000)();
    local_a0 = lVar1 - local_a8;
    local_50 = (uint *)_matrix_minor(local_48,local_54);
    if (local_48 != local_20) {
      _matrix_delete(local_48);
    }
    local_48 = local_50;
    _mcol(local_50,local_a0,local_54);
    local_78 = (double)_vnorm(local_a0,*local_20);
    if (0.0 < *(double *)
               (*(long *)(*(long *)(local_20 + 2) + (long)local_54 * 8) + (long)local_54 * 8)) {
      local_78 = -local_78;
    }
    for (local_7c = 0; local_7c < (int)*local_20; local_7c = local_7c + 1) {
      *(double *)(local_b0 + (long)local_7c * 8) = (double)(local_7c == local_54);
    }
    _vmadd(local_78,local_a0,local_b0,local_b0,*local_20);
    _vnorm(local_b0,*local_20);
    _vdiv(local_b0,local_b0,*local_20);
    uVar3 = _vmul(local_b0,*local_20);
    local_88[local_54] = uVar3;
    local_50 = (uint *)_matrix_mul(local_88[local_54],local_48);
    if (local_48 != local_20) {
      _matrix_delete(local_48);
    }
    local_48 = local_50;
    local_54 = local_54 + 1;
    puVar2 = (undefined8 *)local_60;
  }
  _matrix_delete(local_48);
  *local_30 = *local_88;
  uVar3 = _matrix_mul(*local_88,local_20);
  *local_28 = uVar3;
  local_80 = 1;
  while( true ) {
    local_bc = 0;
    if (local_80 < (int)local_20[1]) {
      local_bc = (uint)(local_80 < (int)(*local_20 - 1));
    }
    if (local_bc == 0) break;
    local_50 = (uint *)_matrix_mul(local_88[local_80],*local_30);
    if (1 < local_80) {
      _matrix_delete(*local_30);
    }
    *local_30 = local_50;
    _matrix_delete(local_88[local_80]);
    local_80 = local_80 + 1;
  }
  _matrix_delete(*local_88);
  local_48 = (uint *)_matrix_mul(*local_30,local_20);
  _matrix_delete(*local_28);
  *local_28 = local_48;
  _matrix_transpose(*local_30);
  apuStack_d0[1] = local_38;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = _matrix_copy(3,&_in,5);
  _householder(uVar1,&local_20,&local_28);
  _puts("Q");
  _matrix_show(local_28);
  _puts("R");
  _matrix_show(local_20);
  uVar2 = _matrix_mul(local_28,local_20);
  _puts("Q * R");
  _matrix_show(uVar2);
  _matrix_delete(uVar1);
  _matrix_delete(local_20);
  _matrix_delete(local_28);
  _matrix_delete(uVar2);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004038)((int)param_1);
  return iVar1;
}


