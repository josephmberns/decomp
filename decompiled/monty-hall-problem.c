#include "monty-hall-problem.h"



int entry(void)

{
  int iVar1;
  time_t tVar2;
  byte local_2c [4];
  int local_28;
  int local_24;
  long local_20;
  ulong local_18;
  
  local_20 = 0;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  tVar2 = _time((time_t *)0x0);
  _srand((uint)tVar2);
  for (local_18 = 0; local_18 < 0x3b9aca01; local_18 = local_18 + 1) {
    local_28 = _rand();
    local_28 = local_28 % 3;
    iVar1 = _rand();
    local_24 = iVar1 % 3;
    local_2c[local_28] = 1;
    if ((local_2c[local_24] & 1) != 0) {
      local_20 = local_20 + 1;
    }
    local_2c[local_28] = 0;
  }
  _abs(1000000000 - (int)local_20);
  iVar1 = _printf(
                 "\nAfter %lu games, I won %u by staying.  That is %f%%. and I won by switching %lu That is %f%%"
                 );
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _abs(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__abs_100004000)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004010)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004020)();
  return tVar1;
}


