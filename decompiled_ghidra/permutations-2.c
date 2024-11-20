#include "permutations-2.h"



undefined4 entry(void)

{
  char cVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  char local_1c [8];
  undefined4 local_14;
  
  local_14 = 0;
  builtin_strncpy(local_1c,"4321",5);
  local_28 = 0x18;
  while (iVar2 = local_28 + -1, local_28 != 0) {
    _printf("%s\n");
    for (local_20 = 1; local_1c[local_20 + -1] < local_1c[local_20]; local_20 = local_20 + 1) {
    }
    for (local_24 = 0; local_1c[local_24] < local_1c[local_20]; local_24 = local_24 + 1) {
    }
    cVar1 = local_1c[local_24];
    local_1c[local_24] = local_1c[local_20];
    local_1c[local_20] = cVar1;
    for (local_24 = 0; local_20 = local_20 + -1, local_28 = iVar2, local_24 < local_20;
        local_24 = local_24 + 1) {
      cVar1 = local_1c[local_20];
      local_1c[local_20] = local_1c[local_24];
      local_1c[local_24] = cVar1;
    }
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


