#include "mutual-recursion.h"



int _F(int param_1)

{
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 1;
  }
  else {
    _F(param_1 + -1);
    local_18 = _M();
    local_18 = param_1 - local_18;
  }
  return local_18;
}



int _M(int param_1)

{
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    _M(param_1 + -1);
    local_18 = _F();
    local_18 = param_1 - local_18;
  }
  return local_18;
}



undefined8 entry(void)

{
  int local_18;
  
  for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
    _F(local_18);
    _printf("%2d ");
  }
  _printf("\n");
  for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
    _M(local_18);
    _printf("%2d ");
  }
  _printf("\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


