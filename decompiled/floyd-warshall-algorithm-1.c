#include "floyd-warshall-algorithm-1.h"



undefined  [16] _loadGraph(char *param_1)

{
  undefined auVar1 [16];
  FILE *pFVar2;
  void *pvVar3;
  int local_34;
  undefined4 local_20;
  int iStack_1c;
  
  pFVar2 = _fopen(param_1,"r");
  _fscanf(pFVar2,"%d%d");
  pvVar3 = _malloc((long)iStack_1c * 0xc);
  for (local_34 = 0; local_34 < iStack_1c; local_34 = local_34 + 1) {
    _fscanf(pFVar2,"%d%d%d");
  }
  _fclose(pFVar2);
  auVar1._4_4_ = iStack_1c;
  auVar1._0_4_ = local_20;
  auVar1._8_8_ = pvVar3;
  return auVar1;
}



void _floydWarshall(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong auStack_d0 [4];
  undefined *local_b0;
  int local_a4;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  long local_68;
  uint local_5c;
  int local_58;
  int local_54;
  ulong local_48;
  ulong local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_30 = (undefined *)&local_b0;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_90 = param_1 & 0xffffffff;
  local_a0 = param_1 & 0xffffffff;
  local_98 = local_90 * local_a0 * 4 + 0xf & 0xfffffffffffffff0;
  local_28 = param_1;
  local_20 = param_2;
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar4 = (long)&local_b0 - local_98;
  local_38 = local_90;
  local_70 = local_28 & 0xffffffff;
  local_80 = local_28 & 0xffffffff;
  local_78 = local_70 * local_80 * 4 + 0xf & 0xfffffffffffffff0;
  local_88 = lVar4;
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar4 = lVar4 - local_78;
  local_48 = local_70;
  for (local_54 = 0; local_54 < (int)local_28; local_54 = local_54 + 1) {
    for (local_58 = 0; local_58 < (int)local_28; local_58 = local_58 + 1) {
      *(undefined4 *)(local_88 + (long)local_54 * local_a0 * 4 + (long)local_58 * 4) = 0x7fff;
      if (local_54 == local_58) {
        local_a4 = 0;
      }
      else {
        local_a4 = local_58 + 1;
      }
      *(int *)(lVar4 + (long)local_54 * local_80 * 4 + (long)local_58 * 4) = local_a4;
    }
  }
  for (local_54 = 0; local_54 < local_28._4_4_; local_54 = local_54 + 1) {
    *(undefined4 *)
     (local_88 + (long)(*(int *)(local_20 + (long)local_54 * 0xc) + -1) * local_a0 * 4 +
     (long)(*(int *)(local_20 + (long)local_54 * 0xc + 4) + -1) * 4) =
         *(undefined4 *)(local_20 + (long)local_54 * 0xc + 8);
  }
  for (local_54 = 0; local_54 < (int)local_28; local_54 = local_54 + 1) {
    for (local_58 = 0; local_58 < (int)local_28; local_58 = local_58 + 1) {
      for (local_5c = 0; (int)local_5c < (int)local_28; local_5c = local_5c + 1) {
        if (*(int *)(local_88 + (long)local_58 * local_a0 * 4 + (long)local_54 * 4) +
            *(int *)(local_88 + (long)local_54 * local_a0 * 4 + (long)(int)local_5c * 4) <
            *(int *)(local_88 + (long)local_58 * local_a0 * 4 + (long)(int)local_5c * 4)) {
          *(int *)(local_88 + (long)local_58 * local_a0 * 4 + (long)(int)local_5c * 4) =
               *(int *)(local_88 + (long)local_58 * local_a0 * 4 + (long)local_54 * 4) +
               *(int *)(local_88 + (long)local_54 * local_a0 * 4 + (long)(int)local_5c * 4);
          *(undefined4 *)(lVar4 + (long)local_58 * local_80 * 4 + (long)(int)local_5c * 4) =
               *(undefined4 *)(lVar4 + (long)local_58 * local_80 * 4 + (long)local_54 * 4);
        }
      }
    }
  }
  local_68 = lVar4;
  iVar5 = _printf("pair    dist   path");
  for (local_54 = 0; local_54 < (int)local_28; local_54 = local_54 + 1) {
    for (local_58 = 0; local_58 < (int)local_28; local_58 = local_58 + 1) {
      if (local_54 != local_58) {
        uVar1 = local_58 + 1;
        uVar3 = *(uint *)(local_88 + (long)local_54 * local_a0 * 4 + (long)local_58 * 4);
        uVar2 = local_54 + 1;
        *(ulong *)(lVar4 + -0x20) = (ulong)(local_54 + 1);
        *(ulong *)(lVar4 + -0x18) = (ulong)uVar1;
        *(ulong *)(lVar4 + -0x10) = (ulong)uVar3;
        *(ulong *)(lVar4 + -8) = (ulong)uVar2;
        _printf("\n%d -> %d %3d %5d");
        local_5c = local_54 + 1;
        do {
          local_5c = *(uint *)(local_68 + (long)(int)(local_5c - 1) * local_80 * 4 +
                              (long)local_58 * 4);
          *(ulong *)(lVar4 + -0x10) = (ulong)local_5c;
          iVar5 = _printf("->%d");
        } while (local_5c != local_58 + 1U);
      }
    }
  }
  local_b0 = local_30;
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar5);
}



undefined8 entry(int param_1,long param_2)

{
  undefined auVar1 [16];
  
  if (param_1 == 2) {
    auVar1 = _loadGraph(*(undefined8 *)(param_2 + 8));
    _floydWarshall(auVar1._0_8_,auVar1._8_8_);
  }
  else {
    _printf("Usage : %s <file containing graph data>");
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}


