#include "pythagorean-triples-5.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _new_tri(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_60;
  long local_58;
  long local_50;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_58 = param_1[1];
  local_60 = param_1[2];
  for (local_50 = *param_1; uVar1 = local_50 + local_58 + local_60, uVar1 <= __max_peri;
      local_50 = local_30 + local_50 * -2) {
    __prim = __prim + 1;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = __max_peri / uVar1;
    }
    __total = __total + uVar2;
    local_30 = local_50 + local_58 * -2 + local_60 * 2;
    local_28 = (local_50 * 2 - local_58) + local_60 * 2;
    local_20 = (local_28 - local_58) + local_60;
    _new_tri();
    local_30 = local_30 + local_58 * 4;
    local_28 = local_28 + local_58 * 2;
    local_20 = local_20 + local_58 * 4;
    _new_tri(&local_30);
    local_60 = local_20 + local_50 * -4;
    local_58 = local_28 + local_50 * -4;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(ulong param_1)

{
  uint uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_28 = 4;
  local_30 = 3;
  local_20 = 5;
  for (__max_peri = 10; __max_peri < 0x5f5e101; __max_peri = __max_peri * 10) {
    __prim = 0;
    __total = 0;
    _new_tri(&local_30);
    uVar1 = _printf("Up to %lu: %lu triples, %lu primitives.\n");
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
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


