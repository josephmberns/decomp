#include "dot-product.h"



undefined8 entry(void)

{
  int iVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_28 = 0x300000001;
  local_20 = 0xfffffffb;
  local_38 = 0xfffffffe00000004;
  local_30 = 0xffffffff;
  _dot_product(&local_28,&local_38,3);
  iVar1 = _printf("%d\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



int _dot_product(long param_1,long param_2,ulong param_3)

{
  undefined8 local_28;
  undefined4 local_1c;
  
  local_1c = 0;
  for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
    local_1c = local_1c + *(int *)(param_1 + local_28 * 4) * *(int *)(param_2 + local_28 * 4);
  }
  return local_1c;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


