#include "kaprekar-numbers-1.h"



uint _kaprekar(ulong param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  uint local_4;
  
  uVar2 = param_1 * param_1;
  local_30 = 1;
  uVar3 = (ulong)(param_2 + -1);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = (uVar2 - param_1) / uVar3;
  }
  if (uVar2 - param_1 == uVar1 * uVar3) {
    for (; local_30 < param_1; local_30 = local_30 * (long)param_2) {
    }
    if (param_1 == local_30) {
      local_4 = (uint)(param_1 == 1);
    }
    else {
      while( true ) {
        uVar1 = 0;
        if (local_30 != 0) {
          uVar1 = uVar2 / local_30;
        }
        uVar1 = uVar2 - uVar1 * local_30;
        if (param_1 <= uVar1) {
          return 0;
        }
        uVar3 = 0;
        if (local_30 != 0) {
          uVar3 = uVar2 / local_30;
        }
        if (uVar3 + uVar1 == param_1) break;
        local_30 = local_30 * (long)param_2;
      }
      local_4 = (uint)local_30;
    }
  }
  else {
    local_4 = 0;
  }
  return local_4;
}



ulong _print_num(ulong param_1,int param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 local_30;
  undefined8 local_18;
  
  for (local_30 = (ulong)param_2; local_18 = param_1, local_30 < param_1;
      local_30 = local_30 * (long)param_2) {
  }
  while( true ) {
    bVar2 = false;
    if (local_18 != 0) {
      uVar1 = 0;
      if ((long)param_2 != 0) {
        uVar1 = local_30 / (ulong)(long)param_2;
      }
      bVar2 = uVar1 != 0;
      local_30 = uVar1;
    }
    if (!bVar2) break;
    uVar1 = 0;
    if (local_30 != 0) {
      uVar1 = local_18 / local_30;
    }
    if (uVar1 < 10) {
      uVar3 = _putchar((int)uVar1 + 0x30);
    }
    else {
      uVar3 = _putchar((int)uVar1 + 0x57);
    }
    param_1 = (ulong)uVar3;
    local_18 = local_18 - uVar1 * local_30;
  }
  return param_1;
}



undefined8 entry(void)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong local_20;
  
  _printf("base 10:\n");
  for (local_20 = 1; local_20 < 1000000; local_20 = local_20 + 1) {
    iVar2 = _kaprekar(local_20,10);
    if (iVar2 != 0) {
      _printf("%3d: %llu\n");
    }
  }
  _printf("\nbase %d:\n  1: 1\n");
  for (local_20 = 2; local_20 < 1000000; local_20 = local_20 + 1) {
    iVar2 = _kaprekar(local_20,0x11);
    uVar3 = (ulong)iVar2;
    if (uVar3 != 0) {
      _printf("%3d: %llu");
      _printf(" \t");
      _print_num(local_20,0x11);
      _printf("\t");
      _print_num(local_20 * local_20,0x11);
      _printf("\t");
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = (local_20 * local_20) / uVar3;
      }
      _print_num(uVar1,0x11);
      _printf(" + ");
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = (local_20 * local_20) / uVar3;
      }
      _print_num(local_20 * local_20 - uVar1 * uVar3,0x11);
      _printf("\n");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


