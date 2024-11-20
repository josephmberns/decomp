#include "prime-conspiracy.h"



void _init(void)

{
  int iVar1;
  int local_8;
  int local_4;
  
  for (local_4 = 0; local_4 < 10; local_4 = local_4 + 1) {
    for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
      iVar1 = local_4 * 10 + local_8;
      (&_transitions)[(long)iVar1 * 8] = (char)local_4;
      *(char *)((long)iVar1 * 8 + 0x100008001) = (char)local_8;
      *(undefined4 *)((long)iVar1 * 8 + 0x100008004) = 0;
    }
  }
  return;
}



void _record(int param_1,int param_2)

{
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (99 < local_10) {
      return;
    }
    if (((&_transitions)[(long)local_10 * 8] == (char)((char)param_1 + (char)(param_1 / 10) * -10))
       && (*(char *)((long)local_10 * 8 + 0x100008001) ==
           (char)((char)param_2 + (char)(param_2 / 10) * -10))) break;
    local_10 = local_10 + 1;
  }
  *(int *)((long)local_10 * 8 + 0x100008004) = *(int *)((long)local_10 * 8 + 0x100008004) + 1;
  return;
}



int _printTransitions(void)

{
  int iVar1;
  int local_1c;
  
  iVar1 = _printf("%d primes, last prime considered: %d\n");
  for (local_1c = 0; local_1c < 100; local_1c = local_1c + 1) {
    if (*(int *)((long)local_1c * 8 + 0x100008004) != 0) {
      NEON_ucvtf((ulong)*(uint *)((long)local_1c * 8 + 0x100008004));
      iVar1 = _printf("%d->%d  count: %5d  frequency: %.2f\n");
    }
  }
  return iVar1;
}



bool _isPrime(int param_1)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  bool local_11;
  
  if (param_1 % 2 == 0) {
    local_11 = param_1 == 2;
  }
  else if (param_1 % 3 == 0) {
    local_11 = param_1 == 3;
  }
  else if (param_1 % 5 == 0) {
    local_11 = param_1 == 5;
  }
  else if (param_1 % 7 == 0) {
    local_11 = param_1 == 7;
  }
  else if (param_1 % 0xb == 0) {
    local_11 = param_1 == 0xb;
  }
  else if (param_1 % 0xd == 0) {
    local_11 = param_1 == 0xd;
  }
  else if (param_1 % 0x11 == 0) {
    local_11 = param_1 == 0x11;
  }
  else if (param_1 % 0x13 == 0) {
    local_11 = param_1 == 0x13;
  }
  else {
    local_20 = 0x17;
    local_24 = 0x60;
    local_28 = 0xd8;
    local_1c = 0x211;
    iVar1 = local_20;
    while( true ) {
      local_20 = iVar1;
      if (param_1 < local_1c) {
        return true;
      }
      iVar1 = 0;
      if (local_20 != 0) {
        iVar1 = param_1 / local_20;
      }
      if (param_1 == iVar1 * local_20) break;
      local_1c = local_1c + local_24;
      iVar1 = local_20 + 2;
      local_24 = local_24 + 0x18;
      if (iVar1 * iVar1 != local_1c) {
                    // WARNING: Subroutine does not return
        ___assert_rtn("isPrime","prime-conspiracy.c",0x4d,"t * t == s");
      }
      if (local_1c <= param_1) {
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = param_1 / iVar1;
        }
        if (param_1 == iVar2 * iVar1) {
          return false;
        }
        local_1c = local_1c + local_28;
        iVar1 = local_20 + 6;
        local_28 = local_28 + 0x30;
        if (iVar1 * iVar1 != local_1c) {
                    // WARNING: Subroutine does not return
          ___assert_rtn("isPrime","prime-conspiracy.c",0x56,"t * t == s");
        }
      }
    }
    local_11 = false;
  }
  return local_11;
}



undefined8 entry(void)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = 3;
  local_1c = 5;
  local_20 = 2;
  _init();
  _record(2,3);
  iVar1 = local_1c;
  while (local_1c = iVar1, local_20 < 1000000) {
    uVar2 = _isPrime(local_1c);
    if ((uVar2 & 1) != 0) {
      _record(local_18,local_1c);
      local_18 = local_1c;
      local_20 = local_20 + 1;
    }
    iVar1 = local_1c + 2;
    if (local_20 < 1000000) {
      uVar2 = _isPrime(iVar1);
      if ((uVar2 & 1) != 0) {
        _record(local_18,iVar1);
        local_20 = local_20 + 1;
        local_18 = iVar1;
      }
      iVar1 = local_1c + 6;
    }
  }
  _printTransitions(1000000,local_18);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


