#include "colorful-numbers.h"



undefined _colorful(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_110;
  int local_10c;
  undefined local_101;
  int aiStack_100 [36];
  int local_70 [18];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  if ((param_1 < 0) || (0x5e30a78 < param_1)) {
    local_101 = 0;
  }
  else {
    _memset(local_70 + 8,0,0x28);
    local_70[2] = 0;
    local_70[3] = 0;
    local_70[0] = 0;
    local_70[1] = 0;
    local_70[6] = 0;
    local_70[7] = 0;
    local_70[4] = 0;
    local_70[5] = 0;
    local_10c = 0;
    for (local_110 = param_1; 0 < local_110; local_110 = local_110 / 10) {
      iVar2 = local_110 % 10;
      if ((9 < param_1) && ((iVar2 == 0 || (iVar2 == 1)))) {
        local_101 = 0;
        goto LAB_100003a80;
      }
      iVar1 = local_70[(long)iVar2 + 8] + 1;
      local_70[(long)iVar2 + 8] = iVar1;
      if (1 < iVar1) {
        local_101 = 0;
        goto LAB_100003a80;
      }
      lVar3 = (long)local_10c;
      local_10c = local_10c + 1;
      local_70[lVar3] = iVar2;
    }
    _memset(aiStack_100,0,0x90);
    local_11c = 0;
    for (local_118 = 0; local_118 < local_10c; local_118 = local_118 + 1) {
      local_124 = 1;
      for (local_120 = local_118; local_120 < local_10c; local_120 = local_120 + 1) {
        local_124 = local_124 * local_70[local_120];
        for (local_128 = 0; local_128 < local_11c; local_128 = local_128 + 1) {
          if (aiStack_100[local_128] == local_124) {
            local_101 = 0;
            goto LAB_100003a80;
          }
        }
        lVar3 = (long)local_11c;
        local_11c = local_11c + 1;
        aiStack_100[lVar3] = local_124;
      }
    }
    local_101 = 1;
  }
LAB_100003a80:
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return local_101;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _count_colorful(int param_1,int param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined4 uVar3;
  int local_24;
  int local_20;
  
  if (param_1 == 0) {
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      *(undefined *)((long)local_20 + 0x100008000) = 1;
      uVar3 = 9;
      if (1 < local_20) {
        uVar3 = 1;
      }
      _count_colorful(uVar3,local_20,1);
      *(undefined *)((long)local_20 + 0x100008000) = 0;
    }
  }
  else {
    uVar2 = _colorful(param_2);
    if (((uVar2 & 1) != 0) &&
       (piVar1 = (int *)((long)(param_3 + -1) * 4 + 0x10000800c), *piVar1 = *piVar1 + 1,
       _DAT_10000802c < param_2)) {
      _DAT_10000802c = param_2;
    }
    if (param_1 < 9) {
      for (local_24 = 2; local_24 < 10; local_24 = local_24 + 1) {
        if ((*(byte *)((long)local_24 + 0x100008000) & 1) == 0) {
          *(undefined *)((long)local_24 + 0x100008000) = 1;
          _count_colorful(param_1 + 1,param_2 * 10 + local_24,param_3 + 1);
          *(undefined *)((long)local_24 + 0x100008000) = 0;
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  ulong uVar1;
  int local_30;
  int local_24;
  
  _setlocale(0,"");
  _clock();
  _printf("Colorful numbers less than 100:\n");
  for (local_24 = 0; local_24 < 100; local_24 = local_24 + 1) {
    uVar1 = _colorful(local_24);
    if ((uVar1 & 1) != 0) {
      _printf("%2d%c");
    }
  }
  _count_colorful(0,0);
  _printf("\n\nLargest colorful number: %\'d\n");
  _printf("\nCount of colorful numbers by number of digits:\n");
  for (local_30 = 0; local_30 < 8; local_30 = local_30 + 1) {
    _printf("%d   %\'d\n");
  }
  _printf("\nTotal: %\'d\n");
  _clock();
  _printf("\nElapsed time: %f seconds\n");
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

clock_t _clock(void)

{
  clock_t cVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  cVar1 = (*(code *)PTR__clock_100004010)();
  return cVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004018)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004028)();
  return;
}


