#include "sorting-algorithms-bead-sort.h"



void _bead_sort(int *param_1,int param_2)

{
  bool bVar1;
  void *pvVar2;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_20 = 1;
  local_28 = *param_1;
  for (; local_20 < param_2; local_20 = local_20 + 1) {
    if (local_28 < param_1[local_20]) {
      local_28 = param_1[local_20];
    }
  }
  pvVar2 = _calloc(1,(long)(local_28 * param_2));
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    for (local_24 = 0; local_24 < param_1[local_20]; local_24 = local_24 + 1) {
      *(undefined *)((long)pvVar2 + (long)(local_20 * local_28 + local_24)) = 1;
    }
  }
  for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
    local_2c = 0;
    for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
      local_2c = local_2c + (uint)*(byte *)((long)pvVar2 + (long)(local_20 * local_28 + local_24));
      *(undefined *)((long)pvVar2 + (long)(local_20 * local_28 + local_24)) = 0;
    }
    for (local_20 = param_2 - local_2c; local_20 < param_2; local_20 = local_20 + 1) {
      *(undefined *)((long)pvVar2 + (long)(local_20 * local_28 + local_24)) = 1;
    }
  }
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    local_24 = 0;
    while( true ) {
      bVar1 = false;
      if (local_24 < local_28) {
        bVar1 = *(char *)((long)pvVar2 + (long)(local_20 * local_28 + local_24)) != '\0';
      }
      if (!bVar1) break;
      local_24 = local_24 + 1;
    }
    param_1[local_20] = local_24;
  }
  _free(pvVar2);
  return;
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  int local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_38 = 0x700000001;
  local_40 = 0x300000005;
  uStack_28 = 0x1400000001;
  local_30 = 0x100000004;
  uVar2 = _bead_sort(&local_40,8);
  for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
    uVar1 = _printf("%d\n");
    uVar2 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


