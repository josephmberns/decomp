#include "composite-numbers-k-with-no-single-digit-factors-whose-factors-are-all-substrings-of-k.h"



undefined _is_substring(uint param_1,uint param_2)

{
  uint local_14;
  uint local_10;
  uint local_8;
  
  local_10 = 0;
  local_14 = param_2;
  local_8 = param_1;
  while( true ) {
    if (local_8 == 0) {
      return 0;
    }
    if (local_14 % 10 == local_8 % 10) {
      local_14 = local_14 / 10;
      if (local_10 == 0) {
        local_10 = local_8;
      }
    }
    else {
      if (local_10 != 0) {
        local_8 = local_10;
      }
      local_10 = 0;
      local_14 = param_2;
    }
    if (local_14 == 0) break;
    local_8 = local_8 / 10;
  }
  return 1;
}



bool _factors_are_substrings(uint param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint local_24;
  uint local_20;
  uint local_1c;
  bool local_11;
  
  if ((((param_1 % 2 == 0) || (param_1 % 3 == 0)) || (param_1 % 5 == 0)) || (param_1 % 7 == 0)) {
    local_11 = false;
  }
  else {
    local_1c = 0;
    local_24 = param_1;
    for (local_20 = 0xb; local_20 <= local_24; local_20 = local_20 + 2) {
      uVar1 = 0;
      if (local_20 != 0) {
        uVar1 = local_24 / local_20;
      }
      uVar2 = local_24;
      if (local_24 == uVar1 * local_20) {
        while( true ) {
          local_24 = uVar2;
          uVar1 = 0;
          if (local_20 != 0) {
            uVar1 = local_24 / local_20;
          }
          if (local_24 != uVar1 * local_20) break;
          uVar2 = 0;
          if (local_20 != 0) {
            uVar2 = local_24 / local_20;
          }
        }
        uVar3 = _is_substring(param_1,local_20);
        if ((uVar3 & 1) == 0) {
          return false;
        }
        local_1c = local_1c + 1;
      }
    }
    local_11 = 1 < local_1c;
  }
  return local_11;
}



undefined8 entry(void)

{
  ulong uVar1;
  int local_1c;
  int local_18;
  
  local_18 = 10;
  local_1c = 0xb;
  while (local_18 != 0) {
    uVar1 = _factors_are_substrings(local_1c);
    if ((uVar1 & 1) != 0) {
      _printf("%u\n");
      local_18 = local_18 + -1;
    }
    local_1c = local_1c + 2;
  }
  return 0;
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


