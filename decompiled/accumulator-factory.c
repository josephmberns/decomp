#include "accumulator-factory.h"



void _x(double param_1)

{
  DAT_100008000 = DAT_100008000 + param_1;
  return;
}



void _y(int param_1)

{
  DAT_100008008 = DAT_100008008 + param_1;
  return;
}



void _z(int param_1)

{
  DAT_10000800c = DAT_10000800c + param_1;
  return;
}



undefined4 entry(void)

{
  int iVar1;
  
  _x(0x4014000000000000);
  iVar1 = _printf("%f\n");
  _x(0x4002666666666666,iVar1);
  _printf("%f\n");
  _y();
  _printf("%i\n");
  _y(3);
  _printf("%i\n");
  _z(5);
  _printf("%c\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


