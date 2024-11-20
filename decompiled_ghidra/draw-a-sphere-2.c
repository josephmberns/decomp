#include "draw-a-sphere-2.h"



void _noise_init(void)

{
  int local_4;
  
  for (local_4 = 1; local_4 < 8; local_4 = local_4 + 1) {
    *(double *)(&_scale + (long)local_4 * 8) = 1.0 / (SQRT((double)(local_4 + 1)) + 1.0);
    *(double *)(&_scale_u + (long)local_4 * 8) =
         *(double *)(&_scale + (long)local_4 * 8) / SQRT((double)(local_4 + 1));
  }
  return;
}



undefined  [16] _noise(long param_1,int param_2)

{
  int iVar1;
  double dVar2;
  undefined auVar3 [16];
  double dVar4;
  double local_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  int local_dc;
  int local_d8;
  double adStack_c8 [8];
  int aiStack_88 [8];
  int aiStack_68 [8];
  int aiStack_48 [8];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_e8 = 0.0;
  for (local_dc = 0; local_dc < param_2; local_dc = local_dc + 1) {
    local_e8 = local_e8 + *(double *)(param_1 + (long)local_dc * 8);
  }
  dVar4 = *(double *)(&_scale + (long)param_2 * 8);
  for (local_d8 = 0; local_d8 < param_2; local_d8 = local_d8 + 1) {
    aiStack_68[local_d8] = local_d8;
    dVar2 = *(double *)(param_1 + (long)local_d8 * 8) + local_e8 * dVar4;
    iVar1 = (int)dVar2;
    aiStack_48[local_d8] = iVar1;
    adStack_c8[local_d8] = dVar2 - (double)iVar1;
  }
  aiStack_68[param_2] = 0;
  for (local_d8 = 0; local_d8 < param_2 + -1; local_d8 = local_d8 + 1) {
    for (local_dc = local_d8; local_dc < param_2; local_dc = local_dc + 1) {
      if (adStack_c8[aiStack_68[local_d8]] < adStack_c8[aiStack_68[local_dc]]) {
        iVar1 = aiStack_68[local_d8];
        aiStack_68[local_d8] = aiStack_68[local_dc];
        aiStack_68[local_dc] = iVar1;
      }
    }
  }
  local_108 = 0.0;
  local_e8 = 0.0;
  for (local_dc = 0; local_dc < param_2; local_dc = local_dc + 1) {
    local_e8 = local_e8 + (double)(long)aiStack_48[local_dc];
  }
  local_e8 = local_e8 * *(double *)(&_scale_u + (long)param_2 * 8);
  for (local_d8 = 0; local_d8 <= param_2; local_d8 = local_d8 + 1) {
    for (local_dc = 0; local_dc < param_2; local_dc = local_dc + 1) {
      adStack_c8[local_dc] =
           (*(double *)(param_1 + (long)local_dc * 8) + local_e8) -
           (double)(long)aiStack_48[local_dc];
    }
    local_f8 = ((double)(long)param_2 + 1.0) / (double)(param_2 * 2);
    local_dc = 0;
    while ((local_dc < param_2 &&
           (local_f8 = (double)NEON_fmsub(adStack_c8[local_dc],adStack_c8[local_dc],local_f8),
           0.0 < local_f8))) {
      local_dc = local_dc + 1;
    }
    if (0.0 <= local_f8) {
      local_f0 = 0.0;
      FUN_100003808(aiStack_48,aiStack_88,param_2);
      for (local_dc = 0; local_dc < param_2; local_dc = local_dc + 1) {
        if (aiStack_88[local_dc] != 0) {
          if (aiStack_88[local_dc] == 1) {
            local_110 = adStack_c8[local_dc];
          }
          else {
            local_110 = -adStack_c8[local_dc];
          }
          local_f0 = local_f0 + local_110;
        }
      }
      local_108 = (double)NEON_fmadd(local_f0 * local_f8 * local_f8,local_f8 * local_f8,local_108);
    }
    if (local_d8 < param_2) {
      aiStack_48[aiStack_68[local_d8]] = aiStack_48[aiStack_68[local_d8]] + 1;
      local_e8 = local_e8 + *(double *)(&_scale_u + (long)param_2 * 8);
    }
  }
  auVar3._0_8_ = local_108 * (double)(param_2 * param_2);
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    auVar3._8_8_ = 0;
    return auVar3;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void FUN_100003808(uint *param_1,long param_2,int param_3)

{
  int local_2c;
  uint *local_28;
  uint local_18;
  
  local_18 = 0x12345678;
  local_2c = param_3;
  local_28 = param_1;
  while (local_2c != 0) {
    local_18 = local_18 +
               ((local_18 >> 0x11 | local_18 << 0xf) ^ (*local_28 >> 0x1b | *local_28 << 5));
    local_2c = local_2c + -1;
    local_28 = local_28 + 1;
  }
  local_18 = local_18 ^ (local_18 >> 0x19 | local_18 << 7);
  local_18 = local_18 + (local_18 >> 9 | local_18 << 0x17);
  local_18 = local_18 ^ (local_18 >> 0xd | local_18 * 0x80000);
  local_18 = local_18 + (local_18 >> 0x15 | local_18 << 0xb);
  local_18 = local_18 ^ (local_18 >> 0x13 | local_18 * 0x2000);
  local_18 = local_18 + (local_18 >> 0xf | local_18 << 0x11);
  local_2c = param_3;
  while (local_2c != 0) {
    *(undefined4 *)(param_2 + (long)(local_2c + -1) * 4) = (&_g)[local_18 & 3];
    local_18 = local_18 >> 2;
    local_2c = local_2c + -1;
  }
  return;
}



undefined  [16] _get_noise2(double param_1,double param_2)

{
  double dVar1;
  undefined auVar2 [16];
  double local_48;
  int local_40;
  int local_3c;
  double local_28;
  double local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_48 = 0.0;
  local_40 = 0;
  for (local_3c = 1; local_3c < 0x81; local_3c = local_3c << 1) {
    local_28 = param_1 * (double)(long)local_3c;
    local_20 = param_2 * (double)(long)local_3c;
    dVar1 = (double)_noise(&local_28,2);
    local_48 = local_48 + dVar1;
    local_40 = local_40 + 1;
  }
  auVar2._0_8_ = local_48 / (double)(long)local_40;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined  [16] _get_noise3(double param_1,double param_2,double param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  double local_58;
  int local_50;
  int local_4c;
  double local_30;
  double local_28;
  double local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_58 = 0.0;
  local_50 = 0;
  for (local_4c = 1; local_4c < 0x21; local_4c = local_4c << 1) {
    local_30 = param_1 * (double)(long)local_4c;
    local_28 = param_2 * (double)(long)local_4c;
    local_20 = param_3 * (double)(long)local_4c;
    uVar1 = _noise(&local_30,3);
    local_58 = (double)NEON_fmadd(uVar1,1.0 / SQRT((double)(long)local_4c),local_58);
    local_50 = (int)((double)(long)local_50 + 1.0 / SQRT((double)(long)local_4c));
  }
  auVar2._0_8_ = local_58 / (double)(long)local_50;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined8 entry(void)

{
  int iVar1;
  FILE *pFVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dStack_10068;
  int iStack_10048;
  int iStack_10044;
  undefined *puStack_10040;
  undefined auStack_10028 [65544];
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar3 = *(long *)PTR____stack_chk_guard_100004010;
  _noise_init();
  puStack_10040 = auStack_10028;
  for (iStack_10044 = 0; iStack_10044 < 0x10000; iStack_10044 = iStack_10044 + 1) {
    *puStack_10040 = 0;
    puStack_10040 = puStack_10040 + 1;
  }
  puStack_10040 = auStack_10028;
  for (iStack_10044 = 0; iStack_10044 < 0x100; iStack_10044 = iStack_10044 + 1) {
    dVar4 = (double)(iStack_10044 + -0x80) / 125.0;
    for (iStack_10048 = 0; iStack_10048 < 0x100; iStack_10048 = iStack_10048 + 1) {
      dVar5 = (double)(iStack_10048 + -0x80) / 125.0;
      dVar6 = (double)_get_noise2((double)(long)iStack_10044 / 256.0,
                                  (double)(long)iStack_10048 / 256.0);
      *puStack_10040 = (char)(int)(((dVar6 + 1.0) / 6.0) * (double)(long)iStack_10044);
      uVar8 = NEON_fmsub(dVar5,dVar5,0x3ff0000000000000);
      dVar6 = (double)NEON_fmsub(dVar4,dVar4,uVar8);
      if (0.0 <= dVar6) {
        dVar7 = (double)_get_noise3(dVar5,dVar4,SQRT(dVar6));
        dStack_10068 = ((dVar7 + 1.0) / 2.0) * ((((dVar5 + 1.0) - dVar4) + SQRT(dVar6)) / 3.5);
        if (dStack_10068 < 0.0) {
          dStack_10068 = 0.0;
        }
        *puStack_10040 = (char)(int)(dStack_10068 * 255.0);
      }
      puStack_10040 = puStack_10040 + 1;
    }
  }
  pFVar2 = _fopen("out.pgm","w+");
  _fprintf(pFVar2,"P5\n256 256\n255\n");
  _fwrite(auStack_10028,1,0x10000,pFVar2);
  iVar1 = _fclose(pFVar2);
  if (*(long *)PTR____stack_chk_guard_100004010 == lVar3) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004030)();
  return sVar1;
}


