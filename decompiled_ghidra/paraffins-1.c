#include "paraffins-1.h"



ulong _choose(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_8;
  
  local_8 = param_1;
  if (param_2 != 1) {
    local_28 = param_1;
    for (local_20 = 1; local_20 < param_2; local_20 = local_20 + 1) {
      uVar1 = local_28 * (param_1 + local_20);
      local_28 = 0;
      if (local_20 + 1 != 0) {
        local_28 = uVar1 / (local_20 + 1);
      }
    }
    local_8 = local_28;
  }
  return local_8;
}



void _tree(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long local_50;
  ulong local_40;
  
  local_40 = param_1 + 1;
  while( true ) {
    if ((4 < local_40) || (uVar1 = param_4 + (local_40 - param_1) * param_2, 0x20 < uVar1)) {
      return;
    }
    lVar2 = _choose(*(undefined8 *)(&_rooted + param_2 * 8),local_40 - param_1);
    lVar2 = lVar2 * param_3;
    if ((ulong)(param_5 * 2) < uVar1) {
      *(long *)(&_unrooted + uVar1 * 8) = *(long *)(&_unrooted + uVar1 * 8) + lVar2;
    }
    if (local_40 == 4) break;
    *(long *)(&_rooted + uVar1 * 8) = *(long *)(&_rooted + uVar1 * 8) + lVar2;
    local_50 = param_2;
    while (local_50 = local_50 + -1, local_50 != 0) {
      _tree(local_40,local_50,lVar2,uVar1,param_5);
    }
    local_40 = local_40 + 1;
  }
  return;
}



void _bicenter(uint param_1)

{
  if ((param_1 & 1) == 0) {
    *(ulong *)(&_unrooted + (long)(int)param_1 * 8) =
         *(long *)(&_unrooted + (long)(int)param_1 * 8) +
         (ulong)(*(long *)(&_rooted + (long)((int)param_1 / 2) * 8) *
                (*(long *)(&_rooted + (long)((int)param_1 / 2) * 8) + 1)) / 2;
  }
  return;
}



undefined8 entry(void)

{
  ulong local_20;
  
  for (local_20 = 1; local_20 < 0x21; local_20 = local_20 + 1) {
    _tree(0,local_20,1,1,local_20);
    _bicenter(local_20);
    _printf("%llu: %llu\n");
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


