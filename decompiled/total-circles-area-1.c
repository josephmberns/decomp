#include "total-circles-area-1.h"



undefined8 entry(void)

{
  time_t tVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long local_68;
  long local_60;
  long local_58;
  ulong local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  local_20 = INFINITY;
  local_28 = -INFINITY;
  local_30 = INFINITY;
  local_38 = -INFINITY;
  for (local_40 = 0; local_40 < 0x19; local_40 = local_40 + 1) {
    lVar3 = local_40 * 0x18;
    local_20 = (double)FUN_100003d1c(local_20,*(double *)(&_circles + lVar3) -
                                              *(double *)(&DAT_100008010 + lVar3));
    local_28 = (double)FUN_100003d64(local_28,*(double *)(&_circles + lVar3) +
                                              *(double *)(&DAT_100008010 + lVar3));
    local_30 = (double)FUN_100003d1c(local_30,*(double *)(&DAT_100008008 + lVar3) -
                                              *(double *)(&DAT_100008010 + lVar3));
    local_38 = (double)FUN_100003d64(local_38,*(double *)(&DAT_100008008 + lVar3) +
                                              *(double *)(&DAT_100008010 + lVar3));
    *(double *)(&DAT_100008010 + lVar3) =
         *(double *)(&DAT_100008010 + lVar3) * *(double *)(&DAT_100008010 + lVar3);
  }
  tVar1 = _time((time_t *)0x0);
  _srand((uint)tVar1);
  local_58 = 0x10000;
  local_60 = 0;
  local_68 = 0;
  while( true ) {
    do {
      uVar4 = FUN_100003eb4(local_20,local_28);
      uVar5 = FUN_100003eb4(local_30,local_38);
      uVar2 = FUN_100003dac(uVar4,uVar5);
      local_68 = local_68 + (uVar2 & 1);
      local_60 = local_60 + 1;
    } while (local_60 != local_58);
    dVar7 = (double)NEON_ucvtf(local_68);
    dVar8 = (double)NEON_ucvtf(local_60);
    dVar6 = (double)NEON_ucvtf(local_68);
    dVar9 = (double)NEON_ucvtf(local_60);
    dVar10 = (double)NEON_ucvtf(local_60);
    _printf("%.4f +/- %.4f (%zd samples)\n");
    if ((((local_28 - local_20) * (local_38 - local_30) * dVar7) / dVar8) *
        SQRT(((dVar6 / dVar9) * (1.0 - dVar6 / dVar9)) / dVar10) * 3.0 <= 0.001) break;
    local_58 = local_58 << 1;
  }
  return 0;
}



undefined  [16] FUN_100003d1c(double param_1,double param_2)

{
  undefined auVar1 [16];
  double local_18;
  
  local_18 = param_2;
  if (param_1 <= param_2) {
    local_18 = param_1;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_18;
  return auVar1;
}



undefined  [16] FUN_100003d64(double param_1,double param_2)

{
  undefined auVar1 [16];
  double local_18;
  
  local_18 = param_2;
  if (param_2 <= param_1) {
    local_18 = param_1;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_18;
  return auVar1;
}



undefined FUN_100003dac(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  ulong local_30;
  
  local_30 = 0;
  while( true ) {
    if (0x18 < local_30) {
      return 0;
    }
    dVar1 = (double)FUN_100003f04(param_1 - *(double *)(&_circles + local_30 * 0x18));
    dVar2 = (double)FUN_100003f04(param_2 - *(double *)(&DAT_100008008 + local_30 * 0x18));
    if (dVar1 + dVar2 < *(double *)(&DAT_100008010 + local_30 * 0x18)) break;
    local_30 = local_30 + 1;
  }
  return 1;
}



undefined  [16] FUN_100003eb4(double param_1,double param_2)

{
  int iVar1;
  undefined auVar2 [16];
  
  iVar1 = _rand();
  auVar2._0_8_ = NEON_fmadd(param_2 - param_1,(double)iVar1 / 2147483647.0,param_1);
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined  [16] FUN_100003f04(double param_1)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 * param_1;
  auVar1._8_8_ = 0;
  return auVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004008)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004018)();
  return tVar1;
}


