#include "thue-morse-2.h"



int _count_bits(uint param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  for (local_4 = param_1; local_4 != 0; local_4 = local_4 >> 1) {
    local_8 = local_8 + (local_4 & 1);
  }
  return local_8;
}



undefined8 entry(void)

{
  uint uVar1;
  undefined4 local_18;
  
  for (local_18 = 0; local_18 < 0x100; local_18 = local_18 + 1) {
    uVar1 = _count_bits(local_18);
    _putchar(uVar1 % 2 + 0x30);
  }
  _putchar(10);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004000)(param_1);
  return iVar1;
}


