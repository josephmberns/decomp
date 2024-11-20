#include "averages-arithmetic-mean.h"



undefined  [16] _mean(long param_1,int param_2)

{
  undefined auVar1 [16];
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0.0;
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    local_18 = local_18 + *(double *)(param_1 + (long)local_1c * 8);
  }
  auVar1._0_8_ = local_18 / (double)(long)param_2;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined8 entry(void)

{
  char *pcVar1;
  uint uVar2;
  void *pvVar3;
  int local_4c;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar3 = _memset(&local_40,0,0x28);
  local_40 = 0x3ff0000000000000;
  local_38 = 0x4000000000000000;
  local_30 = 0x4005be76c8b43958;
  local_28 = 0x4008000000000000;
  local_20 = 0x400922d0e5604189;
  for (local_4c = 5; -1 < local_4c; local_4c = local_4c + -1) {
    _printf("mean[");
    for (local_48 = 0; local_48 < local_4c; local_48 = local_48 + 1) {
      pcVar1 = ", %g";
      if (local_48 == 0) {
        pcVar1 = "%g";
      }
      _printf(pcVar1);
    }
    _mean(&local_40,local_4c);
    uVar2 = _printf("] = %g\n");
    pvVar3 = (void *)(ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar3);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004010)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


