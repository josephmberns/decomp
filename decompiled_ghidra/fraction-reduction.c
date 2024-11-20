#include "fraction-reduction.h"



undefined  [16] _make(size_t param_1)

{
  undefined auVar1 [16];
  void *pvVar2;
  
  pvVar2 = _calloc(param_1,4);
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = pvVar2;
  return auVar1;
}



void _destroy(long *param_1)

{
  if (*param_1 != 0) {
    _free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



void _zeroFill(undefined8 param_1,long param_2)

{
  ___memset_chk(param_1,0,param_2 << 2,0xffffffffffffffff);
  return;
}



undefined4 _indexOf(int param_1,long param_2,ulong param_3)

{
  ulong local_28;
  
  local_28 = 0;
  while( true ) {
    if (param_3 <= local_28) {
      return 0xffffffff;
    }
    if (*(int *)(param_2 + local_28 * 4) == param_1) break;
    local_28 = local_28 + 1;
  }
  return (int)local_28;
}



undefined _getDigits(int param_1,int param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int local_30;
  int local_2c;
  
  local_30 = param_2;
  local_2c = param_1;
  while( true ) {
    if (local_2c < 1) {
      return 1;
    }
    iVar1 = local_2c % 10;
    if ((iVar1 == 0) || (iVar2 = _indexOf(iVar1,param_3,param_4), -1 < iVar2)) break;
    local_30 = local_30 + -1;
    *(int *)(param_3 + (long)local_30 * 4) = iVar1;
    local_2c = local_2c / 10;
  }
  return 0;
}



int _removeDigit(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong local_30;
  int local_28;
  int local_24;
  
  local_24 = 0;
  local_28 = *(int *)(&DAT_100003ef8 + (param_3 - 2) * 4);
  for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 1) {
    if (local_30 != param_4) {
      local_24 = local_24 + *(int *)(param_1 + local_30 * 4) * local_28;
      local_28 = local_28 / 10;
    }
  }
  return local_24;
}



undefined8 entry(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined auVar7 [16];
  int local_198;
  ulong local_180;
  int local_170;
  int local_16c;
  undefined local_168 [16];
  undefined local_158 [16];
  ulong local_148;
  ulong local_140;
  undefined4 local_134;
  int aiStack_130 [50];
  int local_68 [6];
  int local_50 [10];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_134 = 0;
  local_50[2] = 0x7b;
  local_50[3] = 0x3da;
  local_50[0] = 0xc;
  local_50[1] = 0x61;
  local_50[6] = 0x3039;
  local_50[7] = 0x181cc;
  local_50[4] = 0x4d2;
  local_50[5] = 0x2693;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  pvVar6 = _memset(aiStack_130,0,200);
  local_140 = 4;
  for (local_148 = 0; local_148 < local_140; local_148 = local_148 + 1) {
    auVar7 = _make(local_148 + 2);
    local_158 = auVar7;
    auVar7 = _make(local_148 + 2);
    local_16c = local_50[local_148 * 2];
    while( true ) {
      local_168 = auVar7;
      if (local_50[local_148 * 2 + 1] < local_16c) break;
      _zeroFill(local_158._0_8_,local_158._8_8_);
      bVar2 = _getDigits(local_16c,local_148 + 2,local_158._0_8_,local_158._8_8_);
      local_170 = local_16c;
      auVar7 = local_168;
      if ((bVar2 & 1) != 0) {
        while( true ) {
          local_170 = local_170 + 1;
          auVar7 = local_168;
          if (local_50[local_148 * 2 + 1] + 1 < local_170) break;
          _zeroFill(local_168._0_8_,local_168._8_8_);
          bVar2 = _getDigits(local_170,local_148 + 2,local_168._0_8_,local_168._8_8_);
          if ((bVar2 & 1) != 0) {
            local_180 = 0;
            while( true ) {
              if ((ulong)local_158._8_8_ <= local_180) break;
              iVar1 = *(int *)(local_158._0_8_ + local_180 * 4);
              iVar3 = _indexOf(iVar1,local_168._0_8_,local_168._8_8_);
              if (-1 < iVar3) {
                iVar4 = _removeDigit(local_158._0_8_,local_158._8_8_,local_148 + 2,local_180);
                iVar3 = _removeDigit(local_168._0_8_,local_168._8_8_,local_148 + 2,(long)iVar3);
                if ((double)(long)local_16c / (double)(long)local_170 ==
                    (double)(long)iVar4 / (double)(long)iVar3) {
                  local_68[local_148] = local_68[local_148] + 1;
                  aiStack_130[local_148 * 10 + (long)iVar1] =
                       aiStack_130[local_148 * 10 + (long)iVar1] + 1;
                  if (local_68[local_148] < 0xd) {
                    _printf("%d/%d = %d/%d by omitting %d\'s\n");
                  }
                }
              }
              local_180 = local_180 + 1;
            }
          }
        }
      }
      local_16c = local_16c + 1;
    }
    _printf("\n");
    _destroy(local_158);
    pvVar6 = (void *)_destroy(local_168);
  }
  for (local_148 = 2; local_148 < 6; local_148 = local_148 + 1) {
    _printf("There are %d %d-digit fractions of which:\n");
    for (local_198 = 1; local_198 < 10; local_198 = local_198 + 1) {
      if (aiStack_130[(local_148 - 2) * 10 + (long)local_198] != 0) {
        _printf("%6d have %d\'s omitted\n");
      }
    }
    uVar5 = _printf("\n");
    pvVar6 = (void *)(ulong)uVar5;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(pvVar6);
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004028)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


