#include "huffman-coding-1.h"



void * _create_huffman_codes(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  int local_1864;
  uint local_1860;
  uint local_185c;
  int local_1850;
  int local_184c;
  void *local_1830;
  int aiStack_1828 [512];
  long alStack_1028 [256];
  undefined auStack_828 [2048];
  long local_28;
  
  pvVar3 = (void *)(*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_1850 = 0x100;
  _memcpy(alStack_1028,pvVar3,0x800);
  _bzero(auStack_828,0x800);
  lVar4 = FUN_100003984(0x200,alStack_1028);
  if (lVar4 == 0) {
    local_1830 = (void *)0x0;
  }
  else {
    for (local_184c = 0; local_184c < 0x100; local_184c = local_184c + 1) {
      if (0 < alStack_1028[local_184c]) {
        FUN_1000039f4(lVar4,local_184c);
      }
    }
    while (1 < *(int *)(lVar4 + 8)) {
      iVar1 = FUN_100003ab4(lVar4);
      iVar2 = FUN_100003ab4(lVar4);
      alStack_1028[local_1850] = alStack_1028[iVar1] + alStack_1028[iVar2];
      FUN_1000039f4(lVar4,local_1850);
      aiStack_1828[iVar1] = local_1850;
      aiStack_1828[iVar2] = -local_1850;
      local_1850 = local_1850 + 1;
    }
    iVar1 = FUN_100003ab4(lVar4);
    aiStack_1828[iVar1] = iVar1;
    FUN_100003b18(lVar4);
    local_1830 = _malloc(0x800);
    for (local_184c = 0; local_184c < 0x100; local_184c = local_184c + 1) {
      local_185c = 0;
      local_1860 = 0;
      if (alStack_1028[local_184c] == 0) {
        *(undefined8 *)((long)local_1830 + (long)local_184c * 8) = 0;
      }
      else {
        local_1864 = local_184c;
        while (iVar1 = _abs(aiStack_1828[local_1864]), iVar1 != local_1864) {
          local_185c = local_185c |
                       (uint)(-1 < aiStack_1828[local_1864]) << (ulong)(local_1860 & 0x1f);
          local_1864 = _abs(aiStack_1828[local_1864]);
          local_1860 = local_1860 + 1;
        }
        pvVar3 = _malloc(8);
        *(void **)((long)local_1830 + (long)local_184c * 8) = pvVar3;
        **(uint **)((long)local_1830 + (long)local_184c * 8) = local_1860;
        *(uint *)(*(long *)((long)local_1830 + (long)local_184c * 8) + 4) = local_185c;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_1830;
}



undefined8 * FUN_100003984(int param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)_malloc(0x20);
  pvVar2 = _malloc((long)param_1 * 4);
  *puVar1 = pvVar2;
  *(int *)(puVar1 + 2) = param_1;
  *(int *)((long)puVar1 + 0xc) = param_1;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = param_2;
  return puVar1;
}



void FUN_1000039f4(long *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  if (*(int *)((long)param_1 + 0xc) < *(int *)(param_1 + 1) + 1) {
    pvVar1 = _realloc((void *)*param_1,(long)(*(int *)((long)param_1 + 0xc) + *(int *)(param_1 + 2))
                     );
    *param_1 = (long)pvVar1;
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + *(int *)(param_1 + 2);
  }
  *(undefined4 *)(*param_1 + (long)*(int *)(param_1 + 1) * 4) = param_2;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  FUN_100003db4(param_1);
  return;
}



undefined4 FUN_100003ab4(long *param_1)

{
  undefined4 local_4;
  
  if (*(int *)(param_1 + 1) < 1) {
    local_4 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
    local_4 = *(undefined4 *)(*param_1 + (long)*(int *)(param_1 + 1) * 4);
  }
  return local_4;
}



void FUN_100003b18(undefined8 *param_1)

{
  _free((void *)*param_1);
  _free(param_1);
  return;
}



void _free_huffman_codes(void *param_1)

{
  undefined4 local_1c;
  
  for (local_1c = 0; local_1c < 0x100; local_1c = local_1c + 1) {
    _free(*(void **)((long)param_1 + (long)local_1c * 8));
  }
  _free(param_1);
  return;
}



void _inttobits(int param_1,int param_2,long param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined *)(param_3 + param_2) = 0;
  local_4 = param_1;
  for (local_8 = param_2; 0 < local_8; local_8 = local_8 + -1) {
    *(char *)(param_3 + (local_8 + -1)) = (char)local_4 + (char)(local_4 / 2) * -2 + '0';
    local_4 = local_4 >> 1;
  }
  return;
}



undefined8 entry(void)

{
  long lVar1;
  char *local_8b0;
  int local_8a4;
  long alStack_890 [269];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _bzero(alStack_890,0x800);
  local_8b0 = _test;
  while (*local_8b0 != '\0') {
    alStack_890[*local_8b0] = alStack_890[*local_8b0] + 1;
    local_8b0 = local_8b0 + 1;
  }
  lVar1 = _create_huffman_codes(alStack_890);
  for (local_8a4 = 0; local_8a4 < 0x100; local_8a4 = local_8a4 + 1) {
    if (*(long *)(lVar1 + (long)local_8a4 * 8) != 0) {
      _inttobits(*(undefined4 *)(*(long *)(lVar1 + (long)local_8a4 * 8) + 4),
                 **(undefined4 **)(lVar1 + (long)local_8a4 * 8));
      _printf("%c (%d) %s\n");
    }
  }
  _free_huffman_codes(lVar1);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void FUN_100003db4(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  int local_20;
  int local_10;
  int local_c;
  
  local_c = 1;
  local_10 = 2;
  lVar2 = *param_1;
  while (local_c < *(int *)(param_1 + 1)) {
    if (*(long *)(param_1[3] + (long)*(int *)(lVar2 + (long)(local_c + -1) * 4) * 8) <
        *(long *)(param_1[3] + (long)*(int *)(lVar2 + (long)local_c * 4) * 8)) {
      uVar1 = *(undefined4 *)(lVar2 + (long)(local_c + -1) * 4);
      *(undefined4 *)(lVar2 + (long)(local_c + -1) * 4) = *(undefined4 *)(lVar2 + (long)local_c * 4)
      ;
      *(undefined4 *)(lVar2 + (long)local_c * 4) = uVar1;
      local_20 = local_c + -1;
      if (local_20 == 0) {
        local_20 = local_10;
        local_10 = local_10 + 1;
      }
      local_c = local_20;
    }
    else {
      local_c = local_10;
      local_10 = local_10 + 1;
    }
  }
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _abs(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__abs_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004048)();
  return pvVar1;
}


