#include "catalan-numbers-pascals-triangle.h"



undefined8 entry(void)

{
  int local_1c;
  int local_18;
  
  _printf("1 ");
  for (local_1c = 2; local_1c < 0x10; local_1c = local_1c + 1) {
    for (local_18 = 2; local_18 <= local_1c; local_18 = local_18 + 1) {
    }
    _printf("%d ");
  }
  _printf("\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


