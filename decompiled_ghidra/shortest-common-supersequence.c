#include "shortest-common-supersequence.h"



undefined8 _scs(char *param_1,char *param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  size_t sVar6;
  undefined *local_d0;
  ulong local_c8 [4];
  long local_a8;
  int *local_a0;
  int local_98;
  int local_94;
  undefined4 local_90;
  uint uStack_8c;
  undefined8 uStack_88;
  int local_80;
  undefined4 uStack_7c;
  long lStack_78;
  int local_6c;
  int local_68;
  undefined4 uStack_64;
  long lStack_60;
  int local_54;
  ulong local_48;
  undefined *local_40;
  int local_38;
  int local_34;
  undefined *local_30;
  char *local_28;
  char *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  sVar6 = _strlen(param_1);
  local_34 = (int)sVar6;
  sVar6 = _strlen(local_28);
  local_38 = (int)sVar6;
  local_c8[2] = (ulong)(local_38 + 1U);
  local_c8[0] = (ulong)(local_34 + 1U);
  local_c8[1] = (ulong)(local_38 + 1U) * (ulong)(local_34 + 1U) * 0x10;
  local_40 = (undefined *)&local_d0;
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar1 = (long)&local_d0 - local_c8[1];
  local_48 = local_c8[2];
  for (local_54 = 0; local_54 < local_38; local_54 = local_54 + 1) {
    iVar3 = local_38 - local_54;
    uStack_64 = CONCAT31(uStack_64._1_3_,local_28[local_54]);
    lVar2 = lVar1 + (long)(local_54 + 1) * local_c8[0] * 0x10 + (long)local_34 * 0x10;
    puVar4 = (undefined8 *)(lVar1 + (long)local_54 * local_c8[0] * 0x10 + (long)local_34 * 0x10);
    puVar4[1] = lVar2;
    *puVar4 = CONCAT44(uStack_64,iVar3);
    local_68 = iVar3;
    lStack_60 = lVar2;
  }
  for (local_6c = 0; local_6c < local_34; local_6c = local_6c + 1) {
    iVar3 = local_34 - local_6c;
    uStack_7c = CONCAT31(uStack_7c._1_3_,local_20[local_6c]);
    lVar2 = lVar1 + (long)local_38 * local_c8[0] * 0x10 + (long)(local_6c + 1) * 0x10;
    puVar4 = (undefined8 *)(lVar1 + (long)local_38 * local_c8[0] * 0x10 + (long)local_6c * 0x10);
    puVar4[1] = lVar2;
    *puVar4 = CONCAT44(uStack_7c,iVar3);
    local_80 = iVar3;
    lStack_78 = lVar2;
  }
  local_90 = 0;
  uStack_8c = uStack_8c & 0xffffff00;
  uStack_88 = 0;
  plVar5 = (long *)(lVar1 + (long)local_38 * local_c8[0] * 0x10 + (long)local_34 * 0x10);
  plVar5[1] = 0;
  *plVar5 = (ulong)uStack_8c << 0x20;
  local_94 = local_38;
  local_c8[3] = lVar1;
  iVar3 = local_98;
  while (local_98 = iVar3, local_94 != 0) {
    local_98 = local_34;
    local_94 = local_94 + -1;
    while (iVar3 = local_98 + -1, local_98 != 0) {
      local_a0 = (int *)(local_c8[3] + (long)local_94 * local_c8[0] * 0x10 + (long)iVar3 * 0x10);
      if (local_28[local_94] == local_20[iVar3]) {
        lVar1 = (long)local_98;
        local_98 = iVar3;
        *(ulong *)(local_a0 + 2) =
             local_c8[3] + (long)(local_94 + 1) * local_c8[0] * 0x10 + lVar1 * 0x10;
        *(char *)(local_a0 + 1) = local_20[local_98];
      }
      else if (*(int *)(local_c8[3] + (long)local_94 * local_c8[0] * 0x10 + (long)local_98 * 0x10) <
               *(int *)(local_c8[3] + (long)(local_94 + 1) * local_c8[0] * 0x10 + (long)iVar3 * 0x10
                       )) {
        lVar1 = (long)local_98;
        local_98 = iVar3;
        *(ulong *)(local_a0 + 2) = local_c8[3] + (long)local_94 * local_c8[0] * 0x10 + lVar1 * 0x10;
        *(char *)(local_a0 + 1) = local_20[local_98];
      }
      else {
        local_98 = iVar3;
        *(ulong *)(local_a0 + 2) =
             local_c8[3] + (long)(local_94 + 1) * local_c8[0] * 0x10 + (long)iVar3 * 0x10;
        *(char *)(local_a0 + 1) = local_28[local_94];
      }
      *local_a0 = **(int **)(local_a0 + 2) + 1;
    }
  }
  for (local_a8 = local_c8[3]; local_a8 != 0; local_a8 = *(long *)(local_a8 + 8)) {
    *local_30 = *(undefined *)(local_a8 + 4);
    local_30 = local_30 + 1;
  }
  local_d0 = local_40;
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return 0;
  }
  local_94 = local_94 + -1;
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100004010;
  _scs();
  iVar1 = _printf("SCS(%s, %s) -> %s\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != lVar2) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}


