#include "find-palindromic-numbers-in-both-binary-and-ternary-bases.h"



bool _is_palin2(ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong local_18;
  ulong local_10;
  
  local_18 = 0;
  local_10 = param_1;
  if ((param_1 & 1) == 0) {
    bVar2 = param_1 == 0;
  }
  else {
    for (; local_18 < local_10; local_18 = uVar1 | local_18 << 1) {
      uVar1 = local_10 & 1;
      local_10 = local_10 >> 1;
    }
    bVar2 = true;
    if (local_10 != local_18) {
      bVar2 = local_10 == local_18 >> 1;
    }
  }
  return bVar2;
}



long _reverse3(ulong param_1)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = 0;
  for (local_8 = param_1; local_8 != 0; local_8 = local_8 / 3) {
    local_10 = local_10 * 3 + local_8 % 3;
  }
  return local_10;
}



int _print(ulong param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  ulong local_18;
  
  _putchar(0x20);
  local_18 = param_1;
  do {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = (int)(local_18 / param_2);
    }
    _putchar(((int)local_18 - iVar2 * (int)param_2) + 0x30);
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = local_18 / param_2;
    }
    local_18 = uVar1;
  } while (uVar1 != 0);
  iVar2 = _printf("(%lld)");
  return iVar2;
}



int _show(undefined8 param_1)

{
  int iVar1;
  
  _printf("%llu");
  _print(param_1,2);
  _print(param_1,3);
  iVar1 = _putchar(10);
  return iVar1;
}



ulong _min(ulong param_1,ulong param_2)

{
  ulong local_18;
  
  local_18 = param_2;
  if (param_1 < param_2) {
    local_18 = param_1;
  }
  return local_18;
}



ulong _max(ulong param_1,ulong param_2)

{
  ulong local_18;
  
  local_18 = param_2;
  if (param_2 < param_1) {
    local_18 = param_1;
  }
  return local_18;
}



undefined8 entry(void)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined4 local_6c;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_28;
  undefined8 local_20;
  
  _show(0);
  local_6c = 1;
  local_20 = 0;
  local_58 = 1;
  local_50 = 1;
  local_28 = 1;
  do {
    for (local_60 = local_20; local_60 < local_28; local_60 = local_60 + 1) {
      lVar4 = _reverse3(local_60);
      lVar4 = (local_60 * 3 + 1) * local_58 + lVar4;
      iVar3 = _is_palin2(lVar4);
      if (iVar3 != 0) {
        _show(lVar4);
        local_6c = local_6c + 1;
        if (6 < local_6c) {
          return 0;
        }
      }
    }
    if (local_60 == local_58) {
      local_58 = local_58 * 3;
    }
    else {
      local_50 = local_50 << 2;
    }
    while( true ) {
      while( true ) {
        for (; local_50 <= local_58; local_50 = local_50 << 2) {
        }
        uVar1 = 0;
        if (local_58 != 0) {
          uVar1 = local_50 / local_58;
        }
        uVar1 = (uVar1 - 1) / 3;
        uVar2 = 0;
        if (local_58 != 0) {
          uVar2 = (local_50 << 1) / local_58;
        }
        uVar2 = (uVar2 - 1) / 3 + 1;
        if (uVar1 < local_58) break;
        local_58 = local_58 * 3;
      }
      if (local_58 / 3 < uVar2) break;
      local_50 = local_50 << 2;
    }
    local_20 = _max(uVar1,local_58 / 3);
    local_28 = _min(uVar2,local_58);
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


