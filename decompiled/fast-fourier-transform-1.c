#include "fast-fourier-transform-1.h"



// WARNING: Removing unreachable block (ram,0x000100003540)
// WARNING: Removing unreachable block (ram,0x000100003560)
// WARNING: Removing unreachable block (ram,0x000100003620)
// WARNING: Removing unreachable block (ram,0x000100003640)
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
      uVar3 = FUN_1000039fc(__PI * -0.0 * (double)(long)local_2c - __PI * -1.0 * 0.0,dVar6,
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



int _show(undefined8 param_1,long param_2)

{
  int iVar1;
  int local_24;
  
  iVar1 = _printf("%s");
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    if (*(double *)(param_2 + (long)local_24 * 0x10 + 8) == 0.0) {
      iVar1 = _printf("%g ");
    }
    else {
      iVar1 = _printf("(%g, %g) ");
    }
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  __PI = (double)_atan2(0x3ff0000000000000);
  __PI = __PI * 4.0;
  _memset(local_98,0,0x80);
  local_98[0] = 0x3ff0000000000000;
  local_88 = 0x3ff0000000000000;
  local_78 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  _show("Data: ",local_98);
  _fft(local_98,8);
  _show("\nFFT : ",local_98);
  if (*(long *)PTR____stack_chk_guard_100004018 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000100003d40)
// WARNING: Removing unreachable block (ram,0x000100003d48)
// WARNING: Removing unreachable block (ram,0x000100003d50)
// WARNING: Removing unreachable block (ram,0x000100003d60)
// WARNING: Removing unreachable block (ram,0x000100003d78)
// WARNING: Removing unreachable block (ram,0x000100003d8c)
// WARNING: Removing unreachable block (ram,0x000100003da0)
// WARNING: Removing unreachable block (ram,0x000100003e08)
// WARNING: Removing unreachable block (ram,0x000100003e1c)
// WARNING: Removing unreachable block (ram,0x000100003e24)
// WARNING: Removing unreachable block (ram,0x000100003e38)
// WARNING: Removing unreachable block (ram,0x000100003e58)
// WARNING: Removing unreachable block (ram,0x000100003e5c)
// WARNING: Removing unreachable block (ram,0x000100003e70)
// WARNING: Removing unreachable block (ram,0x000100003e74)
// WARNING: Removing unreachable block (ram,0x000100003e94)
// WARNING: Removing unreachable block (ram,0x000100003e98)
// WARNING: Removing unreachable block (ram,0x000100003e9c)
// WARNING: Removing unreachable block (ram,0x000100003db0)
// WARNING: Removing unreachable block (ram,0x000100003dbc)
// WARNING: Removing unreachable block (ram,0x000100003dc0)
// WARNING: Removing unreachable block (ram,0x000100003ddc)
// WARNING: Removing unreachable block (ram,0x000100003de0)
// WARNING: Removing unreachable block (ram,0x000100003d58)
// WARNING: Removing unreachable block (ram,0x000100003ea8)

undefined  [16]
FUN_1000039fc(double param_1,double param_2,undefined param_3 [16],undefined param_4 [16])

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
      goto code_r0x000100003d0c;
    }
    if ((int)uVar2 < 1) {
      if (uVar2 == 0xfffffc03 || (int)(uVar2 + 0x3fd) < 0 != SCARRY4(uVar2,0x3fd)) {
        uVar2 = 0xfffffc03;
      }
      dVar11 = (double)(uVar6 | uVar7 | 0x10000000000000) * (double)((ulong)(uVar2 + 0x3fe) << 0x34)
      ;
      NEON_fmadd(param_2,dVar9,-(dVar10 * param_1));
      goto code_r0x000100003d0c;
    }
    dVar11 = (double)(uVar7 | (ulong)uVar2 << 0x34 | uVar6);
  }
  NEON_fmadd(param_2,dVar9,-(dVar10 * param_1));
code_r0x000100003d0c:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar11;
  return auVar8;
}



void ___muldc3(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____muldc3_100004008)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan2_100004020)();
  return;
}



void _cexp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cexp_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004030)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}


