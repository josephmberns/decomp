#include "problem-of-apollonius.h"



undefined  [16] _cross(undefined8 param_1,double param_2,double param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = NEON_fnmsub(param_1,param_4,param_2 * param_3);
  auVar1._8_8_ = 0;
  return auVar1;
}



// WARNING: Removing unreachable block (ram,0x000100003160)
// WARNING: Removing unreachable block (ram,0x00010000317c)

undefined  [16] _abs2(double param_1,double param_2)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 * param_1 - param_2 * -param_2;
  auVar1._8_8_ = 0;
  return auVar1;
}



// WARNING: Removing unreachable block (ram,0x000100003890)
// WARNING: Removing unreachable block (ram,0x0001000038b0)
// WARNING: Removing unreachable block (ram,0x0001000034b4)
// WARNING: Removing unreachable block (ram,0x0001000034d4)
// WARNING: Removing unreachable block (ram,0x000100003650)
// WARNING: Removing unreachable block (ram,0x000100003670)
// WARNING: Removing unreachable block (ram,0x0001000036f0)
// WARNING: Removing unreachable block (ram,0x000100003710)

int _apollonius_in(long param_1,long param_2,int param_3,int param_4)

{
  bool bVar1;
  double *pdVar2;
  uint uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar11;
  double dVar12;
  int iVar13;
  double local_370;
  double local_368;
  int local_26c;
  int local_258;
  int local_254;
  int local_1dc;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  int local_1b0;
  int local_1ac;
  int local_178;
  int local_15c;
  int aiStack_c4 [3];
  double adStack_b8 [6];
  double local_88 [12];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_1ac = 0;
  local_1b0 = 0;
  local_1b8 = 1.0;
  local_1c0 = -1.0;
  for (local_1dc = 0; local_178 = param_4, local_1dc < 3; local_1dc = local_1dc + 1) {
    iVar13 = -1;
    if (*(int *)(param_2 + (long)local_1dc * 4) != 0) {
      iVar13 = 1;
    }
    aiStack_c4[local_1dc] = iVar13;
    pdVar2 = (double *)(param_1 + (long)local_1dc * 0x18);
    dVar5 = pdVar2[1];
    local_88[(long)local_1dc * 2] = *pdVar2;
    local_88[(long)local_1dc * 2 + 1] = dVar5;
  }
  do {
    if (local_1b8 <= 1e-20) {
      _printf("found: ");
      if (local_1c8 == 0.0) {
        uVar3 = _printf("line (%6.3f,%6.3f) (%6.3f,%6.3f) (%6.3f,%6.3f)\n");
      }
      else {
        uVar3 = _printf("circle (%6.3f,%6.3f), r = %f\n");
      }
      uVar4 = (ulong)uVar3;
      local_15c = local_1b0 + 1;
LAB_100003bcc:
      if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
        ___stack_chk_fail(uVar4);
      }
      return local_15c;
    }
    dVar11 = local_88[0] - local_88[4];
    dVar5 = local_88[1] - local_88[5];
    dVar12 = local_88[2] - local_88[4];
    dVar6 = local_88[3] - local_88[5];
    local_1b8 = 0.0;
    dVar7 = (double)_cross(dVar11,dVar5,dVar12,dVar6);
    local_1c8 = -dVar7;
    dVar7 = (double)_abs2(dVar11,dVar5);
    dVar8 = (double)_abs2(dVar12,dVar6);
    dVar9 = (double)_abs2(dVar11 - dVar12,dVar5 - dVar6);
    dVar10 = (double)_abs2(dVar11,dVar5);
    uVar4 = _abs2(dVar12,dVar6);
    dVar12 = (dVar10 * dVar12 - extraout_d0 * dVar11) / (local_1c8 * 2.0);
    dVar6 = (dVar10 * dVar6 - extraout_d0 * dVar5) / (local_1c8 * 2.0);
    dVar10 = (dVar12 * 0.0 - dVar6 * 1.0) + local_88[4];
    dVar6 = dVar12 * 1.0 + dVar6 * 0.0 + local_88[5];
    if (((local_1c8 == 0.0) && (param_3 != -1)) && (local_178 == 0)) {
      if (SQRT(dVar7 * dVar8 * dVar9) == 0.0) {
        uVar3 = _printf("Given conditions confused me.\n");
        uVar4 = (ulong)uVar3;
        local_15c = 0;
        goto LAB_100003bcc;
      }
      local_178 = 1;
      uVar4 = _apollonius_in(param_1,param_2,0xffffffff);
      local_1b0 = (int)uVar4;
    }
    for (local_254 = 0; local_254 < 3; local_254 = local_254 + 1) {
      if (local_1c8 == 0.0) {
        dVar7 = dVar11 * 0.0 - dVar5 * 1.0;
        dVar8 = dVar11 * 1.0 + dVar5 * 0.0;
        local_370 = dVar7 * (double)(long)param_3 - dVar8 * 0.0;
        local_368 = dVar7 * 0.0 + dVar8 * (double)(long)param_3;
      }
      else {
        pdVar2 = (double *)(param_1 + (long)local_254 * 0x18);
        local_370 = *pdVar2 - dVar10;
        local_368 = pdVar2[1] - dVar6;
      }
      local_88[(long)local_254 * 2 + 6] = local_370;
      local_88[(long)local_254 * 2 + 7] = local_368;
    }
    for (local_258 = 0; local_258 < 3; local_258 = local_258 + 1) {
      pdVar2 = (double *)(param_1 + (long)local_258 * 0x18);
      dVar5 = *pdVar2;
      dVar6 = pdVar2[1];
      dVar7 = local_88[(long)local_258 * 2 + 6];
      dVar8 = local_88[(long)local_258 * 2 + 7];
      uVar4 = _cabs(local_88[(long)local_258 * 2 + 6],local_88[(long)local_258 * 2 + 7]);
      dVar9 = *(double *)(param_1 + (long)local_258 * 0x18 + 0x10);
      dVar7 = (dVar7 / extraout_d0_00) * dVar9;
      dVar9 = (dVar8 / extraout_d0_00) * dVar9;
      iVar13 = aiStack_c4[local_258];
      adStack_b8[(long)local_258 * 2] = dVar5 + (dVar7 * (double)(long)iVar13 - dVar9 * 0.0);
      adStack_b8[(long)local_258 * 2 + 1] = dVar6 + dVar7 * 0.0 + dVar9 * (double)(long)iVar13;
    }
    for (local_26c = 0; local_26c < 3; local_26c = local_26c + 1) {
      uVar4 = _abs2(adStack_b8[(long)local_26c * 2] - local_88[(long)local_26c * 2],
                    adStack_b8[(long)local_26c * 2 + 1] - local_88[(long)local_26c * 2 + 1]);
      local_1b8 = local_1b8 + extraout_d0_01;
      dVar5 = adStack_b8[(long)local_26c * 2 + 1];
      local_88[(long)local_26c * 2] = adStack_b8[(long)local_26c * 2];
      local_88[(long)local_26c * 2 + 1] = dVar5;
    }
    if (((local_1c0 <= local_1b8) && (0.0 <= local_1c0)) &&
       (bVar1 = 0x14 < local_1ac, local_1ac = local_1ac + 1, bVar1)) {
      local_15c = local_1b0;
      goto LAB_100003bcc;
    }
    local_1c0 = local_1b8;
  } while( true );
}



