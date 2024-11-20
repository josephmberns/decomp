#include "elementary-cellular-automaton.h"



int _evolve(ulong param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  uint local_20;
  ulong local_18;
  
  _printf("Rule %d:\n");
  local_18 = param_1;
  do {
    uVar1 = local_18;
    local_20 = 0x40;
    while (local_20 != 0) {
      iVar2 = 0x23;
      if ((local_18 & 1L << ((ulong)(local_20 - 1) & 0x3f)) == 0) {
        iVar2 = 0x2e;
      }
      _putchar(iVar2);
      local_20 = local_20 - 1;
    }
    iVar2 = _putchar(10);
    local_18 = 0;
    for (local_20 = 0; local_20 < 0x40; local_20 = local_20 + 1) {
      if (((long)param_2 &
          1L << ((uVar1 >> ((ulong)(local_20 - 1) & 0x3f) |
                 uVar1 << (0x41U - (long)(int)local_20 & 0x3f)) & 7)) != 0) {
        local_18 = local_18 | 1L << ((ulong)local_20 & 0x3f);
      }
    }
  } while (uVar1 != local_18);
  return iVar2;
}



undefined4 entry(void)

{
  _evolve(0x100000000,0x5a);
  _evolve(0x1000000010000,0x1e);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


