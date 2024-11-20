#include "averages-mean-angle.h"



undefined  [16] _meanAngle(long param_1,int param_2)

{
  double dVar1;
  undefined auVar2 [16];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0.0;
  local_30 = 0.0;
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    dVar1 = (double)_cos((*(double *)(param_1 + (long)local_34 * 8) * 3.141592653589793) / 180.0);
    local_30 = local_30 + dVar1;
    dVar1 = (double)_sin((*(double *)(param_1 + (long)local_34 * 8) * 3.141592653589793) / 180.0);
    local_28 = local_28 + dVar1;
  }
  dVar1 = (double)_atan2(local_28 / (double)(long)param_2,local_30 / (double)(long)param_2);
  auVar2._0_8_ = (dVar1 * 180.0) / 3.141592653589793;
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined8 entry(void)

{
  int iVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_28 = 0x4024000000000000;
  local_30 = 0x4075e00000000000;
  uStack_48 = 0x4066800000000000;
  local_50 = 0x4056800000000000;
  uStack_38 = 0x4076800000000000;
  local_40 = 0x4070e00000000000;
  uStack_68 = 0x4034000000000000;
  local_70 = 0x4024000000000000;
  local_60 = 0x403e000000000000;
  _meanAngle(&local_30,2);
  _printf("\nMean Angle for 1st set : %lf degrees");
  _meanAngle(&local_50,4);
  _printf("\nMean Angle for 2nd set : %lf degrees");
  _meanAngle(&local_70,3);
  iVar1 = _printf("\nMean Angle for 3rd set : %lf degrees\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan2_100004010)();
  return;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004028)();
  return;
}


