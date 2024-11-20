#include "ramer-douglas-peucker-line-simplification.h"



undefined  [16]
_perpendicular_distance
          (undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
          double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined auVar4 [16];
  undefined8 uVar5;
  
  dVar1 = param_5 - param_3;
  dVar2 = param_6 - param_4;
  dVar3 = (double)NEON_fmadd(dVar1,dVar1,dVar2 * dVar2);
  uVar5 = NEON_fnmsub(param_1,dVar2,param_2 * dVar1);
  uVar5 = NEON_fmadd(param_5,param_4,uVar5);
  dVar1 = (double)NEON_fmsub(param_6,param_3,uVar5);
  auVar4._0_8_ = ABS(dVar1) / SQRT(dVar3);
  auVar4._8_8_ = 0;
  return auVar4;
}



long _douglas_peucker(double param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
                     ulong param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  long local_58;
  long local_50;
  double local_48;
  long local_40;
  undefined8 *local_38;
  long local_18;
  
  if (param_3 < 2) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("douglas_peucker","ramer-douglas-peucker-line-simplification.c",0x16,"n >= 2");
  }
  if (param_1 < 0.0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("douglas_peucker","ramer-douglas-peucker-line-simplification.c",0x17,
                  "epsilon >= 0");
  }
  local_48 = 0.0;
  local_50 = 0;
  for (local_58 = 1; local_58 + 1U < param_3; local_58 = local_58 + 1) {
    dVar3 = (double)_perpendicular_distance
                              (param_2[local_58 * 2],(param_2 + local_58 * 2)[1],*param_2,param_2[1]
                               ,param_2[(param_3 - 1) * 2],(param_2 + (param_3 - 1) * 2)[1]);
    if (local_48 < dVar3) {
      local_50 = local_58;
      local_48 = dVar3;
    }
  }
  if (local_48 <= param_1) {
    if (1 < param_5) {
      uVar4 = *param_2;
      param_4[1] = param_2[1];
      *param_4 = uVar4;
      uVar4 = param_2[(param_3 - 1) * 2];
      param_4[3] = (param_2 + (param_3 - 1) * 2)[1];
      param_4[2] = uVar4;
    }
    local_18 = 2;
  }
  else {
    lVar1 = _douglas_peucker(param_1,param_2,local_50 + 1,param_4,param_5);
    if (param_5 < lVar1 - 1U) {
      local_40 = 0;
      local_38 = param_4;
    }
    else {
      local_40 = param_5 - (lVar1 + -1);
      local_38 = param_4 + (lVar1 + -1) * 2;
    }
    lVar2 = _douglas_peucker(param_1,param_2 + local_50 * 2,param_3 - local_50,local_38,local_40);
    local_18 = lVar1 + lVar2 + -1;
  }
  return local_18;
}



int _print_points(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong local_28;
  
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    if (local_28 != 0) {
      _printf(" ");
    }
    _printf("(%g, %g)");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  undefined auStack_168 [160];
  undefined auStack_c8 [160];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _memcpy(auStack_c8,&DAT_100003ef8,0xa0);
  uVar1 = _douglas_peucker(0x3ff0000000000000,auStack_c8,10);
  _print_points(auStack_168,uVar1);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


