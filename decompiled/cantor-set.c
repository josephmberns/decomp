#include "cantor-set.h"



void _init(void)

{
  int local_8;
  int local_4;
  
  for (local_4 = 0; local_4 < 5; local_4 = local_4 + 1) {
    for (local_8 = 0; local_8 < 0x51; local_8 = local_8 + 1) {
      (&_lines)[(long)local_8 + (long)local_4 * 0x51] = 0x2a;
    }
  }
  return;
}



void _cantor(int param_1,int param_2,int param_3)

{
  int local_24;
  int local_20;
  
  param_2 = param_2 / 3;
  local_20 = param_3;
  if (param_2 != 0) {
    for (; local_20 < 5; local_20 = local_20 + 1) {
      for (local_24 = param_1 + param_2; local_24 < param_1 + param_2 * 2; local_24 = local_24 + 1)
      {
        (&_lines)[(long)local_24 + (long)local_20 * 0x51] = 0x20;
      }
    }
    _cantor(param_1,param_2,param_3 + 1);
    _cantor(param_1 + param_2 * 2,param_2,param_3 + 1);
  }
  return;
}



ulong _print(ulong param_1)

{
  uint uVar1;
  int local_18;
  int local_14;
  
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 0x51; local_18 = local_18 + 1) {
      _printf("%c");
    }
    uVar1 = _printf("\n");
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



undefined4 entry(void)

{
  _init();
  _cantor(0,0x51,1);
  _print();
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


