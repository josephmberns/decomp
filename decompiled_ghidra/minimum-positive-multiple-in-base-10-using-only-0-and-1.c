#include "minimum-positive-multiple-in-base-10-using-only-0-and-1.h"



undefined  [16] _imax(ulong param_1,long param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined auVar2 [16];
  ulong local_10;
  long lStack_8;
  
  bVar1 = param_1 <= param_3;
  if (param_2 != param_4) {
    bVar1 = param_2 <= param_4;
  }
  local_10 = param_3;
  lStack_8 = param_4;
  if (!bVar1) {
    local_10 = param_1;
    lStack_8 = param_2;
  }
  auVar2._8_8_ = lStack_8;
  auVar2._0_8_ = local_10;
  return auVar2;
}



undefined  [16] _ipow(ulong param_1,long param_2,ulong param_3,long param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  bool bVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (param_3 == 0 && param_4 == 0) {
    uStack_8 = 0;
    local_10 = 1;
  }
  else {
    local_40 = param_1;
    uStack_38 = param_2;
    local_30 = param_3;
    uStack_28 = param_4;
    local_10 = param_1;
    uStack_8 = param_2;
    if (param_3 != 1 || param_4 != 0) {
      while( true ) {
        bVar4 = local_30 < 2;
        if (uStack_28 != 0) {
          bVar4 = uStack_28 < 1;
        }
        if (bVar4) break;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = local_40;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_1;
        uStack_38 = uStack_38 * param_1 + local_40 * param_2 + SUB168(auVar1 * auVar2,8);
        bVar4 = local_30 != 0;
        local_30 = local_30 - 1;
        uStack_28 = uStack_28 + -1 + (ulong)bVar4;
        local_40 = local_40 * param_1;
      }
      uStack_8 = uStack_38;
      local_10 = local_40;
    }
  }
  auVar3._8_8_ = uStack_8;
  auVar3._0_8_ = local_10;
  return auVar3;
}



undefined  [16] _imod(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  auVar2 = ___modti3(param_1,param_2,param_3,param_4);
  if (auVar2._8_8_ < 0) {
    auVar2 = auVar2 + auVar1;
  }
  return auVar2;
}



undefined _valid(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined auVar2 [16];
  long local_30;
  long local_28;
  undefined local_11;
  
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  if (param_2 < 0) {
    local_11 = 0;
  }
  else {
    while( true ) {
      local_28 = auVar2._8_8_;
      local_30 = auVar2._0_8_;
      if ((long)(local_28 - (ulong)(local_30 == 0)) < 0 !=
          (SCARRY8(local_28,-1) != SCARRY8(local_28 + -1,(ulong)(local_30 != 0)))) break;
      iVar1 = ___modti3(local_30,local_28,10,0);
      if (1 < iVar1) {
        return 0;
      }
      auVar2 = ___divti3(local_30,local_28,10,0);
    }
    local_11 = 1;
  }
  return local_11;
}



undefined  [16] _mpm(ulong param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  ulong local_90;
  long lStack_88;
  ulong local_80;
  long lStack_78;
  ulong local_70;
  long lStack_68;
  ulong local_60;
  long lStack_58;
  
  if (param_1 == 1 && param_2 == 0) {
    auVar7 = ZEXT816(1);
  }
  else {
    puVar3 = (undefined8 *)_calloc(param_1 * param_1,0x10);
    puVar3[1] = 0;
    *puVar3 = 1;
    puVar3[3] = 0;
    puVar3[2] = 1;
    lStack_58 = 0;
    local_60 = 0;
    uVar1 = local_60;
    while( true ) {
      local_60 = uVar1;
      uVar1 = local_60 + 1;
      lStack_58 = lStack_58 + (ulong)(0xfffffffffffffffe < local_60);
      auVar7 = _ipow(10,0,uVar1,lStack_58);
      lVar4 = _imod(-auVar7._0_8_,-(auVar7._8_8_ + (ulong)(auVar7._0_8_ != 0)),param_1,param_2);
      if (puVar3[(local_60 * param_1 + lVar4) * 2] == 1 &&
          (puVar3 + (local_60 * param_1 + lVar4) * 2)[1] == 0) break;
      (puVar3 + uVar1 * param_1 * 2)[1] = 0;
      puVar3[uVar1 * param_1 * 2] = 1;
      lStack_68 = 0;
      local_70 = 1;
      while( true ) {
        bVar2 = param_1 <= local_70;
        if (lStack_68 != param_2) {
          bVar2 = param_2 <= lStack_68;
        }
        if (bVar2) break;
        uVar6 = (puVar3 + (local_60 * param_1 + local_70) * 2)[1];
        uVar5 = puVar3[(local_60 * param_1 + local_70) * 2];
        auVar7 = _ipow(10,0,uVar1,lStack_58);
        lVar4 = _imod(local_70 - auVar7._0_8_,
                      lStack_68 - (auVar7._8_8_ + (ulong)(local_70 < auVar7._0_8_)),param_1,param_2)
        ;
        auVar7 = _imax(uVar5,uVar6,puVar3[(local_60 * param_1 + lVar4) * 2],
                       (puVar3 + (local_60 * param_1 + lVar4) * 2)[1]);
        *(undefined (*) [16])(puVar3 + (uVar1 * param_1 + local_70) * 2) = auVar7;
        bVar2 = 0xfffffffffffffffe < local_70;
        local_70 = local_70 + 1;
        lStack_68 = lStack_68 + (ulong)bVar2;
      }
    }
    auVar7 = _ipow(10,0,uVar1,lStack_58);
    auVar8 = _imod(-auVar7._0_8_,-(auVar7._8_8_ + (ulong)(auVar7._0_8_ != 0)),param_1,param_2);
    local_90 = local_60;
    lStack_88 = lStack_58 - (ulong)(uVar1 == 0);
    while( true ) {
      lStack_68 = auVar8._8_8_;
      local_70 = auVar8._0_8_;
      lStack_78 = auVar7._8_8_;
      local_80 = auVar7._0_8_;
      bVar2 = local_90 == 0;
      if (lStack_88 != 0) {
        bVar2 = lStack_88 < 0;
      }
      if (bVar2) break;
      if (puVar3[((local_90 - 1) * param_1 + local_70) * 2] == 0 &&
          (puVar3 + ((local_90 - 1) * param_1 + local_70) * 2)[1] == 0) {
        auVar8 = _ipow(10,0,local_90,lStack_88);
        auVar7._8_8_ = lStack_78 + auVar8._8_8_ + (ulong)(CARRY8(local_80,auVar8._0_8_) != false);
        auVar7._0_8_ = local_80 + auVar8._0_8_;
        auVar8 = _ipow(10,0,local_90,lStack_88);
        auVar8 = _imod(local_70 - auVar8._0_8_,
                       lStack_68 - (auVar8._8_8_ + (ulong)(local_70 < auVar8._0_8_)),param_1,param_2
                      );
      }
      bVar2 = local_90 != 0;
      local_90 = local_90 - 1;
      lStack_88 = lStack_88 + -1 + (ulong)bVar2;
    }
    if (local_70 == 1 && lStack_68 == 0) {
      auVar7._8_8_ = lStack_78 + (ulong)(0xfffffffffffffffe < local_80);
      auVar7._0_8_ = local_80 + 1;
    }
    lStack_78 = auVar7._8_8_;
    local_80 = auVar7._0_8_;
    auVar7 = ___divti3(local_80,lStack_78,param_1,param_2);
  }
  return auVar7;
}



