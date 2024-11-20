#include "k-means++-clustering.h"



void * _gen_xy(double param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int local_24;
  
  pvVar2 = _malloc((long)param_2 * 0x18);
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    iVar1 = _rand();
    dVar3 = ((double)iVar1 * 6.283185307179586) / 2147483646.0;
    iVar1 = _rand();
    dVar4 = (param_1 * (double)iVar1) / 2147483646.0;
    dVar5 = (double)_cos(dVar3);
    *(double *)((long)pvVar2 + (long)local_24 * 0x18) = dVar4 * dVar5;
    dVar3 = (double)_sin(dVar3);
    *(double *)((long)pvVar2 + (long)local_24 * 0x18 + 8) = dVar4 * dVar3;
  }
  return pvVar2;
}



undefined  [16] _dist2(double *param_1,double *param_2)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = NEON_fmadd(*param_1 - *param_2,*param_1 - *param_2,
                            (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]));
  auVar1._8_8_ = 0;
  return auVar1;
}



int _nearest(long param_1,long param_2,int param_3)

{
  double dVar1;
  undefined8 local_40;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_40 = INFINITY;
  local_2c = *(int *)(param_1 + 0x10);
  for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
    dVar1 = (double)_dist2(param_2 + (long)local_28 * 0x18,param_1);
    if (dVar1 < local_40) {
      local_2c = local_28;
      local_40 = dVar1;
    }
  }
  return local_2c;
}



undefined  [16] _nearestDistance(undefined8 param_1,long param_2,int param_3)

{
  double dVar1;
  undefined auVar2 [16];
  undefined8 local_38;
  undefined4 local_28;
  
  local_38 = INFINITY;
  for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
    dVar1 = (double)_dist2(param_2 + (long)local_28 * 0x18,param_1);
    if (dVar1 < local_38) {
      local_38 = dVar1;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_38;
  return auVar2;
}



int _bisectionSearch(double param_1,double *param_2,int param_3)

{
  int local_2c;
  int local_28;
  int local_24;
  int local_4;
  
  if (param_3 < 1) {
    local_4 = 0;
  }
  else if (*param_2 <= param_1) {
    if (param_1 <= param_2[param_3 + -1]) {
      local_24 = 0;
      local_28 = param_3 + -1;
      local_2c = local_28;
      while (local_2c = local_2c / 2, local_2c != local_24) {
        if (param_1 < param_2[local_2c]) {
          local_28 = local_2c;
        }
        else {
          local_24 = local_2c;
        }
        local_2c = local_24 + local_28;
      }
      if (param_2[local_2c] <= param_1) {
        local_2c = local_28;
      }
      local_4 = local_2c;
    }
    else {
      local_4 = param_3 + -1;
    }
  }
  else {
    local_4 = 0;
  }
  return local_4;
}



void _kppFaster(long param_1,int param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  double dVar9;
  double local_40;
  int local_38;
  int local_30;
  
  pvVar6 = _malloc((long)param_2 * 8);
  pvVar7 = _malloc((long)param_2 * 8);
  iVar3 = _rand();
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = iVar3 / param_2;
  }
  puVar1 = (undefined8 *)(param_1 + (long)(iVar3 - iVar4 * param_2) * 0x18);
  uVar8 = *puVar1;
  param_3[1] = puVar1[1];
  *param_3 = uVar8;
  param_3[2] = puVar1[2];
  for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
    *(undefined8 *)((long)pvVar7 + (long)local_30 * 8) = 0x7ff0000000000000;
  }
  for (local_38 = 1; local_38 < param_4; local_38 = local_38 + 1) {
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      dVar9 = (double)_dist2(param_1 + (long)local_30 * 0x18,param_3 + (long)(local_38 + -1) * 3);
      if (dVar9 < *(double *)((long)pvVar7 + (long)local_30 * 8)) {
        *(double *)((long)pvVar7 + (long)local_30 * 8) = dVar9;
      }
    }
    local_40 = 0.0;
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      local_40 = local_40 + *(double *)((long)pvVar7 + (long)local_30 * 8);
      *(double *)((long)pvVar6 + (long)local_30 * 8) = local_40;
    }
    iVar4 = _rand();
    iVar4 = _bisectionSearch((double)((float)iVar4 / 2.1474836e+09) * local_40,pvVar6,param_2);
    puVar1 = param_3 + (long)local_38 * 3;
    puVar2 = (undefined8 *)(param_1 + (long)iVar4 * 0x18);
    uVar8 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar8;
    puVar1[2] = puVar2[2];
  }
  for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
    uVar5 = _nearest(param_1 + (long)local_30 * 0x18,param_3,param_4);
    *(undefined4 *)(param_1 + (long)local_30 * 0x18 + 0x10) = uVar5;
  }
  _free(pvVar7);
  _free(pvVar6);
  return;
}



