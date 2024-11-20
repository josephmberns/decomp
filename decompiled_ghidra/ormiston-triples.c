#include "ormiston-triples.h"



undefined * _sieve(long param_1)

{
  size_t sVar1;
  undefined *puVar2;
  long local_28;
  ulong local_20;
  
  sVar1 = param_1 + 1;
  puVar2 = (undefined *)_calloc(sVar1,1);
  *puVar2 = 1;
  puVar2[1] = 1;
  for (local_20 = 4; local_20 < sVar1; local_20 = local_20 + 2) {
    puVar2[local_20] = 1;
  }
  local_28 = 3;
  while (local_20 = local_28 * local_28, local_20 < sVar1) {
    for (; local_20 < sVar1; local_20 = local_20 + local_28 * 2) {
      puVar2[local_20] = 1;
    }
    do {
      local_28 = local_28 + 2;
    } while ((puVar2[local_28] & 1) != 0);
  }
  return puVar2;
}



void _getDigits(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  ulong local_8;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 1;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    for (local_8 = param_2; local_8 != 0; local_8 = local_8 / 10) {
      iVar1 = *(int *)((long)param_1 + 0x14);
      *(int *)((long)param_1 + 0x14) = iVar1 + 1;
      *(char *)((long)param_1 + (long)iVar1) = (char)local_8 + (char)(local_8 / 10) * -10;
    }
  }
  return;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_180;
  ulong local_178;
  ulong local_170;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  int aiStack_110 [2];
  ulong auStack_108 [25];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_180 = 0;
  pvVar2 = (void *)_sieve();
  for (local_170 = 0; local_170 < 10000000000; local_170 = local_170 + 1) {
    if ((*(byte *)((long)pvVar2 + local_170) & 1) == 0) {
      local_180 = local_180 + 1;
    }
  }
  pvVar3 = _malloc(local_180 << 3);
  local_178 = 0;
  for (local_170 = 0; local_170 < 10000000000; local_170 = local_170 + 1) {
    if ((*(byte *)((long)pvVar2 + local_170) & 1) == 0) {
      *(ulong *)((long)pvVar3 + local_178 * 8) = local_170;
      local_178 = local_178 + 1;
    }
  }
  _free(pvVar2);
  local_178 = 1000000000;
  for (local_170 = 0; local_170 < local_180 - 2U; local_170 = local_170 + 1) {
    uVar4 = *(ulong *)((long)pvVar3 + local_170 * 8);
    lVar5 = *(long *)((long)pvVar3 + (local_170 + 1) * 8);
    lVar6 = *(long *)((long)pvVar3 + (local_170 + 2) * 8);
    if (((lVar5 - uVar4) % 0x12 == 0) && ((ulong)(lVar6 - lVar5) % 0x12 == 0)) {
      local_1a0 = 1;
      _getDigits(&local_128,uVar4);
      uStack_38 = uStack_120;
      local_40 = local_128;
      local_30 = local_118;
      uVar1 = local_30;
      for (local_1b4 = 0; local_30._4_4_ = (int)((ulong)local_118 >> 0x20),
          local_1b4 < local_30._4_4_; local_1b4 = local_1b4 + 1) {
        local_1a0 = local_1a0 *
                    *(long *)((long)pvVar3 + (long)*(char *)((long)&local_40 + (long)local_1b4) * 8)
        ;
      }
      local_1a8 = 1;
      local_30 = uVar1;
      _getDigits(&local_140,lVar5);
      uStack_38 = uStack_138;
      local_40 = local_140;
      local_30 = local_130;
      uVar1 = local_30;
      for (local_1b4 = 0; local_30._4_4_ = (int)((ulong)local_130 >> 0x20),
          local_1b4 < local_30._4_4_; local_1b4 = local_1b4 + 1) {
        local_1a8 = local_1a8 *
                    *(long *)((long)pvVar3 + (long)*(char *)((long)&local_40 + (long)local_1b4) * 8)
        ;
      }
      local_30 = uVar1;
      if (local_1a0 == local_1a8) {
        local_1b0 = 1;
        _getDigits(&local_158,lVar6);
        uStack_38 = uStack_150;
        local_40 = local_158;
        local_30 = local_148;
        uVar1 = local_30;
        for (local_1b4 = 0; local_30._4_4_ = (int)((ulong)local_148 >> 0x20),
            local_1b4 < local_30._4_4_; local_1b4 = local_1b4 + 1) {
          local_1b0 = local_1b0 *
                      *(long *)((long)pvVar3 +
                               (long)*(char *)((long)&local_40 + (long)local_1b4) * 8);
        }
        local_30 = uVar1;
        if (local_1a8 == local_1b0) {
          if (local_1b8 < 0x19) {
            auStack_108[local_1b8] = uVar4;
          }
          if (local_178 <= uVar4) {
            lVar5 = (long)local_1bc;
            local_1bc = local_1bc + 1;
            aiStack_110[lVar5] = local_1b8;
            local_178 = local_178 * 10;
          }
          local_1b8 = local_1b8 + 1;
        }
      }
    }
  }
  aiStack_110[local_1bc] = local_1b8;
  _printf("Smallest members of first 25 Ormiston triples:\n");
  _setlocale(4,"");
  for (local_170 = 0; local_170 < 0x19; local_170 = local_170 + 1) {
    _printf("%\'10ld  ");
    if ((local_170 + 1) % 5 == 0) {
      _printf("\n");
    }
  }
  _printf("\n");
  for (local_170 = 0; local_170 < 2; local_170 = local_170 + 1) {
    _printf("%\'d Ormiston triples before %\'ld\n");
    _printf("\n");
  }
  _free(pvVar3);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004030)();
  return;
}


