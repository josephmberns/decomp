#include "deceptive-numbers.h"



uint _modpow(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 1;
  local_4 = param_1;
  for (local_8 = param_2; local_8 != 0; local_8 = local_8 >> 1) {
    if ((local_8 & 1) != 0) {
      iVar1 = 0;
      if ((ulong)param_3 != 0) {
        iVar1 = (int)(((ulong)local_10 * (ulong)local_4) / (ulong)param_3);
      }
      local_10 = (int)((ulong)local_10 * (ulong)local_4) - iVar1 * param_3;
    }
    iVar1 = 0;
    if ((ulong)param_3 != 0) {
      iVar1 = (int)(((ulong)local_4 * (ulong)local_4) / (ulong)param_3);
    }
    local_4 = (int)((ulong)local_4 * (ulong)local_4) - iVar1 * param_3;
  }
  return local_10;
}



undefined4 _is_deceptive(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  if (((((param_1 & 1) != 0) && (param_1 % 3 != 0)) && (param_1 % 5 != 0)) &&
     (iVar3 = _modpow(10,param_1 - 1,param_1), iVar3 == 1)) {
    for (local_1c = 7; local_1c * local_1c <= param_1; local_1c = local_1c + 6) {
      uVar1 = 0;
      if (local_1c != 0) {
        uVar1 = param_1 / local_1c;
      }
      if (param_1 == uVar1 * local_1c) {
        return 1;
      }
      uVar1 = local_1c + 4;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_1 / uVar1;
      }
      if (param_1 == uVar2 * uVar1) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 entry(void)

{
  int iVar1;
  int local_1c;
  int local_18;
  
  local_18 = 0x31;
  local_1c = 0;
  while (local_1c != 500) {
    iVar1 = _is_deceptive(local_18);
    if (iVar1 != 0) {
      _printf(" %u");
      local_1c = local_1c + 1;
    }
    local_18 = local_18 + 1;
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


