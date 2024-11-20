#include "zeckendorf-number-representation.h"



ulong _fibbinary(ulong param_1)

{
  uint uVar1;
  uint local_1c;
  ulong local_18;
  ulong local_10;
  ulong local_8;
  
  if (param_1 < DAT_100008200) {
    local_18 = 0;
    local_1c = 0x40;
    local_10 = param_1;
    while (uVar1 = local_1c - 1, local_1c != 0) {
      local_1c = uVar1;
      if (*(ulong *)(&_fib + (long)(int)uVar1 * 8) <= local_10) {
        local_18 = local_18 | 1L << ((ulong)uVar1 & 0x3f);
        local_10 = local_10 - *(long *)(&_fib + (long)(int)uVar1 * 8);
      }
    }
    local_8 = local_18;
  }
  else {
    local_8 = 0xffffffffffffffff;
  }
  return local_8;
}



int _bprint(ulong param_1,int param_2)

{
  int iVar1;
  int local_30;
  int local_2c;
  ulong local_28;
  int local_1c;
  
  local_1c = param_2;
  if (0x40 < param_2) {
    local_1c = 0;
  }
  for (local_28 = 1L << ((ulong)(local_1c - 1) & 0x3f); local_28 != 0; local_28 = local_28 >> 1) {
    if ((local_28 == 1) && (param_1 == 0)) {
      local_2c = 0x30;
    }
    else {
      if (param_1 < local_28) {
        local_30 = 0x20;
      }
      else {
        local_30 = 0x31;
        if ((local_28 & param_1) == 0) {
          local_30 = 0x30;
        }
      }
      local_2c = local_30;
    }
    _putchar(local_2c);
  }
  iVar1 = _putchar(10);
  return iVar1;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  int local_18;
  
  for (local_18 = 0; local_18 < 0x15; local_18 = local_18 + 1) {
    _printf("%2d:");
    uVar1 = _fibbinary((long)local_18);
    _bprint(uVar1,8);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


