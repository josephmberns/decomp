#include "factorions.h"



undefined8 entry(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  int local_84;
  int local_80;
  long local_78 [12];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_78[0] = 1;
  for (local_80 = 1; local_80 < 0xc; local_80 = local_80 + 1) {
    local_78[local_80] = local_78[local_80 + -1] * (long)local_80;
  }
  for (local_84 = 9; local_84 < 0xd; local_84 = local_84 + 1) {
    _printf("The factorions for base %d are:\n");
    for (local_90 = 1; local_90 < 1500000; local_90 = local_90 + 1) {
      local_a0 = 0;
      local_98 = local_90;
      uVar2 = local_98;
      while (local_98 = uVar2, local_98 != 0) {
        iVar1 = 0;
        if ((long)local_84 != 0) {
          iVar1 = (int)(local_98 / (ulong)(long)local_84);
        }
        local_a0 = local_a0 + local_78[(int)local_98 - iVar1 * local_84];
        uVar2 = 0;
        if ((long)local_84 != 0) {
          uVar2 = local_98 / (ulong)(long)local_84;
        }
      }
      if (local_a0 == local_90) {
        _printf("%llu ");
      }
    }
    uVar3 = _printf("\n\n");
    param_1 = (ulong)uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(param_1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


