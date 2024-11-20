#include "long-year.h"



int _p(int param_1)

{
  return (int)((((double)(long)param_1 + (double)(long)(double)(param_1 / 4)) -
               (double)(long)(double)(param_1 / 100)) + (double)(long)(double)(param_1 / 400)) % 7;
}



bool _is_long_year(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = _p(param_1);
  bVar1 = true;
  if (iVar2 != 4) {
    iVar2 = _p(param_1 + -1);
    bVar1 = iVar2 == 3;
  }
  return bVar1;
}



ulong _print_long_years(ulong param_1,int param_2)

{
  uint uVar1;
  int local_1c;
  
  for (local_1c = (int)param_1; local_1c <= param_2; local_1c = local_1c + 1) {
    param_1 = _is_long_year(local_1c);
    if ((int)param_1 != 0) {
      uVar1 = _printf("%d ");
      param_1 = (ulong)uVar1;
    }
  }
  return param_1;
}



undefined4 entry(void)

{
  _printf("Long (53 week) years between 1800 and 2100\n\n");
  _print_long_years(0x708,0x834);
  _printf("\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


