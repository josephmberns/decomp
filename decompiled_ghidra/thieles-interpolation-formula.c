#include "thieles-interpolation-formula.h"



undefined  [16] _rho(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined auVar6 [16];
  double dVar7;
  undefined8 local_18;
  
  if (param_5 < 0) {
    local_18 = 0;
  }
  else if (param_5 == 0) {
    local_18 = *(ulong *)(param_2 + (long)param_4 * 8);
  }
  else {
    iVar1 = ((0x1f - param_5) * (0x20 - param_5)) / 2 + param_4;
    if (*(double *)(param_3 + (long)iVar1 * 8) != *(double *)(param_3 + (long)iVar1 * 8)) {
      dVar2 = *(double *)(param_1 + (long)param_4 * 8);
      dVar7 = *(double *)(param_1 + (long)(param_4 + param_5) * 8);
      dVar3 = (double)_rho(param_1,param_2,param_3,param_4,param_5 + -1);
      dVar4 = (double)_rho(param_1,param_2,param_3,param_4 + 1,param_5 + -1);
      dVar5 = (double)_rho(param_1,param_2,param_3,param_4 + 1,param_5 + -2);
      *(double *)(param_3 + (long)iVar1 * 8) = (dVar2 - dVar7) / (dVar3 - dVar4) + dVar5;
    }
    local_18 = *(ulong *)(param_3 + (long)iVar1 * 8);
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_18;
  return auVar6;
}



undefined  [16]
_thiele(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined auVar4 [16];
  double dVar5;
  undefined8 local_18;
  
  if (param_5 < 0x20) {
    dVar1 = (double)_rho(param_2,param_3,param_4,0,param_5);
    dVar2 = (double)_rho(param_2,param_3,param_4,0,param_5 + -2);
    dVar5 = *(double *)(param_2 + (long)param_5 * 8);
    dVar3 = (double)_thiele(param_1,param_2,param_3,param_4,param_5 + 1);
    local_18 = (dVar1 - dVar2) + (param_1 - dVar5) / dVar3;
  }
  else {
    local_18 = 1.0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_18;
  return auVar4;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  int local_18;
  
  for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
    *(double *)(&_xval + (long)local_18 * 8) = (double)(long)local_18 * 0.05;
    uVar1 = _sin(*(undefined8 *)(&_xval + (long)local_18 * 8));
    *(undefined8 *)(&_t_sin + (long)local_18 * 8) = uVar1;
    uVar1 = _cos(*(undefined8 *)(&_xval + (long)local_18 * 8));
    *(undefined8 *)(&_t_cos + (long)local_18 * 8) = uVar1;
    *(double *)(&_t_tan + (long)local_18 * 8) =
         *(double *)(&_t_sin + (long)local_18 * 8) / *(double *)(&_t_cos + (long)local_18 * 8);
  }
  for (local_18 = 0; local_18 < 0x1f0; local_18 = local_18 + 1) {
    *(undefined8 *)(&_r_tan + (long)local_18 * 8) = 0x7ff8000000000000;
    *(undefined8 *)(&_r_cos + (long)local_18 * 8) = 0x7ff8000000000000;
    *(undefined8 *)(&_r_sin + (long)local_18 * 8) = 0x7ff8000000000000;
  }
  _thiele(&_t_sin,&_xval,&_r_sin);
  _printf("%16.14f\n");
  _thiele(0x3fe0000000000000,&_t_cos,&_xval,&_r_cos,0);
  _printf("%16.14f\n");
  _thiele(0x3ff0000000000000,&_t_tan,&_xval,&_r_tan,0);
  _printf("%16.14f\n");
  return 0;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004010)();
  return;
}


