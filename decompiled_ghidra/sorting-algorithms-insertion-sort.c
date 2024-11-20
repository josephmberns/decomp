#include "sorting-algorithms-insertion-sort.h"



void _insertion_sort(long param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_18;
  
  for (local_18 = 1; local_18 < param_2; local_18 = local_18 + 1) {
    iVar2 = *(int *)(param_1 + local_18 * 4);
    local_28 = local_18;
    while( true ) {
      bVar1 = false;
      if (local_28 != 0) {
        bVar1 = iVar2 < *(int *)(param_1 + (local_28 - 1) * 4);
      }
      if (!bVar1) break;
      *(undefined4 *)(param_1 + local_28 * 4) = *(undefined4 *)(param_1 + (local_28 - 1) * 4);
      local_28 = local_28 - 1;
    }
    *(int *)(param_1 + local_28 * 4) = iVar2;
  }
  return;
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  ulong local_68;
  ulong local_60;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_40,&DAT_100003f6c,0x28);
  for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
    _printf("%d%s");
  }
  uVar2 = _insertion_sort(auStack_40,10);
  for (local_68 = 0; local_68 < 10; local_68 = local_68 + 1) {
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
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


