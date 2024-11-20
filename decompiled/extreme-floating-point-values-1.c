#include "extreme-floating-point-values-1.h"



// WARNING: Removing unreachable block (ram,0x000100003e5c)

undefined4 entry(void)

{
  _printf("positive infinity: %f\n");
  _printf("negative infinity: %f\n");
  _printf("negative zero: %f\n");
  _printf("not a number: %f\n");
  _printf("+inf + 2.0 = %f\n");
  _printf("+inf - 10.1 = %f\n");
  _printf("+inf + -inf = %f\n");
  _printf("0.0 * +inf = %f\n");
  _printf("1.0/-0.0 = %f\n");
  _printf("NaN + 1.0 = %f\n");
  _printf("NaN + NaN = %f\n");
  _printf("NaN == NaN = %s\n");
  _printf("0.0 == -0.0 = %s\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


