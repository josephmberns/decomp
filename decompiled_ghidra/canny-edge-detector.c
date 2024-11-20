#include "canny-edge-detector.h"



void * _load_bmp(char *param_1,void *param_2)

{
  int iVar1;
  size_t sVar2;
  double dVar3;
  ulong local_70;
  ulong local_68;
  byte local_59;
  long local_58;
  long local_50;
  void *local_48;
  undefined auStack_40 [8];
  uint local_38;
  short local_32;
  FILE *local_30;
  void *local_28;
  char *local_20;
  void *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  local_30 = _fopen(param_1,"rb");
  if (local_30 == (FILE *)0x0) {
    _perror("fopen()");
    local_18 = (void *)0x0;
  }
  else {
    sVar2 = _fread(&local_32,2,1,local_30);
    if (sVar2 == 1) {
      if (local_32 == 0x4d42) {
        sVar2 = _fread(auStack_40,0xc,1,local_30);
        if (sVar2 == 1) {
          sVar2 = _fread(local_28,0x28,1,local_30);
          if (sVar2 == 1) {
            if (*(int *)((long)local_28 + 0x10) != 0) {
              _fprintf(*(FILE **)PTR____stderrp_100004028,"Warning, compression is not supported.\n"
                      );
            }
            iVar1 = _fseek(local_30,(ulong)local_38,0);
            if (iVar1 == 0) {
              local_48 = _malloc((ulong)*(uint *)((long)local_28 + 0x14) << 1);
              if (local_48 == (void *)0x0) {
                _fclose(local_30);
                local_18 = (void *)0x0;
              }
              else {
                local_58 = 0;
                dVar3 = (double)NEON_fnmsub(0x4010000000000000,
                                            (long)((double)(int)((uint)*(ushort *)
                                                                        ((long)local_28 + 0xe) *
                                                                *(int *)((long)local_28 + 4)) / 32.0
                                                  ),(double)(long)*(int *)((long)local_28 + 4));
                local_50 = (long)dVar3;
                for (local_68 = 0; local_68 < (ulong)(long)*(int *)((long)local_28 + 8);
                    local_68 = local_68 + 1) {
                  for (local_70 = 0; local_70 < (ulong)(long)*(int *)((long)local_28 + 4);
                      local_70 = local_70 + 1) {
                    sVar2 = _fread(&local_59,1,1,local_30);
                    if (sVar2 != 1) {
                      _fclose(local_30);
                      return (void *)0x0;
                    }
                    *(ushort *)((long)local_48 + local_58 * 2) = (ushort)local_59;
                    local_58 = local_58 + 1;
                  }
                  _fseek(local_30,local_50,1);
                }
                _fclose(local_30);
                local_18 = local_48;
              }
            }
            else {
              _fclose(local_30);
              local_18 = (void *)0x0;
            }
          }
          else {
            _fclose(local_30);
            local_18 = (void *)0x0;
          }
        }
        else {
          _fclose(local_30);
          local_18 = (void *)0x0;
        }
      }
      else {
        _fprintf(*(FILE **)PTR____stderrp_100004028,"Not a BMP file: magic=%c%c\n");
        _fclose(local_30);
        local_18 = (void *)0x0;
      }
    }
    else {
      _fclose(local_30);
      local_18 = (void *)0x0;
    }
  }
  return local_18;
}



