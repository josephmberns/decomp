#include "sorting-algorithms-merge-sort-1.h"



void _merge(long param_1,int param_2,int param_3)

{
  void *pvVar1;
  long lVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  pvVar1 = _malloc((long)param_2 << 2);
  local_24 = 0;
  local_28 = param_3;
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    if (local_28 == param_2) {
      lVar2 = (long)local_24;
      local_24 = local_24 + 1;
      local_3c = *(undefined4 *)(param_1 + lVar2 * 4);
    }
    else {
      if (local_24 == param_3) {
        lVar2 = (long)local_28;
        local_28 = local_28 + 1;
        local_40 = *(undefined4 *)(param_1 + lVar2 * 4);
      }
      else {
        if (*(int *)(param_1 + (long)local_28 * 4) < *(int *)(param_1 + (long)local_24 * 4)) {
          lVar2 = (long)local_28;
          local_28 = local_28 + 1;
          local_44 = *(undefined4 *)(param_1 + lVar2 * 4);
        }
        else {
          lVar2 = (long)local_24;
          local_24 = local_24 + 1;
          local_44 = *(undefined4 *)(param_1 + lVar2 * 4);
        }
        local_40 = local_44;
      }
      local_3c = local_40;
    }
    *(undefined4 *)((long)pvVar1 + (long)local_2c * 4) = local_3c;
  }
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    *(undefined4 *)(param_1 + (long)local_24 * 4) =
         *(undefined4 *)((long)pvVar1 + (long)local_24 * 4);
  }
  _free(pvVar1);
  return;
}



void _merge_sort(long param_1,int param_2)

{
  int iVar1;
  
  if (1 < param_2) {
    iVar1 = param_2 / 2;
    _merge_sort(param_1,iVar1);
    _merge_sort(param_1 + (long)iVar1 * 4,param_2 - iVar1);
    _merge(param_1,param_2,iVar1);
  }
  return;
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  int local_4c;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_40,&DAT_100003f74,0x28);
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    _printf("%d%s");
  }
  uVar2 = _merge_sort(auStack_40,10);
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    uVar1 = _printf("%d%s");
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
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