int _apollonius(long param_1)

{
  int iVar1;
  int local_38;
  uint local_34;
  uint local_24;
  uint local_20;
  uint local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_38 = 0;
  for (local_34 = 0; (int)local_34 < 8; local_34 = local_34 + 1) {
    local_24 = local_34 & 1;
    local_20 = local_34 & 2;
    local_1c = local_34 & 4;
    if ((((local_24 == 0) || (*(double *)(param_1 + 0x10) != 0.0)) &&
        ((local_20 == 0 || (*(double *)(param_1 + 0x28) != 0.0)))) &&
       ((local_1c == 0 || (*(double *)(param_1 + 0x40) != 0.0)))) {
      iVar1 = _apollonius_in(param_1,&local_24,1,0);
      local_38 = local_38 + iVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return local_38;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(void)

{
  undefined8 local_100 [2];
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined auStack_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _memset(auStack_70,0,0x48);
  local_60 = 0x3ff0000000000000;
  local_58 = 0x4010000000000000;
  local_48 = 0x3ff0000000000000;
  local_40 = 0x4000000000000000;
  local_38 = 0x4010000000000000;
  local_30 = 0x3ff0000000000000;
  _memset(local_b8,0,0x48);
  local_b8[0] = 0xc008000000000000;
  local_a8 = 0x4000000000000000;
  local_90 = 0x3ff0000000000000;
  local_88 = 0x4008000000000000;
  local_78 = 0x4000000000000000;
  _memset(local_100,0,0x48);
  local_100[0] = 0xc000000000000000;
  local_f0 = 0x3ff0000000000000;
  local_d8 = 0x3ff0000000000000;
  local_c8 = 0x4000000000000000;
  local_c0 = 0x3ff0000000000000;
  _puts("set 1");
  _apollonius(auStack_70);
  _puts("set 2");
  _apollonius(local_b8);
  _puts("set 3");
  _apollonius(local_100);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___muldc3(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____muldc3_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void _cabs(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cabs_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004020)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004030)((int)param_1);
  return iVar1;
}


