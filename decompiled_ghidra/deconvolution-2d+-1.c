#include "deconvolution-2d+-1.h"



// WARNING: Removing unreachable block (ram,0x0001000021c8)
// WARNING: Removing unreachable block (ram,0x0001000021e8)
// WARNING: Removing unreachable block (ram,0x0001000022a8)
// WARNING: Removing unreachable block (ram,0x0001000022c8)
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
      uVar3 = FUN_100003550(__PI * -0.0 * (double)(long)local_2c - __PI * -1.0 * 0.0,dVar6,
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



void _deconv(undefined8 param_1,int param_2,undefined8 param_3,int param_4,long param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined auStack_b0 [8];
  undefined *local_a8;
  uint *local_a0;
  long local_98;
  undefined *local_90;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int local_6c;
  undefined *local_60;
  void *local_58;
  void *local_50;
  uint local_48;
  int local_44;
  long local_40;
  int local_34;
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  local_a0 = &local_48;
  local_48 = 0;
  local_44 = param_6;
  local_40 = param_5;
  local_34 = param_4;
  local_30 = param_3;
  local_24 = param_2;
  local_20 = param_1;
  local_50 = (void *)_pad_two(param_1,param_2);
  local_58 = (void *)_pad_two(local_30,local_34,local_a0);
  _fft(local_50,local_48);
  _fft(local_58,local_48);
  local_98 = (ulong)local_48 * 0x10;
  local_60 = auStack_b0;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_90 = auStack_b0 + -local_98;
  for (local_6c = 0; local_6c < (int)local_48; local_6c = local_6c + 1) {
    puVar1 = (undefined8 *)((long)local_50 + (long)local_6c * 0x10);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)((long)local_58 + (long)local_6c * 0x10);
    uVar4 = FUN_100003550(*puVar1,uVar6,*puVar2,puVar2[1]);
    *(undefined8 *)(local_90 + (long)local_6c * 0x10) = uVar4;
    *(undefined8 *)((long)(local_90 + (long)local_6c * 0x10) + 8) = uVar6;
  }
  _fft(local_90,local_48);
  for (local_70 = 0; local_70 < (int)local_48; local_70 = local_70 + 1) {
    local_80 = *(undefined8 *)(local_90 + (long)local_70 * 0x10);
    local_78 = 0;
    dVar5 = (double)_cabs(local_80,0);
    if (dVar5 < 1e-10) {
      *(undefined8 *)(local_90 + (long)local_70 * 0x10) = 0;
      *(undefined8 *)((long)(local_90 + (long)local_70 * 0x10) + 8) = 0;
    }
  }
  for (local_84 = 0; (local_34 - local_24) - local_44 < local_84; local_84 = local_84 + -1) {
    iVar3 = 0;
    if (local_48 != 0) {
      iVar3 = (int)(local_84 + local_48) / (int)local_48;
    }
    uVar4 = FUN_100003550(*(undefined8 *)
                           (local_90 + (long)(int)((local_84 + local_48) - iVar3 * local_48) * 0x10)
                          ,*(undefined8 *)
                            ((long)(local_90 +
                                   (long)(int)((local_84 + local_48) - iVar3 * local_48) * 0x10) + 8
                            ),0x4040000000000000,0);
    *(undefined8 *)(local_40 + (long)-local_84 * 8) = uVar4;
  }
  _free(local_50);
  _free(local_58);
  local_a8 = local_60;
  if (*(long *)PTR____stack_chk_guard_100004018 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



void * _unpack2(long param_1,int param_2,uint param_3,int param_4)

{
  void *pvVar1;
  undefined4 local_38;
  undefined4 local_34;
  
  pvVar1 = _calloc(8,(long)(param_2 * param_4));
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < (int)param_3; local_38 = local_38 + 1) {
      *(undefined8 *)((long)pvVar1 + (long)(local_34 * param_4 + local_38) * 8) =
           *(undefined8 *)(param_1 + (long)local_34 * (ulong)param_3 * 8 + (long)local_38 * 8);
    }
  }
  return pvVar1;
}



void _pack2(long param_1,int param_2,int param_3,uint param_4,long param_5)

