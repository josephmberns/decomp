#include "pseudo-random-numbers-xorshift-star.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _seed(undefined8 param_1)

{
  _DAT_100008000 = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _next_int(void)

{
  _DAT_100008000 = _DAT_100008000 ^ _DAT_100008000 >> 0xc;
  _DAT_100008000 = _DAT_100008000 ^ _DAT_100008000 << 0x19;
  _DAT_100008000 = _DAT_100008000 ^ _DAT_100008000 >> 0x1b;
  return (int)(_DAT_100008000 * 0x2545f4914f6cdd1d >> 0x20);
}



float _next_float(void)

{
  uint uVar1;
  
  uVar1 = _next_int();
  return (float)uVar1 / 4.2949673e+09;
}



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  float extraout_s0;
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
  iVar1 = _printf("%u\n");
  _next_int(iVar1);
  iVar1 = _printf("%u\n");
  _next_int(iVar1);
  iVar1 = _printf("%u\n");
  _next_int(iVar1);
  iVar1 = _printf("%u\n");
  _next_int(iVar1);
  _printf("%u\n");
  _printf("\n");
  uVar3 = _seed(0x3ade68b1);
  for (local_38 = 0; local_38 < 100000; local_38 = local_38 + 1) {
    uVar3 = _next_float();
    local_30[(int)(extraout_s0 * 5.0)] = local_30[(int)(extraout_s0 * 5.0)] + 1;
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
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


