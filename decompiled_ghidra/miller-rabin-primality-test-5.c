#include "miller-rabin-primality-test-5.h"



long _mul_mod(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  ulong local_10;
  ulong local_8;
  
  local_20 = 0;
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_2 / param_3;
  }
  local_10 = param_2 - uVar1 * param_3;
  local_8 = param_1;
  while (local_8 != 0) {
    if ((local_8 & 1) != 0) {
      if (param_3 - local_20 <= local_10) {
        local_20 = local_20 - param_3;
      }
      local_20 = local_20 + local_10;
    }
    local_8 = local_8 >> 1;
    local_28 = local_10;
    if (param_3 - local_10 <= local_10) {
      local_28 = local_10 - param_3;
    }
    local_10 = local_10 + local_28;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = local_20 / param_3;
  }
  return local_20 - uVar1 * param_3;
}



undefined8 _pow_mod(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 local_30;
  ulong local_20;
  long local_18;
  
  local_30 = 1;
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_1 / param_3;
  }
  local_18 = param_1 - uVar1 * param_3;
  for (local_20 = param_2; local_20 != 0; local_20 = local_20 >> 1) {
    if ((local_20 & 1) != 0) {
      local_30 = _mul_mod(local_30,local_18,param_3);
    }
    local_18 = _mul_mod(local_18,local_18,param_3);
  }
  return local_30;
}



bool _is_prime(ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  int local_a4;
  long local_a0;
  ulong local_98;
  ulong local_90;
  int local_88;
  ulong local_80;
  ulong auStack_60 [9];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_60,&DAT_100003f58,0x48);
  local_80 = 0;
  do {
    if (8 < local_80) {
      if (param_1 < auStack_60[8]) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        local_88 = 0;
        for (local_90 = param_1 - 1; (~local_90 & 1) != 0; local_90 = local_90 >> 1) {
          local_88 = local_88 + 1;
        }
        for (local_98 = 0; local_98 < 9 && bVar3 != false; local_98 = local_98 + 1) {
          local_a0 = _pow_mod(auStack_60[local_98],local_90,param_1);
          if (local_a0 != 1) {
            local_a4 = local_88;
            while( true ) {
              bVar2 = false;
              if (local_a4 != 0) {
                bVar3 = local_a0 + 1U != param_1;
                bVar2 = bVar3;
              }
              if (!bVar2) break;
              local_a0 = _mul_mod(local_a0,local_a0,param_1);
              local_a4 = local_a4 + -1;
            }
            bVar3 = bVar3 == false;
          }
        }
      }
LAB_100003ed4:
      if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
        ___stack_chk_fail();
      }
      return bVar3;
    }
    uVar4 = auStack_60[local_80];
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = param_1 / uVar4;
    }
    if (param_1 == uVar1 * uVar4) {
      bVar3 = param_1 == auStack_60[local_80];
      goto LAB_100003ed4;
    }
    local_80 = local_80 + 1;
  } while( true );
}



void entry(void)

{
  _is_prime(0x71b3e6c22c126b61);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}