{
  undefined4 local_28;
  undefined4 local_24;
  
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < (int)param_4; local_28 = local_28 + 1) {
      *(double *)(param_5 + (long)local_24 * (ulong)param_4 * 8 + (long)local_28 * 8) =
           *(double *)(param_1 + (long)(local_24 * param_3 + local_28) * 8) / 4.0;
    }
  }
  return;
}



void _deconv2(undefined8 param_1,int param_2,int param_3,undefined8 param_4,int param_5,int param_6,
             undefined8 param_7)

{
  undefined auStack_80 [8];
  ulong local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  int local_28;
  int local_24;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  local_40 = param_7;
  local_38 = param_6;
  local_34 = param_5;
  local_30 = param_4;
  local_28 = param_3;
  local_24 = param_2;
  local_20 = param_1;
  local_48 = (void *)_unpack2(param_1,param_2,param_3,param_3);
  local_50 = (void *)_unpack2(local_30,local_34,local_38,local_28);
  local_78 = (ulong)(uint)(((local_24 - local_34) + 1) * local_28) * 8 + 0xf & 0xfffffffffffffff0;
  local_58 = auStack_80;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_70 = auStack_80 + -local_78;
  _deconv(local_48,local_24 * local_28,local_50,local_34 * local_28,local_70,local_28);
  _pack2(local_70,(local_24 - local_34) + 1,local_28,(local_28 - local_38) + 1,local_40);
  _free(local_48);
  _free(local_50);
  local_68 = local_58;
  if (*(long *)PTR____stack_chk_guard_100004018 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



void * _unpack3(long param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  void *pvVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  pvVar1 = _calloc(8,(long)(param_2 * param_5 * param_6));
  for (local_3c = 0; local_3c < param_2; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < (int)param_3; local_40 = local_40 + 1) {
      for (local_44 = 0; local_44 < (int)param_4; local_44 = local_44 + 1) {
        *(undefined8 *)
         ((long)pvVar1 + (long)((local_3c * param_5 + local_40) * param_6 + local_44) * 8) =
             *(undefined8 *)
              (param_1 + (long)local_3c * (ulong)param_3 * (ulong)param_4 * 8 +
               (long)local_40 * (ulong)param_4 * 8 + (long)local_44 * 8);
      }
    }
  }
  return pvVar1;
}



void _pack3(long param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,long param_7)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < (int)param_5; local_30 = local_30 + 1) {
      for (local_34 = 0; local_34 < (int)param_6; local_34 = local_34 + 1) {
        *(double *)
         (param_7 + (long)local_2c * (ulong)param_5 * (ulong)param_6 * 8 +
          (long)local_30 * (ulong)param_6 * 8 + (long)local_34 * 8) =
             *(double *)(param_1 + (long)((local_2c * param_3 + local_30) * param_4 + local_34) * 8)
             / 4.0;
      }
    }
  }
  return;
}



void _deconv3(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,int param_6,
             int param_7,int param_8,undefined8 param_9)

