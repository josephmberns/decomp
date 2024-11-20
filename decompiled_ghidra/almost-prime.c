#include "almost-prime.h"



bool _kprime(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 2;
  local_4 = param_1;
  while( true ) {
    bVar1 = false;
    if (local_10 < param_2) {
      bVar1 = local_c * local_c <= local_4;
    }
    if (!bVar1) break;
    while( true ) {
      iVar2 = 0;
      if (local_c != 0) {
        iVar2 = local_4 / local_c;
      }
      if (local_4 != iVar2 * local_c) break;
      iVar2 = 0;
      if (local_c != 0) {
        iVar2 = local_4 / local_c;
      }
      local_10 = local_10 + 1;
      local_4 = iVar2;
    }
    local_c = local_c + 1;
  }
  return local_10 + (uint)(1 < local_4) == param_2;
}



undefined8 entry(void)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  for (local_20 = 1; local_20 < 6; local_20 = local_20 + 1) {
    _printf("k = %d:");
    local_18 = 2;
    local_1c = 0;
    while (local_1c < 10) {
      iVar1 = _kprime(local_18,local_20);
      if (iVar1 != 0) {
        _printf(" %d");
        local_1c = local_1c + 1;
      }
      local_18 = local_18 + 1;
    }
    _putchar(10);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


