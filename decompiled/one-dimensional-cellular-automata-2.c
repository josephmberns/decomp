#include "one-dimensional-cellular-automata-2.h"



int _evolve(long param_1,int param_2)

{
  undefined uVar1;
  int local_14;
  int local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    *(bool *)(param_1 + local_10) = *(char *)(param_1 + local_10) == '#';
  }
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    *(byte *)(param_1 + local_10) =
         *(byte *)(param_1 + local_10) |
         (_trans[(int)((uint)((*(byte *)(param_1 + local_10) & 0xf) == 1) * 2 +
                       (uint)((*(byte *)(param_1 + (local_10 + -1)) & 0xf) == 1) * 4 +
                      (uint)((*(byte *)(param_1 + (local_10 + 1)) & 0xf) == 1))] == '#') << 4;
  }
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    local_14 = local_14 +
               ((int)*(char *)(param_1 + local_10) & 0xfU ^ (int)*(char *)(param_1 + local_10) >> 4)
    ;
  }
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    uVar1 = 0x23;
    if (*(char *)(param_1 + local_10) >> 4 == '\0') {
      uVar1 = 0x5f;
    }
    *(undefined *)(param_1 + local_10) = uVar1;
  }
  return local_14;
}



undefined8 entry(void)

{
  int iVar1;
  char local_30 [24];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  builtin_strncpy(local_30,"_###_##_#_#_#_#__#__\n",0x16);
  do {
    _printf(local_30 + 1);
    iVar1 = _evolve(local_30 + 1,0x13);
  } while (iVar1 != 0);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
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


