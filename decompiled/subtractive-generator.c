#include "subtractive-generator.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _subrand_seed(int param_1)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = 1;
  __state = param_1 % 1000000000;
  local_1c = 0x15;
  local_14 = param_1;
  for (local_18 = 1; local_18 < 0x37; local_18 = local_18 + 1) {
    if (0x36 < local_1c) {
      local_1c = local_1c + -0x37;
    }
    *(int *)(&_state + (long)local_1c * 4) = local_20;
    local_20 = local_14 - local_20;
    if (local_20 < 0) {
      local_20 = local_20 + 1000000000;
    }
    local_14 = *(int *)(&_state + (long)local_1c * 4);
    local_1c = local_1c + 0x15;
  }
  __si = 0;
  __sj = 0x18;
  for (local_18 = 0; local_18 < 0xa5; local_18 = local_18 + 1) {
    _subrand();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _subrand(void)

{
  bool bVar1;
  int local_14;
  
  if (__si == __sj) {
    _subrand_seed(0);
  }
  bVar1 = __si == 0;
  __si = __si + -1;
  if (bVar1) {
    __si = 0x36;
  }
  bVar1 = __sj == 0;
  __sj = __sj + -1;
  if (bVar1) {
    __sj = 0x36;
  }
  local_14 = *(int *)(&_state + (long)__si * 4) - *(int *)(&_state + (long)__sj * 4);
  if (local_14 < 0) {
    local_14 = local_14 + 1000000000;
  }
  *(int *)(&_state + (long)__si * 4) = local_14;
  return;
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  int local_18;
  
  uVar2 = _subrand_seed(0x47841);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    _subrand(uVar2);
    uVar1 = _printf("%d\n");
    uVar2 = (ulong)uVar1;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


