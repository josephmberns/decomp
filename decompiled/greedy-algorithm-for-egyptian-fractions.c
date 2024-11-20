#include "greedy-algorithm-for-egyptian-fractions.h"



long _mod(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_1 / param_2;
  }
  lVar1 = (param_1 - lVar1 * param_2) + param_2;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = lVar1 / param_2;
  }
  return lVar1 - lVar2 * param_2;
}



long _gcd(long param_1,long param_2)

{
  long local_18;
  
  local_18 = param_2;
  if (((param_1 != 0) && (local_18 = param_1, param_2 != 0)) && (param_1 != param_2)) {
    if (param_2 < param_1) {
      local_18 = _gcd(param_1 - param_2,param_2);
    }
    else {
      local_18 = _gcd(param_1,param_2 - param_1);
    }
  }
  return local_18;
}



ulong _write0(ulong param_1,char *param_2)

{
  uint uVar1;
  
  if ((param_1 & 1) != 0) {
    uVar1 = _printf(param_2);
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



ulong _write1(ulong param_1,char *param_2)

{
  uint uVar1;
  
  if ((param_1 & 1) != 0) {
    uVar1 = _printf(param_2);
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



ulong _write2(ulong param_1,char *param_2)

{
  uint uVar1;
  
  if ((param_1 & 1) != 0) {
    uVar1 = _printf(param_2);
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



undefined  [16] _egyptian(long param_1,long param_2,byte param_3)

{
  long lVar1;
  undefined auVar2 [16];
  bool bVar3;
  long local_40;
  long local_30;
  long local_28;
  long local_20;
  int local_18;
  undefined4 uStack_14;
  
  param_3 = param_3 & 1;
  local_40 = 0;
  bVar3 = true;
  local_18 = 0;
  local_20 = 0;
  _write2(param_3,"Egyptian fraction for %lld/%lld: ",param_1,param_2);
  local_30 = param_2;
  local_28 = param_1;
  while (0 < local_28) {
    lVar1 = 0;
    if (local_28 != 0) {
      lVar1 = (local_30 + local_28 + -1) / local_28;
    }
    if (lVar1 == 1) {
      local_40 = local_40 + 1;
    }
    else {
      if (local_40 < 1) {
        if (bVar3) {
          bVar3 = false;
        }
        else {
          _write0(param_3," + ");
        }
      }
      else {
        _write1(param_3,"%lld + ",local_40);
        bVar3 = false;
        local_40 = 0;
        local_18 = local_18 + 1;
      }
      if (local_20 < lVar1) {
        local_20 = lVar1;
      }
      _write1(param_3,"1/%lld",lVar1);
      local_18 = local_18 + 1;
    }
    local_28 = _mod(-local_30,local_28);
    local_30 = local_30 * lVar1;
  }
  if (0 < local_40) {
    _write1(param_3,"%lld",local_40);
    local_18 = local_18 + 1;
  }
  _write0(param_3,"\n");
  auVar2._8_4_ = local_18;
  auVar2._0_8_ = local_20;
  auVar2._12_4_ = uStack_14;
  return auVar2;
}



undefined8 entry(void)

{
  undefined auVar1 [12];
  int local_64;
  int local_60;
  int local_5c;
  long local_58;
  long local_50;
  long local_48;
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  _egyptian(0x2b,0x30,1);
  _egyptian(5,0x79,1);
  _egyptian(0x7de,0x3b,1);
  local_5c = 0;
  for (local_60 = 1; local_60 < 100; local_60 = local_60 + 1) {
    for (local_64 = 1; local_64 < 100; local_64 = local_64 + 1) {
      auVar1 = _egyptian((long)local_60,(long)local_64,0);
      if (local_5c < auVar1._8_4_) {
        local_5c = auVar1._8_4_;
      }
      if (local_58 < auVar1._0_8_) {
        local_48 = (long)local_60;
        local_50 = (long)local_64;
        local_58 = auVar1._0_8_;
      }
    }
  }
  _printf("Term max is %lld/%lld with %d terms.\n");
  _printf("Denominator max is %lld/%lld\n");
  _egyptian(local_48,local_50,1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


