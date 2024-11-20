#include "sort-three-variables-2.h"



undefined8 entry(void)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  local_18 = 0x12e84;
  local_1c = -0xc;
  local_20 = 0;
  _printf("Before sorting :\nx = %d\ny = %d\nz = %d");
  do {
    iVar1 = local_18;
    if (local_1c < local_18) {
      local_18 = local_1c;
      local_1c = iVar1;
    }
    iVar1 = local_1c;
    if (local_20 < local_1c) {
      local_1c = local_20;
      local_20 = iVar1;
    }
  } while (local_1c < local_18 || local_20 < local_1c);
  _printf("\nAfter sorting :\nx = %d\ny = %d\nz = %d");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


