#include "sorting-algorithms-heapsort.h"



int _max(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((param_4 < param_2) &&
     (*(int *)(param_1 + (long)param_3 * 4) < *(int *)(param_1 + (long)param_4 * 4))) {
    local_1c = param_4;
  }
  if ((param_5 < param_2) &&
     (*(int *)(param_1 + (long)local_1c * 4) < *(int *)(param_1 + (long)param_5 * 4))) {
    local_1c = param_5;
  }
  return local_1c;
}



void _downheap(long param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  
  local_20 = param_3;
  while( true ) {
    iVar2 = _max(param_1,param_2,local_20,local_20 * 2 + 1,local_20 * 2 + 2);
    if (iVar2 == local_20) break;
    uVar1 = *(undefined4 *)(param_1 + (long)local_20 * 4);
    *(undefined4 *)(param_1 + (long)local_20 * 4) = *(undefined4 *)(param_1 + (long)iVar2 * 4);
    *(undefined4 *)(param_1 + (long)iVar2 * 4) = uVar1;
    local_20 = iVar2;
  }
  return;
}



int _heapsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_20;
  
  iVar3 = (int)param_2;
  pvVar2 = param_1;
  for (local_20 = (iVar3 + -2) / 2; -1 < local_20; local_20 = local_20 + -1) {
    pvVar2 = (void *)_downheap(param_1,iVar3,local_20);
  }
  for (local_20 = 0; local_20 < iVar3; local_20 = local_20 + 1) {
    uVar1 = *(undefined4 *)((long)param_1 + (long)((iVar3 - local_20) + -1) * 4);
                    // WARNING: Load size is inaccurate
    *(undefined4 *)((long)param_1 + (long)((iVar3 - local_20) + -1) * 4) = *param_1;
    *(undefined4 *)param_1 = uVar1;
    pvVar2 = (void *)_downheap(param_1,(iVar3 - local_20) + -1,0);
  }
  return (int)pvVar2;
}



undefined8 entry(void)

{
  int iVar1;
  size_t sVar2;
  int *in_x3;
  int local_4c;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  sVar2 = 0x28;
  _memcpy(auStack_40,&DAT_100003f6c,0x28);
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    _printf("%d%s");
  }
  iVar1 = _heapsort(auStack_40,10,sVar2,in_x3);
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    iVar1 = _printf("%d%s");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
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