void _print128(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined auVar3 [16];
  int local_74;
  long local_70;
  long local_68;
  char acStack_58 [63];
  undefined uStack_19;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  local_74 = 0x3f;
  local_70 = param_1;
  local_68 = param_2;
  if (param_2 < 0) {
    local_70 = -param_1;
    local_68 = -(param_2 + (ulong)(param_1 != 0));
  }
  auVar3._8_8_ = local_68;
  auVar3._0_8_ = local_70;
  uStack_19 = 0;
  while (local_68 = auVar3._8_8_, local_70 = auVar3._0_8_,
        (long)(local_68 - (ulong)(local_70 == 0)) < 0 ==
        (SCARRY8(local_68,-1) != SCARRY8(local_68 + -1,(ulong)(local_70 != 0)))) {
    cVar1 = ___modti3(local_70,local_68);
    local_74 = local_74 + -1;
    acStack_58[local_74] = cVar1 + '0';
    auVar3 = ___divti3(local_70,local_68,10,0);
  }
  if (param_2 < 0) {
    local_74 = local_74 + -1;
    acStack_58[local_74] = '-';
  }
  iVar2 = _printf(acStack_58 + local_74);
  if (*(long *)PTR____stack_chk_guard_100004018 - local_18 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_100004018 - local_18,iVar2);
}



int _test(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined auVar2 [16];
  int iVar3;
  long lVar4;
  undefined auVar5 [16];
  
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  auVar5 = _mpm(param_1,param_2);
  lVar4 = auVar5._8_8_;
  bVar1 = auVar5._0_8_ == 0;
  if (lVar4 != 0) {
    bVar1 = lVar4 < 1;
  }
  if (bVar1) {
    _print128(param_1,param_2);
    iVar3 = _printf("(no solution)\n");
  }
  else {
    _print128(param_1,param_2);
    _printf(" * ");
    _print128(auVar5._0_8_,lVar4);
    _printf(" = ");
    _print128(SUB168(auVar5 * auVar2,0),SUB168(auVar5 * auVar2,8));
    iVar3 = _printf("\n");
  }
  return iVar3;
}



undefined8 entry(void)

{
  undefined4 local_18;
  
  for (local_18 = 1; local_18 < 0xb; local_18 = local_18 + 1) {
    _test((long)local_18,(long)local_18 >> 0x3f);
  }
  for (local_18 = 0x5f; local_18 < 0x6a; local_18 = local_18 + 1) {
    _test((long)local_18,(long)local_18 >> 0x3f);
  }
  _test(0x129);
  _test(0x240,0);
  _test(0x252,0);
  _test(0x37b,0);
  _test(0x38d,0);
  _test(999,0);
  _test(0x7ce,0);
  _test(0x81f,0);
  _test(0x8cb,0);
  _test(0x8e5,0);
  _test(0x987,0);
  _test(0xbb5,0);
  _test(0x130e,0);
  return 0;
}



void ___divti3(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____divti3_100004000)();
  return;
}



void ___modti3(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____modti3_100004008)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


