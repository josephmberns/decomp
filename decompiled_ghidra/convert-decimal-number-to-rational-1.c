#include "convert-decimal-number-to-rational-1.h"



void _rat_approx(double param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_a8;
  long local_a0;
  int local_94;
  long local_90;
  long local_88;
  long local_80;
  double local_58;
  long local_50;
  long lStack_48;
  long local_30;
  long lStack_28;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100004008;
  lStack_28 = 1;
  local_30 = 0;
  lStack_48 = 0;
  local_50 = 1;
  local_90 = 1;
  if (param_2 < 2) {
    *param_4 = 1;
    *param_3 = (long)param_1;
  }
  else {
    local_58 = param_1;
    if (param_1 < 0.0) {
      local_58 = -param_1;
    }
    for (; local_58 != (double)(long)local_58; local_58 = local_58 * 2.0) {
      local_90 = local_90 << 1;
    }
    local_88 = (long)local_58;
    for (local_94 = 0; lVar1 = local_88, local_94 < 0x40; local_94 = local_94 + 1) {
      if (local_90 == 0) {
        local_a0 = 0;
      }
      else {
        local_a0 = 0;
        if (local_90 != 0) {
          local_a0 = local_88 / local_90;
        }
      }
      if ((local_94 != 0) && (local_a0 == 0)) break;
      local_88 = local_90;
      lVar2 = 0;
      if (local_90 != 0) {
        lVar2 = lVar1 / local_90;
      }
      local_90 = lVar1 - lVar2 * local_90;
      local_80 = local_a0;
      if (param_2 <= lStack_48 * local_a0 + local_50) {
        local_80 = 0;
        if (lStack_48 != 0) {
          local_80 = (param_2 - local_50) / lStack_48;
        }
        if ((local_a0 != local_80 * 2 &&
             local_a0 + local_80 * -2 < 0 == SBORROW8(local_a0,local_80 * 2)) &&
           (lStack_48 < param_2)) break;
        local_94 = 0x41;
      }
      lVar1 = local_80 * lStack_28 + local_30;
      local_30 = lStack_28;
      lVar2 = local_80 * lStack_48 + local_50;
      local_50 = lStack_48;
      lStack_48 = lVar2;
      lStack_28 = lVar1;
    }
    *param_4 = lStack_48;
    if (param_1 < 0.0) {
      local_a8 = -lStack_28;
    }
    else {
      local_a8 = lStack_28;
    }
    *param_3 = local_a8;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == lVar3) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(void)

{
  int iVar1;
  double dVar2;
  undefined local_28 [8];
  undefined local_20 [8];
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = _printf("f = %16.14f\n");
  local_18 = 1;
  while( true ) {
    if (20000000 < local_18) break;
    _printf("denom <= %d: ");
    _rat_approx(0x3fc2492492492492,(long)local_18,local_28,local_20);
    iVar1 = _printf("%lld/%lld\n");
    local_18 = local_18 << 4;
  }
  dVar2 = (double)_atan2(0x3ff0000000000000,iVar1);
  _printf("\nf = %16.14f\n");
  for (local_18 = 1; local_18 < 0x1312d01; local_18 = local_18 << 4) {
    _printf("denom <= %d: ");
    _rat_approx(dVar2 * 4.0,(long)local_18,local_28,local_20);
    _printf("%lld/%lld\n");
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan2_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


