#include "loops-increment-loop-index-within-loop-body.h"



bool _is_prime(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long local_18;
  
  if (param_1 % 2 == 0) {
    bVar3 = param_1 == 2;
  }
  else if (param_1 % 3 == 0) {
    bVar3 = param_1 == 3;
  }
  else {
    for (local_18 = 5; local_18 * local_18 - param_1 == 0 || local_18 * local_18 < param_1;
        local_18 = local_18 + 6) {
      lVar1 = 0;
      if (local_18 != 0) {
        lVar1 = param_1 / local_18;
      }
      if (param_1 == lVar1 * local_18) {
        return false;
      }
      lVar1 = local_18 + 2;
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = param_1 / lVar1;
      }
      if (param_1 == lVar2 * lVar1) {
        return false;
      }
    }
    bVar3 = true;
  }
  return bVar3;
}



undefined8 entry(void)

{
  int iVar1;
  int local_24;
  long local_20;
  
  _setlocale(4,"");
  local_20 = 0x2a;
  local_24 = 0;
  while (local_24 < 0x2a) {
    iVar1 = _is_prime(local_20);
    if (iVar1 != 0) {
      local_24 = local_24 + 1;
      _printf("n = %-2d  %\'19lld\n");
      local_20 = local_20 * 2 + -1;
    }
    local_20 = local_20 + 1;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004008)();
  return;
}


