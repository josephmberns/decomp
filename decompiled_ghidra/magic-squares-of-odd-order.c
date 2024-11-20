#include "magic-squares-of-odd-order.h"



int _f(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + param_3 * 2 + 1;
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = iVar1 / param_1;
  }
  return iVar1 - iVar2 * param_1;
}



undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  undefined4 local_14;
  
  if (param_1 == 2) {
    iVar1 = _atoi(*(char **)(param_2 + 8));
    if ((iVar1 < 3) || (iVar1 % 2 == 0)) {
      local_14 = 2;
    }
    else {
      for (local_24 = 0; local_24 < iVar1; local_24 = local_24 + 1) {
        for (local_28 = 0; local_28 < iVar1; local_28 = local_28 + 1) {
          _f(iVar1,(iVar1 - local_28) + -1,local_24);
          _f(iVar1,local_28,local_24);
          _printf("% 4d");
        }
        _putchar(10);
      }
      _printf("\n Magic Constant: %d.\n");
      local_14 = 0;
    }
  }
  else {
    local_14 = 1;
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004010)(param_1);
  return iVar1;
}


