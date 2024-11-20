#include "sorting-algorithms-quicksort-1.h"



undefined8 entry(void)

{
  int iVar1;
  int local_4c;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_40,&DAT_100003f78,0x28);
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    _printf("%d ");
  }
  _printf("\n");
  _quicksort(auStack_40,10);
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    _printf("%d ");
  }
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void _quicksort(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  
  if (1 < param_2) {
    iVar1 = *(int *)(param_1 + (long)(param_2 / 2) * 4);
    local_24 = 0;
    local_28 = param_2 + -1;
    while( true ) {
      while (*(int *)(param_1 + (long)local_24 * 4) < iVar1) {
        local_24 = local_24 + 1;
      }
      while (iVar1 < *(int *)(param_1 + (long)local_28 * 4)) {
        local_28 = local_28 + -1;
      }
      if (local_28 <= local_24) break;
      uVar2 = *(undefined4 *)(param_1 + (long)local_24 * 4);
      *(undefined4 *)(param_1 + (long)local_24 * 4) = *(undefined4 *)(param_1 + (long)local_28 * 4);
      *(undefined4 *)(param_1 + (long)local_28 * 4) = uVar2;
      local_24 = local_24 + 1;
      local_28 = local_28 + -1;
    }
    _quicksort(param_1,local_24);
    _quicksort(param_1 + (long)local_24 * 4,param_2 - local_24);
  }
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
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


