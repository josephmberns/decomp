#include "sorting-algorithms-shell-sort.h"



void _shell_sort(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = param_2;
  while (local_10 = local_10 / 2, local_14 = local_10, local_10 != 0) {
    for (; local_14 < param_2; local_14 = local_14 + 1) {
      iVar2 = *(int *)(param_1 + (long)local_14 * 4);
      local_18 = local_14;
      while( true ) {
        bVar1 = false;
        if (local_10 <= local_18) {
          bVar1 = iVar2 < *(int *)(param_1 + (long)(local_18 - local_10) * 4);
        }
        if (!bVar1) break;
        *(undefined4 *)(param_1 + (long)local_18 * 4) =
             *(undefined4 *)(param_1 + (long)(local_18 - local_10) * 4);
        local_18 = local_18 - local_10;
      }
      *(int *)(param_1 + (long)local_18 * 4) = iVar2;
    }
  }
  return;
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  int local_58;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_40,&DAT_100003f6c,0x28);
  for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
    _printf("%d%s");
  }
  uVar2 = _shell_sort(auStack_40,10);
  for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
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