{
  undefined auStack_90 [8];
  ulong local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_68;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  local_50 = param_9;
  local_44 = param_8;
  local_40 = param_7;
  local_3c = param_6;
  local_38 = param_5;
  local_2c = param_4;
  local_28 = param_3;
  local_24 = param_2;
  local_20 = param_1;
  local_58 = (void *)_unpack3(param_1,param_2,param_3,param_4,param_3,param_4);
  local_60 = (void *)_unpack3(local_38,local_3c,local_40,local_44,local_28,local_2c);
  local_88 = (ulong)(uint)(((local_24 - local_3c) + 1) * local_28 * local_2c) * 8 + 0xf &
             0xfffffffffffffff0;
  local_68 = auStack_90;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_80 = auStack_90 + -local_88;
  _deconv(local_58,local_24 * local_28 * local_2c,local_60,local_3c * local_28 * local_2c,local_80,
          local_28 * local_2c);
  _pack3(local_80,(local_24 - local_3c) + 1,local_28,local_2c,(local_28 - local_40) + 1,
         (local_2c - local_44) + 1,local_50);
  _free(local_58);
  _free(local_60);
  local_78 = local_68;
  if (*(long *)PTR____stack_chk_guard_100004018 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long alStack_580 [2];
  undefined auStack_570 [4];
  undefined4 local_56c;
  uint local_568;
  uint local_564;
  ulong local_560;
  ulong local_558;
  ulong local_550;
  long local_548;
  int local_540;
  int local_53c;
  undefined *local_538;
  int local_52c;
  undefined *local_528;
  uint local_520;
  uint local_51c;
  ulong local_518;
  ulong local_510;
  ulong local_508;
  undefined *local_500;
  int local_4f4;
  int local_4f0;
  int local_4ec;
  ulong local_4e8;
  ulong local_4e0;
  ulong local_4d8;
  int local_4cc;
  int local_4c8;
  int local_4c4;
  ulong local_4c0;
  ulong local_4b8;
  ulong local_4b0;
  undefined *local_4a8;
  int local_4a0;
  int local_49c;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  int local_488;
  int local_484;
  int local_480;
  undefined4 local_47c;
  undefined auStack_478 [768];
  undefined auStack_178 [144];
  undefined auStack_e8 [192];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004018;
  local_47c = 0;
  __PI = (double)_atan2(0x3ff0000000000000);
  __PI = __PI * 4.0;
  _memcpy(auStack_e8,&DAT_100003b08,0xc0);
  local_540 = 2;
  local_480 = 2;
  local_53c = 3;
  local_484 = 3;
  local_52c = 4;
  local_488 = 4;
  local_528 = auStack_178;
  _memcpy(local_528,&DAT_100003bc8,0x90);
  local_48c = local_53c;
  local_490 = local_540;
  local_494 = local_53c;
  local_538 = auStack_478;
  _memcpy(local_538,&DAT_100003c58,0x300);
  local_498 = local_52c;
  local_49c = local_52c;
  local_4a0 = 6;
  uVar1 = (local_52c - local_48c) + 1;
  local_518 = (ulong)uVar1;
  local_520 = (local_52c - local_490) + 1;
  local_510 = (ulong)local_520;
  local_51c = 7 - local_494;
  local_508 = (ulong)local_51c;
  local_4a8 = auStack_570;
  uVar10 = (*(code *)PTR____chkstk_darwin_100004000)
                     ((ulong)uVar1 * (ulong)local_520 * local_508 * 8 + 0xf,local_538);
  iVar5 = local_498;
  iVar4 = local_49c;
  iVar9 = local_4a0;
  lVar3 = -extraout_x12;
  puVar2 = auStack_570 + lVar3;
  local_4b0 = local_518;
  local_4b8 = local_510;
  local_4c0 = local_508;
  local_500 = puVar2;
  *(undefined **)((long)alStack_580 + lVar3) = puVar2;
  _deconv3(uVar10,iVar5,iVar4,iVar9);
  iVar9 = _printf("deconv3(g, f):\n");
  for (local_4c4 = 0; local_4c4 < (local_498 - local_48c) + 1; local_4c4 = local_4c4 + 1) {
    for (local_4c8 = 0; local_4c8 < (local_49c - local_490) + 1; local_4c8 = local_4c8 + 1) {
      for (local_4cc = 0; local_4cc < (local_4a0 - local_494) + 1; local_4cc = local_4cc + 1) {
        *(undefined8 *)((long)alStack_580 + lVar3) =
             *(undefined8 *)
              (local_500 +
              (long)local_4cc * 8 +
              (long)local_4c8 * local_508 * 8 +
              (long)local_4c4 * (ulong)local_520 * (ulong)local_51c * 8);
        _printf("%g ");
      }
      iVar9 = _printf("\n");
    }
    if (local_4c4 < local_498 - local_48c) {
      iVar9 = _printf("\n");
    }
  }
  uVar1 = (local_498 - local_480) + 1;
  local_560 = (ulong)uVar1;
  local_568 = (local_49c - local_484) + 1;
  local_558 = (ulong)local_568;
  local_564 = (local_4a0 - local_488) + 1;
  local_550 = (ulong)local_564;
  (*(code *)PTR____chkstk_darwin_100004000)
            ((ulong)uVar1 * (ulong)local_568 * local_550 * 8 + 0xf,iVar9);
  iVar8 = local_480;
  iVar7 = local_484;
  iVar6 = local_488;
  iVar5 = local_498;
  iVar4 = local_49c;
  iVar9 = local_4a0;
  lVar3 = (long)puVar2 - extraout_x12_00;
  local_4d8 = local_560;
  local_4e0 = local_558;
  local_4e8 = local_550;
  local_548 = lVar3;
  *(long *)(lVar3 + -0x10) = lVar3;
  _deconv3(auStack_478,iVar5,iVar4,iVar9,auStack_e8,iVar8,iVar7,iVar6);
  iVar9 = _printf("\ndeconv3(g, h):\n");
  for (local_4ec = 0; local_4ec < (local_498 - local_480) + 1; local_4ec = local_4ec + 1) {
    for (local_4f0 = 0; local_4f0 < (local_49c - local_484) + 1; local_4f0 = local_4f0 + 1) {
      for (local_4f4 = 0; local_4f4 < (local_4a0 - local_488) + 1; local_4f4 = local_4f4 + 1) {
        *(undefined8 *)(lVar3 + -0x10) =
             *(undefined8 *)
              (local_548 + (long)local_4ec * (ulong)local_568 * (ulong)local_564 * 8 +
               (long)local_4f0 * local_550 * 8 + (long)local_4f4 * 8);
        _printf("%g ");
      }
      iVar9 = _printf("\n");
    }
    if (local_4ec < local_498 - local_480) {
      iVar9 = _printf("\n");
    }
  }
  local_56c = local_47c;
  if (*(long *)PTR____stack_chk_guard_100004018 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar9);
  }
  return local_47c;
}



