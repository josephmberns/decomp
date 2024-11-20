#include "cartesian_to_polar.h"



void _to_polar(double param_1,double param_2,double *param_3,double *param_4)

{
  double dVar1;
  double local_38;
  
  local_38 = 0.0;
  dVar1 = (double)NEON_fmadd(param_1,param_1,param_2 * param_2);
  *param_3 = SQRT(dVar1);
  if (param_1 == 0.0) {
    if (param_2 <= 0.0) {
      local_38 = -1.5707963267948966;
    }
    else {
      local_38 = 1.5707963267948966;
    }
  }
  else if (param_2 != 0.0) {
    dVar1 = (double)_atan(param_2 / param_1);
    *param_4 = dVar1;
    if (((0.0 < param_1) && (0.0 < param_2)) || (param_1 == -param_2)) {
      local_38 = *param_4;
    }
    else if ((0.0 <= param_1) || (param_2 <= 0.0)) {
      if ((0.0 <= param_1) || (0.0 <= param_2)) {
        if ((param_1 <= 0.0) || (0.0 <= param_2)) {
          _fprintf(*(FILE **)PTR____stderrp_100004008,"Should not reach here!\n");
        }
        else {
          local_38 = 6.283185307179586 - *param_4;
        }
      }
      else {
        local_38 = *param_4 - 3.141592653589793;
      }
    }
    else {
      local_38 = *param_4 + 3.141592653589793;
    }
  }
  if (param_2 == 0.0) {
    if (param_1 <= 0.0) {
      local_38 = -3.141592653589793;
    }
    else {
      local_38 = 0.0;
    }
  }
  *param_4 = local_38;
  return;
}



undefined  [16] _get_rand(double param_1,double param_2)

{
  int iVar1;
  undefined auVar2 [16];
  
  iVar1 = _rand();
  auVar2._0_8_ = NEON_fmadd(param_2 - param_1,(double)iVar1 / 2147483647.0,param_1);
  auVar2._8_8_ = 0;
  return auVar2;
}



void _test(void)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double local_28;
  double local_20;
  int local_18;
  int local_14;
  
  _srand(10);
  local_14 = 5;
  local_18 = 0;
  while( true ) {
    if (local_14 <= local_18) {
      return;
    }
    iVar2 = _printf("Test %d.... ");
    uVar3 = _get_rand(iVar2);
    uVar4 = _get_rand(0xc014000000000000,0x4014000000000000);
    _printf("(%.2g, %.2g).... ");
    _to_polar(uVar3,uVar4,&local_20,&local_28);
    dVar6 = local_20;
    dVar5 = (double)_hypot(uVar3,uVar4);
    dVar1 = local_28;
    if (0.01 <= ABS(dVar6 - dVar5)) break;
    dVar6 = (double)_atan2(uVar4,uVar3);
    if (0.01 <= ABS(dVar1 - dVar6)) {
                    // WARNING: Subroutine does not return
      ___assert_rtn("test","cartesian_to_polar.c",0x70,"fabs(theta - atan2(y, x)) < 0.01");
    }
    _printf("passed\n");
    local_18 = local_18 + 1;
  }
                    // WARNING: Subroutine does not return
  ___assert_rtn("test","cartesian_to_polar.c",0x6f,"fabs(r - hypot(x, y)) < 0.01");
}



undefined4 entry(void)

{
  _test();
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void _atan(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan_100004010)();
  return;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan2_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



void _hypot(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__hypot_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004038)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004040)(param_1);
  return;
}


