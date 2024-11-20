#include "pseudo-random-numbers-combined-recursive-generator-mrg32k3a.h"



long _mod(long param_1,long param_2)

{
  long lVar1;
  long local_8;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_1 / param_2;
  }
  local_8 = param_1 - lVar1 * param_2;
  if (local_8 < 0) {
    if (param_2 < 0) {
      local_8 = local_8 - param_2;
    }
    else {
      local_8 = local_8 + param_2;
    }
  }
  return local_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _seed(undefined8 param_1)

{
  _DAT_100008000 = param_1;
  _DAT_100008008 = 0;
  _DAT_100008010 = 0;
  _DAT_100008018 = param_1;
  _DAT_100008020 = 0;
  _DAT_100008028 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long _next_int(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _mod(_DAT_100008008 * 0x156abc + _DAT_100008010 * -0xc5ee8);
  lVar2 = _mod(_DAT_100008018 * 0x80cfc + _DAT_100008028 * -0x14e9dd,0xffffa6bb);
  lVar3 = _mod(lVar1 - lVar2,0xffffff2f);
  _DAT_100008010 = _DAT_100008008;
  _DAT_100008008 = _DAT_100008000;
  _DAT_100008000 = lVar1;
  _DAT_100008028 = _DAT_100008020;
  _DAT_100008020 = _DAT_100008018;
  _DAT_100008018 = lVar2;
  return lVar3 + 1;
}



undefined  [16] _next_float(void)

{
  long lVar1;
  undefined auVar2 [16];
  
  lVar1 = _next_int();
  auVar2._0_8_ = (double)lVar1 / 4294967088.0;
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  double extraout_d0;
  int local_38;
  int local_30 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  _seed(0x12d687);
  _next_int();
  iVar1 = _printf("%lld\n");
  _next_int(iVar1);
  iVar1 = _printf("%lld\n");
  _next_int(iVar1);
  iVar1 = _printf("%lld\n");
  _next_int(iVar1);
  iVar1 = _printf("%lld\n");
  _next_int(iVar1);
  _printf("%lld\n");
  _printf("\n");
  uVar3 = _seed(0x3ade68b1);
  for (local_38 = 0; local_38 < 100000; local_38 = local_38 + 1) {
    uVar3 = _next_float();
    local_30[(long)(extraout_d0 * 5.0)] = local_30[(long)(extraout_d0 * 5.0)] + 1;
  }
  for (local_38 = 0; local_38 < 5; local_38 = local_38 + 1) {
    uVar2 = _printf("%d: %d\n");
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar3);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


