#include "chowla-numbers.h"



int _chowla(uint param_1)

{
  uint uVar1;
  uint local_18;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  for (local_c = 2; local_c * local_c <= param_1; local_c = local_c + 1) {
    uVar1 = 0;
    if (local_c != 0) {
      uVar1 = param_1 / local_c;
    }
    if (param_1 == uVar1 * local_c) {
      local_18 = 0;
      if (local_c != 0) {
        local_18 = param_1 / local_c;
      }
      if (local_c == local_18) {
        local_18 = 0;
      }
      local_8 = local_8 + local_c + local_18;
    }
  }
  return local_8;
}



undefined8 entry(void)

{
  uint uVar1;
  int iVar2;
  int local_40;
  int local_3c;
  uint local_34;
  uint local_2c;
  uint local_28;
  
  for (local_28 = 1; local_28 < 0x26; local_28 = local_28 + 1) {
    _chowla(local_28);
    _printf("chowla(%u) = %u\n");
  }
  local_34 = 100;
  for (local_2c = 2; local_2c < 0x989681; local_2c = local_2c + 1) {
    _chowla(local_2c);
    uVar1 = 0;
    if (local_34 != 0) {
      uVar1 = local_2c / local_34;
    }
    if (local_2c == uVar1 * local_34) {
      _printf("There is %u primes < %u\n");
      local_34 = local_34 * 10;
    }
  }
  local_3c = 2;
  for (local_40 = 3; uVar1 = local_3c * local_40, uVar1 < 0x14dc9381; local_40 = local_40 + local_3c
      ) {
    iVar2 = _chowla(uVar1);
    if (iVar2 == uVar1 - 1) {
      _printf("%d is a perfect number\n");
    }
    local_3c = local_40 + 1;
  }
  _printf("There are %u perfect numbers < %u\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


