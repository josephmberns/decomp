#include "gcd.h"



int _GCD(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = param_1 / param_2;
    }
    local_14 = _GCD(param_2,param_1 - iVar1 * param_2);
  }
  return local_14;
}



undefined8 entry(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  _printf("Input two numbers:\n");
  _scanf("%d %d");
  _GCD(local_14,local_18);
  _printf("Greatest common divisor: %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004008)((int)param_1);
  return iVar1;
}


