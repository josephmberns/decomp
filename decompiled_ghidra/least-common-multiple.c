#include "least-common-multiple.h"



int _gcd(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_2;
  local_4 = param_1;
  while (local_4 != 0) {
    iVar1 = 0;
    if (local_4 != 0) {
      iVar1 = local_8 / local_4;
    }
    iVar1 = local_8 - iVar1 * local_4;
    local_8 = local_4;
    local_4 = iVar1;
  }
  return local_8;
}



int _lcm(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _gcd(param_1,param_2);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = param_1 / iVar2;
  }
  return iVar1 * param_2;
}



undefined4 entry(void)

{
  _lcm(0x15,0x23);
  _printf("lcm(35, 21) = %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