void _kpp(long param_1,int param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double local_40;
  int local_34;
  int local_30;
  
  pvVar5 = _malloc((long)param_2 * 8);
  iVar2 = _rand();
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = iVar2 / param_2;
  }
  puVar6 = (undefined8 *)(param_1 + (long)(iVar2 - iVar3 * param_2) * 0x18);
  uVar7 = *puVar6;
  param_3[1] = puVar6[1];
  *param_3 = uVar7;
  param_3[2] = puVar6[2];
  local_34 = 1;
  do {
    if (param_4 <= local_34) {
      for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
        uVar4 = _nearest(param_1 + (long)local_30 * 0x18,param_3,param_4);
        *(undefined4 *)(param_1 + (long)local_30 * 0x18 + 0x10) = uVar4;
      }
      _free(pvVar5);
      return;
    }
    local_40 = 0.0;
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      uVar7 = _nearestDistance(param_1 + (long)local_30 * 0x18,param_3,local_34);
      *(undefined8 *)((long)pvVar5 + (long)local_30 * 8) = uVar7;
      local_40 = local_40 + *(double *)((long)pvVar5 + (long)local_30 * 8);
    }
    iVar3 = _rand();
    local_40 = (local_40 * (double)iVar3) / 2147483646.0;
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      local_40 = local_40 - *(double *)((long)pvVar5 + (long)local_30 * 8);
      if (local_40 <= 0.0) {
        puVar6 = param_3 + (long)local_34 * 3;
        puVar1 = (undefined8 *)(param_1 + (long)local_30 * 0x18);
        uVar7 = *puVar1;
        puVar6[1] = puVar1[1];
        *puVar6 = uVar7;
        puVar6[2] = puVar1[2];
        break;
      }
    }
    local_34 = local_34 + 1;
  } while( true );
}



void * _lloyd(long param_1,int param_2,int param_3,int param_4)

{
  double *pdVar1;
  int iVar2;
  int local_38;
  int local_30;
  int local_2c;
  void *local_18;
  
  if (((param_3 == 1) || (param_2 < 1)) || (param_2 < param_3)) {
    local_18 = (void *)0x0;
  }
  else {
    local_18 = _malloc((long)param_3 * 0x18);
    local_2c = param_4;
    if (param_4 < 1) {
      local_2c = 1;
    }
    _kppFaster(param_1,param_2,local_18,param_3);
    do {
      for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 1) {
        *(undefined4 *)((long)local_18 + (long)local_30 * 0x18 + 0x10) = 0;
        *(undefined8 *)((long)local_18 + (long)local_30 * 0x18) = 0;
        *(undefined8 *)((long)local_18 + (long)local_30 * 0x18 + 8) = 0;
      }
      for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
        iVar2 = *(int *)(param_1 + (long)local_30 * 0x18 + 0x10);
        *(int *)((long)local_18 + (long)iVar2 * 0x18 + 0x10) =
             *(int *)((long)local_18 + (long)iVar2 * 0x18 + 0x10) + 1;
        pdVar1 = (double *)((long)local_18 + (long)iVar2 * 0x18);
        *pdVar1 = *pdVar1 + *(double *)(param_1 + (long)local_30 * 0x18);
        *(double *)((long)local_18 + (long)iVar2 * 0x18 + 8) =
             *(double *)((long)local_18 + (long)iVar2 * 0x18 + 8) +
             *(double *)(param_1 + (long)local_30 * 0x18 + 8);
      }
      for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 1) {
        pdVar1 = (double *)((long)local_18 + (long)local_30 * 0x18);
        *pdVar1 = *pdVar1 / (double)(long)*(int *)((long)local_18 + (long)local_30 * 0x18 + 0x10);
        *(double *)((long)local_18 + (long)local_30 * 0x18 + 8) =
             *(double *)((long)local_18 + (long)local_30 * 0x18 + 8) /
             (double)(long)*(int *)((long)local_18 + (long)local_30 * 0x18 + 0x10);
      }
      local_38 = 0;
      for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
        iVar2 = _nearest(param_1 + (long)local_30 * 0x18,local_18,param_3);
        if (iVar2 != *(int *)(param_1 + (long)local_30 * 0x18 + 0x10)) {
          *(int *)(param_1 + (long)local_30 * 0x18 + 0x10) = iVar2;
          local_38 = local_38 + 1;
        }
      }
      local_2c = local_2c + -1;
    } while (param_2 / 1000 < local_38 && 0 < local_2c);
    for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 1) {
      *(int *)((long)local_18 + (long)local_30 * 0x18 + 0x10) = local_30;
    }
  }
  return local_18;
}



