#include "catamorphism.h"



undefined4 _reduce(code *param_1,int param_2,undefined4 *param_3)

{
  undefined4 local_30;
  int local_2c;
  
  local_30 = *param_3;
  for (local_2c = 1; local_2c < param_2; local_2c = local_2c + 1) {
    local_30 = (*param_1)(local_30,param_3[local_2c]);
  }
  return local_30;
}



int _add(int param_1,int param_2)

{
  return param_1 + param_2;
}



int _sub(int param_1,int param_2)

{
  return param_1 - param_2;
}



int _mul(int param_1,int param_2)

{
  return param_1 * param_2;
}



undefined8 entry(void)

{
  int iVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_28 = 0x400000003;
  local_30 = 0x200000001;
  local_20 = 5;
  _reduce(_add);
  _printf("%d\n");
  _reduce(_sub,5,&local_30);
  _printf("%d\n");
  _reduce(_mul,5,&local_30);
  iVar1 = _printf("%d\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


