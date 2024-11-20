#include "stem-and-leaf-plot-1.h"



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



void _leaf_plot(int *param_1,int param_2)

{
  int iVar1;
  int local_24;
  int local_20;
  
  _qsort(param_1,(long)param_2,4,(int *)_icmp);
  local_20 = *param_1 / 10 + -1;
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    iVar1 = param_1[local_24];
    while (local_20 < iVar1 / 10) {
      local_20 = local_20 + 1;
      _printf("%s%3d |");
    }
    _printf(" %d");
  }
  return;
}



undefined8 entry(void)

{
  undefined auStack_20c [484];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_20c,&DAT_100003db4,0x1e4);
  _leaf_plot(auStack_20c,0x79);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003da0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004020)();
  return;
}


