#include "100-doors-4.h"



undefined8 entry(void)

{
  int iVar1;
  bool bVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  local_18 = 1;
  local_1c = 1;
  local_20 = 1;
  while (local_18 < 0x65) {
    _printf("door #%d is %s.\n");
    iVar1 = local_18 + 1;
    bVar2 = local_18 == local_1c;
    local_18 = iVar1;
    if (bVar2) {
      local_20 = local_20 + 2;
      local_1c = local_1c + local_20;
    }
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


