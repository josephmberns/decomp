#include "fizzbuzz-8.h"



undefined8 entry(int param_1)

{
  int iVar1;
  int iVar2;
  int local_18;
  
  local_18 = param_1 + -1;
  while (local_18 != 100) {
    iVar1 = _printf("%s");
    iVar2 = _printf("%s");
    if (iVar1 == 0 && iVar2 == 0) {
      _printf("%i");
    }
    _puts("");
    local_18 = local_18 + 1;
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

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004008)((int)param_1);
  return iVar1;
}


