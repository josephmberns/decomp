#include "pernicious-numbers.h"



uint _is_pern(uint param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0xa08a28ac;
  for (local_4 = param_1; local_4 != 0; local_4 = local_4 & local_4 - 1) {
    local_8 = local_8 >> 1;
  }
  return local_8 & 1;
}



undefined8 entry(void)

{
  int iVar1;
  uint local_1c;
  uint local_18;
  
  local_1c = 0;
  local_18 = 0;
  while (local_1c < 0x19) {
    iVar1 = _is_pern(local_18);
    if (iVar1 != 0) {
      _printf("%u ");
      local_1c = local_1c + 1;
    }
    local_18 = local_18 + 1;
  }
  _putchar(10);
  for (local_18 = 0x34fb5e2d; local_18 < 0x34fb5e39; local_18 = local_18 + 1) {
    iVar1 = _is_pern(local_18);
    if (iVar1 != 0) {
      _printf("%u ");
    }
  }
  _putchar(10);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


