#include "factors-of-an-integer-1.h"



void _xferFactors(long *param_1,long param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  int local_2c;
  int local_28;
  
  iVar1 = *(short *)(param_1 + 1) + param_3;
  if (param_3 < iVar1) {
    pvVar2 = _realloc((void *)*param_1,(long)iVar1 << 2);
    *param_1 = (long)pvVar2;
  }
  else {
    pvVar2 = _malloc((long)iVar1 << 2);
    *param_1 = (long)pvVar2;
  }
  local_2c = 0;
  for (local_28 = (int)*(short *)(param_1 + 1); local_28 < iVar1; local_28 = local_28 + 1) {
    *(undefined4 *)(*param_1 + (long)local_28 * 4) = *(undefined4 *)(param_2 + (long)local_2c * 4);
    local_2c = local_2c + 1;
  }
  *(short *)(param_1 + 1) = (short)iVar1;
  return;
}



undefined8 * _factor(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_4f0;
  int local_4ec;
  int aiStack_4dc [301];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_4ec = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  _free((void *)*param_2);
  *param_2 = 0;
  for (local_4f0 = 1; local_4f0 * local_4f0 < param_1; local_4f0 = local_4f0 + 1) {
    iVar1 = 0;
    if (local_4f0 != 0) {
      iVar1 = param_1 / local_4f0;
    }
    if (param_1 == iVar1 * local_4f0) {
      if (local_4ec == 300) {
        _xferFactors(param_2,aiStack_4dc,300);
        local_4ec = 0;
      }
      iVar1 = local_4ec + 1;
      aiStack_4dc[local_4ec] = local_4f0;
      iVar2 = 0;
      if (local_4f0 != 0) {
        iVar2 = param_1 / local_4f0;
      }
      local_4ec = local_4ec + 2;
      aiStack_4dc[iVar1] = iVar2;
    }
  }
  if (local_4f0 * local_4f0 == param_1) {
    lVar3 = (long)local_4ec;
    local_4ec = local_4ec + 1;
    aiStack_4dc[lVar3] = local_4f0;
  }
  if (0 < local_4ec) {
    _xferFactors(param_2,aiStack_4dc,local_4ec);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return param_2;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  int local_5c;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_34 = 0;
  local_38 = (undefined4)param_1;
  uStack_28 = 0x2d00000c3f;
  local_30 = 0xd4c20860000080b;
  local_50 = 0;
  local_48 = 0;
  local_40 = param_2;
  for (local_58 = 0; local_58 < 4; local_58 = local_58 + 1) {
    _factor(*(undefined4 *)((long)&local_30 + (long)local_58 * 4),&local_50);
    _printf("\nfactors of %d are:\n  ");
    for (local_5c = 0; local_5c < (short)local_48; local_5c = local_5c + 1) {
      _printf("%c %d");
    }
    uVar1 = _printf("\n");
    param_1 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004028)();
  return pvVar1;
}


