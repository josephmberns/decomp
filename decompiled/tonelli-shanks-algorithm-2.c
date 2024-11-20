#include "tonelli-shanks-algorithm-2.h"



undefined4 entry(void)

{
  int iVar1;
  
  iVar1 = FUN_100003a0c(0x6ce3,0x6703);
  if (iVar1 != 0x37f0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("main","tonelli-shanks-algorithm-2.c",0x57,"root == 14320");
  }
  iVar1 = FUN_100003a0c(0x423a35c7,0x423a35d1);
  if (iVar1 != 0x548eb12) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("main","tonelli-shanks-algorithm-2.c",0x5a,"root == 88664850");
  }
  iVar1 = FUN_100003a0c(0x148a,0xf0b);
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("main","tonelli-shanks-algorithm-2.c",0x5d,"root == 0");
  }
  return 0;
}



undefined4 FUN_100003a0c(uint param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_3c;
  uint local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = param_1 / param_2;
  }
  iVar1 = param_1 - uVar5 * param_2;
  iVar3 = FUN_100003d6c(iVar1,param_2 - 1 >> 1,param_2);
  if (iVar3 != 1) {
    return 0;
  }
  uVar5 = param_2 & 7;
  if (uVar5 != 3) {
    if (uVar5 == 5) {
      uVar4 = FUN_100003d6c(iVar1,param_2 + 3 >> 3,param_2);
      iVar3 = FUN_100003e24(uVar4,uVar4,param_2);
      if (iVar3 == iVar1) {
        return uVar4;
      }
      uVar6 = FUN_100003d6c(2,param_2 - 1 >> 2,param_2);
      uVar4 = FUN_100003e24(uVar4,uVar6,param_2);
      return uVar4;
    }
    if (uVar5 != 7) {
      if (iVar1 == 1) {
        return 1;
      }
      local_28 = param_2 - 1;
      local_2c = 2;
      while( true ) {
        bVar2 = false;
        if (local_2c < param_2) {
          uVar5 = FUN_100003d6c(local_2c,local_28 >> 1,param_2);
          bVar2 = uVar5 != local_28;
        }
        if (!bVar2) break;
        local_2c = local_2c + 1;
      }
      local_30 = 0;
      for (; (local_28 & 1) == 0; local_28 = local_28 >> 1) {
        local_30 = local_30 + 1;
      }
      uVar4 = FUN_100003d6c(iVar1,local_28,param_2);
      uVar6 = FUN_100003d6c(local_2c,local_28,param_2);
      local_38 = 0;
      for (local_3c = 0; local_3c < local_30; local_3c = local_3c + 1) {
        uVar7 = FUN_100003d6c(uVar6,local_38,param_2);
        uVar7 = FUN_100003e24(uVar7,uVar4,param_2);
        iVar3 = FUN_100003d6c(uVar7,1 << (ulong)((local_30 - 1) - local_3c & 0x1f),param_2);
        if (iVar3 == param_2 - 1) {
          local_38 = local_38 + (1 << (ulong)(local_3c & 0x1f));
        }
      }
      uVar4 = FUN_100003d6c(iVar1,local_28 + 1 >> 1,param_2);
      uVar6 = FUN_100003d6c(uVar6,local_38 >> 1,param_2);
      uVar4 = FUN_100003e24(uVar4,uVar6,param_2);
      return uVar4;
    }
  }
  uVar4 = FUN_100003d6c(iVar1,param_2 + 1 >> 2,param_2);
  return uVar4;
}



undefined4 FUN_100003d6c(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 local_20;
  uint local_18;
  int local_14;
  
  local_20 = 1;
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_1 / param_3;
  }
  local_14 = param_1 - uVar1 * param_3;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 >> 1) {
    if ((local_18 & 1) != 0) {
      local_20 = FUN_100003e24(local_20,local_14,param_3);
    }
    local_14 = FUN_100003e24(local_14,local_14,param_3);
  }
  return local_20;
}



int FUN_100003e24(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint local_14;
  uint local_10;
  uint local_8;
  uint local_4;
  
  local_10 = 0;
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_2 / param_3;
  }
  local_8 = param_2 - uVar1 * param_3;
  local_4 = param_1;
  while (local_4 != 0) {
    if ((local_4 & 1) != 0) {
      if (param_3 - local_10 <= local_8) {
        local_10 = local_10 - param_3;
      }
      local_10 = local_10 + local_8;
    }
    local_4 = local_4 >> 1;
    local_14 = local_8;
    if (param_3 - local_8 <= local_8) {
      local_14 = local_8 - param_3;
    }
    local_8 = local_8 + local_14;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = local_10 / param_3;
  }
  return local_10 - uVar1 * param_3;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}


