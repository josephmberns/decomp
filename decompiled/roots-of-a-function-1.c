#include "roots-of-a-function-1.h"



undefined  [16] _f(double param_1)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = NEON_fnmsub(param_1 * param_1,param_1,param_1 * 3.0 * param_1);
  auVar1._0_8_ = NEON_fmadd(0x4000000000000000,param_1,uVar2);
  auVar1._8_8_ = 0;
  return auVar1;
}



ulong _secant(double param_1,double param_2,code *param_3)

{
  uint uVar1;
  ulong uVar2;
  double extraout_d0;
  double extraout_d0_00;
  double dVar3;
  int local_54;
  double local_40;
  double local_28;
  double local_20;
  
  uVar2 = (*param_3)(param_1);
  local_40 = extraout_d0;
  local_28 = param_2;
  local_20 = param_1;
  for (local_54 = 0; local_54 < 0x32; local_54 = local_54 + 1) {
    uVar2 = (*param_3)(local_28);
    dVar3 = ((local_28 - local_20) / (extraout_d0_00 - local_40)) * extraout_d0_00;
    if (ABS(dVar3) < 1e-12) break;
    local_20 = local_28;
    local_28 = local_28 - dVar3;
    local_40 = extraout_d0_00;
  }
  if (local_54 == 0x32) {
    uVar1 = _printf("Function is not converging near (%7.4f,%7.4f).\n");
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
}



undefined8 entry(void)

{
  bool bVar1;
  int iVar2;
  double dVar3;
  double local_38;
  
  local_38 = -1.032;
  dVar3 = (double)_f(0xbff083126e978d50);
  bVar1 = 0.0 < dVar3;
  for (; local_38 < 3.0; local_38 = local_38 + 0.01) {
    dVar3 = (double)_f(local_38);
    if (1e-12 <= ABS(dVar3)) {
      if (0.0 < dVar3 != bVar1) {
        dVar3 = (double)_secant(local_38 - 0.01,local_38,_f);
        if (dVar3 == -99.0) {
          iVar2 = _printf("Root found near x= %7.4f\n");
        }
        else {
          iVar2 = _printf("Root found at x= %12.9f\n");
        }
        dVar3 = (double)_f(local_38 + 0.0001,iVar2);
        bVar1 = 0.0 < dVar3;
      }
    }
    else {
      iVar2 = _printf("Root found at x= %12.9f\n");
      dVar3 = (double)_f(local_38 + 0.0001,iVar2);
      bVar1 = 0.0 < dVar3;
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


