#include "legendre-prime-counting-function.h"



// WARNING: Restarted to delay deadcode elimination for space: stack

long _countPrimes(ulong param_1)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  long *plVar9;
  void *pvVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  ulong local_130;
  long local_120;
  int local_f8;
  int local_f4;
  long local_f0;
  ulong local_d8;
  ulong local_d0;
  int local_a8;
  int local_a4;
  ulong local_a0;
  ulong local_88;
  int local_7c;
  long local_78;
  int local_64;
  long local_28;
  
  if (param_1 < 9) {
    if (param_1 < 2) {
      local_120 = 0;
    }
    else {
      local_120 = (long)(param_1 + 1) / 2;
    }
    local_28 = local_120;
  }
  else {
    dVar14 = (double)NEON_ucvtf(param_1);
    uVar12 = (ulong)SQRT(dVar14);
    uVar5 = (uVar12 - 1) / 2;
    iVar11 = (int)uVar5 + 1;
    pvVar7 = _malloc((long)(iVar11 * 4));
    pvVar8 = _malloc((long)(iVar11 * 4));
    plVar9 = (long *)_malloc((long)(iVar11 * 8));
    for (local_64 = 0; local_64 < iVar11; local_64 = local_64 + 1) {
      *(int *)((long)pvVar7 + (long)local_64 * 4) = local_64;
      *(int *)((long)pvVar8 + (long)local_64 * 4) = local_64 * 2 + 1;
      uVar13 = (ulong)(local_64 * 2 + 1);
      uVar6 = 0;
      if (uVar13 != 0) {
        uVar6 = param_1 / uVar13;
      }
      plVar9[local_64] = (uVar6 - 1) / 2;
    }
    pvVar10 = _calloc((long)(int)((long)(uVar5 + 8) / 8),1);
    local_78 = 0;
    local_88 = 1;
    local_7c = iVar11;
    while( true ) {
      local_a0 = local_88 * 2 * (local_88 + 1);
      if ((long)uVar5 < (long)local_a0) break;
      if ((*(byte *)((long)pvVar10 + ((long)local_88 >> 3)) & (&_masks)[local_88 & 7]) == 0) {
        pbVar1 = (byte *)((long)pvVar10 + ((long)local_88 >> 3));
        *pbVar1 = *pbVar1 | (&_masks)[local_88 & 7];
        uVar6 = local_88 * 2 + 1;
        for (; (long)local_a0 < (long)iVar11; local_a0 = local_a0 + uVar6) {
          pbVar1 = (byte *)((long)pvVar10 + ((long)local_a0 >> 3));
          *pbVar1 = *pbVar1 | (&_masks)[local_a0 & 7];
        }
        local_a4 = 0;
        for (local_a8 = 0; local_a8 < local_7c; local_a8 = local_a8 + 1) {
          uVar3 = *(uint *)((long)pvVar8 + (long)local_a8 * 4);
          if ((*(byte *)((long)pvVar10 + ((long)(ulong)(uVar3 >> 1) >> 3)) &
              (&_masks)[(ulong)(uVar3 >> 1) & 7]) == 0) {
            uVar13 = uVar3 * uVar6;
            if (uVar12 < uVar13) {
              dVar14 = (double)NEON_ucvtf(param_1);
              dVar15 = (double)NEON_ucvtf(uVar13);
              local_130 = (ulong)*(uint *)((long)pvVar7 + ((long)(dVar14 / dVar15) + -1 >> 1) * 4);
            }
            else {
              local_130 = plVar9[(ulong)*(uint *)((long)pvVar7 + (uVar13 >> 1) * 4) - local_78];
            }
            plVar9[local_a4] = (plVar9[local_a8] - local_130) + local_78;
            *(uint *)((long)pvVar8 + (long)local_a4 * 4) = uVar3;
            local_a4 = local_a4 + 1;
          }
        }
        uVar13 = 0;
        if (uVar6 != 0) {
          uVar13 = uVar12 / uVar6;
        }
        local_d0 = uVar5;
        for (local_d8 = uVar13 - 1 | 1; uVar6 <= local_d8; local_d8 = local_d8 - 2) {
          iVar4 = *(int *)((long)pvVar7 + (local_d8 >> 1) * 4);
          for (; (long)(local_d8 * uVar6 >> 1) <= (long)local_d0; local_d0 = local_d0 - 1) {
            piVar2 = (int *)((long)pvVar7 + local_d0 * 4);
            *piVar2 = *piVar2 - (iVar4 - (int)local_78);
          }
        }
        local_7c = local_a4;
        local_78 = local_78 + 1;
      }
      local_88 = local_88 + 1;
    }
    local_f0 = *plVar9 + (((long)local_7c + (local_78 + -1) * 2) * (long)(local_7c + -1)) / 2;
    for (local_f4 = 1; local_f4 < local_7c; local_f4 = local_f4 + 1) {
      local_f0 = local_f0 - plVar9[local_f4];
    }
    local_f4 = 1;
    while( true ) {
      uVar12 = (ulong)*(uint *)((long)pvVar8 + (long)local_f4 * 4);
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar5 = param_1 / uVar12;
      }
      uVar6 = 0;
      if (uVar12 != 0) {
        uVar6 = uVar5 / uVar12;
      }
      iVar11 = *(int *)((long)pvVar7 + ((long)(uVar6 - 1) >> 1) * 4) - (int)local_78;
      if (iVar11 <= local_f4) break;
      local_f0 = local_f0 - (long)(iVar11 - local_f4) * (local_78 + local_f4 + -1);
      local_f8 = local_f4;
      while (local_f8 = local_f8 + 1, local_f8 < iVar11 + 1) {
        dVar14 = (double)NEON_ucvtf(uVar5);
        local_f0 = local_f0 +
                   (ulong)*(uint *)((long)pvVar7 +
                                   ((long)(dVar14 / (double)*(uint *)((long)pvVar8 +
                                                                     (long)local_f8 * 4)) + -1 >> 1)
                                   * 4);
      }
      local_f4 = local_f4 + 1;
    }
    _free(pvVar7);
    _free(pvVar8);
    _free(plVar9);
    _free(pvVar10);
    local_28 = local_f0 + 1;
  }
  return local_28;
}



undefined8 entry(void)

{
  int local_24;
  long local_20;
  
  _clock();
  local_20 = 1;
  for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
    _countPrimes(local_20);
    _printf("10^%d %ld\n");
    local_20 = local_20 * 10;
  }
  _clock();
  _printf("\nTook %f seconds\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

clock_t _clock(void)

{
  clock_t cVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  cVar1 = (*(code *)PTR__clock_100004008)();
  return cVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


