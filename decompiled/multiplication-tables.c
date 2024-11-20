#include "multiplication-tables.h"



undefined8 entry(void)

{
  char *pcVar1;
  int local_1c;
  int local_18;
  
  for (local_1c = 1; local_1c < 0xd; local_1c = local_1c + 1) {
    _printf("%3d%c");
  }
  for (local_1c = 0; local_1c < 0xd; local_1c = local_1c + 1) {
    pcVar1 = "----";
    if (local_1c == 0xc) {
      pcVar1 = "+\n";
    }
    _printf(pcVar1);
  }
  for (local_18 = 1; local_18 < 0xd; local_18 = local_18 + 1) {
    for (local_1c = 1; local_1c < 0xd; local_1c = local_1c + 1) {
      pcVar1 = "    ";
      if (local_18 <= local_1c) {
        pcVar1 = "%3d ";
      }
      _printf(pcVar1);
    }
    _printf("| %d\n");
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


