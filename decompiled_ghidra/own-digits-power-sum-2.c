#include "own-digits-power-sum-2.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _initPowerDgt(void)

{
  int local_8;
  int local_4;
  
  __powerDgt = 0;
  for (local_4 = 1; local_4 < 10; local_4 = local_4 + 1) {
    *(undefined8 *)(&_powerDgt + (long)local_4 * 8) = 1;
  }
  for (local_8 = 1; local_8 < 10; local_8 = local_8 + 1) {
    for (local_4 = 0; local_4 < 10; local_4 = local_4 + 1) {
      *(long *)(&_powerDgt + (long)local_4 * 8 + (long)local_8 * 0x50) =
           *(long *)(&_powerDgt + (long)local_4 * 8 + (long)(local_8 + -1) * 0x50) * (long)local_4;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 _calcNum(int param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong local_38;
  ulong local_28;
  int local_1c;
  int local_c;
  
  local_28 = 0;
  if (2 < param_1) {
    for (local_1c = 1; local_1c < 10; local_1c = local_1c + 1) {
      if (0 < *(int *)(param_2 + (long)local_1c * 4)) {
        local_28 = local_28 +
                   *(long *)(&_powerDgt + (long)local_1c * 8 + (long)param_1 * 0x50) *
                   (long)*(int *)(param_2 + (long)local_1c * 4);
      }
    }
    if (local_28 != 0) {
      local_38 = local_28;
      local_c = param_1;
      do {
        uVar2 = local_38 / 10;
        piVar1 = (int *)(param_2 + (local_38 % 10) * 4);
        *piVar1 = *piVar1 + -1;
        local_c = local_c + -1;
        local_38 = uVar2;
      } while (uVar2 != 0);
      if (local_c == 0) {
        local_1c = 1;
        while( true ) {
          bVar3 = false;
          if (local_1c < 10) {
            bVar3 = *(int *)(param_2 + (long)local_1c * 4) == 0;
          }
          if (!bVar3) break;
          local_1c = local_1c + 1;
        }
        if (9 < local_1c) {
          lVar4 = (long)__nCount;
          __nCount = __nCount + 1;
          *(ulong *)(&_numbers + lVar4 * 8) = local_28;
        }
      }
    }
  }
  return 0;
}



void _nextDigit(int param_1,int param_2)

{
  int local_4c;
  int local_44;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_4c = param_1;
  if (param_2 < 9) {
    for (; local_4c < 10; local_4c = local_4c + 1) {
      *(int *)(&_usedDigits + (long)param_1 * 4) = *(int *)(&_usedDigits + (long)param_1 * 4) + 1;
      _nextDigit(local_4c,param_2 + 1);
      *(int *)(&_usedDigits + (long)param_1 * 4) = *(int *)(&_usedDigits + (long)param_1 * 4) + -1;
    }
  }
  local_44 = param_1;
  if (param_1 == 0) {
    local_44 = 1;
  }
  for (local_4c = local_44; local_4c < 10; local_4c = local_4c + 1) {
    *(int *)(&_usedDigits + (long)local_4c * 4) = *(int *)(&_usedDigits + (long)local_4c * 4) + 1;
    _memcpy(auStack_40,&_usedDigits,0x28);
    _calcNum(param_2,auStack_40);
    *(int *)(&_usedDigits + (long)local_4c * 4) = *(int *)(&_usedDigits + (long)local_4c * 4) + -1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  undefined8 uVar1;
  int local_1c;
  int local_18;
  
  _initPowerDgt();
  _nextDigit(0);
  for (local_18 = 0; local_1c = local_18, local_18 < __nCount + -1; local_18 = local_18 + 1) {
    while (local_1c = local_1c + 1, local_1c < __nCount) {
      if (*(ulong *)(&_numbers + (long)local_1c * 8) < *(ulong *)(&_numbers + (long)local_18 * 8)) {
        uVar1 = *(undefined8 *)(&_numbers + (long)local_18 * 8);
        *(undefined8 *)(&_numbers + (long)local_18 * 8) =
             *(undefined8 *)(&_numbers + (long)local_1c * 8);
        *(undefined8 *)(&_numbers + (long)local_1c * 8) = uVar1;
      }
    }
  }
  local_1c = 0;
  for (local_18 = 1; local_18 < __nCount; local_18 = local_18 + 1) {
    if (*(long *)(&_numbers + (long)local_18 * 8) != *(long *)(&_numbers + (long)local_1c * 8)) {
      local_1c = local_1c + 1;
      uVar1 = *(undefined8 *)(&_numbers + (long)local_18 * 8);
      *(undefined8 *)(&_numbers + (long)local_18 * 8) =
           *(undefined8 *)(&_numbers + (long)local_1c * 8);
      *(undefined8 *)(&_numbers + (long)local_1c * 8) = uVar1;
    }
  }
  _printf("Own digits power sums for N = 3 to 9 inclusive:\n");
  for (local_18 = 0; local_18 <= local_1c; local_18 = local_18 + 1) {
    _printf("%lld\n");
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


