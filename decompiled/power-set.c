#include "power-set.h"



ulong _powerset(undefined8 *param_1,int param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_38;
  long local_30;
  long local_28;
  int local_1c;
  undefined8 *local_18;
  
  local_28 = param_3;
  local_1c = param_2;
  local_18 = param_1;
  if (param_2 == 0) {
    _putchar(0x5b);
    for (; local_28 != 0; local_28 = *(long *)(local_28 + 8)) {
      _printf(" %s");
    }
    uVar1 = _puts(" ]");
    uVar2 = (ulong)uVar1;
  }
  else {
    local_38 = *param_1;
    local_30 = param_3;
    _powerset(param_1 + 1,param_2 + -1,param_3);
    uVar2 = _powerset(local_18 + 1,local_1c + -1,&local_38);
  }
  return uVar2;
}



undefined4 entry(int param_1,long param_2)

{
  _powerset(param_2 + 8,param_1 + -1,0);
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004010)((int)param_1);
  return iVar1;
}


