#include "logistic-curve-fitting-in-epidemiology.h"



undefined  [16] _f(double param_1)

{
  undefined auVar1 [16];
  double dVar2;
  ulong local_28;
  ulong local_20;
  
  local_20 = 0;
  for (local_28 = 0; local_28 < 0x61; local_28 = local_28 + 1) {
    dVar2 = (double)NEON_ucvtf(local_28);
    dVar2 = (double)_exp(param_1 * dVar2);
    dVar2 = (dVar2 * 27.0) / (((dVar2 - 1.0) * 27.0) / 7800000000.0 + 1.0) -
            *(double *)(&_actual + local_28 * 8);
    local_20 = NEON_fmadd(dVar2,dVar2,local_20);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  return auVar1;
}



undefined  [16] _solve(double param_1,double param_2,code *param_3)

{
  bool bVar1;
  double dVar2;
  undefined auVar3 [16];
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_50 = param_1;
  if (param_1 == 0.0) {
    local_50 = 1.0;
  }
  local_30 = local_50;
  local_38 = (double)(*param_3)(param_1);
  local_40 = 2.0;
  local_20 = param_1;
  while( true ) {
    bVar1 = false;
    if (param_2 < local_30) {
      bVar1 = local_20 != local_20 - local_30;
    }
    if (!bVar1) break;
    dVar2 = (double)(*param_3)(local_20 - local_30);
    if (local_38 <= dVar2) {
      dVar2 = (double)(*param_3)(local_20 + local_30);
      if (local_38 <= dVar2) {
        local_40 = 0.5;
      }
      else {
        local_20 = local_20 + local_30;
        local_38 = dVar2;
      }
    }
    else {
      local_20 = local_20 - local_30;
      local_38 = dVar2;
    }
    local_30 = local_30 * local_40;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_20;
  return auVar3;
}



void _solve_default(undefined8 param_1)

{
  _solve(0x3fe0000000000000,0,param_1);
  return;
}



undefined4 entry(void)

{
  double dVar1;
  
  dVar1 = (double)_solve_default(_f);
  _exp(dVar1 * 12.0);
  _printf("r = %f, R0 = %f\n");
  return 0;
}



void _exp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003c58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exp_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


