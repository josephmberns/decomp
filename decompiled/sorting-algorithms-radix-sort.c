#include "sorting-algorithms-radix-sort.h"



undefined4 entry(void)

{
  int iVar1;
  uint uVar2;
  time_t tVar3;
  ulong uVar4;
  ulong local_70;
  ulong local_68;
  int aiStack_58 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  tVar3 = _time((time_t *)0x0);
  _srand((uint)tVar3);
  for (local_68 = 0; local_68 < 0x10; local_68 = local_68 + 1) {
    iVar1 = _rand();
    aiStack_58[local_68] = iVar1 / 0x800000 + -0x80;
  }
  uVar4 = FUN_100003c80(aiStack_58,0x10);
  for (local_70 = 0; local_70 < 0x10; local_70 = local_70 + 1) {
    uVar2 = _printf("%d%c");
    uVar4 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar4);
}



void FUN_100003c80(long param_1,ulong param_2)

{
  uint *puVar1;
  undefined8 local_28;
  
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    puVar1 = (uint *)(param_1 + local_28 * 4);
    *puVar1 = *puVar1 ^ 0x80000000;
  }
  FUN_100003d58(param_1,param_1 + param_2 * 4,0x80000000);
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    puVar1 = (uint *)(param_1 + local_28 * 4);
    *puVar1 = *puVar1 ^ 0x80000000;
  }
  return;
}



void FUN_100003d58(uint *param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  uint *local_38;
  uint *local_30;
  
  if ((param_3 != 0) && (param_1 + 1 <= param_2)) {
    local_38 = param_2 + -1;
    local_30 = param_1;
    while( true ) {
      while( true ) {
        bVar1 = false;
        if (local_30 < local_38) {
          bVar1 = (*local_30 & param_3) == 0;
        }
        if (!bVar1) break;
        local_30 = local_30 + 1;
      }
      while( true ) {
        bVar1 = false;
        if (local_30 < local_38) {
          bVar1 = (*local_38 & param_3) != 0;
        }
        if (!bVar1) break;
        local_38 = local_38 + -1;
      }
      if (local_38 <= local_30) break;
      FUN_100003f20(local_30,local_38);
    }
    if (((param_3 & *local_30) == 0) && (local_30 < param_2)) {
      local_30 = local_30 + 1;
    }
    FUN_100003d58(param_1,local_30,param_3 >> 1);
    FUN_100003d58(local_30,param_2,param_3 >> 1);
  }
  return;
}



void FUN_100003f20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004028)();
  return tVar1;
}


