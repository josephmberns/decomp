#include "variable-declaration-reset.h"



undefined8 entry(ulong param_1)

{
  int iVar1;
  uint uVar2;
  int local_4c;
  int local_48;
  int local_40 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_4c = 0;
  local_40[2] = 2;
  local_40[0] = 1;
  local_40[1] = 2;
  local_40[5] = 4;
  local_40[6] = 5;
  local_40[3] = 3;
  local_40[4] = 4;
  for (local_48 = 0; local_48 < 7; local_48 = local_48 + 1) {
    if ((0 < local_48) && (local_40[local_48] == 0)) {
      uVar2 = _printf("%d\n");
      param_1 = (ulong)uVar2;
    }
  }
  for (local_48 = 0; local_48 < 7; local_48 = local_48 + 1) {
    iVar1 = local_40[local_48];
    if ((0 < local_48) && (iVar1 == local_4c)) {
      uVar2 = _printf("%d\n");
      param_1 = (ulong)uVar2;
    }
    local_4c = iVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


