#include "call-an-object-method.h"



int _factorial(int param_1)

{
  int local_14;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    local_14 = 1;
  }
  else {
    local_14 = _factorial(param_1 + -1);
    local_14 = param_1 * local_14;
  }
  return local_14;
}



int entry(int param_1,long param_2)

{
  int iVar1;
  int local_14;
  
  if (param_1 == 2) {
    iVar1 = _atoi(*(char **)(param_2 + 8));
    _factorial(iVar1);
    _printf("\nFactorial of %d is %d\n");
    local_14 = 0;
  }
  else {
    local_14 = _printf("Usage : %s <non negative integer>");
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


