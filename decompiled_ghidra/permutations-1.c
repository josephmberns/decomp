#include "permutations-1.h"



undefined4 entry(int param_1,long param_2)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long alStack_90 [2];
  undefined auStack_80 [12];
  undefined4 local_74;
  ulong local_70;
  undefined *local_68;
  undefined local_5d;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined *local_40;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  long local_28;
  int local_20;
  undefined4 local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_1c = 0;
  local_28 = param_2;
  local_20 = param_1;
  if (param_1 < 2) {
    uVar4 = _printf("Enter an argument. Example 1234 or dcba:\n");
    uVar5 = (ulong)uVar4;
    local_1c = 0;
  }
  else {
    for (local_2c = 0; *(char *)(*(long *)(param_2 + 8) + (long)(int)local_2c) != '\0';
        local_2c = local_2c + 1) {
    }
    for (local_30 = 0; uVar4 = local_2c, local_30 < (int)local_2c; local_30 = local_30 + 1) {
      while (uVar3 = uVar4, local_34 = uVar3 - 1, local_30 < (int)local_34) {
        uVar4 = local_34;
        if (*(char *)(*(long *)(param_2 + 8) + (long)(int)local_34) <
            *(char *)(*(long *)(param_2 + 8) + (long)(int)(uVar3 - 2))) {
          cVar1 = *(char *)(*(long *)(param_2 + 8) + (long)(int)(uVar3 - 2));
          local_38 = (int)cVar1;
          *(undefined *)(*(long *)(param_2 + 8) + (long)(int)(uVar3 - 2)) =
               *(undefined *)(*(long *)(param_2 + 8) + (long)(int)local_34);
          *(char *)(*(long *)(param_2 + 8) + (long)(int)local_34) = cVar1;
          uVar4 = local_34;
        }
      }
    }
    local_70 = (ulong)local_2c + 0xf & 0xfffffffffffffff0;
    local_40 = auStack_80;
    uVar5 = (*(code *)PTR____chkstk_darwin_100004000)();
    lVar2 = -local_70;
    local_68 = auStack_80 + lVar2;
    local_4c = 0;
    local_50 = 1;
    while (local_4c != local_2c) {
      local_68[(int)local_4c] = *(undefined *)(*(long *)(local_28 + 8) + (long)(int)local_4c);
      local_4c = local_4c + 1;
      local_50 = local_4c * local_50;
    }
    local_68[(int)local_4c] = 0;
    for (local_5c = 0; local_5c != local_50; local_5c = local_5c + 1) {
      *(undefined **)((long)alStack_90 + lVar2) = local_68;
      uVar4 = _printf("%s\n");
      uVar5 = (ulong)uVar4;
      for (local_54 = local_2c - 2; local_58 = local_2c,
          (char)local_68[local_54 + 1] < (char)local_68[local_54]; local_54 = local_54 + -1) {
      }
      do {
        local_58 = local_58 - 1;
      } while ((char)local_68[(int)local_58] < (char)local_68[local_54]);
      local_5d = local_68[(int)local_58];
      local_68[(int)local_58] = local_68[local_54];
      local_68[local_54] = local_5d;
      local_58 = local_2c;
      while( true ) {
        local_54 = local_54 + 1;
        local_58 = local_58 - 1;
        if ((int)local_58 <= local_54) break;
        local_5d = local_68[local_54];
        local_68[local_54] = local_68[(int)local_58];
        local_68[(int)local_58] = local_5d;
      }
    }
  }
  local_74 = local_1c;
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return local_1c;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar5);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


