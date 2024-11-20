#include "continued-fraction-arithmetic-construct-from-rational-number.h"



int _r2cf(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14;
  
  local_14 = 0;
  if (param_2 != (int *)0x0) {
    local_14 = 0;
    if (*param_2 != 0) {
      local_14 = *param_1 / *param_2;
    }
    iVar1 = *param_1;
    *param_1 = *param_2;
    iVar2 = *param_2;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    *param_2 = iVar1 - iVar3 * iVar2;
  }
  return local_14;
}



undefined8 entry(void)

{
  uint local_18;
  
  _printf("Running the examples :");
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    _printf("\nFor N = %d, D = %d :");
    while (*(int *)(&DAT_100008004 + (long)(int)local_18 * 8) != 0) {
      _r2cf(&_examples + (long)(int)local_18 * 8,&DAT_100008004 + (long)(int)local_18 * 8);
      _printf(" %d ");
    }
  }
  _printf("\n\nRunning for %c2 :");
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    _printf("\nFor N = %d, D = %d :");
    while (*(int *)(&DAT_100008034 + (long)(int)local_18 * 8) != 0) {
      _r2cf(&_sqrt2 + (long)(int)local_18 * 8,&DAT_100008034 + (long)(int)local_18 * 8);
      _printf(" %d ");
    }
  }
  _printf("\n\nRunning for %c :");
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    _printf("\nFor N = %d, D = %d :");
    while (*(int *)(&DAT_100008054 + (long)(int)local_18 * 8) != 0) {
      _r2cf(&_pi + (long)(int)local_18 * 8,&DAT_100008054 + (long)(int)local_18 * 8);
      _printf(" %d ");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


