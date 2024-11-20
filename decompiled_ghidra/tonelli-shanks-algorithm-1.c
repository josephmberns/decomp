#include "tonelli-shanks-algorithm-1.h"



long _modpow(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_10;
  
  local_20 = 1;
  local_28 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 / 2) {
    if (local_10 % 2 == 1) {
      uVar1 = 0;
      if (param_3 != 0) {
        uVar1 = (local_20 * local_28) / param_3;
      }
      local_20 = local_20 * local_28 - uVar1 * param_3;
    }
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = (ulong)(local_28 * local_28) / param_3;
    }
    local_28 = local_28 * local_28 - uVar1 * param_3;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = local_20 / param_3;
  }
  return local_20 - uVar1 * param_3;
}



void _makeSolution(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(byte *)(param_1 + 2) = param_4 & 1;
  return;
}



void _ts(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = param_3 - 1;
  local_30 = 0;
  local_38 = 2;
  lVar3 = _modpow(param_2,(param_3 - 1) / 2,param_3);
  if (lVar3 == 1) {
    for (; (local_28 & 1) == 0; local_28 = local_28 >> 1) {
      local_30 = local_30 + 1;
    }
    if (local_30 == 1) {
      lVar3 = _modpow(param_2,(param_3 + 1) / 4,param_3);
      _makeSolution(param_1,lVar3,param_3 - lVar3,1);
    }
    else {
      while (lVar3 = _modpow(local_38,(param_3 - 1) / 2,param_3), lVar3 != param_3 - 1) {
        local_38 = local_38 + 1;
      }
      local_40 = _modpow(local_38,local_28,param_3);
      local_48 = _modpow(param_2,(local_28 + 1) / 2,param_3);
      local_50 = _modpow(param_2,local_28,param_3);
      local_58 = local_30;
      while( true ) {
        local_68 = 0;
        local_70 = local_50;
        local_78 = local_40;
        if (local_50 == 1) break;
        while( true ) {
          bVar2 = false;
          if (local_70 != 1) {
            bVar2 = local_68 < local_58 - 1;
          }
          if (!bVar2) break;
          uVar1 = 0;
          if (param_3 != 0) {
            uVar1 = (ulong)(local_70 * local_70) / param_3;
          }
          local_70 = local_70 * local_70 - uVar1 * param_3;
          local_68 = local_68 + 1;
        }
        local_80 = local_58 - local_68;
        while (local_80 = local_80 + -1, local_80 != 0) {
          uVar1 = 0;
          if (param_3 != 0) {
            uVar1 = (ulong)(local_78 * local_78) / param_3;
          }
          local_78 = local_78 * local_78 - uVar1 * param_3;
        }
        uVar1 = 0;
        if (param_3 != 0) {
          uVar1 = (ulong)(local_48 * local_78) / param_3;
        }
        local_48 = local_48 * local_78 - uVar1 * param_3;
        uVar1 = 0;
        if (param_3 != 0) {
          uVar1 = (ulong)(local_78 * local_78) / param_3;
        }
        local_40 = local_78 * local_78 - uVar1 * param_3;
        uVar1 = 0;
        if (param_3 != 0) {
          uVar1 = (ulong)(local_50 * local_40) / param_3;
        }
        local_50 = local_50 * local_40 - uVar1 * param_3;
        local_58 = local_68;
      }
      _makeSolution(param_1,local_48,param_3 - local_48,1);
    }
  }
  else {
    _makeSolution(param_1,0,0,0);
  }
  return;
}



int _test(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined local_38 [16];
  byte local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _ts(local_38,param_1,param_2);
  _printf("n = %llu\n");
  _printf("p = %llu\n");
  if ((local_28 & 1) == 0) {
    _printf("No solution exists\n");
  }
  else {
    _printf("root1 = %llu\n");
    _printf("root2 = %llu\n");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



undefined4 entry(void)

{
  _test(10,0xd);
  _test(0x38,0x65);
  _test(0x406);
  _test(0x408,0x2719);
  _test(0xad72,0x186d1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