undefined _save_bmp(char *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  double dVar2;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined local_69;
  ulong local_68;
  undefined local_5c;
  undefined local_5b;
  undefined local_5a;
  undefined local_59;
  ulong local_58;
  int local_4c;
  undefined2 local_48;
  undefined2 local_46;
  int local_44;
  int local_40;
  undefined2 local_3a;
  FILE *local_38;
  long local_30;
  void *local_28;
  char *local_20;
  undefined local_11;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  local_38 = _fopen(param_1,"wb");
  if (local_38 == (FILE *)0x0) {
    local_11 = 1;
  }
  else {
    local_3a = 0x4d42;
    sVar1 = _fwrite(&local_3a,2,1,local_38);
    if (sVar1 == 1) {
      local_44 = (1 << (ulong)(*(ushort *)((long)local_28 + 0xe) & 0x1f)) * 4 + 0x36;
      local_4c = local_44 + *(int *)((long)local_28 + 0x14);
      local_48 = 0;
      local_46 = 0;
      local_40 = local_44;
      sVar1 = _fwrite(&local_4c,0xc,1,local_38);
      if (sVar1 == 1) {
        sVar1 = _fwrite(local_28,0x28,1,local_38);
        if (sVar1 == 1) {
          for (local_58 = 0;
              local_58 < (uint)(1 << (ulong)(*(ushort *)((long)local_28 + 0xe) & 0x1f));
              local_58 = local_58 + 1) {
            local_5c = (undefined)local_58;
            local_59 = 0;
            local_5b = local_5c;
            local_5a = local_5c;
            sVar1 = _fwrite(&local_5c,4,1,local_38);
            if (sVar1 != 1) {
              _fclose(local_38);
              return 1;
            }
          }
          dVar2 = (double)NEON_fnmsub(0x4010000000000000,
                                      (long)((double)(int)((uint)*(ushort *)((long)local_28 + 0xe) *
                                                          *(int *)((long)local_28 + 4)) / 32.0),
                                      (double)(long)*(int *)((long)local_28 + 4));
          local_68 = (ulong)dVar2;
          for (local_78 = 0; local_78 < (ulong)(long)*(int *)((long)local_28 + 8);
              local_78 = local_78 + 1) {
            for (local_80 = 0; local_80 < (ulong)(long)*(int *)((long)local_28 + 4);
                local_80 = local_80 + 1) {
              local_69 = (undefined)
                         *(undefined2 *)
                          (local_30 + (local_80 + (long)*(int *)((long)local_28 + 4) * local_78) * 2
                          );
              sVar1 = _fwrite(&local_69,1,1,local_38);
              if (sVar1 != 1) {
                _fclose(local_38);
                return 1;
              }
            }
            local_69 = 0;
            for (local_88 = 0; local_88 < local_68; local_88 = local_88 + 1) {
              sVar1 = _fwrite(&local_69,1,1,local_38);
              if (sVar1 != 1) {
                _fclose(local_38);
                return 1;
              }
            }
          }
          _fclose(local_38);
          local_11 = 0;
        }
        else {
          _fclose(local_38);
          local_11 = 1;
        }
      }
      else {
        _fclose(local_38);
        local_11 = 1;
      }
    }
    else {
      _fclose(local_38);
      local_11 = 1;
    }
  }
  return local_11;
}



void _convolution(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                 byte param_7)

{
  int local_80;
  int local_7c;
  long local_78;
  float local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  long local_58;
  float local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  
  if (param_6 % 2 != 1) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("convolution","canny-edge-detector.c",0xdf,"kn % 2 == 1");
  }
  if (param_6 < param_4 && param_6 < param_5) {
    param_6 = param_6 / 2;
    local_40 = 3.4028235e+38;
    local_44 = -3.4028235e+38;
    local_64 = param_6;
    local_48 = param_6;
    if ((param_7 & 1) != 0) {
      for (; local_4c = param_6, local_48 < param_4 - param_6; local_48 = local_48 + 1) {
        for (; local_4c < param_5 - param_6; local_4c = local_4c + 1) {
          local_50 = 0.0;
          local_58 = 0;
          for (local_5c = -param_6; local_5c <= param_6; local_5c = local_5c + 1) {
            for (local_60 = -param_6; local_60 <= param_6; local_60 = local_60 + 1) {
              local_50 = (float)NEON_fmadd((float)(int)*(short *)(param_1 +
                                                                 (long)(((local_4c - local_5c) *
                                                                         param_4 + local_48) -
                                                                       local_60) * 2),
                                           *(undefined4 *)(param_3 + local_58 * 4),local_50);
              local_58 = local_58 + 1;
            }
          }
          if (local_50 < local_40) {
            local_40 = local_50;
          }
          if (local_44 < local_50) {
            local_44 = local_50;
          }
        }
      }
    }
    for (; local_68 = param_6, local_64 < param_4 - param_6; local_64 = local_64 + 1) {
      for (; local_68 < param_5 - param_6; local_68 = local_68 + 1) {
        local_6c = 0.0;
        local_78 = 0;
        for (local_7c = -param_6; local_7c <= param_6; local_7c = local_7c + 1) {
          for (local_80 = -param_6; local_80 <= param_6; local_80 = local_80 + 1) {
            local_6c = (float)NEON_fmadd((float)(int)*(short *)(param_1 +
                                                               (long)(((local_68 - local_7c) *
                                                                       param_4 + local_64) -
                                                                     local_80) * 2),
                                         *(undefined4 *)(param_3 + local_78 * 4),local_6c);
            local_78 = local_78 + 1;
          }
        }
        if ((param_7 & 1) != 0) {
          local_6c = ((local_6c - local_40) * 255.0) / (local_44 - local_40);
        }
        *(short *)(param_2 + (long)(local_68 * param_4 + local_64) * 2) = (short)(int)local_6c;
      }
    }
    return;
  }
                    // WARNING: Subroutine does not return
  ___assert_rtn("convolution","canny-edge-detector.c",0xe0,"nx > kn && ny > kn");
}



