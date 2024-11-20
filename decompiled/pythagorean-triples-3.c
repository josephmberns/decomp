#include "pythagorean-triples-3.h"



void _new_tri(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int local_3c;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uVar1 = *param_1 + param_1[1] + param_1[2];
  if (uVar1 <= _max_peri) {
    _prim = _prim + 1;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = _max_peri / uVar1;
    }
    _total = _total + uVar2;
    for (local_3c = 0; local_3c < 3; local_3c = local_3c + 1) {
      local_30 = *(long *)(&_U + (long)local_3c * 0x48) * *param_1 +
                 *(long *)(&DAT_100008008 + (long)local_3c * 0x48) * param_1[1] +
                 *(long *)(&DAT_100008010 + (long)local_3c * 0x48) * param_1[2];
      local_28 = *(long *)(&DAT_100008018 + (long)local_3c * 0x48) * *param_1 +
                 *(long *)(&DAT_100008020 + (long)local_3c * 0x48) * param_1[1] +
                 *(long *)(&DAT_100008028 + (long)local_3c * 0x48) * param_1[2];
      local_20 = *(long *)(&DAT_100008030 + (long)local_3c * 0x48) * *param_1 +
                 *(long *)(&DAT_100008038 + (long)local_3c * 0x48) * param_1[1] +
                 *(long *)(&DAT_100008040 + (long)local_3c * 0x48) * param_1[2];
      _new_tri(&local_30);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



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
  for (_max_peri = 10; _max_peri < 0x5f5e101; _max_peri = _max_peri * 10) {
    _prim = 0;
    _total = 0;
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


