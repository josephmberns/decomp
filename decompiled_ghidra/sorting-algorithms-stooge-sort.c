#include "sorting-algorithms-stooge-sort.h"



void _StoogeSort(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + (long)param_3 * 4) < *(int *)(param_1 + (long)param_2 * 4)) {
    uVar1 = *(undefined4 *)(param_1 + (long)param_2 * 4);
    *(undefined4 *)(param_1 + (long)param_2 * 4) = *(undefined4 *)(param_1 + (long)param_3 * 4);
    *(undefined4 *)(param_1 + (long)param_3 * 4) = uVar1;
  }
  if (1 < param_3 - param_2) {
    iVar2 = ((param_3 - param_2) + 1) / 3;
    _StoogeSort(param_1,param_2,param_3 - iVar2);
    _StoogeSort(param_1,param_2 + iVar2,param_3);
    _StoogeSort(param_1,param_2,param_3 - iVar2);
  }
  return;
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  int local_6c;
  undefined auStack_54 [60];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_54,&DAT_100003f68,0x3c);
  uVar2 = _StoogeSort(auStack_54,0,0xe);
  for (local_6c = 0; local_6c < 0xf; local_6c = local_6c + 1) {
    uVar1 = _printf("%5d");
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
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


