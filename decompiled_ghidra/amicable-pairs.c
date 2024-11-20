#include "amicable-pairs.h"



undefined8 entry(undefined8 param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  uint local_f0;
  uint local_e8;
  uint local_e4;
  int local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_a8 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  uVar5 = _atoi(*(char **)(param_2 + 8));
  pvVar7 = _malloc((ulong)(uVar5 + 1) << 2);
  _memset(local_a8,0,0x80);
  local_a8[0] = 1;
  for (local_cc = 0; local_cc <= uVar5; local_cc = local_cc + 1) {
    *(undefined4 *)((long)pvVar7 + (ulong)local_cc * 4) = 1;
  }
  for (local_d0 = 2; local_d0 * 2 <= uVar5; local_d0 = local_d0 + 1) {
    if (*(uint *)((long)pvVar7 + (ulong)local_d0 * 4) < 2) {
      local_d4 = 1;
      while( true ) {
        uVar2 = 0;
        if (local_d0 != 0) {
          uVar2 = uVar5 / local_d0;
        }
        if (uVar2 < local_a8[local_d4 - 1]) break;
        local_a8[local_d4] = local_d0 * local_a8[local_d4 - 1];
        local_d4 = local_d4 + 1;
      }
      local_d8 = local_d0 - 1;
      for (local_dc = local_d0 * 2; local_dc <= uVar5; local_dc = local_dc + local_d0) {
        local_e0 = local_a8[1] + 1;
        local_d8 = local_d8 - 1;
        if (local_d8 == 0) {
          local_e4 = 2;
          while( true ) {
            bVar4 = false;
            if (local_e4 < local_d4) {
              uVar2 = local_a8[local_e4];
              uVar3 = 0;
              if (uVar2 != 0) {
                uVar3 = local_dc / uVar2;
              }
              bVar4 = local_dc == uVar3 * uVar2;
            }
            if (!bVar4) break;
            uVar8 = (ulong)local_e4;
            local_e4 = local_e4 + 1;
            local_e0 = local_e0 + local_a8[uVar8];
          }
          local_d8 = local_d0;
        }
        piVar1 = (int *)((long)pvVar7 + (ulong)local_dc * 4);
        *piVar1 = *piVar1 * local_e0;
      }
    }
    else {
      piVar1 = (int *)((long)pvVar7 + (ulong)local_d0 * 4);
      *piVar1 = *piVar1 - local_d0;
    }
  }
  local_e8 = uVar5 >> 1;
  while (local_e8 = local_e8 + 1, local_e8 <= uVar5) {
    if (1 < *(uint *)((long)pvVar7 + (ulong)local_e8 * 4)) {
      piVar1 = (int *)((long)pvVar7 + (ulong)local_e8 * 4);
      *piVar1 = *piVar1 - local_e8;
    }
  }
  for (local_f0 = 1; local_f0 <= uVar5; local_f0 = local_f0 + 1) {
    uVar2 = *(uint *)((long)pvVar7 + (ulong)local_f0 * 4);
    if (((local_f0 < uVar2) && (uVar2 <= uVar5)) &&
       (*(uint *)((long)pvVar7 + (ulong)uVar2 * 4) == local_f0)) {
      _printf("%u %u\n");
    }
  }
  iVar6 = _printf("\nTop %u count : %u\n");
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar6);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004020)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


