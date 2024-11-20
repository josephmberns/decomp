#include "one-dimensional-cellular-automata-3.h"



int _print_gen(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_20;
  
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    _printf("%c");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



void _evolve(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined *local_60;
  ulong local_58;
  ulong local_50;
  undefined4 *local_48;
  int local_40;
  int local_3c;
  ulong local_38;
  undefined *local_30;
  int local_24;
  long local_20;
  long local_18;
  
  local_30 = (undefined *)&local_60;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_50 = (ulong)(param_2 + 2);
  local_58 = local_50 * 4 + 0xf & 0xfffffffffffffff0;
  local_24 = param_2;
  local_20 = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  puVar1 = (undefined4 *)((long)&local_60 - local_58);
  local_38 = local_50;
  local_48 = puVar1;
  puVar1[local_24 + 1] = 0;
  *puVar1 = 0;
  for (local_3c = 0; local_3c < local_24; local_3c = local_3c + 1) {
    local_48[local_3c + 1] = *(undefined4 *)(local_20 + (long)local_3c * 4);
  }
  for (local_40 = 0; local_40 < local_24; local_40 = local_40 + 1) {
    *(uint *)(local_20 + (long)local_40 * 4) =
         (uint)(local_48[local_40] + local_48[local_40 + 1] + local_48[local_40 + 2] == 2);
  }
  local_60 = local_30;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



undefined8 entry(void)

{
  int local_90;
  int local_8c;
  uint auStack_84 [21];
  char local_30 [24];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  builtin_strncpy(local_30,"_###_##_#_#_#_#__#__",0x15);
  for (local_8c = 0; local_8c < 0x15; local_8c = local_8c + 1) {
    auStack_84[local_8c] = (uint)(local_30[local_8c] == '#');
  }
  for (local_90 = 0; local_90 < 10; local_90 = local_90 + 1) {
    _print_gen();
    _evolve(auStack_84,0x15);
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


