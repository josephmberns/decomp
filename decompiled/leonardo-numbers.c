#include "leonardo-numbers.h"



int _leonardo(void)

{
  int iVar1;
  int in_w3;
  int local_24;
  
  iVar1 = _printf("First 25 Leonardo numbers : \n");
  for (local_24 = 1; local_24 <= in_w3; local_24 = local_24 + 1) {
    if (local_24 == 1) {
      iVar1 = _printf(" %d");
    }
    else if (local_24 == 2) {
      iVar1 = _printf(" %d");
    }
    else {
      iVar1 = _printf(" %d");
    }
  }
  return iVar1;
}



undefined4 entry(void)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  _printf("Enter first two Leonardo numbers and increment step : ");
  _scanf("%d%d%d");
  _leonardo(local_18,local_1c,local_20,0x19);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004008)((int)param_1);
  return iVar1;
}


