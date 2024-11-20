#include "magnanimous-numbers.h"



bool _is_prime(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  ulong local_18;
  
  if (param_1 < 2) {
    bVar3 = false;
  }
  else if (param_1 % 2 == 0) {
    bVar3 = param_1 == 2;
  }
  else if (param_1 % 3 == 0) {
    bVar3 = param_1 == 3;
  }
  else {
    for (local_18 = 5; local_18 * local_18 < param_1 || local_18 * local_18 - param_1 == 0;
        local_18 = local_18 + 6) {
      uVar1 = 0;
      if (local_18 != 0) {
        uVar1 = param_1 / local_18;
      }
      if (param_1 == uVar1 * local_18) {
        return false;
      }
      uVar1 = local_18 + 2;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_1 / uVar1;
      }
      if (param_1 == uVar2 * uVar1) {
        return false;
      }
    }
    bVar3 = true;
  }
  return bVar3;
}



void _ord(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined auStack_1f [3];
  int local_1c;
  undefined8 local_18;
  
  iVar1 = param_2 % 100;
  local_1c = param_2;
  local_18 = param_1;
  if ((iVar1 < 4) || (0x14 < iVar1)) {
    iVar1 = iVar1 % 10;
    if (iVar1 == 1) {
      ___strcpy_chk(auStack_1f,"st",3);
    }
    else if (iVar1 == 2) {
      ___strcpy_chk(auStack_1f,"nd",3);
    }
    else if (iVar1 == 3) {
      ___strcpy_chk(auStack_1f,"rd",3);
    }
    else {
      ___strcpy_chk(auStack_1f,"th",3);
    }
    ___sprintf_chk(local_18,0,0xffffffffffffffff,"%d%s");
  }
  else {
    ___sprintf_chk(param_1,0,0xffffffffffffffff,"%dth");
  }
  return;
}



undefined4 _is_magnanimous(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong local_28;
  
  if (9 < param_1) {
    local_28 = 10;
    while( true ) {
      uVar1 = 0;
      if (local_28 != 0) {
        uVar1 = param_1 / local_28;
      }
      uVar2 = 0;
      if (local_28 != 0) {
        uVar2 = param_1 / local_28;
      }
      iVar3 = _is_prime(uVar1 + (param_1 - uVar2 * local_28));
      if (iVar3 == 0) {
        return 0;
      }
      if (uVar1 < 10) break;
      local_28 = local_28 * 10;
    }
  }
  return 1;
}



void _list_mags(int param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int local_54;
  long local_50;
  undefined auStack_32 [13];
  undefined auStack_25 [13];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_50 = 0;
  local_54 = 0;
  if (param_1 < 2) {
    uVar2 = _printf("\nFirst %d magnanimous numbers:\n");
  }
  else {
    _ord(auStack_25,param_1);
    _ord(auStack_32,param_2);
    uVar2 = _printf("\n%s through %s magnanimous numbers:\n");
  }
  uVar3 = (ulong)uVar2;
  while (local_54 < param_2) {
    uVar3 = _is_magnanimous(local_50);
    if (((int)uVar3 != 0) && (local_54 = local_54 + 1, param_1 <= local_54)) {
      uVar2 = _printf("%*llu ");
      iVar1 = 0;
      if (param_4 != 0) {
        iVar1 = local_54 / param_4;
      }
      if (local_54 == iVar1 * param_4) {
        uVar2 = _printf("\n");
      }
      uVar3 = (ulong)uVar2;
    }
    local_50 = local_50 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar3);
}



undefined4 entry(void)

{
  _list_mags(1,0x2d,3,0xf);
  _list_mags(0xf1,0xfa,1);
  _list_mags(0x187,400,1,10);
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
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


