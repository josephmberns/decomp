#include "combinations-with-repetitions-2.h"



long _choose(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  long local_40;
  int local_34;
  long local_18;
  
  local_40 = 0;
  local_34 = param_4;
  if (param_2 == param_3) {
    if (param_1 == 0) {
      local_18 = 1;
    }
    else {
      for (local_34 = 0; local_34 < param_3; local_34 = local_34 + 1) {
        _printf("%s\t");
      }
      _printf("\n");
      local_18 = 1;
    }
  }
  else {
    for (; local_34 < param_5; local_34 = local_34 + 1) {
      if (param_1 != 0) {
        *(int *)(param_1 + (long)param_2 * 4) = local_34;
      }
      lVar1 = _choose(param_1,param_2 + 1,param_3,local_34,param_5);
      local_40 = local_40 + lVar1;
    }
    local_18 = local_40;
  }
  return local_18;
}



undefined8 entry(void)

{
  int iVar1;
  undefined auStack_24 [12];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _choose(auStack_24,0,2);
  _choose(0,0,3,0,10);
  iVar1 = _printf("\nWere there ten donuts, we\'d have had %ld choices of three\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


