#include "averages-mean-time-of-day.h"



undefined  [16] _timeToDegrees(undefined8 param_1,int param_2)

{
  undefined auVar1 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  
  local_38 = (int)param_1;
  uStack_34 = (int)((ulong)param_1 >> 0x20);
  auVar1._0_8_ = (double)(local_38 * 0x168) / 24.0 + (double)(uStack_34 * 0x168) / 1440.0 +
                 (double)(param_2 * 0x168) / 86400.0;
  if (*(long *)PTR____stack_chk_guard_100004008 != *(long *)PTR____stack_chk_guard_100004008) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _timeFromDegrees(double param_1)

{
  undefined auVar1 [16];
  double dVar2;
  undefined4 uStack_1c;
  
  dVar2 = (param_1 * 86400.0) / 360.0;
  auVar1._4_4_ = ((int)dVar2 % 0xe10 - (int)dVar2 % 0x3c) / 0x3c;
  auVar1._0_4_ = (int)dVar2 / 0xe10;
  auVar1._12_4_ = uStack_1c;
  auVar1._8_4_ = (int)dVar2 % 0x3c;
  if (*(long *)PTR____stack_chk_guard_100004008 == *(long *)PTR____stack_chk_guard_100004008) {
    return auVar1;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



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
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  int local_60;
  int local_5c;
  undefined4 uStack_1c;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100004008;
  _printf("Enter number of inputs : ");
  _scanf("%d");
  pvVar3 = _malloc((long)local_5c * 0xc);
  pvVar4 = _malloc((long)local_5c << 3);
  _printf("\n\nEnter the data separated by a space between each unit : ");
  for (local_60 = 0; local_60 < local_5c; local_60 = local_60 + 1) {
    _scanf("%d:%d:%d");
    puVar1 = (undefined8 *)((long)pvVar3 + (long)local_60 * 0xc);
    uVar6 = _timeToDegrees(*puVar1,CONCAT44(uStack_1c,*(undefined4 *)(puVar1 + 1)));
    *(undefined8 *)((long)pvVar4 + (long)local_60 * 8) = uVar6;
  }
  dVar7 = (double)_meanAngle(pvVar4,local_5c);
  _timeFromDegrees(dVar7 + 360.0);
  iVar2 = _printf("\n\nThe mean time is : %d:%d:%d");
  if (*(long *)PTR____stack_chk_guard_100004008 != lVar5) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan2_100004010)();
  return;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004030)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004038)();
  return;
}


