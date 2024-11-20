#include "conways-game-of-life-1.h"



int _show(long param_1,uint param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int local_30;
  int local_2c;
  
  _printf("\x1b[H");
  for (local_2c = 0; local_2c < param_3; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < (int)param_2; local_30 = local_30 + 1) {
      pcVar1 = "\x1b[07m  \x1b[m";
      if (*(int *)(param_1 + (long)local_2c * (ulong)param_2 * 4 + (long)local_30 * 4) == 0) {
        pcVar1 = "  ";
      }
      _printf(pcVar1);
    }
    _printf("\x1b[E");
  }
  iVar2 = _fflush(*(FILE **)PTR____stdoutp_100004018);
  return iVar2;
}



void _evolve(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined *local_a0;
  uint local_98;
  uint local_94;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  long local_70;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulong local_40;
  undefined *local_38;
  long local_30;
  uint local_28;
  uint local_24;
  long local_20;
  long local_18;
  
  local_38 = (undefined *)&local_a0;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_90 = (ulong)param_2;
  local_78 = (ulong)param_3;
  local_88 = (ulong)param_2;
  local_80 = local_78 * local_88 * 4 + 0xf & 0xfffffffffffffff0;
  local_30 = param_1;
  local_28 = param_3;
  local_24 = param_2;
  local_20 = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_70 = (long)&local_a0 - local_80;
  local_40 = local_78;
  for (local_4c = 0; local_4c < (int)local_28; local_4c = local_4c + 1) {
    for (local_50 = 0; local_50 < (int)local_24; local_50 = local_50 + 1) {
      local_54 = 0;
      for (local_58 = local_4c + -1; local_58 <= local_4c + 1; local_58 = local_58 + 1) {
        for (local_5c = local_50 + -1; local_5c <= local_50 + 1; local_5c = local_5c + 1) {
          iVar1 = 0;
          if (local_28 != 0) {
            iVar1 = (int)(local_58 + local_28) / (int)local_28;
          }
          iVar2 = 0;
          if (local_24 != 0) {
            iVar2 = (int)(local_5c + local_24) / (int)local_24;
          }
          if (*(int *)(local_30 +
                       (long)(int)((local_58 + local_28) - iVar1 * local_28) * local_90 * 4 +
                      (long)(int)((local_5c + local_24) - iVar2 * local_24) * 4) != 0) {
            local_54 = local_54 + 1;
          }
        }
      }
      if (*(int *)(local_30 + (long)local_4c * local_90 * 4 + (long)local_50 * 4) != 0) {
        local_54 = local_54 + -1;
      }
      local_94 = 1;
      if (local_54 != 3) {
        local_98 = 0;
        if (local_54 == 2) {
          local_98 = (uint)(*(int *)(local_30 + (long)local_4c * local_90 * 4 + (long)local_50 * 4)
                           != 0);
        }
        local_94 = local_98;
      }
      *(uint *)(local_70 + (long)local_4c * local_88 * 4 + (long)local_50 * 4) = local_94;
    }
  }
  for (local_60 = 0; local_60 < (int)local_28; local_60 = local_60 + 1) {
    for (local_64 = 0; local_64 < (int)local_24; local_64 = local_64 + 1) {
      *(undefined4 *)(local_30 + (long)local_60 * local_90 * 4 + (long)local_64 * 4) =
           *(undefined4 *)(local_70 + (long)local_60 * local_88 * 4 + (long)local_64 * 4);
    }
  }
  local_a0 = local_38;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



void _game(uint param_1,uint param_2)

{
  int iVar1;
  undefined auStack_60 [8];
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined *local_40;
  int local_38;
  int local_34;
  ulong local_28;
  undefined *local_20;
  uint local_18;
  uint local_14;
  
  local_20 = auStack_60;
  local_48 = (ulong)param_2;
  local_58 = (ulong)param_1;
  local_50 = local_48 * local_58 * 4 + 0xf & 0xfffffffffffffff0;
  local_18 = param_2;
  local_14 = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_40 = auStack_60 + -local_50;
  local_28 = local_48;
  for (local_34 = 0; local_34 < (int)local_14; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < (int)local_18; local_38 = local_38 + 1) {
      iVar1 = _rand();
      *(uint *)(local_40 + (long)local_34 * 4 + (long)local_38 * local_58 * 4) =
           (uint)(iVar1 < 0xccccccc);
    }
  }
  do {
    _show(local_40,local_14,local_18);
    _evolve(local_40,local_14,local_18);
    _usleep(200000);
  } while( true );
}



undefined4 entry(int param_1,long param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_28 = 0;
  if (1 < param_1) {
    local_24 = _atoi(*(char **)(param_2 + 8));
  }
  if (2 < param_1) {
    local_28 = _atoi(*(char **)(param_2 + 0x10));
  }
  if (local_24 < 1) {
    local_24 = 0x1e;
  }
  if (local_28 < 1) {
    local_28 = 0x1e;
  }
  _game(local_24,local_28);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004038)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__usleep_100004040)(param_1);
  return iVar1;
}


