#include "best-shuffle-1.h"



void _best_shuffle(char *param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  size_t sVar5;
  size_t sVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong local_8d0;
  ulong local_8c8;
  long local_8b0;
  ulong local_8a8;
  ulong local_890;
  ulong local_888;
  ulong local_880;
  ulong local_870;
  long local_868;
  ulong local_860;
  ulong local_848;
  ulong local_840;
  ulong auStack_820 [255];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004020;
  sVar5 = _strlen(param_1);
  if (sVar5 != 0) {
    sVar6 = _strlen(param_2);
    if (sVar5 != sVar6) {
                    // WARNING: Subroutine does not return
      ___assert_rtn("best_shuffle","best-shuffle-1.c",0x10,"len == strlen(result)");
    }
    _bzero(auStack_820,0x3fc);
    local_840 = 0;
    for (local_848 = 0; local_848 < sVar5; local_848 = local_848 + 1) {
      auStack_820[(byte)param_1[local_848]] = auStack_820[(byte)param_1[local_848]] + 1;
      if (local_840 < auStack_820[(byte)param_1[local_848]]) {
        local_840 = auStack_820[(byte)param_1[local_848]];
      }
    }
    if (local_840 == 0 || sVar5 < local_840) {
                    // WARNING: Subroutine does not return
      ___assert_rtn("best_shuffle","best-shuffle-1.c",0x1d,"fmax > 0 && fmax <= len");
    }
    pvVar7 = _malloc(sVar5 << 3);
    if (pvVar7 == (void *)0x0) {
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    local_868 = 0;
    for (local_860 = 0; local_860 < 0xff; local_860 = local_860 + 1) {
      if (auStack_820[local_860] != 0) {
        for (local_870 = 0; local_870 < sVar5; local_870 = local_870 + 1) {
          if (local_860 == (byte)param_1[local_870]) {
            *(ulong *)((long)pvVar7 + local_868 * 8) = local_870;
            local_868 = local_868 + 1;
          }
        }
      }
    }
    pvVar8 = _malloc(sVar5 << 3);
    if (pvVar8 == (void *)0x0) {
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    local_888 = 0;
    local_890 = 0;
    for (local_880 = 0; local_880 < sVar5; local_880 = local_880 + 1) {
      *(undefined8 *)((long)pvVar8 + local_880 * 8) = *(undefined8 *)((long)pvVar7 + local_888 * 8);
      local_888 = local_888 + local_840;
      if (sVar5 <= local_888) {
        local_890 = local_890 + 1;
        local_888 = local_890;
      }
    }
    uVar3 = 0;
    if (local_840 != 0) {
      uVar3 = (sVar5 - 1) / local_840;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == 0 || sVar5 < uVar3) {
                    // WARNING: Subroutine does not return
      ___assert_rtn("best_shuffle","best-shuffle-1.c",0x3a,"grp > 0 && grp <= len");
    }
    uVar4 = 0;
    if (local_840 != 0) {
      uVar4 = (sVar5 - 1) / local_840;
    }
    lVar2 = (sVar5 - 1) - uVar4 * local_840;
    uVar4 = lVar2 + 1;
    if (lVar2 == -1 || sVar5 < uVar4) {
                    // WARNING: Subroutine does not return
      ___assert_rtn("best_shuffle","best-shuffle-1.c",0x3e,"lng > 0 && lng <= len");
    }
    local_8b0 = 0;
    for (local_8a8 = 0; local_8a8 < local_840; local_8a8 = local_8a8 + 1) {
      uVar9 = *(undefined8 *)((long)pvVar8 + local_8b0 * 8);
      uVar1 = uVar3 - (long)(int)(uint)(uVar4 <= local_8a8);
      for (local_8c8 = 1; local_8c8 < uVar1; local_8c8 = local_8c8 + 1) {
        *(undefined8 *)((long)pvVar7 + (local_8b0 + local_8c8 + -1) * 8) =
             *(undefined8 *)((long)pvVar8 + (local_8b0 + local_8c8) * 8);
      }
      *(undefined8 *)((long)pvVar7 + (local_8b0 + uVar1 + -1) * 8) = uVar9;
      local_8b0 = local_8b0 + uVar1;
    }
    param_2[sVar5] = '\0';
    for (local_8d0 = 0; local_8d0 < sVar5; local_8d0 = local_8d0 + 1) {
      param_2[*(long *)((long)pvVar8 + local_8d0 * 8)] =
           param_1[*(long *)((long)pvVar7 + local_8d0 * 8)];
    }
    _free(pvVar7);
    _free(pvVar8);
  }
  if (*(long *)PTR____stack_chk_guard_100004020 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



int _display(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  ulong local_38;
  
  sVar2 = _strlen(param_1);
  sVar3 = _strlen(param_2);
  if (sVar2 != sVar3) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("display","best-shuffle-1.c",0x55,"len == strlen(txt2)");
  }
  for (local_38 = 0; local_38 < sVar2; local_38 = local_38 + 1) {
  }
  iVar1 = _printf("%s, %s, (%u)\n");
  return iVar1;
}



undefined8 entry(void)

{
  undefined *puVar1;
  size_t sVar2;
  long lVar3;
  undefined auStack_b0 [8];
  ulong local_a8;
  undefined8 *local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  ulong local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 auStack_60 [9];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004020;
  local_64 = 0;
  _memcpy(auStack_60,&PTR_s_abracadabra_100004060,0x48);
  local_70 = 9;
  puVar1 = auStack_b0;
  for (local_78 = 0; local_78 < 9; local_78 = local_78 + 1) {
    local_a0 = auStack_60;
    sVar2 = _strlen((char *)local_a0[local_78]);
    lVar3 = sVar2 + 1;
    local_a8 = sVar2 + 0x10 & 0xfffffffffffffff0;
    local_88 = puVar1;
    local_80 = lVar3;
    (*(code *)PTR____chkstk_darwin_100004008)();
    local_98 = (long)puVar1 - local_a8;
    local_90 = lVar3;
    ___memset_chk(local_98,0xff);
    *(undefined *)(local_98 + local_80 + -1) = 0;
    _best_shuffle(local_a0[local_78]);
    _display(local_a0[local_78],local_98);
    puVar1 = local_88;
  }
  if (*(long *)PTR____stack_chk_guard_100004020 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004010)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004030)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004040)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004048)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004058)();
  return sVar1;
}