// WARNING: Removing unreachable block (ram,0x000100003894)
// WARNING: Removing unreachable block (ram,0x00010000389c)
// WARNING: Removing unreachable block (ram,0x0001000038a4)
// WARNING: Removing unreachable block (ram,0x0001000038b4)
// WARNING: Removing unreachable block (ram,0x0001000038cc)
// WARNING: Removing unreachable block (ram,0x0001000038e0)
// WARNING: Removing unreachable block (ram,0x0001000038f4)
// WARNING: Removing unreachable block (ram,0x00010000395c)
// WARNING: Removing unreachable block (ram,0x000100003970)
// WARNING: Removing unreachable block (ram,0x000100003978)
// WARNING: Removing unreachable block (ram,0x00010000398c)
// WARNING: Removing unreachable block (ram,0x0001000039ac)
// WARNING: Removing unreachable block (ram,0x0001000039b0)
// WARNING: Removing unreachable block (ram,0x0001000039c4)
// WARNING: Removing unreachable block (ram,0x0001000039c8)
// WARNING: Removing unreachable block (ram,0x0001000039e8)
// WARNING: Removing unreachable block (ram,0x0001000039ec)
// WARNING: Removing unreachable block (ram,0x0001000039f0)
// WARNING: Removing unreachable block (ram,0x000100003904)
// WARNING: Removing unreachable block (ram,0x000100003910)
// WARNING: Removing unreachable block (ram,0x000100003914)
// WARNING: Removing unreachable block (ram,0x000100003930)
// WARNING: Removing unreachable block (ram,0x000100003934)
// WARNING: Removing unreachable block (ram,0x0001000038ac)
// WARNING: Removing unreachable block (ram,0x0001000039fc)

undefined  [16]
FUN_100003550(double param_1,double param_2,undefined param_3 [16],undefined param_4 [16])

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
      goto code_r0x000100003860;
    }
    if ((int)uVar2 < 1) {
      if (uVar2 == 0xfffffc03 || (int)(uVar2 + 0x3fd) < 0 != SCARRY4(uVar2,0x3fd)) {
        uVar2 = 0xfffffc03;
      }
      dVar11 = (double)(uVar6 | uVar7 | 0x10000000000000) * (double)((ulong)(uVar2 + 0x3fe) << 0x34)
      ;
      NEON_fmadd(param_2,dVar9,-(dVar10 * param_1));
      goto code_r0x000100003860;
    }
    dVar11 = (double)(uVar7 | (ulong)uVar2 << 0x34 | uVar6);
  }
  NEON_fmadd(param_2,dVar9,-(dVar10 * param_1));
code_r0x000100003860:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar11;
  return auVar8;
}



void ___muldc3(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003a8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____muldc3_100004008)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003a98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003aa4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan2_100004020)();
  return;
}



void _cabs(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ab0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cabs_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003abc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004030)();
  return pvVar1;
}



void _cexp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ac8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cexp_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ad4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004040)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ae0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004048)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003aec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004050)((int)param_1);
  return iVar1;
}


