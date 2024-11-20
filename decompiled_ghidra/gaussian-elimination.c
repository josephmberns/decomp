#include "gaussian-elimination.h"



void _swap_row(long param_1,long param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  
  if (param_3 != param_4) {
    for (local_3c = 0; local_3c < param_5; local_3c = local_3c + 1) {
      puVar1 = (undefined8 *)(param_1 + (long)(param_3 * param_5 + local_3c) * 8);
      puVar2 = (undefined8 *)(param_1 + (long)(param_4 * param_5 + local_3c) * 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar2;
      *puVar2 = uVar3;
    }
    uVar3 = *(undefined8 *)(param_2 + (long)param_3 * 8);
    *(undefined8 *)(param_2 + (long)param_3 * 8) = *(undefined8 *)(param_2 + (long)param_4 * 8);
    *(undefined8 *)(param_2 + (long)param_4 * 8) = uVar3;
  }
  return;
}



void _gauss_eliminate(long param_1,long param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  for (local_44 = 0; local_44 < param_4; local_44 = local_44 + 1) {
    local_40 = local_44;
    local_50 = *(double *)(param_1 + (long)(local_44 * param_4 + local_44) * 8);
    local_3c = local_44;
    while (local_3c = local_3c + 1, local_3c < param_4) {
      dVar2 = ABS(*(double *)(param_1 + (long)(local_3c * param_4 + local_44) * 8));
      if (local_50 < dVar2) {
        local_40 = local_3c;
        local_50 = dVar2;
      }
    }
    _swap_row(param_1,param_2,local_44,local_40,param_4);
    local_3c = local_44;
    while (local_3c = local_3c + 1, local_3c < param_4) {
      dVar2 = *(double *)(param_1 + (long)(local_3c * param_4 + local_44) * 8) /
              *(double *)(param_1 + (long)(local_44 * param_4 + local_44) * 8);
      local_38 = local_44;
      while (local_38 = local_38 + 1, local_38 < param_4) {
        puVar1 = (undefined8 *)(param_1 + (long)(local_3c * param_4 + local_38) * 8);
        uVar3 = NEON_fmsub(dVar2,*(undefined8 *)
                                  (param_1 + (long)(local_44 * param_4 + local_38) * 8),*puVar1);
        *puVar1 = uVar3;
      }
      *(undefined8 *)(param_1 + (long)(local_3c * param_4 + local_44) * 8) = 0;
      puVar1 = (undefined8 *)(param_2 + (long)local_3c * 8);
      uVar3 = NEON_fmsub(dVar2,*(undefined8 *)(param_2 + (long)local_44 * 8),*puVar1);
      *puVar1 = uVar3;
    }
  }
  for (local_3c = param_4 + -1; -1 < local_3c; local_3c = local_3c + -1) {
    local_58 = *(double *)(param_2 + (long)local_3c * 8);
    for (local_34 = param_4 + -1; local_3c < local_34; local_34 = local_34 + -1) {
      local_58 = (double)NEON_fmsub(*(undefined8 *)(param_3 + (long)local_34 * 8),
                                    *(undefined8 *)
                                     (param_1 + (long)(local_3c * param_4 + local_34) * 8),local_58)
      ;
    }
    *(double *)(param_3 + (long)local_3c * 8) =
         local_58 / *(double *)(param_1 + (long)(local_3c * param_4 + local_3c) * 8);
  }
  return;
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  int local_1b0;
  undefined auStack_1a8 [48];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined auStack_148 [288];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_148,&DAT_100003e70,0x120);
  _memset(&local_178,0,0x30);
  local_178 = 0xbf847ae147ae147b;
  local_170 = 0x3fe3851eb851eb85;
  local_168 = 0x3fed1eb851eb851f;
  local_160 = 0x3fefae147ae147ae;
  local_158 = 0x3fe3333333333333;
  local_150 = 0x3f947ae147ae147b;
  uVar2 = _gauss_eliminate(auStack_148,&local_178,auStack_1a8,6);
  for (local_1b0 = 0; local_1b0 < 6; local_1b0 = local_1b0 + 1) {
    uVar1 = _printf("%g\n");
    uVar2 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e24. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004018)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


