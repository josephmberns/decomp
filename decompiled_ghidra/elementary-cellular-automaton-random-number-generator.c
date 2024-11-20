#include "elementary-cellular-automaton-random-number-generator.h"



int _evolve(ulong param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  int local_28;
  int local_24;
  uint local_20;
  ulong local_18;
  
  local_18 = param_1;
  for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
    local_28 = 8;
    while (uVar1 = local_18, iVar2 = local_28 + -1, local_28 != 0) {
      local_18 = 0;
      for (local_20 = 0; local_28 = iVar2, local_20 < 0x40; local_20 = local_20 + 1) {
        if (((long)param_2 &
            1L << ((uVar1 >> ((ulong)(local_20 - 1) & 0x3f) |
                   uVar1 << (0x41U - (long)(int)local_20 & 0x3f)) & 7)) != 0) {
          local_18 = local_18 | 1L << ((ulong)local_20 & 0x3f);
        }
      }
    }
    _printf(" %d");
  }
  iVar2 = _putchar(10);
  return iVar2;
}



undefined4 entry(void)

{
  _evolve(1,0x1e);
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


