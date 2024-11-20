#include "determinant-and-permanent-2.h"



int _showmat(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_2c;
  int local_28;
  
  iVar1 = _printf("%s:\n");
  for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
    for (local_2c = 0; local_2c < param_3; local_2c = local_2c + 1) {
      _printf("%12.4f");
    }
    iVar1 = _putchar(10);
  }
  return iVar1;
}



int _trianglize(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double dVar3;
  int local_54;
  int local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_28 = 1;
  local_2c = 0;
  while( true ) {
    if (param_2 <= local_2c) {
      return local_28;
    }
    local_30 = 0;
    for (local_34 = local_2c; local_34 < param_2; local_34 = local_34 + 1) {
      if (ABS(*(double *)(*(long *)(param_1 + (long)local_30 * 8) + (long)local_2c * 8)) <
          ABS(*(double *)(*(long *)(param_1 + (long)local_34 * 8) + (long)local_2c * 8))) {
        local_30 = local_34;
      }
    }
    if (local_30 != 0) {
      local_28 = -local_28;
      uVar2 = *(undefined8 *)(param_1 + (long)local_2c * 8);
      *(undefined8 *)(param_1 + (long)local_2c * 8) = *(undefined8 *)(param_1 + (long)local_30 * 8);
      *(undefined8 *)(param_1 + (long)local_30 * 8) = uVar2;
    }
    local_44 = local_2c;
    if (*(double *)(*(long *)(param_1 + (long)local_2c * 8) + (long)local_2c * 8) == 0.0) break;
    while (local_44 = local_44 + 1, local_44 < param_2) {
      dVar3 = *(double *)(*(long *)(param_1 + (long)local_44 * 8) + (long)local_2c * 8) /
              *(double *)(*(long *)(param_1 + (long)local_2c * 8) + (long)local_2c * 8);
      if (dVar3 != 0.0) {
        for (local_54 = local_2c; local_54 < param_2; local_54 = local_54 + 1) {
          puVar1 = (undefined8 *)(*(long *)(param_1 + (long)local_44 * 8) + (long)local_54 * 8);
          uVar2 = NEON_fmsub(*(undefined8 *)
                              (*(long *)(param_1 + (long)local_2c * 8) + (long)local_54 * 8),dVar3,
                             *puVar1);
          *puVar1 = uVar2;
        }
      }
    }
    local_2c = local_2c + 1;
  }
  return 0;
}



undefined  [16] _det(undefined8 param_1,uint param_2)

{
  undefined auVar1 [16];
  double adStack_80 [2];
  ulong local_70;
  undefined8 *local_68;
  int local_5c;
  double local_58;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined *local_38;
  uint local_2c;
  undefined8 local_28;
  double local_20;
  long local_18;
  
  local_38 = (undefined *)adStack_80;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_70 = (ulong)param_2 * 8 + 0xf & 0xfffffffffffffff0;
  local_2c = param_2;
  local_28 = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_68 = (undefined8 *)((long)adStack_80 - local_70);
  *local_68 = local_28;
  for (local_44 = 1; local_44 < (int)local_2c; local_44 = local_44 + 1) {
    local_68[local_44] = local_68[local_44 + -1] + (long)(int)local_2c * 8;
  }
  _showmat("Matrix",local_68,local_2c);
  local_48 = _trianglize(local_68,local_2c);
  if (local_48 == 0) {
    local_20 = 0.0;
  }
  else {
    _showmat("Upper triangle",local_68,local_2c);
    local_58 = 1.0;
    for (local_5c = 0; local_5c < (int)local_2c; local_5c = local_5c + 1) {
      local_58 = local_58 * *(double *)(local_68[local_5c] + (long)local_5c * 8);
    }
    local_20 = local_58 * (double)(long)local_48;
  }
  local_4c = 1;
  adStack_80[1] = local_20;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  return auVar1;
}



undefined8 entry(void)

{
  int iVar1;
  int local_a50;
  double adStack_a48 [324];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _srand(0);
  for (local_a50 = 0; local_a50 < 0x144; local_a50 = local_a50 + 1) {
    iVar1 = _rand();
    adStack_a48[local_a50] = (double)(iVar1 % 0x12);
  }
  _det(adStack_a48,0x12);
  iVar1 = _printf("det: %19f\n");
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004020)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004030)(param_1);
  return;
}


