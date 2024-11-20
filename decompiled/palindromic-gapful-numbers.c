#include "palindromic-gapful-numbers.h"



long _reverse(ulong param_1)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = 0;
  for (local_8 = param_1; local_8 != 0; local_8 = local_8 / 10) {
    local_10 = local_10 * 10 + local_8 % 10;
  }
  return local_10;
}



void _init_palgen(long *param_1,int param_2)

{
  *param_1 = 10;
  param_1[1] = (long)param_2 * *param_1 + -1;
  *(int *)(param_1 + 2) = param_2;
  *(undefined *)((long)param_1 + 0x14) = 0;
  return;
}



long _next_palindrome(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong local_38;
  long local_28;
  
  param_1[1] = param_1[1] + 1;
  if (param_1[1] == *param_1 * (long)(*(int *)(param_1 + 2) + 1)) {
    if ((*(byte *)((long)param_1 + 0x14) & 1) != 0) {
      *param_1 = *param_1 * 10;
    }
    param_1[1] = (long)*(int *)(param_1 + 2) * *param_1;
    *(byte *)((long)param_1 + 0x14) = (*(byte *)((long)param_1 + 0x14) ^ 1) & 1;
  }
  lVar2 = param_1[1];
  if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
    local_28 = *param_1;
  }
  else {
    local_28 = *param_1 * 10;
  }
  if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
    local_38 = (ulong)param_1[1] / 10;
  }
  else {
    local_38 = param_1[1];
  }
  lVar1 = _reverse(local_38);
  return lVar2 * local_28 + lVar1;
}



bool _gapful(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_10;
  
  for (local_10 = param_1; 9 < local_10; local_10 = local_10 / 10) {
  }
  uVar1 = param_1 % 10 + local_10 * 10;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_1 / uVar1;
  }
  return param_1 == uVar2 * uVar1;
}



ulong _print(ulong param_1)

{
  int iVar1;
  uint uVar2;
  int local_28;
  int local_24;
  
  iVar1 = (int)param_1;
  for (local_24 = 1; local_24 < 10; local_24 = local_24 + 1) {
    _printf("%d: ");
    for (local_28 = 0; local_28 < iVar1; local_28 = local_28 + 1) {
      _printf(" %llu");
    }
    uVar2 = _printf("\n");
    param_1 = (ulong)uVar2;
  }
  return param_1;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  ulong uVar2;
  int local_d0c;
  undefined auStack_d08 [28];
  int local_cec;
  undefined4 local_ce8;
  undefined4 local_ce4;
  undefined4 local_ce0;
  undefined4 local_cdc;
  undefined4 local_cd8;
  undefined4 local_cd4;
  undefined8 auStack_cd0 [90];
  undefined8 auStack_a00 [135];
  undefined8 auStack_5c8 [180];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_cd4 = 0;
  local_cd8 = 0x14;
  local_cdc = 0xf;
  local_ce0 = 10;
  local_ce4 = 100;
  local_ce8 = 1000;
  for (local_cec = 1; local_cec < 10; local_cec = local_cec + 1) {
    _init_palgen(auStack_d08,local_cec);
    local_d0c = 0;
    while (local_d0c < 1000) {
      uVar1 = _next_palindrome(auStack_d08);
      uVar2 = _gapful(uVar1);
      if ((uVar2 & 1) != 0) {
        if (local_d0c < 0x14) {
          auStack_5c8[(long)(local_cec + -1) * 0x14 + (long)local_d0c] = uVar1;
        }
        else if ((local_d0c < 100) && (0x54 < local_d0c)) {
          auStack_a00[(long)(local_cec + -1) * 0xf + (long)(local_d0c + -0x55)] = uVar1;
        }
        else if (0x3dd < local_d0c) {
          auStack_cd0[(long)(local_cec + -1) * 10 + (long)(local_d0c + -0x3de)] = uVar1;
        }
        local_d0c = local_d0c + 1;
      }
    }
  }
  _printf("First %d palindromic gapful numbers ending in:\n");
  _print(0x14,auStack_5c8);
  _printf("\nLast %d of first %d palindromic gapful numbers ending in:\n");
  _print(0xf,auStack_a00);
  _printf("\nLast %d of first %d palindromic gapful numbers ending in:\n");
  _print(10,auStack_cd0);
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


