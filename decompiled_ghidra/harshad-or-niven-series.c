#include "harshad-or-niven-series.h"



undefined8 entry(void)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  local_18 = 1;
  local_20 = 0;
  local_1c = 0;
  while (local_1c == 0) {
    iVar2 = FUN_100003f28(local_18);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = local_18 / iVar2;
    }
    if (local_18 == iVar1 * iVar2) {
      iVar1 = local_20 + 1;
      if (local_20 < 0x14) {
        _printf("%d ");
      }
      local_20 = iVar1;
      if (1000 < local_18) {
        local_1c = _printf("\n%d\n");
      }
    }
    local_18 = local_18 + 1;
  }
  return 0;
}



int FUN_100003f28(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = param_1;
  do {
    local_8 = local_8 + local_4 % 10;
    local_4 = local_4 / 10;
  } while (local_4 != 0);
  return local_8;
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


