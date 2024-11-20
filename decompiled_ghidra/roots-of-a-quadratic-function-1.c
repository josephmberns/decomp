#include "roots-of-a-quadratic-function-1.h"



void _quad_root(double param_1,double param_2,double param_3,double *param_4,double *param_5)

{
  double dVar1;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  if (param_1 == 0.0) {
    if (param_2 == 0.0) {
      local_40 = 0.0;
    }
    else {
      local_40 = -param_3 / param_2;
    }
    *param_4 = local_40;
    param_4[1] = 0.0;
    *param_5 = 0.0;
    param_5[1] = 0.0;
  }
  else if (param_3 == 0.0) {
    *param_4 = 0.0;
    param_4[1] = 0.0;
    *param_5 = -param_2 / param_1;
    param_5[1] = 0.0;
  }
  else {
    param_2 = param_2 / 2.0;
    if (ABS(param_2) <= ABS(param_3)) {
      local_48 = param_1;
      if (param_3 <= 0.0) {
        local_48 = -param_1;
      }
      local_38 = (double)NEON_fnmsub(param_2,param_2 / ABS(param_3),local_48);
      local_30 = SQRT(ABS(local_38)) * SQRT(ABS(param_3));
    }
    else {
      local_38 = (double)NEON_fmsub(param_1 / param_2,param_3 / param_2,0x3ff0000000000000);
      local_30 = SQRT(ABS(local_38)) * ABS(param_2);
    }
    if (0.0 <= local_38) {
      if (param_2 < 0.0) {
        local_50 = -local_30;
      }
      else {
        local_50 = local_30;
      }
      dVar1 = (local_50 - param_2) / param_1;
      if (dVar1 == 0.0) {
        local_58 = 0.0;
      }
      else {
        local_58 = (param_3 / dVar1) / param_1;
      }
      *param_4 = local_58;
      param_4[1] = 0.0;
      *param_5 = dVar1;
      param_5[1] = 0.0;
    }
    else {
      dVar1 = ABS(local_30 / param_1);
      *param_4 = -param_2 / param_1 + dVar1 * 0.0;
      param_4[1] = dVar1 * 1.0;
      *param_5 = -param_2 / param_1 - dVar1 * 0.0;
      param_5[1] = -(dVar1 * 1.0);
    }
  }
  return;
}



undefined4 entry(void)

{
  undefined local_38 [16];
  undefined local_28 [20];
  undefined4 local_14;
  
  local_14 = 0;
  _quad_root(0x3ff0000000000000,0x426d1a94a2002000,0x426d1a94a2000000);
  _printf("(%g + %g i), (%g + %g i)\n");
  _quad_root(0x7e37e43c8800759c,0xffac7b1f3cac7433,local_28,local_38);
  _printf("(%g + %g i), (%g + %g i)\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


