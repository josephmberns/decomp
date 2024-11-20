#include "binary-search.h"



void * _bsearch(void *param_1,void *param_2,size_t param_3,size_t param_4,int *param_5)

{
  int local_20;
  int local_1c;
  uint local_4;
  
  local_1c = 0;
  local_20 = (int)param_2 + -1;
  while (local_1c <= local_20) {
    local_4 = local_1c + (local_20 - local_1c) / 2;
    if (*(int *)((long)param_1 + (long)(int)local_4 * 4) == (int)param_3) goto LAB_100003cb0;
    if (*(int *)((long)param_1 + (long)(int)local_4 * 4) < (int)param_3) {
      local_1c = local_4 + 1;
    }
    else {
      local_20 = local_4 - 1;
    }
  }
  local_4 = 0xffffffff;
LAB_100003cb0:
  return (void *)(ulong)local_4;
}



int _bsearch_r(long param_1,int param_2,int param_3,int param_4)

{
  undefined4 local_14;
  
  if (param_4 < param_3) {
    local_14 = -1;
  }
  else {
    local_14 = param_3 + (param_4 - param_3) / 2;
    if (*(int *)(param_1 + (long)local_14 * 4) != param_2) {
      if (*(int *)(param_1 + (long)local_14 * 4) < param_2) {
        local_14 = _bsearch_r(param_1,param_2,local_14 + 1,param_4);
      }
      else {
        local_14 = _bsearch_r(param_1,param_2,param_3,local_14 + -1);
      }
    }
  }
  return local_14;
}



undefined8 entry(void)

{
  int iVar1;
  void *pvVar2;
  size_t in_x3;
  int *in_x4;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_40,&DAT_100003f50,0x28);
  pvVar2 = _bsearch(auStack_40,(void *)0xa,2,in_x3,in_x4);
  if ((int)pvVar2 < 0) {
    _printf("%d is not found.\n");
  }
  else {
    _printf("%d is at index %d.\n");
  }
  iVar1 = _bsearch_r(auStack_40,5,0,9);
  if (iVar1 < 0) {
    iVar1 = _printf("%d is not found.\n");
  }
  else {
    iVar1 = _printf("%d is at index %d.\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


