#include "blum-integer.h"



bool _isPrime(int param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  bool local_1;
  
  if (param_1 < 2) {
    local_1 = false;
  }
  else if (param_1 % 2 == 0) {
    local_1 = param_1 == 2;
  }
  else if (param_1 % 3 == 0) {
    local_1 = param_1 == 3;
  }
  else {
    for (local_c = 5; local_c * local_c <= param_1; local_c = local_c + 6) {
      iVar1 = 0;
      if (local_c != 0) {
        iVar1 = param_1 / local_c;
      }
      if (param_1 == iVar1 * local_c) {
        return false;
      }
      iVar1 = local_c + 2;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = param_1 / iVar1;
      }
      if (param_1 == iVar2 * iVar1) {
        return false;
      }
    }
    local_1 = true;
  }
  return local_1;
}



int _firstPrimeFactor(int param_1)

{
  int iVar1;
  long lVar2;
  int local_10;
  int local_c;
  int local_4;
  
  if (param_1 == 1) {
    local_4 = 1;
  }
  else if (param_1 % 3 == 0) {
    local_4 = 3;
  }
  else if (param_1 % 5 == 0) {
    local_4 = 5;
  }
  else {
    local_10 = 0;
    for (local_c = 7; local_4 = param_1, local_c * local_c <= param_1;
        local_c = local_c + *(int *)(&_inc + lVar2 * 4)) {
      iVar1 = 0;
      if (local_c != 0) {
        iVar1 = param_1 / local_c;
      }
      if (param_1 == iVar1 * local_c) {
        return local_c;
      }
      lVar2 = (long)local_10;
      local_10 = (local_10 + 1) % 8;
    }
  }
  return local_4;
}



undefined8 entry(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int local_120;
  int local_11c;
  int local_118;
  int local_100 [54];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_118 = 1;
  local_120 = 0;
  local_100[0] = 0;
  local_100[1] = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  _setlocale(4,"");
  do {
    iVar2 = _firstPrimeFactor(local_118);
    if (iVar2 % 4 == 3) {
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = local_118 / iVar2;
      }
      if (((iVar1 != iVar2) && (iVar1 % 4 == 3)) && (uVar3 = _isPrime(iVar1), (uVar3 & 1) != 0)) {
        if (local_120 < 0x32) {
          local_100[(long)local_120 + 4] = local_118;
        }
        local_100[(local_118 % 10) / 3] = local_100[(local_118 % 10) / 3] + 1;
        local_120 = local_120 + 1;
        if (local_120 == 0x32) {
          _printf("First 50 Blum integers:\n");
          for (local_11c = 0; local_11c < 0x32; local_11c = local_11c + 1) {
            _printf("%3d ");
            if ((local_11c + 1) % 10 == 0) {
              _printf("\n");
            }
          }
          _printf("\n");
        }
        else if (((local_120 == 0x68cc) || (local_120 == (local_120 / 100000) * 100000)) &&
                (_printf("The %\'7dth Blum integer is: %\'9d\n"), local_120 == 400000)) {
          iVar2 = _printf("\n%% distribution of the first 400,000 Blum integers:\n");
          for (local_11c = 0; local_11c < 4; local_11c = local_11c + 1) {
            iVar2 = _printf("  %6.3f%% end in %d\n");
          }
          if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
            ___stack_chk_fail(iVar2);
          }
          return 0;
        }
      }
    }
    iVar2 = 4;
    if (local_118 % 5 != 3) {
      iVar2 = 2;
    }
    local_118 = local_118 + iVar2;
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004018)();
  return;
}


