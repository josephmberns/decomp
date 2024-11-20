#include "100-prisoners.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _initialize(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  pvVar5 = _malloc((long)param_1 << 3);
  __drawerSet = (long)pvVar5 + -8;
  iVar4 = _rand();
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = iVar4 / param_1;
  }
  local_20 = (iVar4 - iVar1 * param_1) + 1;
  *(ulong *)(__drawerSet + 8) = CONCAT44(uStack_28,local_20) & 0xffffff00ffffffff;
  local_18 = 2;
  do {
    uVar3 = uStack_30;
    if (param_1 + 1 <= local_18) {
      return;
    }
    bVar2 = false;
    while (!bVar2) {
      for (local_1c = 0; local_1c < local_18; local_1c = local_1c + 1) {
        if (*(int *)(__drawerSet + (long)local_1c * 8) == local_20) {
          iVar4 = _rand();
          iVar1 = 0;
          if (param_1 != 0) {
            iVar1 = iVar4 / param_1;
          }
          local_20 = (iVar4 - iVar1 * param_1) + 1;
          break;
        }
      }
      if (local_1c == local_18) {
        bVar2 = true;
      }
    }
    uStack_30 = uStack_30 & 0xffffff00;
    *(ulong *)(__drawerSet + (long)local_18 * 8) = CONCAT44(uVar3,local_20) & 0xffffff00ffffffff;
    local_18 = local_18 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _closeAllDrawers(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 1; local_8 < param_1 + 1; local_8 = local_8 + 1) {
    *(undefined *)(__drawerSet + (long)local_8 * 8 + 4) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined _libertyOrDeathAtRandom(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int local_24;
  int local_20;
  
  local_20 = 1;
  do {
    if (param_1 + 1 <= local_20) {
      return 0;
    }
    bVar2 = false;
    for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
      do {
        iVar3 = _rand();
        iVar1 = 0;
        if (param_1 != 0) {
          iVar1 = iVar3 / param_1;
        }
        iVar1 = (iVar3 - iVar1 * param_1) + 1;
      } while ((*(byte *)(__drawerSet + (long)iVar1 * 8 + 4) & 1) == 1);
      if (*(int *)(__drawerSet + (long)iVar1 * 8) == local_20) {
        bVar2 = true;
        break;
      }
      *(undefined *)(__drawerSet + (long)iVar1 * 8 + 4) = 1;
    }
    _closeAllDrawers(param_1);
    if (!bVar2) {
      return 1;
    }
    local_20 = local_20 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined _libertyOrDeathPlanned(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  
  local_20 = 1;
  do {
    if (param_1 + 1 <= local_20) {
      return 0;
    }
    local_28 = local_20;
    bVar2 = false;
    for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
      *(undefined *)(__drawerSet + (long)local_28 * 8 + 4) = 1;
      if (*(int *)(__drawerSet + (long)local_28 * 8) == local_20) {
        bVar2 = true;
        break;
      }
      if (local_28 == *(int *)(__drawerSet + (long)local_28 * 8)) {
        do {
          iVar3 = _rand();
          iVar1 = 0;
          if (param_1 != 0) {
            iVar1 = iVar3 / param_1;
          }
          local_28 = (iVar3 - iVar1 * param_1) + 1;
        } while ((*(byte *)(__drawerSet + (long)local_28 * 8 + 4) & 1) == 1);
      }
      else {
        local_28 = *(int *)(__drawerSet + (long)local_28 * 8);
      }
    }
    _closeAllDrawers(param_1);
    if (!bVar2) {
      return 1;
    }
    local_20 = local_20 + 1;
  } while( true );
}



int entry(int param_1,long param_2)

{
  uint uVar1;
  time_t tVar2;
  char *pcStack_48;
  long local_40;
  ulong local_38;
  ulonglong local_30;
  int local_28;
  int local_24;
  long local_20;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_40 = 0;
  local_20 = param_2;
  local_18 = param_1;
  if (param_1 == 4) {
    local_24 = _atoi(*(char **)(param_2 + 8));
    local_28 = _atoi(*(char **)(local_20 + 0x10));
    local_30 = _strtoull(*(char **)(local_20 + 0x18),&pcStack_48,10);
    tVar2 = _time((time_t *)0x0);
    _srand((uint)tVar2);
    _printf("Running random trials...");
    for (local_38 = 0; local_38 < local_30; local_38 = local_38 + 1) {
      _initialize(local_24);
      uVar1 = _libertyOrDeathAtRandom(local_24,local_28);
      local_40 = local_40 + (int)(uint)((uVar1 & 1) != 1);
    }
    NEON_ucvtf(local_40);
    NEON_ucvtf(local_30);
    _printf("\n\nGames Played : %llu\nGames Won : %llu\nChances : %lf %% \n\n");
    local_40 = 0;
    _printf("Running strategic trials...");
    for (local_38 = 0; local_38 < local_30; local_38 = local_38 + 1) {
      _initialize(local_24);
      uVar1 = _libertyOrDeathPlanned(local_24,local_28);
      local_40 = local_40 + (int)(uint)((uVar1 & 1) != 1);
    }
    NEON_ucvtf(local_40);
    NEON_ucvtf(local_30);
    _printf("\n\nGames Played : %llu\nGames Won : %llu\nChances : %lf %% \n\n");
    local_14 = 0;
  }
  else {
    local_14 = _printf("Usage : %s <Number of prisoners> <Number of chances> <Number of trials>");
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ulonglong _strtoull(char *param_1,char **param_2,int param_3)

{
  ulonglong uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__strtoull_100004028)(param_1,param_2,param_3);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004030)();
  return tVar1;
}


