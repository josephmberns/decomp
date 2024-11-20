#include "forest-fire-2.h"



void _evolve(uint param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 auStack_c0 [2];
  undefined auStack_b0 [4];
  int local_ac;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  undefined *local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  long local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  ulong local_38;
  ulong local_28;
  undefined *local_20;
  uint local_18;
  uint local_14;
  
  local_20 = auStack_b0;
  local_98 = (ulong)param_2;
  local_a8 = (ulong)param_1;
  local_a0 = local_98 * local_a8 * 4 + 0xf & 0xfffffffffffffff0;
  local_18 = param_2;
  local_14 = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar2 = -local_a0;
  local_28 = local_98;
  local_78 = (ulong)local_18;
  local_88 = (ulong)local_14;
  local_80 = local_78 * local_88 * 4 + 0xf & 0xfffffffffffffff0;
  local_90 = auStack_b0 + lVar2;
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar2 = (long)(auStack_b0 + lVar2) - local_80;
  local_38 = local_78;
  local_70 = lVar2;
  for (local_44 = 0; local_44 < (int)local_18; local_44 = local_44 + 1) {
    for (local_48 = 0; local_48 < (int)local_14; local_48 = local_48 + 1) {
      iVar3 = _rand();
      uVar1 = (uint)((double)iVar3 < _tree_prob * 2147483647.0);
      *(uint *)(local_90 + (long)local_48 * 4 + (long)local_44 * local_a8 * 4) = uVar1;
      *(uint *)(local_70 + (long)local_44 * local_88 * 4 + (long)local_48 * 4) = uVar1;
    }
  }
  do {
    _printf("\x1b[H");
    for (local_4c = 0; local_4c < (int)local_18; local_4c = local_4c + 1) {
      for (local_50 = 0; local_50 < (int)local_14; local_50 = local_50 + 1) {
        *(undefined **)(lVar2 + -0x10) =
             (&_disp)[*(uint *)(local_90 + (long)local_50 * 4 + (long)local_4c * local_a8 * 4)];
        _printf("%s");
      }
      _printf("\x1b[E");
    }
    _fflush(*(FILE **)PTR____stdoutp_100004008);
    for (local_54 = 0; local_54 < (int)local_18; local_54 = local_54 + 1) {
      for (local_58 = 0; local_58 < (int)local_14; local_58 = local_58 + 1) {
        local_ac = *(int *)(local_90 + (long)local_58 * 4 + (long)local_54 * local_a8 * 4);
        if (local_ac == 0) {
          iVar3 = _rand();
          if ((double)iVar3 < _tree_prob * 2147483647.0) {
            *(undefined4 *)(local_70 + (long)local_54 * local_88 * 4 + (long)local_58 * 4) = 1;
          }
        }
        else if (local_ac == 2) {
          *(undefined4 *)(local_70 + (long)local_54 * local_88 * 4 + (long)local_58 * 4) = 0;
        }
        else {
          for (local_5c = local_54 + -1; local_5c <= local_54 + 1; local_5c = local_5c + 1) {
            if ((-1 < local_5c) && (local_5c < (int)local_18)) {
              for (local_60 = local_58 + -1; local_60 <= local_58 + 1; local_60 = local_60 + 1) {
                if (((-1 < local_60) && (local_60 < (int)local_14)) &&
                   (*(int *)(local_90 + (long)local_60 * 4 + (long)local_5c * local_a8 * 4) == 2)) {
                  *(undefined4 *)(local_70 + (long)local_54 * local_88 * 4 + (long)local_58 * 4) = 2
                  ;
                  goto LAB_100003d30;
                }
              }
            }
          }
LAB_100003d30:
          if ((*(int *)(local_70 + (long)local_54 * local_88 * 4 + (long)local_58 * 4) == 1) &&
             (iVar3 = _rand(), (double)iVar3 < _burn_prob * 2147483647.0)) {
            *(undefined4 *)(local_70 + (long)local_54 * local_88 * 4 + (long)local_58 * 4) = 2;
          }
        }
      }
    }
    for (local_64 = 0; local_64 < (int)local_18; local_64 = local_64 + 1) {
      for (local_68 = 0; local_68 < (int)local_14; local_68 = local_68 + 1) {
        *(undefined4 *)(local_90 + (long)local_68 * 4 + (long)local_64 * local_a8 * 4) =
             *(undefined4 *)(local_70 + (long)local_64 * local_88 * 4 + (long)local_68 * 4);
      }
    }
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
  _evolve(local_24,local_28);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}


