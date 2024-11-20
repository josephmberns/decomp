#include "nth-1.h"



undefined8 _addSuffix(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100004010;
  ___snprintf_chk(param_2,param_3,0,0xffffffffffffffff,"%d%s");
  if (*(long *)PTR____stack_chk_guard_100004010 != lVar1) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return param_2;
}



undefined8 entry(void)

{
  undefined auStack_2a [7];
  undefined auStack_23 [6];
  undefined auStack_1d [5];
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  _printf("Set [0,25]:\n");
  for (local_18 = 0; local_18 < 0x1a; local_18 = local_18 + 1) {
    _addSuffix(local_18,auStack_1d,5);
    _printf("%s ");
  }
  _putchar(10);
  _printf("Set [250,265]:\n");
  for (local_18 = 0xfa; local_18 < 0x10a; local_18 = local_18 + 1) {
    _addSuffix(local_18,auStack_23,6);
    _printf("%s ");
  }
  _putchar(10);
  _printf("Set [1000,1025]:\n");
  for (local_18 = 1000; local_18 < 0x402; local_18 = local_18 + 1) {
    _addSuffix(local_18,auStack_2a,7);
    _printf("%s ");
  }
  _putchar(10);
  return 0;
}



void ___snprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____snprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004020)(param_1);
  return iVar1;
}


