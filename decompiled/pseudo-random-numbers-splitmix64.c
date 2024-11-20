#include "pseudo-random-numbers-splitmix64.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong _next(void)

{
  ulong uVar1;
  
  _DAT_100008000 = _DAT_100008000 + 0x9e3779b97f4a7c15;
  uVar1 = (_DAT_100008000 ^ _DAT_100008000 >> 0x1e) * -0x40a7b892e31b1a47;
  uVar1 = (uVar1 ^ uVar1 >> 0x1b) * -0x6b2fb644ecceee15;
  return uVar1 ^ uVar1 >> 0x1f;
}



undefined  [16] _next_float(void)

{
  ulong uVar1;
  double dVar2;
  undefined auVar3 [16];
  
  uVar1 = _next();
  dVar2 = (double)_pow(0x4000000000000000,0x4050000000000000);
  auVar3._0_8_ = (double)uVar1 / dVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(ulong param_1)

{
  uint uVar1;
  double extraout_d0;
  int local_38;
  int local_30 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _DAT_100008000 = 0x12d687;
  for (local_38 = 0; local_38 < 5; local_38 = local_38 + 1) {
    _next();
    uVar1 = _printf("%llu\n");
    param_1 = (ulong)uVar1;
  }
  _DAT_100008000 = 0x3ade68b1;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  for (local_38 = 0; local_38 < 100000; local_38 = local_38 + 1) {
    param_1 = _next_float();
    local_30[(int)(extraout_d0 * 5.0)] = local_30[(int)(extraout_d0 * 5.0)] + 1;
  }
  for (local_38 = 0; local_38 < 5; local_38 = local_38 + 1) {
    uVar1 = _printf("%d: %d  ");
    param_1 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


