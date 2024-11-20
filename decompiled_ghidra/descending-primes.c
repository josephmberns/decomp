#include "descending-primes.h"



bool _ispr(uint param_1)

{
  uint uVar1;
  bool bVar2;
  uint local_c;
  
  if (((param_1 & 1) == 0) || (param_1 < 2)) {
    bVar2 = param_1 == 2;
  }
  else {
    for (local_c = 3; local_c * local_c <= param_1; local_c = local_c + 2) {
      uVar1 = 0;
      if (local_c != 0) {
        uVar1 = param_1 / local_c;
      }
      if (param_1 == uVar1 * local_c) {
        return false;
      }
    }
    bVar2 = true;
  }
  return bVar2;
}



undefined4 entry(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint local_444;
  uint local_440;
  uint local_43c;
  uint local_438;
  uint local_434;
  uint auStack_428 [128];
  uint auStack_228 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_438 = 9;
  local_444 = 1;
  local_440 = 0;
  while (local_440 < 9) {
    auStack_228[local_440] = local_444;
    local_440 = local_444;
    local_444 = local_444 + 1;
  }
  while( true ) {
    local_434 = 0;
    for (local_43c = 0; local_43c < local_438; local_43c = local_43c + 1) {
      uVar1 = auStack_228[local_43c];
      iVar2 = _ispr();
      if (iVar2 != 0) {
        _printf("%8d%s");
      }
      local_444 = uVar1 * 10;
      while (local_444 = local_444 + 1, local_444 < uVar1 * 0xb + (uVar1 / 10) * -10) {
        uVar3 = (ulong)local_434;
        local_434 = local_434 + 1;
        auStack_428[uVar3] = local_444;
      }
    }
    if (local_434 < 2) break;
    local_438 = local_434;
    for (local_43c = 0; local_43c < local_434; local_43c = local_43c + 1) {
      auStack_228[local_43c] = auStack_428[local_43c];
    }
  }
  iVar2 = _printf("\n%d descending primes found");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


