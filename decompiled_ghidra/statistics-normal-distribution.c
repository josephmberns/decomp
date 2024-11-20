#include "statistics-normal-distribution.h"



undefined  [16] _mean(long param_1,int param_2)

{
  undefined auVar1 [16];
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0.0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    local_18 = local_18 + *(double *)(param_1 + (long)local_10 * 8);
  }
  auVar1._0_8_ = local_18 / (double)(long)param_2;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _stddev(long param_1,int param_2)

{
  double dVar1;
  undefined auVar2 [16];
  undefined8 local_30;
  undefined4 local_20;
  
  dVar1 = (double)_mean(param_1,param_2);
  local_30 = 0.0;
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    local_30 = (double)NEON_fmadd(*(double *)(param_1 + (long)local_20 * 8) - dVar1,
                                  *(double *)(param_1 + (long)local_20 * 8) - dVar1,local_30);
  }
  auVar2._0_8_ = SQRT(local_30 / (double)(param_2 + -1));
  auVar2._8_8_ = 0;
  return auVar2;
}



void * _generate(int param_1)

{
  int iVar1;
  void *pvVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int local_18;
  
  param_1 = param_1 + param_1 % 2;
  pvVar2 = _calloc((long)param_1,8);
  if (pvVar2 != (void *)0x0) {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 2) {
      do {
        iVar1 = _rand();
        dVar3 = ((double)iVar1 * 2.0) / 2147483647.0 - 1.0;
        iVar1 = _rand();
        dVar4 = ((double)iVar1 * 2.0) / 2147483647.0 - 1.0;
        dVar5 = (double)NEON_fmadd(dVar3,dVar3,dVar4 * dVar4);
      } while (1.0 <= dVar5 || dVar5 == 0.0);
      dVar6 = (double)_log(dVar5);
      dVar5 = SQRT((dVar6 * -2.0) / dVar5);
      *(double *)((long)pvVar2 + (long)local_18 * 8) = dVar3 * dVar5;
      *(double *)((long)pvVar2 + (long)(local_18 + 1) * 8) = dVar4 * dVar5;
    }
  }
  return pvVar2;
}



void _printHistogram(long param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int local_4c;
  int local_48;
  int local_44;
  int local_24;
  
  local_24 = 0;
  pvVar2 = _calloc(0x3c,4);
  if (pvVar2 != (void *)0x0) {
    for (local_44 = 0; local_44 < param_2; local_44 = local_44 + 1) {
      iVar3 = (int)((*(double *)(param_1 + (long)local_44 * 8) - -3.05) / 0.1);
      if ((-1 < iVar3) && (iVar3 < 0x3c)) {
        piVar1 = (int *)((long)pvVar2 + (long)iVar3 * 4);
        *piVar1 = *piVar1 + 1;
      }
    }
    for (local_48 = 0; local_48 < 0x3c; local_48 = local_48 + 1) {
      if (local_24 < *(int *)((long)pvVar2 + (long)local_48 * 4)) {
        local_24 = *(int *)((long)pvVar2 + (long)local_48 * 4);
      }
    }
    for (local_48 = 0; local_48 < 0x3c; local_48 = local_48 + 1) {
      NEON_fmadd((double)(long)local_48,0x3fb999999999999a,0xc008666666666666);
      NEON_fmadd((double)(local_48 + 1),0x3fb999999999999a,0xc008666666666666);
      _printf("(%5.2f, %5.2f) |");
      local_4c = (int)(((double)(long)*(int *)((long)pvVar2 + (long)local_48 * 4) * 50.0) /
                      (double)(long)local_24);
      while (0 < local_4c) {
        _putchar(0x2a);
        local_4c = local_4c + -1;
      }
      _printf("  %-.1f%%");
      _putchar(10);
    }
    _free(pvVar2);
  }
  return;
}



bool entry(void)

{
  time_t tVar1;
  void *pvVar2;
  
  tVar1 = _time((time_t *)0x0);
  _srand((uint)tVar1);
  pvVar2 = (void *)_generate(10000000);
  if (pvVar2 != (void *)0x0) {
    _mean(pvVar2,10000000);
    _stddev(pvVar2,10000000);
    _printf("mean = %g, stddev = %g\n\n");
    _printHistogram(pvVar2,10000000);
    _free(pvVar2);
    _printf("\n%s\n");
    _getchar();
  }
  return pvVar2 == (void *)0x0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004010)();
  return iVar1;
}



void _log(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004028)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004030)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004038)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004040)();
  return tVar1;
}


