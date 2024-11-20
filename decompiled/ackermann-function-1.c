#include "ackermann-function-1.h"



int _ackermann(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = param_2 + 1;
  }
  else if (param_2 == 0) {
    local_14 = _ackermann(param_1 + -1,1);
  }
  else {
    uVar1 = _ackermann(param_1,param_2 + -1);
    local_14 = _ackermann(param_1 + -1,uVar1);
  }
  return local_14;
}



undefined8 entry(void)

{
  int local_1c;
  int local_18;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < 6 - local_18; local_1c = local_1c + 1) {
      _ackermann(local_18,local_1c);
      _printf("A(%d, %d) = %d\n");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


