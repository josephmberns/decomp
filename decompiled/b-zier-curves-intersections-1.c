#include "b-zier-curves-intersections-1.h"



void _subdivideQuadSpline
               (undefined8 param_1,double param_2,double param_3,double param_4,undefined8 *param_5,
               undefined8 *param_6)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = 1.0 - param_4;
  *param_5 = param_1;
  param_6[2] = param_3;
  uVar2 = NEON_fmadd(dVar1,param_1,param_4 * param_2);
  param_5[1] = uVar2;
  uVar2 = NEON_fmadd(dVar1,param_2,param_4 * param_3);
  param_6[1] = uVar2;
  uVar2 = NEON_fmadd(dVar1,param_5[1],param_4 * (double)param_6[1]);
  param_5[2] = uVar2;
  *param_6 = param_5[2];
  return;
}



void _subdivideQuadCurve(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  _subdivideQuadSpline(*param_2,param_2[1],param_2[2],param_1,param_3,param_4);
  _subdivideQuadSpline(param_2[3],param_2[4],param_2[5],param_1,param_3 + 0x18,param_4 + 0x18);
  return;
}



bool _rectsOverlap(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_5 <= param_3) && (bVar1 = false, param_1 <= param_7)) &&
     (bVar1 = false, param_6 <= param_4)) {
    bVar1 = param_2 <= param_8;
  }
  return bVar1;
}



undefined  [16] _max3(double param_1,double param_2,double param_3)

{
  undefined auVar1 [16];
  
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  if (param_1 <= param_3) {
    param_1 = param_3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined  [16] _min3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  uVar1 = NEON_fminnm(param_1,param_2);
  auVar2._0_8_ = NEON_fminnm(uVar1,param_3);
  auVar2._8_8_ = 0;
  return auVar2;
}



void _testIntersect(double param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4,
                   undefined *param_5,undefined8 *param_6)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  dVar2 = (double)_min3(*param_2,param_2[1],param_2[2]);
  dVar3 = (double)_min3(param_2[3],param_2[4],param_2[5]);
  uVar4 = _max3(*param_2,param_2[1],param_2[2]);
  uVar5 = _max3(param_2[3],param_2[4],param_2[5]);
  dVar6 = (double)_min3(*param_3,param_3[1],param_3[2]);
  dVar7 = (double)_min3(param_3[3],param_3[4],param_3[5]);
  uVar8 = _max3(*param_3,param_3[1],param_3[2]);
  uVar9 = _max3(param_3[3],param_3[4],param_3[5]);
  *param_4 = 1;
  *param_5 = 0;
  uVar1 = _rectsOverlap(dVar2,dVar3,uVar4,uVar5,dVar6,dVar7,uVar8,uVar9);
  if ((uVar1 & 1) != 0) {
    *param_4 = 0;
    if (dVar2 <= dVar6) {
      dVar2 = dVar6;
    }
    dVar6 = (double)NEON_fminnm(uVar4,uVar8);
    if (dVar6 < dVar2) {
                    // WARNING: Subroutine does not return
      ___assert_rtn("testIntersect","b-zier-curves-intersections-1.c",0x54,"xmax >= xmin");
    }
    if (dVar6 - dVar2 <= param_1) {
      if (dVar3 <= dVar7) {
        dVar3 = dVar7;
      }
      dVar7 = (double)NEON_fminnm(uVar5,uVar9);
      if (dVar7 < dVar3) {
                    // WARNING: Subroutine does not return
        ___assert_rtn("testIntersect","b-zier-curves-intersections-1.c",0x58,"ymax >= ymin");
      }
      if (dVar7 - dVar3 <= param_1) {
        *param_5 = 1;
        uVar4 = NEON_fmadd(0x3fe0000000000000,dVar2,dVar6 * 0.5);
        *param_6 = uVar4;
        uVar4 = NEON_fmadd(0x3fe0000000000000,dVar3,dVar7 * 0.5);
        param_6[1] = uVar4;
      }
    }
  }
  return;
}



bool _seemsToBeDuplicate(double param_1,double param_2,double param_3,long param_4,int param_5)

{
  double *pdVar1;
  bool bVar2;
  int local_30;
  
  bVar2 = false;
  for (local_30 = 0; !bVar2 && local_30 != param_5; local_30 = local_30 + 1) {
    pdVar1 = (double *)(param_4 + (long)local_30 * 0x10);
    bVar2 = false;
    if (ABS(*pdVar1 - param_1) < param_3) {
      bVar2 = ABS(pdVar1[1] - param_2) < param_3;
    }
  }
  return bVar2;
}