void _gaussian_filter(float param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  long lVar1;
  uint uVar2;
  FILE *pFVar3;
  ulong uVar4;
  double dVar5;
  double extraout_d0;
  ulong uStack_a0;
  double dStack_98;
  undefined auStack_90 [8];
  undefined *local_88;
  undefined8 local_80;
  double local_78;
  ulong local_70;
  undefined *local_68;
  int local_60;
  int local_5c;
  long local_58;
  undefined *local_48;
  float local_3c;
  uint local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_48 = auStack_90;
  local_18 = *(long *)PTR____stack_chk_guard_100004020;
  local_38 = (int)(param_1 * 2.0) * 2 + 3;
  local_3c = (float)(double)(long)((double)(long)(int)local_38 / 2.0);
  local_70 = (ulong)(local_38 * local_38) * 4 + 0xf & 0xfffffffffffffff0;
  local_34 = param_1;
  local_30 = param_5;
  local_2c = param_4;
  local_28 = param_3;
  local_20 = param_2;
  (*(code *)PTR____chkstk_darwin_100004008)();
  lVar1 = -local_70;
  local_68 = auStack_90 + lVar1;
  pFVar3 = *(FILE **)PTR____stderrp_100004028;
  dVar5 = (double)local_34;
  *(ulong *)((long)&uStack_a0 + lVar1) = (ulong)local_38;
  *(double *)((long)&dStack_98 + lVar1) = dVar5;
  uVar2 = _fprintf(pFVar3,"gaussian_filter: kernel size %d, sigma=%g\n");
  uVar4 = (ulong)uVar2;
  local_58 = 0;
  for (local_5c = 0; local_5c < (int)local_38; local_5c = local_5c + 1) {
    for (local_60 = 0; local_60 < (int)local_38; local_60 = local_60 + 1) {
      local_80 = 0x4000000000000000;
      local_78 = (double)_pow((double)(((float)local_5c - local_3c) / local_34),uVar4);
      dVar5 = (double)_pow((double)(((float)local_60 - local_3c) / local_34),local_80);
      uVar4 = _exp((local_78 + dVar5) * -0.5);
      *(float *)(local_68 + local_58 * 4) =
           (float)(extraout_d0 / ((double)local_34 * 6.283185307179586 * (double)local_34));
      local_58 = local_58 + 1;
    }
  }
  _convolution(local_20,local_28,local_68,local_2c,local_30,local_38,1);
  local_88 = local_48;
  if (*(long *)PTR____stack_chk_guard_100004020 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

void * _canny_edge_detection
                 (undefined4 param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 *puVar8;
  void *pvVar9;
  void *pvVar10;
  float fVar11;
  double dVar12;
  int local_144;
  int local_13c;
  int local_138;
  int local_134;
  long local_130;
  int local_f4;
  int local_f0;
  int local_e8;
  int local_e4;
  int local_90 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004020;
  iVar3 = *(int *)(param_3 + 4);
  iVar4 = *(int *)(param_3 + 8);
  pvVar6 = _calloc((long)(iVar3 * iVar4) << 1,1);
  pvVar7 = _calloc((long)(iVar3 * iVar4) << 1,1);
  puVar8 = (undefined4 *)_calloc((long)(iVar3 * iVar4) << 1,1);
  pvVar9 = _calloc((long)(iVar3 * iVar4) << 1,1);
  pvVar10 = _malloc((ulong)*(uint *)(param_3 + 0x14) << 1);
  if ((((pvVar6 == (void *)0x0) || (pvVar7 == (void *)0x0)) || (puVar8 == (undefined4 *)0x0)) ||
     ((pvVar9 == (void *)0x0 || (pvVar10 == (void *)0x0)))) {
    _fprintf(*(FILE **)PTR____stderrp_100004028,
             "canny_edge_detection: Failed memory allocation(s).\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  _gaussian_filter(param_1,param_2,pvVar10,iVar3,iVar4);
  _memset(local_4c,0,0x24);
  local_4c[0] = 0xbf800000;
  local_44 = 0x3f800000;
  local_40 = 0xc0000000;
  local_38 = 0x40000000;
  local_34 = 0xbf800000;
  local_2c = 0x3f800000;
  _convolution(pvVar10,pvVar7,local_4c,iVar3,iVar4,3,0);
  _memset(&local_70,0,0x24);
  local_70 = 0x3f800000;
  local_6c = 0x40000000;
  local_68 = 0x3f800000;
  local_58 = 0xbf800000;
  local_54 = 0xc0000000;
  local_50 = 0xbf800000;
  _convolution(pvVar10,puVar8,&local_70,iVar3,iVar4,3,0);
  for (local_e4 = 1; local_e4 < iVar3 + -1; local_e4 = local_e4 + 1) {
    for (local_e8 = 1; local_e8 < iVar4 + -1; local_e8 = local_e8 + 1) {
      iVar1 = local_e4 + iVar3 * local_e8;
      dVar12 = (double)_hypot((double)(int)*(short *)((long)pvVar7 + (long)iVar1 * 2),
                              (double)(int)*(short *)((long)puVar8 + (long)iVar1 * 2));
      *(short *)((long)pvVar6 + (long)iVar1 * 2) = (short)(int)dVar12;
    }
  }
  for (local_f0 = 1; local_f0 < iVar3 + -1; local_f0 = local_f0 + 1) {
    for (local_f4 = 1; local_f4 < iVar4 + -1; local_f4 = local_f4 + 1) {
      iVar1 = local_f0 + iVar3 * local_f4;
      iVar5 = iVar1 - iVar3;
      iVar2 = iVar1 + iVar3;
      dVar12 = (double)_atan2((double)(int)*(short *)((long)puVar8 + (long)iVar1 * 2),
                              (double)(int)*(short *)((long)pvVar7 + (long)iVar1 * 2));
      dVar12 = (double)_fmod(dVar12 + 3.141592653589793);
      fVar11 = (float)(dVar12 / 3.141592653589793) * 8.0;
      if (((((fVar11 <= 1.0) || (7.0 < fVar11)) &&
           (*(short *)((long)pvVar6 + (long)(iVar1 + -1) * 2) <
            *(short *)((long)pvVar6 + (long)iVar1 * 2))) &&
          (*(short *)((long)pvVar6 + (long)(iVar1 + 1) * 2) <
           *(short *)((long)pvVar6 + (long)iVar1 * 2))) ||
         (((((1.0 < fVar11 && (fVar11 <= 3.0)) &&
            ((*(short *)((long)pvVar6 + (long)(iVar5 + 1) * 2) <
              *(short *)((long)pvVar6 + (long)iVar1 * 2) &&
             (*(short *)((long)pvVar6 + (long)(iVar2 + -1) * 2) <
              *(short *)((long)pvVar6 + (long)iVar1 * 2))))) ||
           (((3.0 < fVar11 && (fVar11 <= 5.0)) &&
            ((*(short *)((long)pvVar6 + (long)iVar5 * 2) <
              *(short *)((long)pvVar6 + (long)iVar1 * 2) &&
             (*(short *)((long)pvVar6 + (long)iVar2 * 2) <
              *(short *)((long)pvVar6 + (long)iVar1 * 2))))))) ||
          ((((5.0 < fVar11 && (fVar11 <= 7.0)) &&
            (*(short *)((long)pvVar6 + (long)(iVar5 + -1) * 2) <
             *(short *)((long)pvVar6 + (long)iVar1 * 2))) &&
           (*(short *)((long)pvVar6 + (long)(iVar2 + 1) * 2) <
            *(short *)((long)pvVar6 + (long)iVar1 * 2))))))) {
        *(undefined2 *)((long)pvVar9 + (long)iVar1 * 2) =
             *(undefined2 *)((long)pvVar6 + (long)iVar1 * 2);
      }
      else {
        *(undefined2 *)((long)pvVar9 + (long)iVar1 * 2) = 0;
      }
    }
  }
  ___memset_chk(pvVar10,0,(long)iVar3 * 2 * (long)iVar4);
  ___memset_chk(puVar8,0,(long)iVar3 * 2 * (long)iVar4,0xffffffffffffffff);
  local_130 = 1;
  for (local_134 = 1; local_134 < iVar4 + -1; local_134 = local_134 + 1) {
    for (local_138 = 1; local_138 < iVar3 + -1; local_138 = local_138 + 1) {
      if ((param_5 <= *(short *)((long)pvVar9 + local_130 * 2)) &&
         (*(short *)((long)pvVar10 + local_130 * 2) == 0)) {
        *(undefined2 *)((long)pvVar10 + local_130 * 2) = 0xff;
        local_13c = 1;
        *puVar8 = (int)local_130;
        do {
          local_13c = local_13c + -1;
          iVar1 = puVar8[local_13c];
          local_90[0] = iVar1 - iVar3;
          local_90[1] = iVar1 + iVar3;
          local_90[2] = iVar1 + 1;
          local_90[3] = iVar1 + -1;
          local_90[4] = local_90[0] + 1;
          local_90[5] = local_90[0] + -1;
          local_90[6] = local_90[1] + 1;
          local_90[7] = local_90[1] + -1;
          for (local_144 = 0; local_144 < 8; local_144 = local_144 + 1) {
            if ((param_4 <= *(short *)((long)pvVar9 + (long)local_90[local_144] * 2)) &&
               (*(short *)((long)pvVar10 + (long)local_90[local_144] * 2) == 0)) {
              *(undefined2 *)((long)pvVar10 + (long)local_90[local_144] * 2) = 0xff;
              puVar8[local_13c] = local_90[local_144];
              local_13c = local_13c + 1;
            }
          }
        } while (0 < local_13c);
      }
      local_130 = local_130 + 1;
    }
  }
  _free(pvVar7);
  _free(puVar8);
  _free(pvVar6);
  _free(pvVar9);
  if (*(long *)PTR____stack_chk_guard_100004020 == local_28) {
    return pvVar10;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(int param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  undefined4 local_14;
  
  if (param_1 < 2) {
    _printf("Usage: %s image.bmp\n");
    local_14 = 1;
  }
  else {
    pvVar1 = (void *)_load_bmp(*(undefined8 *)(param_2 + 8),0x100008000);
    if (pvVar1 == (void *)0x0) {
      _fprintf(*(FILE **)PTR____stderrp_100004028,"main: BMP image not loaded.\n");
      local_14 = 1;
    }
    else {
      _printf("Info: %d x %d x %d\n");
      pvVar2 = (void *)_canny_edge_detection(0x3f800000,pvVar1,0x100008000,0x2d,0x32);
      if (pvVar2 == (void *)0x0) {
        _fprintf(*(FILE **)PTR____stderrp_100004028,"main: failed canny_edge_detection.\n");
        local_14 = 1;
      }
      else {
        uVar3 = _save_bmp("out.bmp",0x100008000,pvVar2);
        if ((uVar3 & 1) == 0) {
          _free(pvVar1);
          _free(pvVar2);
          local_14 = 0;
        }
        else {
          _fprintf(*(FILE **)PTR____stderrp_100004028,"main: BMP image not saved.\n");
          local_14 = 1;
        }
      }
    }
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003d0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004010)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004018)();
  return;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan2_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003d48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004040)(param_1);
  return;
}



void _exp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exp_100004048)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004050)((int)param_1);
  return iVar1;
}



void _fmod(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__fmod_100004058)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d78. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004060)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004068)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d90. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004070)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003d9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004078)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fseek(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003da8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fseek_100004080)((int)param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003db4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004088)();
  return sVar1;
}



void _hypot(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dc0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__hypot_100004090)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dcc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004098)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_1000040a0)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003de4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_1000040a8)();
  return;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003df0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_1000040b0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dfc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_1000040b8)((int)param_1);
  return iVar1;
}


