#include "determinant-and-permanent-1.h"



undefined  [16] _det_in(undefined8 *param_1,int param_2,int param_3)

{
  double dVar1;
  undefined auVar2 [16];
  ulong local_80;
  double local_78;
  double local_70;
  ulong local_68;
  long local_60;
  int local_54;
  uint local_50;
  int local_4c;
  undefined *local_40;
  ulong local_38;
  int local_30;
  uint local_2c;
  undefined8 *local_28;
  ulong local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_30 = param_3;
  local_28 = param_1;
  if (param_2 == 1) {
    local_20 = *(ulong *)*param_1;
    local_2c = 1;
  }
  else {
    local_38 = 0;
    local_2c = param_2 - 1;
    local_68 = (ulong)local_2c * 8 + 0xf & 0xfffffffffffffff0;
    local_40 = (undefined *)&local_80;
    (*(code *)PTR____chkstk_darwin_100004000)();
    local_60 = (long)&local_80 - local_68;
    for (local_4c = 0; local_4c < (int)local_2c; local_4c = local_4c + 1) {
      *(long *)(local_60 + (long)local_4c * 8) = local_28[local_4c + 1] + 8;
    }
    local_54 = 1;
    for (local_50 = 0; (int)local_50 <= (int)local_2c; local_50 = local_50 + 1) {
      local_70 = (double)(long)local_54;
      local_78 = *(double *)local_28[(int)local_50];
      dVar1 = (double)_det_in(local_60,local_2c,local_30);
      local_38 = NEON_fmadd(local_70,local_78 * dVar1,local_38);
      if (local_50 == local_2c) break;
      *(long *)(local_60 + (long)(int)local_50 * 8) = local_28[(int)local_50] + 8;
      if (local_30 == 0) {
        local_54 = -local_54;
      }
    }
    local_20 = local_38;
  }
  local_80 = local_20;
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_20;
    return auVar2;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined  [16] _det(long param_1,uint param_2,undefined4 param_3)

{
  undefined auVar1 [16];
  ulong local_60;
  undefined *local_58;
  ulong local_50;
  long local_48;
  int local_3c;
  undefined *local_30;
  undefined4 local_28;
  uint local_24;
  long local_20;
  long local_18;
  
  local_30 = (undefined *)&local_60;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_50 = (ulong)param_2 * 8 + 0xf & 0xfffffffffffffff0;
  local_28 = param_3;
  local_24 = param_2;
  local_20 = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_48 = (long)&local_60 - local_50;
  for (local_3c = 0; local_3c < (int)local_24; local_3c = local_3c + 1) {
    *(long *)(local_48 + (long)local_3c * 8) = local_20 + (long)(int)(local_24 * local_3c) * 8;
  }
  auVar1._0_8_ = _det_in(local_48,local_24,local_28);
  local_58 = local_30;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
    local_60 = auVar1._0_8_;
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined8 entry(void)

{
  int iVar1;
  undefined auStack_f0 [200];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _memcpy(auStack_f0,&DAT_100003eb8,200);
  _det(auStack_f0,5,0);
  _printf("det:  %14.12g\n");
  _det(auStack_f0,5,1);
  iVar1 = _printf("perm: %14.12g\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


