#include "horners-rule-for-polynomial-evaluation.h"



undefined  [16] _horner(undefined8 param_1,long param_2,int param_3)

{
  undefined auVar1 [16];
  undefined8 local_28;
  undefined4 local_1c;
  
  local_28 = 0;
  for (local_1c = param_3 + -1; -1 < local_1c; local_1c = local_1c + -1) {
    local_28 = NEON_fmadd(local_28,param_1,*(undefined8 *)(param_2 + (long)local_1c * 8));
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1;
}



undefined8 entry(void)

{
  int iVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_38 = 0x401c000000000000;
  local_40 = 0xc033000000000000;
  uStack_28 = 0x4018000000000000;
  local_30 = 0xc010000000000000;
  _horner(0x4008000000000000,&local_40,4);
  iVar1 = _printf("%5.1f\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


