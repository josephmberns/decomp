#include "order-by-pair-comparisons.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _interactiveCompare(void)

{
  undefined4 local_34;
  
  _DAT_100008000 = _DAT_100008000 + 1;
  _printf("(%d) Is %s <, ==, or > %s? Answer -1, 0, or 1: ");
  _scanf("%d");
  return local_34;
}



int _printOrder(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_20;
  
  _printf("{ ");
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    _printf("%s ");
  }
  iVar1 = _printf("}\n");
  return iVar1;
}



undefined8 entry(void)

{
  undefined auStack_50 [56];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_50,&PTR_s_violet_100004030,0x38);
  _qsort(auStack_50,7,8,(int *)_interactiveCompare);
  _printOrder(auStack_50,7);
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

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004028)((int)param_1);
  return iVar1;
}


