#include "population-count-1.h"



undefined8 entry(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  long local_a0;
  uint auStack_90 [30];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_a0 = 1;
  for (local_a4 = 0; local_a4 < 0x1e; local_a4 = local_a4 + 1) {
    uVar3 = NEON_cnt(local_a0,1);
    NEON_uaddlv(uVar3,1);
    _printf("%d ");
    local_a0 = local_a0 * 3;
  }
  _printf("\n");
  local_a8 = 0;
  local_ac = 0;
  _printf("evil  : ");
  local_b0 = 0;
  while (local_a8 + local_ac < 0x3c) {
    uVar3 = NEON_cnt((ulong)local_b0,1);
    uVar4 = NEON_uaddlv(uVar3,1);
    if ((uVar4 & 1) == 0) {
      if (local_a8 < 0x1e) {
        _printf("%d ");
        local_a8 = local_a8 + 1;
      }
    }
    else if (local_ac < 0x1e) {
      lVar2 = (long)local_ac;
      local_ac = local_ac + 1;
      auStack_90[lVar2] = local_b0;
    }
    local_b0 = local_b0 + 1;
  }
  _printf("\n");
  _printf("odious: ");
  for (local_b4 = 0; local_b4 < 0x1e; local_b4 = local_b4 + 1) {
    _printf("%d ");
  }
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
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


