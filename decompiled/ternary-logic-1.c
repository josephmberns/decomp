#include "ternary-logic-1.h"



int _demo_binary_op(void)

{
  int iVar1;
  uint local_28;
  uint local_24;
  
  iVar1 = _printf("\n");
  for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
      iVar1 = _printf("%s %s %s: %s\n");
    }
  }
  return iVar1;
}



undefined8 entry(void)

{
  uint local_18;
  
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    _printf("Not %s: %s\n");
  }
  _demo_binary_op(&_tritAnd,"And");
  _demo_binary_op(&_tritOr,"Or");
  _demo_binary_op(&_tritThen,"Then");
  _demo_binary_op(&_tritEquiv,"Equiv");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


