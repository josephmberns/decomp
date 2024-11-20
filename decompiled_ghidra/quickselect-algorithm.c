#include "quickselect-algorithm.h"



undefined4 _qselect(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = 0;
  for (local_24 = 0; local_24 < param_2 + -1; local_24 = local_24 + 1) {
    if (*(int *)(param_1 + (long)local_24 * 4) <= *(int *)(param_1 + (long)(param_2 + -1) * 4)) {
      uVar1 = *(undefined4 *)(param_1 + (long)local_24 * 4);
      *(undefined4 *)(param_1 + (long)local_24 * 4) = *(undefined4 *)(param_1 + (long)local_28 * 4);
      *(undefined4 *)(param_1 + (long)local_28 * 4) = uVar1;
      local_28 = local_28 + 1;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + (long)(param_2 + -1) * 4);
  *(undefined4 *)(param_1 + (long)(param_2 + -1) * 4) =
       *(undefined4 *)(param_1 + (long)local_28 * 4);
  *(undefined4 *)(param_1 + (long)local_28 * 4) = uVar1;
  if (param_3 == local_28) {
    local_30 = *(undefined4 *)(param_1 + (long)local_28 * 4);
  }
  else {
    if (param_3 < local_28) {
      local_34 = _qselect(param_1,local_28,param_3);
    }
    else {
      local_34 = _qselect(param_1 + (long)local_28 * 4,param_2 - local_28,param_3 - local_28);
    }
    local_30 = local_34;
  }
  return local_30;
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  int local_70;
  undefined auStack_68 [40];
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = _memcpy(auStack_40,&DAT_100003f78,0x28);
  for (local_70 = 0; local_70 < 10; local_70 = local_70 + 1) {
    _memcpy(auStack_68,auStack_40,0x28);
    _qselect(auStack_68,10,local_70);
    uVar1 = _printf("%d: %d\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
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


