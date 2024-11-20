#include "fizzbuzz-6.h"



undefined8 entry(void)

{
  int local_18;
  
  for (local_18 = 1; local_18 < 0x65; local_18 = local_18 + 1) {
    if (local_18 % 0xf == 0) {
      _printf("FizzBuzz");
    }
    else if (local_18 % 3 == 0) {
      _printf("Fizz");
    }
    else if (local_18 % 5 == 0) {
      _printf("Buzz");
    }
    else {
      _printf("%d");
    }
    _printf("\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


