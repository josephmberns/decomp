#include "hilbert-curve.h"



void _rot(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    if (param_3 == 1) {
      *param_2 = (param_1 + -1) - *param_2;
      param_2[1] = (param_1 + -1) - param_2[1];
    }
    iVar1 = *param_2;
    *param_2 = param_2[1];
    param_2[1] = iVar1;
  }
  return;
}



void _d2pt(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_28;
  int local_24;
  
  local_24 = 1;
  *param_3 = 0;
  param_3[1] = 0;
  local_28 = param_2;
  for (; local_24 < param_1; local_24 = local_24 << 1) {
    uVar1 = (int)local_28 / 2 & 1;
    uVar2 = (local_28 ^ uVar1) & 1;
    _rot(local_24,param_3,uVar1,uVar2);
    *param_3 = *param_3 + local_24 * uVar1;
    param_3[1] = param_3[1] + local_24 * uVar2;
    local_28 = (int)local_28 / 4;
  }
  return;
}



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int local_2458;
  int iStack_2454;
  int local_2450;
  int iStack_244c;
  int local_2448;
  int local_2444;
  int local_2440;
  int local_243c;
  int local_2438;
  int local_2434;
  int local_2430;
  undefined4 local_242c;
  undefined local_2428 [9216];
  long local_28;
  
  uVar3 = (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_242c = 0;
  for (local_2434 = 0; local_2434 < 0x60; local_2434 = local_2434 + 1) {
    for (local_2438 = 0; local_2438 < 0x60; local_2438 = local_2438 + 1) {
      local_2428[(long)local_2438 + (long)local_2434 * 0x60] = 0x20;
    }
  }
  local_2458 = 0;
  iStack_2454 = 0;
  local_2428[0] = 0x2e;
  for (local_2430 = 1; local_2430 < 0x400; local_2430 = local_2430 + 1) {
    uVar3 = _d2pt(0x20,local_2430,&local_2450);
    local_243c = local_2450 * 3;
    local_2440 = iStack_244c * 3;
    local_2444 = local_2458 * 3;
    local_2448 = iStack_2454 * 3;
    local_2428[(long)local_2440 + (long)local_243c * 0x60] = 0x2e;
    if (local_243c == local_2444) {
      local_2438 = local_2448;
      iVar1 = local_2440;
      if (local_2448 < local_2440) {
        while (local_2438 = local_2438 + 1, local_2438 < local_2440) {
          local_2428[(long)local_2438 + (long)local_243c * 0x60] = 0x7c;
        }
      }
      else {
        while (local_2438 = iVar1 + 1, local_2438 < local_2448) {
          local_2428[(long)local_2438 + (long)local_243c * 0x60] = 0x7c;
          iVar1 = local_2438;
        }
      }
    }
    else {
      local_2434 = local_2444;
      iVar1 = local_243c;
      if (local_2444 < local_243c) {
        while (local_2434 = local_2434 + 1, local_2434 < local_243c) {
          local_2428[(long)local_2440 + (long)local_2434 * 0x60] = 0x5f;
        }
      }
      else {
        while (local_2434 = iVar1 + 1, local_2434 < local_2444) {
          local_2428[(long)local_2440 + (long)local_2434 * 0x60] = 0x5f;
          iVar1 = local_2434;
        }
      }
    }
    local_2458 = local_2450;
    iStack_2454 = iStack_244c;
  }
  for (local_2434 = 0; local_2434 < 0x60; local_2434 = local_2434 + 1) {
    for (local_2438 = 0; local_2438 < 0x60; local_2438 = local_2438 + 1) {
      _printf("%c");
    }
    uVar2 = _printf("\n");
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar3);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


