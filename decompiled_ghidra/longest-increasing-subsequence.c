#include "longest-increasing-subsequence.h"



void _lis(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int *local_28;
  int local_20;
  
  pvVar3 = _calloc((long)param_2,0x10);
  for (local_20 = 0; iVar1 = param_2, local_20 < param_2; local_20 = local_20 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_20 * 0x10) =
         *(undefined4 *)(param_1 + (long)local_20 * 4);
  }
  while (local_20 = iVar1, iVar1 = local_20 + -1, local_20 != 0) {
    piVar2 = (int *)((long)pvVar3 + (long)iVar1 * 0x10);
    while (local_28 = piVar2, piVar2 = local_28 + 4,
          local_28 < (int *)((long)pvVar3 + (long)param_2 * 0x10)) {
      if ((*(int *)((long)pvVar3 + (long)iVar1 * 0x10) < *piVar2) &&
         (*(int *)((long)pvVar3 + (long)iVar1 * 0x10 + 4) <= local_28[5])) {
        *(int **)((long)pvVar3 + (long)iVar1 * 0x10 + 8) = piVar2;
        *(int *)((long)pvVar3 + (long)iVar1 * 0x10 + 4) = local_28[5] + 1;
      }
    }
  }
  local_28 = (int *)pvVar3;
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    if (*(int *)((long)local_28 + 4) < *(int *)((long)pvVar3 + (long)local_20 * 0x10 + 4)) {
      local_28 = (int *)((long)pvVar3 + (long)local_20 * 0x10);
    }
  }
  do {
    _printf(" %d");
    local_28 = *(int **)((long)local_28 + 8);
  } while (local_28 != (int *)0x0);
  _putchar(10);
  _free(pvVar3);
  return;
}



undefined8 entry(void)

{
  undefined auStack_70 [64];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_28 = 0x400000006;
  local_30 = 0x200000003;
  local_20 = 0x100000005;
  _memcpy(auStack_70,&DAT_100003f68,0x40);
  _lis(&local_30,6);
  _lis(auStack_70,0x10);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004030)(param_1);
  return iVar1;
}


