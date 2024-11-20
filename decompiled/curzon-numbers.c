#include "curzon-numbers.h"



long _modPow(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (param_3 == 1) {
    local_8 = 0;
  }
  else {
    local_28 = 1;
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = param_1 / param_3;
    }
    local_10 = param_1 - uVar1 * param_3;
    for (local_18 = param_2; local_18 != 0; local_18 = local_18 >> 1) {
      if ((local_18 & 1) == 1) {
        uVar1 = 0;
        if (param_3 != 0) {
          uVar1 = (ulong)(local_28 * local_10) / param_3;
        }
        local_28 = local_28 * local_10 - uVar1 * param_3;
      }
      uVar1 = 0;
      if (param_3 != 0) {
        uVar1 = (ulong)(local_10 * local_10) / param_3;
      }
      local_10 = local_10 * local_10 - uVar1 * param_3;
    }
    local_8 = local_28;
  }
  return local_8;
}



bool _isCurzon(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = _modPow(param_2,param_1,param_2 * param_1 + 1);
  return lVar1 == param_2 * param_1;
}



undefined8 entry(void)

{
  ulong uVar1;
  ulong local_30;
  long local_28;
  ulong local_20;
  
  _setlocale(4,"");
  for (local_20 = 2; local_20 < 0xb; local_20 = local_20 + 2) {
    _printf("Curzon numbers with base %ld:\n");
    local_28 = 1;
    local_30 = 0;
    while (local_30 < 0x32) {
      uVar1 = _isCurzon(local_28,local_20);
      if ((uVar1 & 1) != 0) {
        _printf("%4ld ");
        local_30 = local_30 + 1;
        if (local_30 % 10 == 0) {
          _printf("\n");
        }
      }
      local_28 = local_28 + 1;
    }
    while( true ) {
      uVar1 = _isCurzon(local_28,local_20);
      if ((uVar1 & 1) != 0) {
        local_30 = local_30 + 1;
      }
      if (local_30 == 1000) break;
      local_28 = local_28 + 1;
    }
    _printf("1,000th Curzon number with base %ld: %\'ld\n\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004008)();
  return;
}


