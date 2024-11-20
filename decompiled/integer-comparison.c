#include "integer-comparison.h"



undefined8 entry(void)

{
  int local_1c;
  int local_18;
  
  _scanf("%d %d");
  if (local_18 < local_1c) {
    _printf("%d is less than %d\n");
  }
  if (local_18 == local_1c) {
    _printf("%d is equal to %d\n");
  }
  if (local_1c < local_18) {
    _printf("%d is greater than %d\n");
  }
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


