#include "prime-decomposition-4.h"



long _mod_mul(ulong param_1,ulong param_2,ulong param_3)

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



undefined8 _mod_pow(ulong param_1,ulong param_2,ulong param_3)

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
      local_30 = _mod_mul(local_30,local_18,param_3);
    }
    local_18 = _mod_mul(local_18,local_18,param_3);
  }
  return local_30;
}



ulong _square_root(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = param_2;
  for (local_20 = param_1; local_20 != 0; local_20 = local_20 >> 2) {
    uVar1 = local_10 + local_20;
    local_10 = local_10 >> 1;
    if (uVar1 <= local_18) {
      local_18 = local_18 - uVar1;
      local_10 = local_10 + local_20;
    }
  }
  return local_10;
}



bool _is_prime(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 local_20;
  
  local_20 = 1;
  if (1 < param_1) {
    while( true ) {
      bVar1 = false;
      if (local_20 < 0x40) {
        uVar2 = _mod_pow(local_20,param_1 - 1,param_1);
        bVar1 = uVar2 < 2;
      }
      if (!bVar1) break;
      local_20 = local_20 + 1;
    }
  }
  return local_20 == 0x40;
}



ulong _pollard_rho(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  ulong local_10;
  
  DAT_100008000 = (DAT_100008000 * 0x3d1e9ba1 + 0x111897ec) % 0xfffffffb;
  local_10 = 1;
  local_30 = 0;
  local_38 = 1;
  local_40 = 1;
  uVar1 = param_1 - 1;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = DAT_100008000 / uVar1;
  }
  local_48 = (DAT_100008000 - uVar2 * uVar1) + 1;
  do {
    if (local_10 != 1) {
      return local_10;
    }
    if (local_30 == local_38) {
      if (local_38 >> 0x12 != 0) {
        return 1;
      }
      local_38 = local_38 << 1;
      local_40 = local_48;
    }
    local_18 = local_48;
    local_20 = local_48;
    local_48 = 0;
    while (local_18 != 0) {
      if ((local_18 & 1) != 0) {
        if (param_1 - local_48 <= local_20) {
          local_48 = local_48 - param_1;
        }
        local_48 = local_48 + local_20;
      }
      local_18 = local_18 >> 1;
      local_28 = local_20;
      if (param_1 - local_20 <= local_20) {
        local_28 = local_20 - param_1;
      }
      local_20 = local_20 + local_28;
    }
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = (local_48 + 1) / param_1;
    }
    local_48 = (local_48 + 1) - uVar1 * param_1;
    if (local_40 < local_48) {
      local_50 = local_48 - local_40;
    }
    else {
      local_50 = local_40 - local_48;
    }
    local_18 = local_50;
    local_20 = param_1;
    do {
      uVar1 = 0;
      if (local_20 != 0) {
        uVar1 = local_18 / local_20;
      }
      local_18 = local_18 - uVar1 * local_20;
      bVar3 = false;
      if (local_18 != 0) {
        uVar1 = 0;
        if (local_18 != 0) {
          uVar1 = local_20 / local_18;
        }
        local_20 = local_20 - uVar1 * local_18;
        bVar3 = local_20 != 0;
      }
    } while (bVar3);
    local_10 = local_18 | local_20;
    local_30 = local_30 + 1;
  } while( true );
}



void _factor(ulong param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong local_28;
  
  if ((param_1 < 4) || (iVar2 = _is_prime(param_1), iVar2 != 0)) {
    if ((1 < param_1) || (*param_2 == 0)) {
      lVar3 = *param_2;
      *param_2 = lVar3 + 1;
      param_2[lVar3 + 1] = param_1;
    }
  }
  else {
    local_28 = _square_root(param_1);
    if (local_28 * local_28 - param_1 != 0) {
      local_28 = _pollard_rho(param_1);
    }
    _factor(local_28,param_2);
    uVar1 = 0;
    if (local_28 != 0) {
      uVar1 = param_1 / local_28;
    }
    _factor(uVar1,param_2);
  }
  return;
}



undefined4 entry(void)

{
  uint uVar1;
  ulong uVar2;
  ulong local_248;
  ulong local_230 [65];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _bzero(local_230,0x208);
  uVar2 = _factor(0xffffffffffffffff,local_230);
  for (local_248 = 1; local_248 <= local_230[0]; local_248 = local_248 + 1) {
    uVar1 = _printf("* %llu\n");
    uVar2 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


