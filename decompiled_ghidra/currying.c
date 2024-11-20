#include "currying.h"



long _factorial(int param_1)

{
  undefined8 local_18;
  
  if (param_1 < 2) {
    local_18 = 1;
  }
  else {
    local_18 = _factorial(param_1 + -1);
    local_18 = param_1 * local_18;
  }
  return local_18;
}



long _sumOfFactorials(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  long local_28;
  int local_14;
  
  local_28 = 0;
  local_14 = param_1;
  while (local_14 != 0) {
    uVar1 = *(undefined4 *)register0x00000008;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + 8);
    lVar2 = _factorial(uVar1);
    local_28 = local_28 + lVar2;
    local_14 = local_14 + -1;
  }
  return local_28;
}



undefined4 entry(void)

{
  _sumOfFactorials(5);
  _printf("\nSum of factorials of [1,5] : %ld");
  _sumOfFactorials(3);
  _printf("\nSum of factorials of [3,5] : %ld");
  _sumOfFactorials(3);
  _printf("\nSum of factorials of [1,3] : %ld");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