void _print_eps(long param_1,int param_2,long param_3,int param_4)

{
  void *pvVar1;
  double dVar2;
  double dVar3;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  int local_34;
  int local_30;
  
  pvVar1 = _malloc((long)param_4 * 0x18);
  for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
    *(double *)((long)pvVar1 + (long)(local_30 * 3) * 8) =
         (double)(((local_30 + 1) * 3) % 0xb) / 11.0;
    *(double *)((long)pvVar1 + (long)(local_30 * 3 + 1) * 8) = (double)((local_30 * 7) % 0xb) / 11.0
    ;
    *(double *)((long)pvVar1 + (long)(local_30 * 3 + 2) * 8) = (double)((local_30 * 9) % 0xb) / 11.0
    ;
  }
  local_58 = -INFINITY;
  local_48 = -INFINITY;
  local_50 = INFINITY;
  local_40 = INFINITY;
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    if (local_48 < *(double *)(param_1 + (long)local_34 * 0x18)) {
      local_48 = *(double *)(param_1 + (long)local_34 * 0x18);
    }
    if (*(double *)(param_1 + (long)local_34 * 0x18) < local_40) {
      local_40 = *(double *)(param_1 + (long)local_34 * 0x18);
    }
    if (local_58 < *(double *)(param_1 + (long)local_34 * 0x18 + 8)) {
      local_58 = *(double *)(param_1 + (long)local_34 * 0x18 + 8);
    }
    if (*(double *)(param_1 + (long)local_34 * 0x18 + 8) < local_50) {
      local_50 = *(double *)(param_1 + (long)local_34 * 0x18 + 8);
    }
  }
  local_60 = 400.0 / (local_48 - local_40);
  if (400.0 / (local_58 - local_50) < local_60) {
    local_60 = 400.0 / (local_58 - local_50);
  }
  dVar2 = (local_48 + local_40) / 2.0;
  dVar3 = (local_58 + local_50) / 2.0;
  _printf("%%!PS-Adobe-3.0\n%%%%BoundingBox: -5 -5 %d %d\n");
  _printf(
         "/l {rlineto} def /m {rmoveto} def\n/c { .25 sub exch .25 sub exch .5 0 360 arc fill } def\n/s { moveto -2 0 m 2 2 l 2 -2 l -2 -2 l closepath \tgsave 1 setgray fill grestore gsave 3 setlinewidth 1 setgray stroke grestore 0 setgray stroke }def\n"
         );
  for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
    _printf("%g %g %g setrgbcolor\n");
    for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
      if (*(int *)(param_1 + (long)local_34 * 0x18 + 0x10) == local_30) {
        NEON_fmadd(*(double *)(param_1 + (long)local_34 * 0x18) - dVar2,local_60,0x4069000000000000)
        ;
        NEON_fmadd(*(double *)(param_1 + (long)local_34 * 0x18 + 8) - dVar3,local_60,
                   0x4069000000000000);
        _printf("%.3f %.3f c\n");
      }
    }
    NEON_fmadd(*(double *)(param_3 + (long)local_30 * 0x18) - dVar2,local_60,0x4069000000000000);
    NEON_fmadd(*(double *)(param_3 + (long)local_30 * 0x18 + 8) - dVar3,local_60,0x4069000000000000)
    ;
    _printf("\n0 setgray %g %g s\n");
  }
  _printf("\n%%%%EOF");
  _free(pvVar1);
  return;
}



undefined4 entry(void)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)_gen_xy(0x4024000000000000,100000);
  pvVar2 = (void *)_lloyd(pvVar1,100000,0xb,100);
  _print_eps(pvVar1,100000,pvVar2,0xb);
  _free(pvVar1);
  _free(pvVar2);
  return 0;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dc0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003dcc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dfc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004028)();
  return;
}


