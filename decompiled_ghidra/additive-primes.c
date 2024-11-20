#include "additive-primes.h"



void _memoizeIsPrime(long param_1,uint param_2)

{
  int iVar1;
  undefined4 auStack_70 [2];
  undefined *local_68;
  ulong local_60;
  undefined4 *local_58;
  int local_4c;
  int local_48;
  char local_41;
  int local_40;
  int local_3c;
  undefined *local_30;
  uint local_24;
  long local_20;
  long local_18;
  
  local_30 = (undefined *)auStack_70;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 3) = 1;
  local_60 = (ulong)param_2 * 4 + 0xf & 0xfffffffffffffff0;
  local_24 = param_2;
  local_20 = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_58 = (undefined4 *)((long)auStack_70 - local_60);
  *local_58 = 3;
  local_3c = 1;
  local_40 = 5;
  do {
    if ((int)local_24 <= local_40) {
      local_68 = local_30;
      if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
        return;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail();
    }
    local_41 = '\x01';
    for (local_48 = 0; local_48 < local_3c; local_48 = local_48 + 1) {
      local_4c = local_58[local_48];
      iVar1 = 0;
      if (local_4c != 0) {
        iVar1 = local_40 / local_4c;
      }
      if (local_40 == iVar1 * local_4c) {
        local_41 = '\0';
        break;
      }
      if (local_40 < local_4c * local_4c) break;
    }
    if (local_41 != '\0') {
      local_58[local_3c] = local_40;
      *(undefined *)(local_20 + local_40) = 1;
      local_3c = local_3c + 1;
    }
    local_40 = local_40 + 2;
  } while( true );
}



int _sumOfDecimalDigits(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  for (local_4 = param_1; 0 < local_4; local_4 = local_4 / 10) {
    local_8 = local_8 + local_4 % 10;
  }
  return local_8;
}



undefined8 entry(void)

{
  int iVar1;
  int local_22c;
  int local_228;
  byte abStack_21c [500];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _printf("Rosetta Code: additive primes less than %d:\n");
  _bzero(abStack_21c,500);
  _memoizeIsPrime(abStack_21c,500);
  _printf("   2");
  local_228 = 1;
  for (local_22c = 3; local_22c < 500; local_22c = local_22c + 2) {
    if (((abStack_21c[local_22c] & 1) != 0) &&
       (iVar1 = _sumOfDecimalDigits(local_22c), (abStack_21c[iVar1] & 1) != 0)) {
      _printf("%4d");
      local_228 = local_228 + 1;
      if (local_228 % 10 == 0) {
        _printf("\n");
      }
    }
  }
  iVar1 = _printf("\nThose were %d additive primes.\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


