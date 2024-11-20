#include "dice-game-probabilities.h"



long _ipow(uint param_1,uint param_2)

{
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 1;
  for (local_14 = 1; local_14 <= param_2; local_14 = local_14 + 1) {
    local_10 = local_10 * (ulong)param_1;
  }
  return local_10;
}



uint _min(uint param_1,uint param_2)

{
  uint local_c;
  
  local_c = param_2;
  if (param_1 < param_2) {
    local_c = param_1;
  }
  return local_c;
}



void _throw_die(int param_1,int param_2,uint param_3,long param_4)

{
  int *piVar1;
  undefined4 local_2c;
  
  if (param_2 == 0) {
    piVar1 = (int *)(param_4 + (ulong)param_3 * 4);
    *piVar1 = *piVar1 + 1;
  }
  else {
    for (local_2c = 1; local_2c < param_1 + 1U; local_2c = local_2c + 1) {
      _throw_die(param_1,param_2 + -1,param_3 + local_2c,param_4);
    }
  }
  return;
}



undefined  [16] _beating_probability(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  double dVar3;
  undefined auVar4 [16];
  double dVar5;
  double local_b0;
  undefined *local_a8;
  uint local_9c;
  long local_98;
  ulong local_90;
  long local_88;
  ulong local_80;
  long local_78;
  uint local_70;
  uint local_6c;
  double local_68;
  double local_60;
  uint local_54;
  uint local_48;
  uint local_44;
  undefined *local_38;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  long local_18;
  
  local_38 = (undefined *)&local_b0;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_2c = (param_1 + 1) * param_2;
  local_80 = (ulong)local_2c * 4 + 0xf & 0xfffffffffffffff0;
  local_28 = param_4;
  local_24 = param_3;
  local_20 = param_2;
  local_1c = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_88 = (long)&local_b0 - local_80;
  for (local_44 = 0; local_44 < local_2c; local_44 = local_44 + 1) {
    *(undefined4 *)(local_88 + (ulong)local_44 * 4) = 0;
  }
  local_78 = local_88;
  _throw_die(local_1c,local_20,0,local_88);
  local_48 = (local_24 + 1) * local_28;
  local_90 = (ulong)local_48 * 4 + 0xf & 0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_88 = local_88 - local_90;
  for (local_54 = 0; local_54 < local_48; local_54 = local_54 + 1) {
    *(undefined4 *)(local_88 + (ulong)local_54 * 4) = 0;
  }
  _throw_die(local_24,local_28,0,local_88);
  local_98 = _ipow(local_1c,local_20);
  lVar2 = _ipow(local_24,local_28);
  local_60 = (double)(ulong)(local_98 * lVar2);
  local_68 = 0.0;
  for (local_6c = 0; local_6c < local_2c; local_6c = local_6c + 1) {
    local_70 = 0;
    while( true ) {
      local_9c = local_70;
      uVar1 = _min(local_6c,local_48);
      if (uVar1 <= local_9c) break;
      dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(local_78 + (ulong)local_6c * 4));
      dVar5 = (double)NEON_ucvtf((ulong)*(uint *)(local_88 + (ulong)local_70 * 4));
      local_68 = local_68 + (dVar3 * dVar5) / local_60;
      local_70 = local_70 + 1;
    }
  }
  local_b0 = local_68;
  local_a8 = local_38;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_68;
  return auVar4;
}



undefined4 entry(void)

{
  _beating_probability(4,9,6);
  _printf("%1.16f\n");
  _beating_probability(10,5,7,6);
  _printf("%1.16f\n");
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


