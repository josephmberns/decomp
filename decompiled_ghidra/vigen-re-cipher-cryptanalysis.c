#include "vigen-re-cipher-cryptanalysis.h"



int _best_match(long param_1,long param_2)

{
  double dVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0.0;
  local_30 = 1e+100;
  local_3c = 0;
  for (local_34 = 0; local_34 < 0x1a; local_34 = local_34 + 1) {
    local_18 = local_18 + *(double *)(param_1 + (long)local_34 * 8);
  }
  for (local_38 = 0; local_38 < 0x1a; local_38 = local_38 + 1) {
    local_20 = 0.0;
    for (local_34 = 0; local_34 < 0x1a; local_34 = local_34 + 1) {
      dVar1 = *(double *)(param_1 + (long)((local_34 + local_38) % 0x1a) * 8) / local_18 -
              *(double *)(param_2 + (long)local_34 * 8);
      local_20 = local_20 + (dVar1 * dVar1) / *(double *)(param_2 + (long)local_34 * 8);
    }
    if (local_20 < local_30) {
      local_30 = local_20;
      local_3c = local_38;
    }
  }
  return local_3c;
}



undefined  [16] _freq_every_nth(long param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  double dVar2;
  undefined auVar3 [16];
  int local_200;
  int local_1fc;
  double local_1f8;
  double local_1e8;
  double adStack_1c8 [26];
  double adStack_f8 [26];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _memset(adStack_1c8,0,0xd0);
  for (local_200 = 0; local_200 < param_3; local_200 = local_200 + 1) {
    for (local_1fc = 0; local_1fc < 0x1a; local_1fc = local_1fc + 1) {
      adStack_f8[local_1fc] = 0.0;
    }
    for (local_1fc = local_200; local_1fc < param_2; local_1fc = local_1fc + param_3) {
      adStack_f8[*(int *)(param_1 + (long)local_1fc * 4)] =
           adStack_f8[*(int *)(param_1 + (long)local_1fc * 4)] + 1.0;
    }
    iVar1 = _best_match(adStack_f8,&_freq);
    *(char *)(param_4 + local_200) = (char)iVar1;
    *(char *)(param_4 + local_200) = *(char *)(param_4 + local_200) + 'A';
    for (local_1fc = 0; local_1fc < 0x1a; local_1fc = local_1fc + 1) {
      adStack_1c8[local_1fc] = adStack_1c8[local_1fc] + adStack_f8[(local_1fc + iVar1) % 0x1a];
    }
  }
  local_1e8 = 0.0;
  for (local_1fc = 0; local_1fc < 0x1a; local_1fc = local_1fc + 1) {
    local_1e8 = local_1e8 + adStack_1c8[local_1fc];
  }
  local_1f8 = 0.0;
  for (local_1fc = 0; local_1fc < 0x1a; local_1fc = local_1fc + 1) {
    dVar2 = adStack_1c8[local_1fc] / local_1e8 - *(double *)(&_freq + (long)local_1fc * 8);
    local_1f8 = local_1f8 + (dVar2 * dVar2) / *(double *)(&_freq + (long)local_1fc * 8);
  }
  *(undefined *)(param_4 + param_3) = 0;
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_1f8;
    return auVar3;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined4 entry(void)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  double dStack_f0;
  ulong auStack_e8 [3];
  undefined auStack_d0 [12];
  undefined4 local_c4;
  undefined *local_c0;
  ulong local_b8;
  undefined *local_b0;
  double local_a8;
  double local_a0;
  uint local_98;
  int local_94;
  ulong local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined auStack_7c [100];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_80 = 0;
  sVar4 = _strlen(_encoded);
  local_b8 = sVar4 * 4 + 0xf & 0xfffffffffffffff0;
  local_88 = auStack_d0;
  uVar5 = (*(code *)PTR____chkstk_darwin_100004000)();
  lVar1 = -local_b8;
  local_b0 = auStack_d0 + lVar1;
  local_94 = 0;
  local_a8 = 1e+100;
  local_90 = uVar5;
  for (local_98 = 0; _encoded[(int)local_98] != '\0'; local_98 = local_98 + 1) {
    uVar3 = _isupper((int)(char)_encoded[(int)local_98]);
    uVar5 = (ulong)uVar3;
    if (uVar3 != 0) {
      lVar6 = (long)local_94;
      local_94 = local_94 + 1;
      *(int *)(local_b0 + lVar6 * 4) = (char)_encoded[(int)local_98] + -0x41;
    }
  }
  for (local_98 = 1; (int)local_98 < 0x1e; local_98 = local_98 + 1) {
    local_c0 = auStack_7c;
    local_a0 = (double)_freq_every_nth(local_b0,local_94,local_98);
    puVar2 = local_c0;
    uVar5 = (ulong)local_98;
    *(double *)((long)&dStack_f0 + lVar1) = local_a0;
    *(ulong *)((long)auStack_e8 + lVar1) = uVar5;
    *(undefined **)((long)auStack_e8 + lVar1 + 8) = puVar2;
    _printf("%f, key length: %2d, %s");
    if (local_a0 < local_a8) {
      local_a8 = local_a0;
      _printf(" <--- best so far");
    }
    uVar3 = _printf("\n");
    uVar5 = (ulong)uVar3;
  }
  local_80 = 0;
  local_c4 = 0;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar5);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003a8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isupper(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003a98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isupper_100004018)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003aa4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004020)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ab0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003abc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}


