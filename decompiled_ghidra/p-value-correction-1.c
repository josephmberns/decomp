#include "p-value-correction-1.h"



void * _seq_len(uint param_1,uint param_2)

{
  uint uVar1;
  uint local_48;
  uint local_44;
  uint local_34;
  uint local_28;
  uint local_24;
  void *local_18;
  
  if (param_1 == param_2) {
    local_18 = _malloc((ulong)(param_2 + 1) << 2);
    if (local_18 == (void *)0x0) {
      _printf("malloc failed at %s line %u\n");
      _perror("");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
      *(uint *)((long)local_18 + (ulong)local_34 * 4) = local_34 + 1;
    }
  }
  else {
    local_28 = param_2;
    local_24 = param_1;
    if (param_2 < param_1) {
      local_28 = param_1;
      local_24 = param_2;
    }
    uVar1 = local_28 - local_24;
    local_18 = _malloc((ulong)(uVar1 + 1) << 2);
    if (local_18 == (void *)0x0) {
      _printf("malloc failed at %s line %u\n");
      _perror("");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    if (param_1 < param_2) {
      for (local_44 = 0; local_44 <= uVar1; local_44 = local_44 + 1) {
        *(uint *)((long)local_18 + (ulong)local_44 * 4) = local_24 + local_44;
      }
    }
    else {
      for (local_48 = 0; local_48 <= uVar1; local_48 = local_48 + 1) {
        *(uint *)((long)local_18 + (ulong)local_48 * 4) = local_28 - local_48;
      }
    }
  }
  return local_18;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * _order(long param_1,uint param_2,byte param_3)

{
  void *pvVar1;
  uint local_2c;
  
  pvVar1 = _malloc((ulong)param_2 << 2);
  if (pvVar1 == (void *)0x0) {
    _printf("failed to malloc at %s line %u.\n");
    _perror("");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  __base_arr = _malloc((ulong)param_2 * 8);
  if (__base_arr != (void *)0x0) {
    for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
      *(undefined8 *)((long)__base_arr + (ulong)local_2c * 8) =
           *(undefined8 *)(param_1 + (ulong)local_2c * 8);
      *(uint *)((long)pvVar1 + (ulong)local_2c * 4) = local_2c;
    }
    if ((param_3 & 1) == 0) {
      _qsort(pvVar1,(ulong)param_2,4,(int *)FUN_10000168c);
    }
    else if ((param_3 & 1) == 1) {
      _qsort(pvVar1,(ulong)param_2,4,(int *)FUN_100001734);
    }
    _free(__base_arr);
    __base_arr = (void *)0x0;
    return pvVar1;
  }
  _printf("failed to malloc at %s line %u.\n");
  _perror("");
                    // WARNING: Subroutine does not return
  _exit(1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_10000168c(int *param_1,int *param_2)

{
  undefined4 local_4;
  
  if (*(double *)(__base_arr + (long)*param_2 * 8) <= *(double *)(__base_arr + (long)*param_1 * 8))
  {
    if (*(double *)(__base_arr + (long)*param_1 * 8) == *(double *)(__base_arr + (long)*param_2 * 8)
       ) {
      local_4 = 0;
    }
    else {
      local_4 = 1;
    }
  }
  else {
    local_4 = 0xffffffff;
  }
  return local_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_100001734(int *param_1,int *param_2)

{
  undefined4 local_4;
  
  if (*(double *)(__base_arr + (long)*param_2 * 8) <= *(double *)(__base_arr + (long)*param_1 * 8))
  {
    if (*(double *)(__base_arr + (long)*param_1 * 8) == *(double *)(__base_arr + (long)*param_2 * 8)
       ) {
      local_4 = 0;
    }
    else {
      local_4 = 0xffffffff;
    }
  }
  else {
    local_4 = 1;
  }
  return local_4;
}



void * _cummin(double *param_1,uint param_2)

{
  void *pvVar1;
  uint local_34;
  double local_30;
  
  if (param_2 == 0) {
    _puts("cummin function requires at least one element.\n");
    _printf("Failed at %s line %u\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  pvVar1 = _malloc((ulong)param_2 * 8);
  if (pvVar1 == (void *)0x0) {
    _printf("failed to malloc at %s line %u.\n");
    _perror("");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  local_30 = *param_1;
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    if (param_1[local_34] < local_30) {
      local_30 = param_1[local_34];
    }
    *(double *)((long)pvVar1 + (ulong)local_34 * 8) = local_30;
  }
  return pvVar1;
}



void * _cummax(double *param_1,uint param_2)

{
  void *pvVar1;
  uint local_34;
  double local_30;
  
  if (param_2 == 0) {
    _puts("function requires at least one element.\n");
    _printf("Failed at %s line %u\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  pvVar1 = _malloc((ulong)param_2 * 8);
  if (pvVar1 == (void *)0x0) {
    _printf("failed to malloc at %s line %u.\n");
    _perror("");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  local_30 = *param_1;
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    if (local_30 < param_1[local_34]) {
      local_30 = param_1[local_34];
    }
    *(double *)((long)pvVar1 + (ulong)local_34 * 8) = local_30;
  }
  return pvVar1;
}



void * _pminx(double param_1,long param_2,uint param_3)

{
  void *pvVar1;
  uint local_34;
  
  if (param_3 == 0) {
    _puts("pmin requires at least one element.\n");
    _printf("Failed at %s line %u\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  pvVar1 = _malloc((ulong)param_3 * 8);
  if (pvVar1 == (void *)0x0) {
    _printf("failed to malloc at %s line %u.\n");
    _perror("");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  for (local_34 = 0; local_34 < param_3; local_34 = local_34 + 1) {
    if (param_1 <= *(double *)(param_2 + (ulong)local_34 * 8)) {
      *(double *)((long)pvVar1 + (ulong)local_34 * 8) = param_1;
    }
    else {
      *(undefined8 *)((long)pvVar1 + (ulong)local_34 * 8) =
           *(undefined8 *)(param_2 + (ulong)local_34 * 8);
    }
  }
  return pvVar1;
}



int _double_say(undefined8 param_1,ulong param_2)

{
  int iVar1;
  uint local_24;
  
  _printf("[1] %e");
  for (local_24 = 1; local_24 < param_2; local_24 = local_24 + 1) {
    _printf(" %.10f");
    if ((local_24 + 1) % 5 == 0) {
      _printf("\n[%u]");
    }
  }
  iVar1 = _puts("\n");
  return iVar1;
}



void * _uint2double(long param_1,uint param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  uint local_2c;
  
  pvVar1 = _malloc((ulong)param_2 * 8);
  if (pvVar1 == (void *)0x0) {
    _printf("Failure to malloc at %s line %u.\n");
    _perror("");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    uVar2 = NEON_ucvtf((ulong)*(uint *)(param_1 + (ulong)local_2c * 4));
    *(undefined8 *)((long)pvVar1 + (ulong)local_2c * 8) = uVar2;
  }
  return pvVar1;
}



undefined  [16] _min2(double param_1,double param_2)

{
  undefined auVar1 [16];
  double local_8;
  
  local_8 = param_2;
  if (param_1 < param_2) {
    local_8 = param_1;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_8;
  return auVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

void * _p_adjust(long param_1,uint param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  double *pdVar6;
  uint *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  uint local_1bc;
  uint local_19c;
  uint local_190;
  uint local_18c;
  double local_188;
  uint local_174;
  uint local_15c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_12c;
  double local_128;
  uint local_11c;
  uint local_100;
  uint local_fc;
  uint local_ec;
  double local_e8;
  uint local_bc;
  uint local_a4;
  uint local_7c;
  uint local_54;
  short local_42;
  void *local_28;
  
  if (param_2 == 0) {
    _puts("p_adjust requires at least one element.\n");
    _printf("Failed at %s line %u\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  if (param_3 == (char *)0x0) {
    local_42 = 0;
  }
  else {
    iVar2 = _strcasecmp(param_3,"BH");
    if (iVar2 == 0) {
      local_42 = 0;
    }
    else {
      iVar2 = _strcasecmp(param_3,"fdr");
      if (iVar2 == 0) {
        local_42 = 0;
      }
      else {
        iVar2 = _strcasecmp(param_3,"by");
        if (iVar2 == 0) {
          local_42 = 1;
        }
        else {
          iVar2 = _strcasecmp(param_3,"Bonferroni");
          if (iVar2 == 0) {
            local_42 = 2;
          }
          else {
            iVar2 = _strcasecmp(param_3,"hochberg");
            if (iVar2 == 0) {
              local_42 = 3;
            }
            else {
              iVar2 = _strcasecmp(param_3,"holm");
              if (iVar2 == 0) {
                local_42 = 4;
              }
              else {
                iVar2 = _strcasecmp(param_3,"hommel");
                if (iVar2 != 0) {
                  _printf("%s doesn\'t match any accepted FDR methods.\n");
                  _printf("Failed at %s line %u\n");
                    // WARNING: Subroutine does not return
                  _exit(1);
                }
                local_42 = 5;
              }
            }
          }
        }
      }
    }
  }
  if (local_42 == 2) {
    local_28 = _malloc((ulong)param_2 * 8);
    if (local_28 == (void *)0x0) {
      _printf("failed to malloc at %s line %u.\n");
      _perror("");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    for (local_54 = 0; local_54 < param_2; local_54 = local_54 + 1) {
      dVar10 = (double)NEON_ucvtf((ulong)param_2);
      dVar10 = *(double *)(param_1 + (ulong)local_54 * 8) * dVar10;
      if (dVar10 < 1.0) {
        if ((dVar10 < 0.0) || (1.0 <= dVar10)) {
          _printf("%g is outside of the interval I planned.\n");
          _printf("Failure at %s line %u\n");
                    // WARNING: Subroutine does not return
          _exit(1);
        }
        *(double *)((long)local_28 + (ulong)local_54 * 8) = dVar10;
      }
      else {
        *(undefined8 *)((long)local_28 + (ulong)local_54 * 8) = 0x3ff0000000000000;
      }
    }
  }
  else if (local_42 == 4) {
    pvVar3 = (void *)_order(param_1,param_2,0);
    pvVar4 = (void *)_uint2double(pvVar3,param_2);
    pvVar5 = _malloc((ulong)param_2 * 8);
    for (local_7c = 0; local_7c < param_2; local_7c = local_7c + 1) {
      *(double *)((long)pvVar5 + (ulong)local_7c * 8) =
           (double)(param_2 - local_7c) *
           *(double *)(param_1 + (ulong)*(uint *)((long)pvVar3 + (ulong)local_7c * 4) * 8);
    }
    _free(pvVar3);
    pvVar3 = (void *)_order(pvVar4,param_2,0);
    _free(pvVar4);
    pvVar4 = (void *)_cummax(pvVar5,param_2);
    _free(pvVar5);
    pvVar5 = (void *)_pminx(0x3ff0000000000000,pvVar4,param_2);
    _free(pvVar4);
    local_28 = _malloc((ulong)param_2 * 8);
    for (local_a4 = 0; local_a4 < param_2; local_a4 = local_a4 + 1) {
      *(undefined8 *)((long)local_28 + (ulong)local_a4 * 8) =
           *(undefined8 *)((long)pvVar5 + (ulong)*(uint *)((long)pvVar3 + (ulong)local_a4 * 4) * 8);
    }
    _free(pvVar5);
    _free(pvVar3);
  }
  else if (local_42 == 5) {
    pvVar3 = (void *)_order(param_1,param_2,0);
    pdVar6 = (double *)_malloc((ulong)param_2 * 8);
    if (pdVar6 == (double *)0x0) {
      _printf("failed to malloc at %s line %u.\n");
      _perror("");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    for (local_bc = 0; local_bc < param_2; local_bc = local_bc + 1) {
      pdVar6[local_bc] =
           *(double *)(param_1 + (ulong)*(uint *)((long)pvVar3 + (ulong)local_bc * 4) * 8);
    }
    pvVar4 = (void *)_uint2double(pvVar3,param_2);
    _free(pvVar3);
    pvVar3 = (void *)_order(pvVar4,param_2,0);
    _free(pvVar4);
    local_28 = _malloc((ulong)param_2 * 8);
    if (local_28 == (void *)0x0) {
      _printf("failed to malloc at %s line %u.\n");
      _perror("");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    pvVar4 = _malloc((ulong)param_2 * 8);
    if (pvVar4 == (void *)0x0) {
      _printf("failed to malloc at %s line %u.\n");
      _perror("");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    local_e8 = (double)NEON_ucvtf((ulong)param_2);
    local_e8 = local_e8 * *pdVar6;
    for (local_ec = 1; local_ec < param_2; local_ec = local_ec + 1) {
      dVar10 = (double)NEON_ucvtf((ulong)param_2);
      dVar10 = (dVar10 * pdVar6[local_ec]) / (double)(local_ec + 1);
      if (dVar10 < local_e8) {
        local_e8 = dVar10;
      }
    }
    for (local_fc = 0; uVar1 = param_2, local_fc < param_2; local_fc = local_fc + 1) {
      *(double *)((long)pvVar4 + (ulong)local_fc * 8) = local_e8;
      *(double *)((long)local_28 + (ulong)local_fc * 8) = local_e8;
    }
    while (local_100 = uVar1 - 1, 1 < local_100) {
      pvVar5 = (void *)_seq_len(0,param_2 - local_100);
      uVar8 = (ulong)(uVar1 - 2);
      puVar7 = (uint *)_malloc(uVar8 << 2);
      for (local_11c = 0; local_11c < uVar8; local_11c = local_11c + 1) {
        puVar7[local_11c] = (param_2 - local_100) + local_11c + 1;
      }
      dVar10 = (double)NEON_ucvtf((ulong)local_100);
      local_128 = (dVar10 * pdVar6[*puVar7]) / 2.0;
      for (local_12c = 1; local_12c < uVar8; local_12c = local_12c + 1) {
        dVar10 = (double)NEON_ucvtf((ulong)local_100);
        dVar10 = (dVar10 * pdVar6[puVar7[local_12c]]) / (double)(local_12c + 2);
        if (dVar10 < local_128) {
          local_128 = dVar10;
        }
      }
      for (local_13c = 0; local_13c < (param_2 - local_100) + 1; local_13c = local_13c + 1) {
        dVar10 = (double)NEON_ucvtf((ulong)local_100);
        uVar9 = _min2(dVar10 * pdVar6[*(uint *)((long)pvVar5 + (ulong)local_13c * 4)],local_128);
        *(undefined8 *)((long)local_28 + (ulong)*(uint *)((long)pvVar5 + (ulong)local_13c * 4) * 8)
             = uVar9;
      }
      _free(pvVar5);
      for (local_140 = 0; local_140 < uVar8; local_140 = local_140 + 1) {
        *(undefined8 *)((long)local_28 + (ulong)puVar7[local_140] * 8) =
             *(undefined8 *)((long)local_28 + (ulong)(param_2 - local_100) * 8);
      }
      _free(puVar7);
      for (local_144 = 0; uVar1 = local_100, local_144 < param_2; local_144 = local_144 + 1) {
        if (*(double *)((long)pvVar4 + (ulong)local_144 * 8) <
            *(double *)((long)local_28 + (ulong)local_144 * 8)) {
          *(undefined8 *)((long)pvVar4 + (ulong)local_144 * 8) =
               *(undefined8 *)((long)local_28 + (ulong)local_144 * 8);
        }
      }
    }
    _free(pdVar6);
    for (local_148 = 0; local_148 < param_2; local_148 = local_148 + 1) {
      *(undefined8 *)((long)local_28 + (ulong)local_148 * 8) =
           *(undefined8 *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar3 + (ulong)local_148 * 4) * 8)
      ;
    }
    _free(pvVar3);
    _free(pvVar4);
  }
  else {
    pvVar3 = (void *)_order(param_1,param_2,1);
    if (pvVar3 == (void *)0x0) {
      _printf("failed to malloc at %s line %u.\n");
      _perror("");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    pvVar4 = (void *)_uint2double(pvVar3,param_2);
    for (local_15c = 0; local_15c < param_2; local_15c = local_15c + 1) {
      if ((*(double *)(param_1 + (ulong)local_15c * 8) < 0.0) ||
         (1.0 < *(double *)(param_1 + (ulong)local_15c * 8))) {
        _printf("array[%u] = %lf, which is outside the interval [0,1]\n");
        _printf("died at %s line %u\n");
                    // WARNING: Subroutine does not return
        _exit(1);
      }
    }
    pvVar5 = (void *)_order(pvVar4,param_2,0);
    if (pvVar5 == (void *)0x0) {
      _printf("failed to malloc at %s line %u.\n");
      _perror("");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    _free(pvVar4);
    pvVar4 = _malloc((ulong)param_2 * 8);
    if (local_42 == 0) {
      for (local_174 = 0; local_174 < param_2; local_174 = local_174 + 1) {
        dVar10 = (double)NEON_ucvtf((ulong)param_2);
        *(double *)((long)pvVar4 + (ulong)local_174 * 8) =
             (dVar10 / (double)(param_2 - local_174)) *
             *(double *)(param_1 + (ulong)*(uint *)((long)pvVar3 + (ulong)local_174 * 4) * 8);
      }
    }
    else if (local_42 == 1) {
      local_188 = 1.0;
      for (local_18c = 2; local_18c < param_2 + 1; local_18c = local_18c + 1) {
        dVar10 = (double)NEON_ucvtf((ulong)local_18c);
        local_188 = local_188 + 1.0 / dVar10;
      }
      for (local_190 = 0; local_190 < param_2; local_190 = local_190 + 1) {
        dVar10 = (double)NEON_ucvtf((ulong)param_2);
        *(double *)((long)pvVar4 + (ulong)local_190 * 8) =
             local_188 * (dVar10 / (double)(param_2 - local_190)) *
             *(double *)(param_1 + (ulong)*(uint *)((long)pvVar3 + (ulong)local_190 * 4) * 8);
      }
    }
    else if (local_42 == 3) {
      for (local_19c = 0; local_19c < param_2; local_19c = local_19c + 1) {
        *(double *)((long)pvVar4 + (ulong)local_19c * 8) =
             (double)(local_19c + 1) *
             *(double *)(param_1 + (ulong)*(uint *)((long)pvVar3 + (ulong)local_19c * 4) * 8);
      }
    }
    _free(pvVar3);
    pvVar3 = (void *)_cummin(pvVar4,param_2);
    _free(pvVar4);
    pvVar4 = (void *)_pminx(0x3ff0000000000000,pvVar3,param_2);
    _free(pvVar3);
    local_28 = _malloc((ulong)param_2 << 3);
    for (local_1bc = 0; local_1bc < param_2; local_1bc = local_1bc + 1) {
      *(undefined8 *)((long)local_28 + (ulong)local_1bc * 8) =
           *(undefined8 *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + (ulong)local_1bc * 4) * 8)
      ;
    }
    _free(pvVar5);
    _free(pvVar4);
  }
  return local_28;
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  uint local_b64;
  ushort local_b4e;
  undefined8 auStack_b48 [6];
  undefined auStack_b18 [2400];
  undefined auStack_1b8 [400];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_1b8,&DAT_1000034a0,400);
  _memcpy(auStack_b18,&DAT_100003630,0x960);
  pvVar2 = _memcpy(auStack_b48,&PTR_s_bh_100004058,0x30);
  for (local_b4e = 0; local_b4e < 6; local_b4e = local_b4e + 1) {
    pvVar2 = (void *)_p_adjust(auStack_1b8,0x32,auStack_b48[local_b4e]);
    for (local_b64 = 1; local_b64 < 0x32; local_b64 = local_b64 + 1) {
    }
    _double_say(pvVar2,0x32);
    _free(pvVar2);
    uVar1 = _printf("\ntype %u = \'%s\' has cumulative error of %g\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x0001000031bc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001000031c8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001000031d4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001000031e0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001000031ec. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001000031f8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003204. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003210. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x00010000321c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004048)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcasecmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003228. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcasecmp_100004050)((int)param_1);
  return iVar1;
}


