#include "evaluate-binomial-coefficients.h"



ulong _binomial(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_40;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_40 = 1;
  if (param_2 == 0) {
    local_18 = 1;
  }
  else {
    local_18 = param_1;
    if (param_2 != 1) {
      if (param_2 < param_1) {
        local_28 = param_2;
        if (param_1 / 2 < param_2) {
          local_28 = param_1 - param_2;
        }
        local_20 = param_1;
        for (local_30 = 1; local_30 <= local_28; local_30 = local_30 + 1) {
          uVar5 = 0;
          if (local_20 != 0) {
            uVar5 = 0xffffffffffffffff / local_20;
          }
          if (local_40 < uVar5) {
            uVar5 = local_40 * local_20;
            local_40 = 0;
            if (local_30 != 0) {
              local_40 = uVar5 / local_30;
            }
          }
          else {
            uVar3 = FUN_100003e70(local_20,local_30);
            uVar5 = 0;
            if (uVar3 != 0) {
              uVar5 = local_20 / uVar3;
            }
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = local_30 / uVar3;
            }
            uVar4 = FUN_100003e70(local_40,uVar1);
            uVar3 = 0;
            if (uVar4 != 0) {
              uVar3 = local_40 / uVar4;
            }
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar1 / uVar4;
            }
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = 0xffffffffffffffff / uVar5;
            }
            if (uVar1 <= uVar3) {
              return 0;
            }
            local_40 = 0;
            if (uVar2 != 0) {
              local_40 = (uVar3 * uVar5) / uVar2;
            }
          }
          local_20 = local_20 - 1;
        }
        local_18 = local_40;
      }
      else {
        local_18 = (ulong)(param_2 == param_1);
      }
    }
  }
  return local_18;
}



ulong FUN_100003e70(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_1;
  if (param_2 < param_1) {
    local_10 = param_1;
    local_8 = param_2;
  }
  while (local_10 != 0) {
    uVar1 = 0;
    if (local_10 != 0) {
      uVar1 = local_8 / local_10;
    }
    uVar2 = local_10;
    local_10 = local_8 - uVar1 * local_10;
    local_8 = uVar2;
  }
  return local_8;
}



undefined4 entry(void)

{
  _binomial(5,3);
  _printf("%lu\n");
  _binomial(0x28,0x13);
  _printf("%lu\n");
  _binomial(0x43,0x1f);
  _printf("%lu\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


