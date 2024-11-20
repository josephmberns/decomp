#include "pig-the-dice-game-player.h"



undefined8 entry(void)

{
  time_t tVar1;
  int local_40;
  undefined8 local_38 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  tVar1 = _time((time_t *)0x0);
  _srand((uint)tVar1);
  local_38[0] = FUN_100003854(FUN_10000389c);
  local_38[1] = FUN_100003854(FUN_10000393c);
  local_38[2] = FUN_100003854(FUN_1000039cc);
  local_38[3] = FUN_100003854(FUN_100003a3c);
  FUN_100003b48(local_38);
  for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
    _free((void *)local_38[local_40]);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



undefined4 * FUN_100003854(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_malloc(0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}



undefined4 FUN_10000389c(int *param_1)

{
  int iVar1;
  undefined4 local_14;
  
  if ((uint)(*param_1 + param_1[1]) < 100) {
    iVar1 = FUN_100003cd4(0,9);
    if ((iVar1 < 5) || (param_1[1] == 0)) {
      local_14 = 0;
    }
    else {
      local_14 = 1;
    }
  }
  else {
    local_14 = 1;
  }
  return local_14;
}



undefined4 FUN_10000393c(int *param_1)

{
  undefined4 local_4;
  
  if ((uint)(*param_1 + param_1[1]) < 100) {
    if ((uint)param_1[1] < (100U - *param_1) / 4) {
      local_4 = 0;
    }
    else {
      local_4 = 1;
    }
  }
  else {
    local_4 = 1;
  }
  return local_4;
}



undefined4 FUN_1000039cc(int *param_1)

{
  undefined4 local_4;
  
  if ((uint)(*param_1 + param_1[1]) < 100) {
    if ((uint)param_1[1] < 0xf) {
      local_4 = 0;
    }
    else {
      local_4 = 1;
    }
  }
  else {
    local_4 = 1;
  }
  return local_4;
}



undefined4 FUN_100003a3c(int *param_1)

{
  int iVar1;
  undefined4 local_14;
  
  if ((uint)(*param_1 + param_1[1]) < 100) {
    if (((float)(uint)(*param_1 + param_1[1]) * 0.0 < 0.75) || ((uint)param_1[1] < 7)) {
      if ((uint)param_1[1] < 0xf) {
        local_14 = 0;
      }
      else {
        local_14 = 1;
      }
    }
    else {
      iVar1 = FUN_100003cd4(0,9);
      if (iVar1 < 5) {
        local_14 = 0;
      }
      else {
        local_14 = 1;
      }
    }
  }
  else {
    local_14 = 1;
  }
  return local_14;
}



ulong FUN_100003b48(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  int local_24;
  int local_20;
  
  bVar1 = true;
  uVar3 = param_1;
LAB_100003b64:
  do {
    if (!bVar1) {
      return uVar3;
    }
    local_20 = 0;
    while( true ) {
      if (3 < local_20) goto LAB_100003b64;
      _fprintf(*(FILE **)PTR____stdoutp_100004010,"\nPlayer %d turn\n");
      uVar3 = FUN_100003d1c(*(undefined8 *)(param_1 + (long)local_20 * 8));
      if (99 < **(uint **)(param_1 + (long)local_20 * 8)) break;
      local_20 = local_20 + 1;
    }
    _fprintf(*(FILE **)PTR____stdoutp_100004010,"\n\nPlayer %d has won");
    _puts("\n\nThe overall scores were:");
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      _fprintf(*(FILE **)PTR____stdoutp_100004010,"Player %d: %d points\n");
    }
    uVar2 = _puts("");
    uVar3 = (ulong)uVar2;
    bVar1 = false;
  } while( true );
}



int FUN_100003cd4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _rand();
  iVar1 = (param_2 - param_1) + 1;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar3 / iVar1;
  }
  return (iVar3 - iVar2 * iVar1) + param_1;
}



int FUN_100003d1c(int *param_1)

{
  int iVar1;
  
  do {
    iVar1 = (**(code **)(param_1 + 2))(param_1);
    if (iVar1 != 0) {
      *param_1 = *param_1 + param_1[1];
      param_1[1] = 0;
      _fprintf(*(FILE **)PTR____stdoutp_100004010,"Player holds\n");
LAB_100003e34:
      iVar1 = _fprintf(*(FILE **)PTR____stdoutp_100004010,"Current score: %d\n");
      return iVar1;
    }
    iVar1 = FUN_100003cd4(1,6);
    if (iVar1 < 2) {
      *param_1 = 0;
      param_1[1] = 0;
      _fprintf(*(FILE **)PTR____stdoutp_100004010,"Player rolls a 1, they loose all their points\n")
      ;
      goto LAB_100003e34;
    }
    param_1[1] = param_1[1] + iVar1;
    _fprintf(*(FILE **)PTR____stdoutp_100004010,"Player rolls a %d - Round score: %d\n");
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004038)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004040)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004048)();
  return tVar1;
}