void _findIntersects(undefined param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4
                    ,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 extraout_d0;
  undefined auVar5 [16];
  undefined auStack_1c30 [48];
  undefined auStack_1c00 [48];
  undefined auStack_1bd0 [48];
  undefined auStack_1ba0 [48];
  undefined auStack_1b70 [48];
  undefined auStack_1b40 [48];
  undefined auStack_1b10 [48];
  undefined auStack_1ae0 [48];
  undefined auStack_1ab0 [48];
  undefined auStack_1a80 [48];
  undefined auStack_1a50 [48];
  undefined auStack_1a20 [48];
  undefined auStack_19f0 [48];
  undefined auStack_19c0 [48];
  undefined auStack_1990 [48];
  undefined auStack_1960 [48];
  undefined8 local_1930;
  undefined8 uStack_1928;
  byte local_191a;
  byte local_1919;
  undefined auStack_1918 [48];
  undefined auStack_18e8 [48];
  undefined auStack_18b8 [48];
  undefined auStack_1888 [48];
  int local_1858;
  int local_1854;
  long local_1850;
  undefined8 local_1848;
  undefined8 local_1840;
  void *local_1838;
  void *local_1830;
  undefined auStack_1828 [6144];
  long local_28;
  
  auVar5 = (*(code *)PTR____chkstk_darwin_100004008)();
  local_1830 = auVar5._0_8_;
  local_28 = *(long *)PTR____stack_chk_guard_100004018;
  local_1854 = 0;
  local_1858 = 1;
  local_1850 = param_5;
  local_1848 = param_2;
  local_1840 = extraout_d0;
  local_1838 = auVar5._8_8_;
  _memcpy(auStack_18b8,local_1830,0x30);
  _memcpy(auStack_1888,auVar5._8_8_,0x30);
  _memcpy(auStack_1828,auStack_18b8,0x60);
  do {
    do {
      while( true ) {
        if (local_1858 == 0) {
          if (*(long *)PTR____stack_chk_guard_100004018 == local_28) {
            return;
          }
                    // WARNING: Subroutine does not return
          ___stack_chk_fail();
        }
        _memcpy(auStack_1918,auStack_1828 + (long)(local_1858 + -1) * 0x60,0x60);
        uVar2 = local_1840;
        local_1858 = local_1858 + -1;
        _memcpy(auStack_1960,auStack_1918,0x30);
        _memcpy(auStack_1990,auStack_18e8,0x30);
        _testIntersect(uVar2,auStack_1960,auStack_1990,&local_1919,&local_191a,&local_1930);
        if ((local_191a & 1) != 0) break;
        if ((local_1919 & 1) == 0) {
          _memcpy(auStack_1a80,auStack_1918,0x30);
          _subdivideQuadCurve(auStack_1a80);
          _memcpy(auStack_1ab0,auStack_18e8,0x30);
          _subdivideQuadCurve(0x3fe0000000000000,auStack_1ab0);
          lVar4 = (long)local_1858;
          local_1858 = local_1858 + 1;
          _memcpy(auStack_1b10,auStack_19c0,0x30);
          _memcpy(auStack_1ae0,auStack_1a20,0x30);
          _memcpy(auStack_1828 + lVar4 * 0x60,auStack_1b10,0x60);
          lVar4 = (long)local_1858;
          local_1858 = local_1858 + 1;
          _memcpy(auStack_1b70,auStack_19c0,0x30);
          _memcpy(auStack_1b40,auStack_1a50,0x30);
          _memcpy(auStack_1828 + lVar4 * 0x60,auStack_1b70,0x60);
          lVar4 = (long)local_1858;
          local_1858 = local_1858 + 1;
          _memcpy(auStack_1bd0,auStack_19f0,0x30);
          _memcpy(auStack_1ba0,auStack_1a20,0x30);
          _memcpy(auStack_1828 + lVar4 * 0x60,auStack_1bd0,0x60);
          lVar4 = (long)local_1858;
          local_1858 = local_1858 + 1;
          _memcpy(auStack_1c30,auStack_19f0,0x30);
          _memcpy(auStack_1c00,auStack_1a50,0x30);
          _memcpy(auStack_1828 + lVar4 * 0x60,auStack_1c30,0x60);
          if (0x40 < local_1858) {
                    // WARNING: Subroutine does not return
            ___assert_rtn("findIntersects","b-zier-curves-intersections-1.c",0x8c,
                          "numWorksets <= 64");
          }
        }
      }
      uVar3 = _seemsToBeDuplicate(local_1930,uStack_1928,local_1848,local_1850,local_1854);
    } while ((uVar3 & 1) != 0);
    lVar4 = (long)local_1854;
    local_1854 = local_1854 + 1;
    puVar1 = (undefined8 *)(local_1850 + lVar4 * 0x10);
    puVar1[1] = uStack_1928;
    *puVar1 = local_1930;
  } while (local_1854 < 5);
                    // WARNING: Subroutine does not return
  ___assert_rtn("findIntersects","b-zier-curves-intersections-1.c",0x82,"numIntersects <= 4");
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  int local_1a4;
  undefined auStack_1a0 [48];
  undefined auStack_170 [48];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined auStack_68 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004018;
  local_6c = 0;
  local_e8 = 0xbff0000000000000;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_98 = 0;
  local_a0 = 0xbff0000000000000;
  local_90 = 0x3ff0000000000000;
  local_100 = 0;
  uStack_f8 = 0x4024000000000000;
  local_f0 = 0;
  uStack_80 = 0x4024000000000000;
  local_88 = 0;
  local_78 = 0;
  local_118 = 0x4000000000000000;
  uStack_110 = 0xc020000000000000;
  local_108 = 0x4000000000000000;
  uStack_c8 = 0xc020000000000000;
  local_d0 = 0x4000000000000000;
  local_c0 = 0x4000000000000000;
  local_130 = 0x3ff0000000000000;
  uStack_128 = 0x4000000000000000;
  local_120 = 0x4008000000000000;
  uStack_b0 = 0x4000000000000000;
  local_b8 = 0x3ff0000000000000;
  local_a8 = 0x4008000000000000;
  local_138 = 0x3e7ad7f29abcaf48;
  local_140 = 0x3eb0c6f7a0b5ed8d;
  _memcpy(auStack_170,&local_a0,0x30);
  _memcpy(auStack_1a0,&local_d0,0x30);
  uVar2 = _findIntersects(0x3e7ad7f29abcaf48,0x3eb0c6f7a0b5ed8d,auStack_170,auStack_1a0,auStack_68);
  for (local_1a4 = 0; local_1a4 < 4; local_1a4 = local_1a4 + 1) {
    uVar1 = _printf("(% f, %f)\n");
    uVar2 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004018 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar2);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


