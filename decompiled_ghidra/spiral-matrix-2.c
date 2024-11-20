#include "spiral-matrix-2.h"



int _spiral(int param_1,int param_2,int param_3,int param_4)

{
  int local_24;
  
  local_24 = param_3;
  if (param_4 != 0) {
    local_24 = _spiral(param_2 + -1,param_1,param_4 + -1,(param_1 - param_3) + -1);
    local_24 = param_1 + local_24;
  }
  return local_24;
}



undefined8 entry(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int local_30;
  int local_2c;
  
  iVar1 = _atoi(*(char **)(param_2 + 8));
  iVar2 = _atoi(*(char **)(param_2 + 0x10));
  for (local_2c = 0; local_2c < iVar2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < iVar1; local_30 = local_30 + 1) {
      _spiral(iVar1,iVar2,local_30,local_2c);
      _printf("%4d");
    }
    _putchar(10);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004010)(param_1);
  return iVar1;
}


