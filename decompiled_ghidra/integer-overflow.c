#include "integer-overflow.h"



undefined4 entry(void)

{
  _printf("Signed 32-bit:\n");
  _printf("%d\n");
  _printf("%d\n");
  _printf("%d\n");
  _printf("%d\n");
  _printf("%d\n");
  _printf("Signed 64-bit:\n");
  _printf("%ld\n");
  _printf("%ld\n");
  _printf("%ld\n");
  _printf("%ld\n");
  _printf("%ld\n");
  _printf("Unsigned 32-bit:\n");
  _printf("%u\n");
  _printf("%u\n");
  _printf("%u\n");
  _printf("%u\n");
  _printf("Unsigned 64-bit:\n");
  _printf("%lu\n");
  _printf("%lu\n");
  _printf("%lu\n");
  _printf("%lu\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


