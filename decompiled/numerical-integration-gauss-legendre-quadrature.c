#include "numerical-integration-gauss-legendre-quadrature.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _lege_coef(void)

{
  double dVar1;
  int local_8;
  int local_4;
  
  _DAT_100008038 = 0x3ff0000000000000;
  __lcoef = 0x3ff0000000000000;
  for (local_4 = 2; local_4 < 6; local_4 = local_4 + 1) {
    *(double *)(&_lcoef + (long)local_4 * 0x30) =
         ((double)-(local_4 + -1) * *(double *)(&_lcoef + (long)(local_4 + -2) * 0x30)) /
         (double)(long)local_4;
    for (local_8 = 1; local_8 <= local_4; local_8 = local_8 + 1) {
      dVar1 = (double)NEON_fnmsub((double)(local_4 * 2 + -1),
                                  *(undefined8 *)
                                   (&_lcoef + (long)(local_8 + -1) * 8 + (long)(local_4 + -1) * 0x30
                                   ),(double)(local_4 + -1) *
                                     *(double *)
                                      (&_lcoef + (long)local_8 * 8 + (long)(local_4 + -2) * 0x30));
      *(double *)(&_lcoef + (long)local_8 * 8 + (long)local_4 * 0x30) =
           dVar1 / (double)(long)local_4;
    }
  }
  return;
}



undefined  [16] _lege_eval(undefined8 param_1,int param_2)

{
  undefined auVar1 [16];
  ulong local_20;
  int local_14;
  
  local_20 = *(ulong *)(&_lcoef + (long)param_2 * 8 + (long)param_2 * 0x30);
  for (local_14 = param_2; local_14 != 0; local_14 = local_14 + -1) {
    local_20 = NEON_fmadd(local_20,param_1,
                          *(undefined8 *)
                           (&_lcoef + (long)(local_14 + -1) * 8 + (long)param_2 * 0x30));
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  return auVar1;
}



undefined  [16] _lege_diff(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  double dVar4;
  double dVar5;
  
  uVar1 = _lege_eval(param_1,param_2);
  uVar2 = _lege_eval(param_1,param_2 + -1);
  dVar4 = (double)NEON_fnmsub(param_1,uVar1,uVar2);
  dVar5 = (double)NEON_fmadd(param_1,param_1,0xbff0000000000000);
  auVar3._0_8_ = ((double)(long)param_2 * dVar4) / dVar5;
  auVar3._8_8_ = 0;
  return auVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _lege_roots(void)

{
  double dVar1;
  double dVar2;
  double local_20;
  int local_14;
  
  for (local_14 = 1; local_14 < 6; local_14 = local_14 + 1) {
    local_20 = (double)_cos((__Pi * ((double)(long)local_14 - 0.25)) / 5.5);
    do {
      dVar1 = (double)_lege_eval(local_20);
      dVar2 = (double)_lege_diff(local_20,5);
      dVar1 = local_20 - dVar1 / dVar2;
      dVar2 = (double)_fdim(dVar1,local_20);
      local_20 = dVar1;
    } while (2e-16 < dVar2);
    *(double *)(&_lroots + (long)(local_14 + -1) * 8) = dVar1;
    dVar2 = (double)_lege_diff(dVar1,5);
    dVar1 = (double)NEON_fmsub(dVar1,dVar1,0x3ff0000000000000);
    *(double *)(&_weight + (long)(local_14 + -1) * 8) = 2.0 / (dVar1 * dVar2 * dVar2);
  }
  return;
}



undefined  [16] _lege_inte(double param_1,double param_2,code *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  int local_44;
  double local_40;
  
  dVar1 = (param_2 - param_1) / 2.0;
  local_40 = 0.0;
  for (local_44 = 0; local_44 < 5; local_44 = local_44 + 1) {
    uVar2 = *(undefined8 *)(&_weight + (long)local_44 * 8);
    uVar3 = NEON_fmadd(dVar1,*(undefined8 *)(&_lroots + (long)local_44 * 8),
                       (param_2 + param_1) / 2.0);
    uVar3 = (*param_3)(uVar3);
    local_40 = (double)NEON_fmadd(uVar2,uVar3,local_40);
  }
  auVar4._0_8_ = dVar1 * local_40;
  auVar4._8_8_ = 0;
  return auVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  int local_18;
  
  __Pi = (double)_atan2(0x3ff0000000000000);
  __Pi = __Pi * 4.0;
  _lege_coef();
  _lege_roots();
  _printf("Roots: ");
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    _printf(" %g");
  }
  _printf("\nWeight:");
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    _printf(" %g");
  }
  _lege_inte(PTR__exp_100004010);
  _exp(0x4008000000000000);
  _exp(0xc008000000000000);
  _printf("\nintegrating Exp(x) over [-3, 3]:\n\t%10.8f,\ncompred to actual\n\t%10.8f\n");
  return 0;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan2_100004000)();
  return;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004008)();
  return;
}



void _exp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exp_100004010)();
  return;
}



void _fdim(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__fdim_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


