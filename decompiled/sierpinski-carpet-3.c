#include "sierpinski-carpet-3.h"



void _sierpinski_hollow(long *param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  
  iVar1 = ((*(int *)((long)param_1 + 0xc) - *(int *)(param_1 + 1)) + 1) / 3;
  for (local_14 = *(int *)(param_1 + 1) + iVar1; local_14 < *(int *)(param_1 + 1) + iVar1 * 2;
      local_14 = local_14 + 1) {
    for (local_18 = *(int *)(param_1 + 2) + iVar1; local_18 < *(int *)(param_1 + 2) + iVar1 * 2;
        local_18 = local_18 + 1) {
      *(undefined *)(*(long *)(*param_1 + (long)local_18 * 8) + (long)local_14) = 0x20;
    }
  }
  return;
}



void _sierpinski(undefined8 *param_1,int param_2)

{
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  int local_1c;
  undefined8 *local_18;
  
  if (param_2 != 0) {
    local_1c = param_2;
    local_18 = param_1;
    if (param_2 == 1) {
      uStack_38 = param_1[1];
      local_40 = *param_1;
      local_30 = param_1[2];
      _sierpinski_hollow(&local_40);
      uStack_58 = param_1[1];
      local_60 = *param_1;
      local_50 = param_1[2];
      _sierpinski(&local_60,0);
    }
    uStack_78 = param_1[1];
    local_80 = *param_1;
    local_70 = param_1[2];
    _sierpinski_hollow(&local_80);
    for (local_84 = 0; local_84 < 3; local_84 = local_84 + 1) {
      for (local_88 = 0; local_88 < 3; local_88 = local_88 + 1) {
        local_8c = (*(int *)((long)param_1 + 0xc) - *(int *)(param_1 + 1)) + 1;
        local_90 = local_8c / 3;
        local_c0 = *param_1;
        iStack_a0 = *(int *)(param_1 + 1) + local_84 * local_90;
        iStack_9c = *(int *)(param_1 + 1) + (local_84 + 1) * local_90 + -1;
        local_98 = *(int *)(param_1 + 2) + local_88 * local_90;
        iStack_94 = *(int *)(param_1 + 2) + (local_88 + 1) * local_90 + -1;
        uStack_b8 = CONCAT44(iStack_9c,iStack_a0);
        local_b0 = CONCAT44(iStack_94,local_98);
        local_a8 = local_c0;
        _sierpinski(&local_c0,local_1c + -1);
      }
    }
  }
  return;
}



int _intpow(int param_1,int param_2)

{
  undefined4 local_14;
  
  if (param_2 == 0) {
    local_14 = 1;
  }
  else {
    local_14 = _intpow(param_1,param_2 + -1);
    local_14 = param_1 * local_14;
  }
  return local_14;
}



int _allocate_grid(long *param_1,int param_2,undefined param_3)

{
  void *pvVar1;
  int local_34;
  int local_30;
  int local_14;
  
  local_14 = _intpow(3,param_2 + 1);
  pvVar1 = _calloc((long)local_14,8);
  *param_1 = (long)pvVar1;
  if (*param_1 == 0) {
    local_14 = -1;
  }
  else {
    for (local_30 = 0; local_30 < local_14; local_30 = local_30 + 1) {
      pvVar1 = _calloc((long)local_14,1);
      *(void **)(*param_1 + (long)local_30 * 8) = pvVar1;
      if (*(long *)(*param_1 + (long)local_30 * 8) == 0) {
        return -1;
      }
      for (local_34 = 0; local_34 < local_14; local_34 = local_34 + 1) {
        *(undefined *)(*(long *)(*param_1 + (long)local_30 * 8) + (long)local_34) = param_3;
      }
    }
  }
  return local_14;
}



ulong _print_grid(ulong param_1,int param_2)

{
  uint uVar1;
  int local_20;
  
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    uVar1 = _printf("%s\n");
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



bool entry(void)

{
  bool bVar1;
  void *local_60;
  long lStack_58;
  long local_50;
  void *local_40;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 local_30;
  uint uStack_2c;
  int local_24;
  void *local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 3;
  local_24 = _allocate_grid(&local_20,3,0x23);
  bVar1 = local_24 != -1;
  if (bVar1) {
    local_40 = local_20;
    uStack_38 = 0;
    uStack_34 = local_24 - 1;
    local_30 = 0;
    uStack_2c = local_24 - 1;
    lStack_58 = (ulong)uStack_34 << 0x20;
    local_60 = local_20;
    local_50 = (ulong)uStack_2c << 0x20;
    _sierpinski(&local_60,local_18);
    _print_grid(local_20,local_24);
    _free(local_20);
  }
  return !bVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


