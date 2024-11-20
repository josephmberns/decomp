#include "short-circuit-evaluation.h"



byte _a(byte param_1)

{
  _printf("I am a\n");
  return param_1 & 1;
}



byte _b(byte param_1)

{
  _printf("I am b\n");
  return param_1 & 1;
}



undefined8 entry(void)

{
  ulong uVar1;
  
  uVar1 = _a(0);
  if ((uVar1 & 1) != 0) {
    _b(1);
  }
  _printf("false && true = %s\n\n");
  uVar1 = _a(1);
  if ((uVar1 & 1) == 0) {
    _b(0);
  }
  _printf("true || false = %s\n\n");
  uVar1 = _a(1);
  if ((uVar1 & 1) != 0) {
    _b(0);
  }
  _printf("true && false = %s\n\n");
  uVar1 = _a(0);
  if ((uVar1 & 1) == 0) {
    _b(0);
  }
  _printf("false || false = %s\n\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


