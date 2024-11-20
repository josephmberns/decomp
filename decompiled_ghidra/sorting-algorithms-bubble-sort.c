#include "sorting-algorithms-bubble-sort.h"



void _bubble_sort(long param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 local_18;
  undefined4 local_10;
  
  bVar2 = true;
  local_18 = param_2;
  while (bVar2) {
    bVar2 = false;
    for (local_10 = 1; local_10 < local_18; local_10 = local_10 + 1) {
      if (*(int *)(param_1 + (long)local_10 * 4) < *(int *)(param_1 + (long)(local_10 + -1) * 4)) {
        uVar1 = *(undefined4 *)(param_1 + (long)local_10 * 4);
        *(undefined4 *)(param_1 + (long)local_10 * 4) =
             *(undefined4 *)(param_1 + (long)(local_10 + -1) * 4);
        *(undefined4 *)(param_1 + (long)(local_10 + -1) * 4) = uVar1;
        bVar2 = true;
      }
    }
    local_18 = local_18 + -1;
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
  _memcpy(auStack_40,&DAT_100003f6c,0x28);
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    _printf("%d%s");
  }
  uVar2 = _bubble_sort(auStack_40,10);
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


