#include "sudan-function.h"



int _F(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = param_2 + param_3;
  }
  else {
    local_14 = param_2;
    if (param_3 != 0) {
      uVar1 = _F(param_1,param_2,param_3 + -1);
      iVar2 = _F(param_1,param_2,param_3 + -1);
      local_14 = _F(param_1 + -1,uVar1,iVar2 + param_3);
    }
  }
  return local_14;
}



undefined4 entry(void)

{
  _F(1,3);
  _printf("F1(3,3) = %d");
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


