#include "lah-numbers.h"



long _factorial(long param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_18 = 1;
  local_10 = param_1;
  if (param_1 == 0) {
    local_8 = 1;
  }
  else {
    for (; local_10 != 0; local_10 = local_10 + -1) {
      local_18 = local_18 * local_10;
    }
    local_8 = local_18;
  }
  return local_8;
}



ulong _lah(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong local_18;
  
  if (param_2 == 1) {
    local_18 = _factorial(param_1);
  }
  else if (param_2 == param_1) {
    local_18 = 1;
  }
  else if (param_1 < param_2) {
    local_18 = 0;
  }
  else if ((param_2 == 0) || (param_1 == 0)) {
    local_18 = 0;
  }
  else {
    lVar2 = _factorial(param_1);
    lVar3 = _factorial(param_1 - 1);
    lVar4 = _factorial(param_2);
    lVar5 = _factorial(param_2 - 1);
    uVar1 = 0;
    if (lVar4 * lVar5 != 0) {
      uVar1 = (ulong)(lVar2 * lVar3) / (ulong)(lVar4 * lVar5);
    }
    uVar6 = _factorial(param_1 - param_2);
    local_18 = 0;
    if (uVar6 != 0) {
      local_18 = uVar1 / uVar6;
    }
  }
  return local_18;
}



undefined8 entry(void)

{
  int local_1c;
  int local_18;
  
  _printf("Unsigned Lah numbers: L(n, k):\n");
  _printf("n/k ");
  for (local_1c = 0; local_1c < 0xd; local_1c = local_1c + 1) {
    _printf("%10d ");
  }
  _printf("\n");
  for (local_18 = 0; local_18 < 0xd; local_18 = local_18 + 1) {
    _printf("%-3d");
    for (local_1c = 0; local_1c < local_18 + 1; local_1c = local_1c + 1) {
      _lah((long)local_18,(long)local_1c);
      _printf("%11lld");
    }
    _printf("\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


