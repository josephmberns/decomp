#include "sum-of-squares.h"



undefined  [16] _squaredsum(long param_1,int param_2)

{
  undefined auVar1 [16];
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    local_18 = NEON_fmadd(*(undefined8 *)(param_1 + (long)local_10 * 8),
                          *(undefined8 *)(param_1 + (long)local_10 * 8),local_18);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_18;
  return auVar1;
}



undefined8 entry(void)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memset(&local_48,0,0x30);
  local_48 = 0x4008000000000000;
  local_40 = 0x3ff0000000000000;
  local_38 = 0x4010000000000000;
  local_30 = 0x3ff0000000000000;
  local_28 = 0x4014000000000000;
  local_20 = 0x4022000000000000;
  _squaredsum(&local_48,6);
  _printf("%lf\n");
  _squaredsum(&local_48,0);
  _printf("%lf\n");
  _squaredsum(0,0);
  iVar1 = _printf("%lf\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004010)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


