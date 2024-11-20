#include "lcm.h"



int _gcd(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_14;
  
  local_14 = param_2;
  if (param_1 != 0) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = param_2 / param_1;
    }
    local_14 = _gcd(param_2 - iVar1 * param_1,param_1);
  }
  return local_14;
}



int _lcm(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _gcd(param_1,param_2);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = (param_1 * param_2) / iVar2;
  }
  return iVar1;
}



undefined4 entry(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  
  _printf("Enter two numbers to find their LCM \n");
  _scanf("%d%d");
  _lcm(local_18,local_1c);
  _printf("LCM of %d and %d is %d ");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004008)((int)param_1);
  return iVar1;
}


