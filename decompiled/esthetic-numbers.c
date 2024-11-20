#include "esthetic-numbers.h"



int _as_digit(int param_1)

{
  undefined local_8;
  
  if ((param_1 < 0) || (9 < param_1)) {
    local_8 = (char)param_1 + 'W';
  }
  else {
    local_8 = (char)param_1 + '0';
  }
  return (int)local_8;
}



void _revstr(char *param_1)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  int local_1c;
  
  sVar2 = _strlen(param_1);
  iVar3 = (int)sVar2;
  for (local_1c = 0; local_1c < iVar3 / 2; local_1c = local_1c + 1) {
    cVar1 = param_1[local_1c];
    param_1[local_1c] = param_1[(iVar3 - local_1c) + -1];
    param_1[(iVar3 - local_1c) + -1] = cVar1;
  }
  return;
}



long _to_base(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  undefined uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  uVar1 = param_2;
  while (local_20 = uVar1, local_20 != 0) {
    uVar4 = (ulong)param_3;
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = local_20 / uVar4;
    }
    uVar2 = _as_digit(local_20 - uVar1 * uVar4);
    lVar3 = (long)local_28;
    local_28 = local_28 + 1;
    *(undefined *)(param_1 + lVar3) = uVar2;
    uVar1 = 0;
    if ((long)param_3 != 0) {
      uVar1 = local_20 / (ulong)(long)param_3;
    }
  }
  *(undefined *)(param_1 + local_28) = 0;
  _revstr(param_1);
  return param_1;
}



long _uabs(ulong param_1,ulong param_2)

{
  undefined8 local_18;
  
  if (param_2 < param_1) {
    local_18 = param_1 - param_2;
  }
  else {
    local_18 = param_2 - param_1;
  }
  return local_18;
}



undefined4 _is_esthetic(ulong param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int local_28;
  ulong local_20;
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = 0;
  }
  else {
    iVar3 = 0;
    if ((long)param_2 != 0) {
      iVar3 = (int)(param_1 / (ulong)(long)param_2);
    }
    local_28 = (int)param_1 - iVar3 * param_2;
    uVar1 = 0;
    if ((long)param_2 != 0) {
      uVar1 = param_1 / (ulong)(long)param_2;
    }
    while (local_20 = uVar1, local_20 != 0) {
      iVar3 = 0;
      if ((long)param_2 != 0) {
        iVar3 = (int)(local_20 / (ulong)(long)param_2);
      }
      iVar3 = (int)local_20 - iVar3 * param_2;
      lVar2 = _uabs((long)local_28,(long)iVar3);
      if (lVar2 != 1) {
        return 0;
      }
      local_28 = iVar3;
      uVar1 = 0;
      if ((long)param_2 != 0) {
        uVar1 = local_20 / (ulong)(long)param_2;
      }
    }
    local_14 = 1;
  }
  return local_14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _dfs(ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_1 <= param_3) && (param_3 <= param_2)) {
    lVar3 = (long)__le;
    __le = __le + 1;
    *(ulong *)(&_esths + lVar3 * 8) = param_3;
  }
  if ((param_3 != 0) && (param_3 <= param_2)) {
    uVar2 = param_3 % 10;
    lVar3 = param_3 * 10 + uVar2;
    lVar1 = lVar3 + -1;
    lVar3 = lVar3 + 1;
    if (uVar2 == 0) {
      _dfs(param_1,param_2,lVar3);
    }
    else if (uVar2 == 9) {
      _dfs(param_1,param_2,lVar1);
    }
    else {
      _dfs(param_1,param_2,lVar1);
      _dfs(param_1,param_2,lVar3);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _list_esths(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               int param_5,int param_6)

{
  int iVar1;
  int local_3c;
  
  __le = 0;
  for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
    _dfs(param_2,param_4,(long)local_3c);
  }
  _printf("Base 10: %\'d esthetic numbers between %\'llu and %\'llu:\n");
  if (param_6 == 0) {
    for (local_3c = 0; local_3c < param_5; local_3c = local_3c + 1) {
      _printf("%llu ");
    }
    _printf("\n............\n");
    for (local_3c = __le - param_5; local_3c < __le; local_3c = local_3c + 1) {
      _printf("%llu ");
    }
  }
  else {
    for (local_3c = 0; local_3c < __le; local_3c = local_3c + 1) {
      _printf("%llu ");
      iVar1 = 0;
      if (param_5 != 0) {
        iVar1 = (int)(uint)(local_3c == -1) / param_5;
      }
      if ((uint)(local_3c == -1) != iVar1 * param_5) {
        _printf("\n");
      }
    }
  }
  iVar1 = _printf("\n\n");
  return iVar1;
}



undefined8 entry(void)

{
  int iVar1;
  undefined8 uVar2;
  int local_40;
  int local_3c;
  long local_38;
  undefined7 local_28;
  undefined uStack_21;
  undefined7 uStack_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_28 = 0;
  uStack_21 = 0;
  uStack_20 = 0;
  for (local_3c = 2; local_3c < 0x11; local_3c = local_3c + 1) {
    _printf("Base %d: %dth to %dth esthetic numbers:\n");
    local_38 = 1;
    local_40 = 0;
    while (local_40 < local_3c * 6) {
      iVar1 = _is_esthetic(local_38,local_3c);
      if ((iVar1 != 0) && (local_40 = local_40 + 1, local_3c * 4 <= local_40)) {
        _to_base(&local_28,local_38,local_3c);
        _printf("%s ");
      }
      local_38 = local_38 + 1;
    }
    _printf("\n\n");
  }
  uVar2 = _setlocale(4,0);
  _setlocale(4,"");
  _list_esths(1000,0x3f2,9999,0x26aa,0x10);
  _list_esths(100000000,0x6054ab5,130000000,0x75bcd15,9,1);
  _list_esths(100000000000,0x1784abd312,130000000000,0x1cbe991d8a,7);
  _list_esths(100000000000000,0x5bde3f307eb5,130000000000000,0x7048861b66ed,5,0);
  _list_esths(100000000000000000,0x166dc26d56ef312,130000000000000000,0x1b69b4bdb0a114a,4,0);
  _setlocale(4,uVar2);
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}


