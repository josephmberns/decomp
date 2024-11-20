#include "largest-int-from-concatenated-ints.h"



int _catcmp(void)

{
  int iVar1;
  char acStack_58 [32];
  char acStack_38 [32];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  ___sprintf_chk();
  ___sprintf_chk(acStack_58,0,0x20,"%d%d");
  iVar1 = _strcmp(acStack_58,acStack_38);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return iVar1;
}



int _maxcat(void *param_1,int param_2)

{
  int iVar1;
  int local_20;
  
  _qsort(param_1,(long)param_2,4,(int *)_catcmp);
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    _printf("%d");
  }
  iVar1 = _putchar(10);
  return iVar1;
}



undefined8 entry(void)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  uStack_38 = 0x6200000003;
  local_40 = 0x2200000001;
  uStack_28 = 0x40000002d;
  local_30 = 0x4c00000009;
  uStack_48 = 0x3c00000224;
  local_50 = 0x22200000036;
  _maxcat(&local_40,8);
  _maxcat(&local_50,4);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004020)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004030)((int)param_1);
  return iVar1;
}


