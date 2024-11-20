#include "sierpinski-triangle-1.h"



undefined8 entry(void)

{
  char *pcVar1;
  int local_20;
  uint local_1c;
  uint local_18;
  
  local_1c = 0xf;
  while (-1 < (int)local_1c) {
    for (local_20 = 0; local_20 < (int)local_1c; local_20 = local_20 + 1) {
      _putchar(0x20);
    }
    for (local_18 = 0; (int)(local_18 + local_1c) < 0x10; local_18 = local_18 + 1) {
      pcVar1 = "  ";
      if ((local_18 & local_1c) == 0) {
        pcVar1 = "* ";
      }
      _printf(pcVar1);
    }
    local_1c = local_1c - 1;
    _putchar(10);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


