#include "remove-duplicate-elements-3.h"



uint _icmp(int *param_1,int *param_2)

{
  undefined4 local_14;
  
  if (*param_1 < *param_2) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = (uint)(*param_2 < *param_1);
  }
  return local_14;
}



int _uniq(void *param_1,int param_2)

{
  int local_24;
  int local_20;
  
  _qsort(param_1,(long)param_2,4,(int *)_icmp);
  local_24 = 0;
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    if (*(int *)((long)param_1 + (long)local_20 * 4) != *(int *)((long)param_1 + (long)local_24 * 4)
       ) {
      local_24 = local_24 + 1;
      *(undefined4 *)((long)param_1 + (long)local_24 * 4) =
           *(undefined4 *)((long)param_1 + (long)local_20 * 4);
    }
  }
  return local_24 + 1;
}



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int local_48;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_40,&DAT_100003f74,0x28);
  uVar3 = _uniq(auStack_40,10);
  iVar1 = (int)uVar3;
  for (local_48 = 0; local_48 < iVar1; local_48 = local_48 + 1) {
    uVar2 = _printf("%d\n");
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar3);
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004020)();
  return;
}


