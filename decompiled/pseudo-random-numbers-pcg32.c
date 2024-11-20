#include "pseudo-random-numbers-pcg32.h"



uint _pcg32_int(void)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = DAT_100008000;
  DAT_100008000 = DAT_100008000 * 0x5851f42d4c957f2d + DAT_100008008;
  uVar2 = (uint)((uVar1 ^ uVar1 >> 0x12) >> 0x1b);
  uVar3 = (uint)(uVar1 >> 0x3b);
  return uVar2 >> (ulong)uVar3 | uVar2 << (ulong)(~uVar3 + 1 & 0x1f);
}



undefined  [16] _pcg32_float(void)

{
  uint uVar1;
  undefined auVar2 [16];
  
  uVar1 = _pcg32_int();
  auVar2._0_8_ = (double)uVar1 / 4294967296.0;
  auVar2._8_8_ = 0;
  return auVar2;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

void _pcg32_seed(long param_1,long param_2)

{
  DAT_100008000 = 0;
  DAT_100008008 = param_2 << 1 | 1;
  _pcg32_int();
  DAT_100008000 = DAT_100008000 + param_1;
  _pcg32_int();
  return;
}



undefined8 entry(void)

{
  int iVar1;
  double dVar2;
  int local_38;
  int local_30 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  _pcg32_seed(0x2a,0x36);
  _pcg32_int();
  iVar1 = _printf("%u\n");
  _pcg32_int(iVar1);
  iVar1 = _printf("%u\n");
  _pcg32_int(iVar1);
  iVar1 = _printf("%u\n");
  _pcg32_int(iVar1);
  iVar1 = _printf("%u\n");
  _pcg32_int(iVar1);
  _printf("%u\n");
  _printf("\n");
  _pcg32_seed(0x3ade68b1,1);
  for (local_38 = 0; local_38 < 100000; local_38 = local_38 + 1) {
    dVar2 = (double)_pcg32_float();
    local_30[(int)(dVar2 * 5.0)] = local_30[(int)(dVar2 * 5.0)] + 1;
  }
  iVar1 = _printf("The counts for 100,000 repetitions are:\n");
  for (local_38 = 0; local_38 < 5; local_38 = local_38 + 1) {
    iVar1 = _printf("  %d : %d\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
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


