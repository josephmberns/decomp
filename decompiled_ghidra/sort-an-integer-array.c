#include "sort-an-integer-array.h"



uint _intcmp(int *param_1,int *param_2)

{
  undefined4 local_24;
  
  if (*param_1 < *param_2) {
    local_24 = 0xffffffff;
  }
  else {
    local_24 = (uint)(*param_2 < *param_1);
  }
  return local_24;
}



undefined8 entry(void)

{
  int iVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_28 = 0x100000003;
  local_30 = 0x400000002;
  local_20 = 2;
  _qsort(&local_30,5,4,(int *)_intcmp);
  iVar1 = _printf("result: %d %d %d %d %d\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004018)();
  return;
}


