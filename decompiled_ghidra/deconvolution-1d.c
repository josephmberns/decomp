#include "deconvolution-1d.h"



// WARNING: Removing unreachable block (ram,0x000100002edc)
// WARNING: Removing unreachable block (ram,0x000100002efc)
// WARNING: Removing unreachable block (ram,0x000100002fbc)
// WARNING: Removing unreachable block (ram,0x000100002fdc)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fft(long param_1,long param_2,int param_3,int param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int local_2c;
  
  if (param_4 < param_3) {
    __fft(param_2,param_1,param_3,param_4 << 1);
    __fft(param_2 + (long)param_4 * 0x10,param_1 + (long)param_4 * 0x10,param_3,param_4 << 1);
    for (local_2c = 0; local_2c < param_3; local_2c = local_2c + param_4 * 2) {
      dVar6 = __PI * -0.0 * 0.0 + __PI * -1.0 * (double)(long)local_2c;
      uVar3 = FUN_100003878(__PI * -0.0 * (double)(long)local_2c - __PI * -1.0 * 0.0,dVar6,
                            (double)(long)param_3,0);
      dVar4 = (double)_cexp(uVar3);
      pdVar1 = (double *)(param_2 + (long)(local_2c + param_4) * 0x10);
      dVar7 = *pdVar1;
      dVar8 = pdVar1[1];
      dVar5 = dVar4 * dVar7 - dVar6 * dVar8;
      dVar6 = dVar4 * dVar8 + dVar6 * dVar7;
      pdVar2 = (double *)(param_2 + (long)local_2c * 0x10);
      dVar4 = pdVar2[1];
      pdVar1 = (double *)(param_1 + (long)(local_2c / 2) * 0x10);
      *pdVar1 = *pdVar2 + dVar5;
      pdVar1[1] = dVar4 + dVar6;
      pdVar2 = (double *)(param_2 + (long)local_2c * 0x10);
      dVar4 = pdVar2[1];
      pdVar1 = (double *)(param_1 + (long)((local_2c + param_3) / 2) * 0x10);
      *pdVar1 = *pdVar2 - dVar5;
      pdVar1[1] = dVar4 - dVar6;
    }
  }
  return;
}



