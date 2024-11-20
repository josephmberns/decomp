#include "count-the-coins-1.h"



void _show(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  char acStack_8c [100];
  uint local_28 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_28[0] = (uint)param_1;
  local_28[1] = (int)((ulong)param_1 >> 0x20);
  local_28[2] = (int)param_2;
  local_28[3] = (int)((ulong)param_2 >> 0x20);
  local_a8 = 0;
  local_ac = 4;
  do {
    local_b8 = 0;
    local_a4 = local_ac;
    while (iVar1 = local_a4 + -1, local_a4 != 0) {
      local_b8 = (ulong)local_28[iVar1] + (local_b8 << 0x20);
      local_28[iVar1] = (uint)(local_b8 / 10);
      local_b8 = local_b8 % 10;
      local_a4 = iVar1;
    }
    lVar2 = (long)local_a8;
    local_a8 = local_a8 + 1;
    acStack_8c[lVar2] = (char)local_b8 + '0';
    local_ac = 4;
    while (local_28[local_ac + -1] == 0) {
      local_ac = local_ac + -1;
    }
  } while (local_ac != 0);
  while (local_a8 != 0) {
    _putchar((int)acStack_8c[local_a8 + -1]);
    local_a8 = local_a8 + -1;
  }
  iVar1 = _putchar(10);
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



undefined  [16] _count(int param_1,int *param_2)

{
  int iVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined auVar4 [16];
  long *plVar5;
  int *piVar6;
  void *pvVar7;
  ulong local_70;
  ulong uStack_68;
  int local_3c;
  int local_38;
  int local_34;
  
  for (local_34 = 0; param_2[local_34] != 0; local_34 = local_34 + 1) {
  }
  plVar5 = (long *)_malloc((long)local_34 * 8);
  piVar6 = (int *)_malloc((long)local_34 * 4);
  for (local_38 = 0; local_38 < local_34; local_38 = local_38 + 1) {
    piVar6[local_38] = param_2[local_38];
    pvVar7 = _calloc(0x10,(long)param_2[local_38]);
    plVar5[local_38] = (long)pvVar7;
  }
  puVar3 = (undefined8 *)(*plVar5 + (long)(*param_2 + -1) * 0x10);
  puVar3[1] = 0;
  *puVar3 = 1;
  for (local_3c = 0; local_3c <= param_1; local_3c = local_3c + 1) {
    for (local_38 = 0; local_38 < local_34; local_38 = local_38 + 1) {
      iVar1 = piVar6[local_38];
      piVar6[local_38] = iVar1 + -1;
      if (iVar1 == 0) {
        piVar6[local_38] = param_2[local_38] + -1;
      }
    }
    puVar2 = (ulong *)(*plVar5 + (long)*piVar6 * 0x10);
    uStack_68 = puVar2[1];
    local_70 = *puVar2;
    for (local_38 = 1; local_38 < local_34; local_38 = local_38 + 1) {
      puVar2 = (ulong *)(plVar5[local_38] + (long)piVar6[local_38] * 0x10);
      *puVar2 = *puVar2 + local_70;
      puVar2[1] = puVar2[1] + uStack_68;
      if (*puVar2 < local_70) {
        puVar2[1] = puVar2[1] + 1;
      }
      uStack_68 = puVar2[1];
      local_70 = *puVar2;
    }
  }
  auVar4 = *(undefined (*) [16])(plVar5[local_34 + -1] + (long)piVar6[local_34 + -1] * 0x10);
  for (local_38 = 0; local_38 < local_34; local_38 = local_38 + 1) {
    _free((void *)plVar5[local_38]);
  }
  _free(plVar5);
  _free(piVar6);
  return auVar4;
}



int _count2(int param_1,int *param_2)

{
  int iVar1;
  int local_14;
  
  if ((*param_2 == 0) || (param_1 < 0)) {
    local_14 = 0;
  }
  else if (param_1 == 0) {
    local_14 = 1;
  }
  else {
    local_14 = _count2(param_1 - *param_2,param_2);
    iVar1 = _count2(param_1,param_2 + 1);
    local_14 = local_14 + iVar1;
  }
  return local_14;
}



undefined8 entry(void)

{
  undefined auVar1 [16];
  undefined auStack_74 [36];
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_48 = 0x19;
  local_50 = 0x3200000064;
  uStack_3c = 1;
  uStack_44 = 10;
  uStack_40 = 5;
  _memcpy(auStack_74,&DAT_100003f7c,0x24);
  auVar1 = _count(100,&uStack_48);
  _show(auVar1._0_8_,auVar1._8_8_);
  auVar1 = _count(1000,&local_50);
  _show(auVar1._0_8_,auVar1._8_8_);
  auVar1 = _count(100000,&local_50);
  _show(auVar1._0_8_,auVar1._8_8_);
  auVar1 = _count(1000000,&local_50);
  _show(auVar1._0_8_,auVar1._8_8_);
  auVar1 = _count(10000000,&local_50);
  _show(auVar1._0_8_,auVar1._8_8_);
  _putchar(10);
  auVar1 = _count(100,auStack_74);
  _show(auVar1._0_8_,auVar1._8_8_);
  auVar1 = _count(100000,auStack_74);
  _show(auVar1._0_8_,auVar1._8_8_);
  auVar1 = _count(1000000,auStack_74);
  _show(auVar1._0_8_,auVar1._8_8_);
  auVar1 = _count(10000000,auStack_74);
  _show(auVar1._0_8_,auVar1._8_8_);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004030)(param_1);
  return iVar1;
}


