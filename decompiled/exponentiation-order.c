#include "exponentiation-order.h"



undefined4 entry(void)

{
  int iVar1;
  undefined8 uVar2;
  
  _pow();
  _pow();
  iVar1 = _printf("(5 ^ 3) ^ 2 = %.0f");
  uVar2 = _pow(0x4008000000000000,0x4000000000000000,iVar1);
  _pow(0x4014000000000000,uVar2);
  _printf("\n5 ^ (3 ^ 2) = %.0f");
  return 0;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