void _fft(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *apuStack_60 [2];
  long local_50;
  long local_48;
  int local_3c;
  undefined *local_30;
  uint local_24;
  long local_20;
  long local_18;
  
  local_30 = (undefined *)apuStack_60;
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  local_50 = (ulong)param_2 * 0x10;
  local_24 = param_2;
  local_20 = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_48 = (long)apuStack_60 - local_50;
  for (local_3c = 0; local_3c < (int)local_24; local_3c = local_3c + 1) {
    puVar1 = (undefined8 *)(local_20 + (long)local_3c * 0x10);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(local_48 + (long)local_3c * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
  }
  __fft(local_20,local_48,local_24,1);
  apuStack_60[1] = local_30;
  if (*(long *)PTR____stack_chk_guard_100004018 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



void * _pad_two(long param_1,int param_2,int *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  int local_3c;
  int local_2c;
  
  local_2c = 1;
  if (*param_3 == 0) {
    for (; local_2c < param_2; local_2c = local_2c << 1) {
    }
  }
  else {
    local_2c = *param_3;
  }
  pvVar2 = _calloc(0x10,(long)local_2c);
  for (local_3c = 0; local_3c < param_2; local_3c = local_3c + 1) {
    puVar1 = (undefined8 *)((long)pvVar2 + (long)local_3c * 0x10);
    *puVar1 = *(undefined8 *)(param_1 + (long)local_3c * 8);
    puVar1[1] = 0;
  }
  *param_3 = local_2c;
  return pvVar2;
}



void _deconv(undefined8 param_1,int param_2,undefined8 param_3,int param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_90;
  uint *local_88;
  long local_80;
  long local_78;
  int local_70;
  int local_6c;
  undefined *local_60;
  void *local_58;
  void *local_50;
  uint local_44;
  long local_40;
  int local_34;
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  local_88 = &local_44;
  local_44 = 0;
  local_40 = param_5;
  local_34 = param_4;
  local_30 = param_3;
  local_24 = param_2;
  local_20 = param_1;
  local_50 = (void *)_pad_two(param_1,param_2);
  local_58 = (void *)_pad_two(local_30,local_34,local_88);
  _fft(local_50,local_44);
  _fft(local_58,local_44);
  local_80 = (ulong)local_44 * 0x10;
  local_60 = (undefined *)&local_90;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_78 = (long)&local_90 - local_80;
  for (local_6c = 0; local_6c < (int)local_44; local_6c = local_6c + 1) {
    puVar1 = (undefined8 *)((long)local_50 + (long)local_6c * 0x10);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)((long)local_58 + (long)local_6c * 0x10);
    uVar4 = FUN_100003878(*puVar1,uVar5,*puVar2,puVar2[1]);
    puVar1 = (undefined8 *)(local_78 + (long)local_6c * 0x10);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
  }
  _fft(local_78,local_44);
  for (local_70 = 0; local_34 - local_24 <= local_70; local_70 = local_70 + -1) {
    iVar3 = 0;
    if (local_44 != 0) {
      iVar3 = (int)(local_70 + local_44) / (int)local_44;
    }
    puVar1 = (undefined8 *)(local_78 + (long)(int)((local_70 + local_44) - iVar3 * local_44) * 0x10)
    ;
    uVar4 = FUN_100003878(*puVar1,puVar1[1],0x4040000000000000,0);
    *(undefined8 *)(local_40 + (long)-local_70 * 8) = uVar4;
  }
  _free(local_50);
  _free(local_58);
  local_90 = local_60;
  if (*(long *)PTR____stack_chk_guard_100004018 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(void)

{
  long lVar1;
  int iVar2;
  undefined8 auStack_1f0 [2];
  undefined4 local_1e0;
  int local_1dc;
  long local_1d8;
  long local_1d0;
  ulong local_1c8;
  long local_1c0;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  undefined *local_198;
  int local_190;
  uint local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180 [22];
  undefined auStack_d0 [168];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004018;
  local_1dc = 0;
  local_184 = 0;
  __PI = (double)_atan2(0x3ff0000000000000);
  __PI = __PI * 4.0;
  _memcpy(auStack_d0,&DAT_100003e28,0xa8);
  _memcpy(local_180 + 6,&DAT_100003ed0,0x80);
  _memset(local_180,local_1dc,0x30);
  local_180[0] = 0xc020000000000000;
  local_180[1] = 0xc022000000000000;
  local_180[2] = 0xc008000000000000;
  local_180[3] = 0xbff0000000000000;
  local_180[4] = 0xc018000000000000;
  local_180[5] = 0x401c000000000000;
  local_188 = 0x15;
  local_18c = 0x10;
  local_190 = 6;
  local_1d8 = 0x30;
  local_198 = (undefined *)&local_1e0;
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar1 = (long)&local_1e0 - local_1d8;
  local_1c8 = (ulong)local_18c * 8 + 0xf & 0xfffffffffffffff0;
  local_1d0 = lVar1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar1 = lVar1 - local_1c8;
  local_1c0 = lVar1;
  _printf("f[] data is : ");
  for (local_1ac = 0; local_1ac < (int)local_18c; local_1ac = local_1ac + 1) {
    *(undefined8 *)(lVar1 + -0x10) = local_180[(long)local_1ac + 6];
    _printf(" %g");
  }
  _printf("\n");
  _printf("deconv(g, h): ");
  _deconv(auStack_d0,local_188,local_180,local_190,local_1c0);
  for (local_1b0 = 0; local_1b0 < (int)local_18c; local_1b0 = local_1b0 + 1) {
    *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(local_1c0 + (long)local_1b0 * 8);
    _printf(" %g");
  }
  _printf("\n");
  _printf("h[] data is : ");
  for (local_1b4 = 0; local_1b4 < local_190; local_1b4 = local_1b4 + 1) {
    *(undefined8 *)(lVar1 + -0x10) = local_180[local_1b4];
    _printf(" %g");
  }
  _printf("\n");
  _printf("deconv(g, f): ");
  _deconv(auStack_d0,local_188,local_180 + 6,local_18c,local_1d0);
  for (local_1b8 = 0; local_1b8 < local_190; local_1b8 = local_1b8 + 1) {
    *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(local_1d0 + (long)local_1b8 * 8);
    _printf(" %g");
  }
  iVar2 = _printf("\n");
  local_1e0 = local_184;
  if (*(long *)PTR____stack_chk_guard_100004018 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return local_184;
}



// WARNING: Removing unreachable block (ram,0x000100003bbc)
// WARNING: Removing unreachable block (ram,0x000100003bc4)
// WARNING: Removing unreachable block (ram,0x000100003bcc)
// WARNING: Removing unreachable block (ram,0x000100003bdc)
// WARNING: Removing unreachable block (ram,0x000100003bf4)
// WARNING: Removing unreachable block (ram,0x000100003c08)
// WARNING: Removing unreachable block (ram,0x000100003c1c)
// WARNING: Removing unreachable block (ram,0x000100003c84)
// WARNING: Removing unreachable block (ram,0x000100003c98)
// WARNING: Removing unreachable block (ram,0x000100003ca0)
// WARNING: Removing unreachable block (ram,0x000100003cb4)
// WARNING: Removing unreachable block (ram,0x000100003cd4)
// WARNING: Removing unreachable block (ram,0x000100003cd8)
// WARNING: Removing unreachable block (ram,0x000100003cec)
// WARNING: Removing unreachable block (ram,0x000100003cf0)
// WARNING: Removing unreachable block (ram,0x000100003d10)
// WARNING: Removing unreachable block (ram,0x000100003d14)
// WARNING: Removing unreachable block (ram,0x000100003d18)
// WARNING: Removing unreachable block (ram,0x000100003c2c)
// WARNING: Removing unreachable block (ram,0x000100003c38)
// WARNING: Removing unreachable block (ram,0x000100003c3c)
// WARNING: Removing unreachable block (ram,0x000100003c58)
// WARNING: Removing unreachable block (ram,0x000100003c5c)
// WARNING: Removing unreachable block (ram,0x000100003bd4)
// WARNING: Removing unreachable block (ram,0x000100003d24)

undefined  [16]
FUN_100003878(double param_1,double param_2,undefined param_3 [16],undefined param_4 [16])

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar9 = param_3._0_8_;
  dVar10 = param_4._0_8_;
  dVar11 = ABS(dVar9);
  if (ABS(dVar9) <= ABS(dVar10)) {
    dVar11 = ABS(dVar10);
  }
  uVar5 = (uint)((ulong)dVar11 >> 0x34) & 0x7ff;
  iVar4 = (((uint)((ulong)((long)dVar11 << ((ulong)((int)LZCOUNT(ABS(dVar11)) - 0xb) & 0x3f)) >>
                  0x34) & 0x7ff) - (int)LZCOUNT(ABS(dVar11))) + -0x3f4;
  if (uVar5 != 0) {
    iVar4 = uVar5 - 0x3ff;
  }
  dVar12 = -INFINITY;
  if (dVar11 != 0.0) {
    dVar12 = (double)iVar4;
  }
  if (dVar11 == -NAN || (long)dVar11 + 1 < 0 != SCARRY8((long)dVar11,1)) {
    dVar11 = -dVar11;
  }
  if (uVar5 == 0x7ff) {
    dVar12 = dVar11;
  }
  if ((ulong)ABS(dVar12) < 0x7ff0000000000000) {
    iVar4 = (int)dVar12;
    iVar3 = -iVar4;
    if ((dVar9 != 0.0) && (uVar5 = param_3._4_4_ >> 0x14 & 0x7ff, uVar5 != 0x7ff)) {
      uVar6 = (ulong)dVar9 & 0xfffffffffffff;
      if (uVar5 == 0) {
        uVar5 = 0xc - (int)LZCOUNT(uVar6);
        uVar6 = uVar6 << ((ulong)((int)LZCOUNT(uVar6) - 0xb) & 0x3f) & 0xffefffffffffffff;
      }
      uVar1 = (int)(uVar5 + iVar3) >> 0x1f ^ 0x80000000;
      if (!SCARRY4(uVar5,iVar3)) {
        uVar1 = uVar5 + iVar3;
      }
      uVar7 = (ulong)dVar9 & 0x8000000000000000;
      if ((int)uVar1 < 0x7ff) {
        if ((int)uVar1 < 1) {
          if (uVar1 == 0xfffffc03 || (int)(uVar1 + 0x3fd) < 0 != SCARRY4(uVar1,0x3fd)) {
            uVar1 = 0xfffffc03;
          }
          dVar9 = (double)(uVar6 | uVar7 | 0x10000000000000) *
                  (double)((ulong)(uVar1 + 0x3fe) << 0x34);
        }
        else {
          dVar9 = (double)(uVar7 | (ulong)uVar1 << 0x34 | uVar6);
        }
      }
      else {
        dVar9 = (double)(uVar7 | 0x7fe0000000000000) + (double)(uVar7 | 0x7fe0000000000000);
      }
    }
    if ((dVar10 != 0.0) && (uVar5 = param_4._4_4_ >> 0x14 & 0x7ff, uVar5 != 0x7ff)) {
      uVar6 = (ulong)dVar10 & 0xfffffffffffff;
      if (uVar5 == 0) {
        uVar5 = 0xc - (int)LZCOUNT(uVar6);
        uVar6 = uVar6 << ((ulong)((int)LZCOUNT(uVar6) - 0xb) & 0x3f) & 0xffefffffffffffff;
      }
      uVar1 = (int)(uVar5 + iVar3) >> 0x1f ^ 0x80000000;
      if (!SCARRY4(uVar5,iVar3)) {
        uVar1 = uVar5 + iVar3;
      }
      uVar7 = (ulong)dVar10 & 0x8000000000000000;
      if ((int)uVar1 < 0x7ff) {
        if ((int)uVar1 < 1) {
          if (uVar1 == 0xfffffc03 || (int)(uVar1 + 0x3fd) < 0 != SCARRY4(uVar1,0x3fd)) {
            uVar1 = 0xfffffc03;
          }
          dVar10 = (double)(uVar6 | uVar7 | 0x10000000000000) *
                   (double)((ulong)(uVar1 + 0x3fe) << 0x34);
        }
        else {
          dVar10 = (double)(uVar7 | (ulong)uVar1 << 0x34 | uVar6);
        }
      }
      else {
        dVar10 = (double)(uVar7 | 0x7fe0000000000000) + (double)(uVar7 | 0x7fe0000000000000);
      }
    }
  }
  else {
    iVar4 = 0;
  }
  dVar12 = (double)NEON_fmadd(dVar9,dVar9,dVar10 * dVar10);
  dVar11 = (double)NEON_fmadd(param_1,dVar9,dVar10 * param_2);
  dVar11 = dVar11 / dVar12;
  if ((dVar11 != 0.0) && (uVar5 = (uint)((ulong)dVar11 >> 0x34) & 0x7ff, uVar5 != 0x7ff)) {
    uVar7 = (ulong)dVar11 & 0xfffffffffffff;
    uVar6 = uVar7;
    if (uVar5 == 0) {
      uVar6 = uVar7 << ((ulong)((int)LZCOUNT(uVar7) - 0xb) & 0x3f) & 0xffefffffffffffff;
      uVar5 = 0xc - (int)LZCOUNT(uVar7);
    }
    uVar1 = uVar5 + -iVar4;
    uVar2 = (int)uVar1 >> 0x1f ^ 0x80000000;
    if (!SCARRY4(uVar5,-iVar4)) {
      uVar2 = uVar1;
    }
    uVar7 = (ulong)dVar11 & 0x8000000000000000;
    if (0x7fe < (int)uVar2) {
      dVar11 = (double)(uVar7 | 0x7fe0000000000000) + (double)(uVar7 | 0x7fe0000000000000);
      NEON_fmadd(param_2,dVar9,-(dVar10 * param_1));
      goto code_r0x000100003b88;
    }
    if ((int)uVar2 < 1) {
      if (uVar2 == 0xfffffc03 || (int)(uVar2 + 0x3fd) < 0 != SCARRY4(uVar2,0x3fd)) {
        uVar2 = 0xfffffc03;
      }
      dVar11 = (double)(uVar6 | uVar7 | 0x10000000000000) * (double)((ulong)(uVar2 + 0x3fe) << 0x34)
      ;
      NEON_fmadd(param_2,dVar9,-(dVar10 * param_1));
      goto code_r0x000100003b88;
    }
    dVar11 = (double)(uVar7 | (ulong)uVar2 << 0x34 | uVar6);
  }
  NEON_fmadd(param_2,dVar9,-(dVar10 * param_1));
code_r0x000100003b88:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar11;
  return auVar8;
}



void ___muldc3(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003db4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____muldc3_100004008)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dc0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dcc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan2_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004028)();
  return pvVar1;
}



void _cexp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003de4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cexp_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003df0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dfc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004040)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e08. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004048)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004050)((int)param_1);
  return iVar1;
}


