#include "arithmetic-derivative.h"



void _primeFactors(ulong param_1,long param_2,int *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong local_70;
  ulong local_68;
  int local_5c;
  ulong local_48;
  int local_40 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  if (1 < param_1) {
    local_5c = 0;
    local_40[2] = 4;
    local_40[3] = 2;
    local_40[0] = 4;
    local_40[1] = 2;
    local_40[6] = 2;
    local_40[7] = 6;
    local_40[4] = 4;
    local_40[5] = 6;
    for (local_48 = param_1; local_48 % 2 == 0; local_48 = local_48 / 2) {
      lVar2 = (long)local_5c;
      local_5c = local_5c + 1;
      *(undefined8 *)(param_2 + lVar2 * 8) = 2;
    }
    for (; local_48 % 3 == 0; local_48 = local_48 / 3) {
      lVar2 = (long)local_5c;
      local_5c = local_5c + 1;
      *(undefined8 *)(param_2 + lVar2 * 8) = 3;
    }
    for (; local_48 % 5 == 0; local_48 = local_48 / 5) {
      lVar2 = (long)local_5c;
      local_5c = local_5c + 1;
      *(undefined8 *)(param_2 + lVar2 * 8) = 5;
    }
    local_68 = 7;
    local_70 = 0;
    uVar1 = local_48;
    while (local_48 = uVar1, local_68 * local_68 < local_48 || local_68 * local_68 - local_48 == 0)
    {
      uVar1 = 0;
      if (local_68 != 0) {
        uVar1 = local_48 / local_68;
      }
      if (local_48 == uVar1 * local_68) {
        lVar2 = (long)local_5c;
        local_5c = local_5c + 1;
        *(ulong *)(param_2 + lVar2 * 8) = local_68;
        uVar1 = 0;
        if (local_68 != 0) {
          uVar1 = local_48 / local_68;
        }
      }
      else {
        local_68 = local_68 + (long)local_40[local_70];
        local_70 = (local_70 + 1) % 8;
        uVar1 = local_48;
      }
    }
    if (1 < local_48) {
      lVar2 = (long)local_5c;
      local_5c = local_5c + 1;
      *(ulong *)(param_2 + lVar2 * 8) = local_48;
    }
    *param_3 = local_5c;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



undefined  [16] _D(double param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  double dVar3;
  undefined8 uVar4;
  int local_2c0 [2];
  double local_2b8;
  double local_2b0;
  long local_2a8 [80];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_2b8 = param_1;
  if (0.0 <= param_1) {
    if (2.0 <= param_1) {
      if (1e+19 <= param_1) {
        _primeFactors((long)(param_1 / 100.0),local_2a8,local_2c0);
        local_2a8[local_2c0[0]] = 2;
        local_2a8[local_2c0[0] + 1] = 2;
        local_2a8[local_2c0[0] + 2] = 5;
        local_2a8[local_2c0[0] + 3] = 5;
        local_2c0[0] = local_2c0[0] + 4;
      }
      else {
        _primeFactors((long)param_1,local_2a8,local_2c0);
      }
      if (local_2c0[0] == 1) {
        local_2b0 = 1.0;
      }
      else if (local_2c0[0] == 2) {
        local_2b0 = (double)(ulong)(local_2a8[0] + local_2a8[1]);
      }
      else {
        dVar3 = (double)NEON_ucvtf(local_2a8[0]);
        dVar3 = local_2b8 / dVar3;
        uVar1 = _D(dVar3);
        uVar4 = NEON_ucvtf(local_2a8[0]);
        local_2b0 = (double)NEON_fmadd(uVar1,uVar4,dVar3);
      }
    }
    else {
      local_2b0 = 0.0;
    }
  }
  else {
    local_2b0 = (double)_D(-param_1);
    local_2b0 = -local_2b0;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_2b0;
  return auVar2;
}



undefined8 entry(void)

{
  int iVar1;
  double dVar2;
  double local_680;
  int local_674;
  int local_670;
  long local_668 [200];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_670 = -99; local_670 < 0x65; local_670 = local_670 + 1) {
    dVar2 = (double)_D((double)(long)local_670);
    local_668[local_670 + 99] = (long)(int)dVar2;
  }
  for (local_670 = 0; local_670 < 200; local_670 = local_670 + 1) {
    _printf("%4ld ");
    if ((local_670 + 1) % 10 == 0) {
      _printf("\n");
    }
  }
  iVar1 = _printf("\n");
  local_680 = 1.0;
  for (local_674 = 1; local_674 < 0x15; local_674 = local_674 + 1) {
    local_680 = local_680 * 10.0;
    _D(local_680);
    iVar1 = _printf("D(10^%-2d) / 7 = %.0f\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


