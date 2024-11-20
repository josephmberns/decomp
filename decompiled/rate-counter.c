#include "rate-counter.h"



ulong _tic_rate(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  param_1[2] = param_1[2] + 1;
  uVar2 = _time((time_t *)0x0);
  uVar3 = uVar2;
  if ((long)param_1[1] <= (long)(uVar2 - *param_1)) {
    uVar1 = _printf("%u tics per second.\n");
    uVar3 = (ulong)uVar1;
    param_1[2] = 0;
    *param_1 = uVar2;
  }
  return uVar3;
}



void _something_we_do(void)

{
  undefined8 local_10;
  
  for (local_10 = 0; local_10 < 0xffff; local_10 = local_10 + 1) {
  }
  return;
}



undefined8 entry(void)

{
  long local_40;
  time_t local_38 [3];
  long local_20;
  undefined4 local_14;
  
  local_14 = 0;
  local_40 = _time((time_t *)0x0);
  local_38[2] = 0;
  local_38[1] = 5;
  local_38[0] = local_40;
  local_20 = local_40;
  while (local_40 - local_20 < 0x14) {
    _something_we_do();
    _tic_rate(local_38);
    local_40 = _time((time_t *)0x0);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004008)();
  return tVar1;
}


