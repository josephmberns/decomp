#include "catalan-numbers.h"



ulong _binomial(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_18 = 1;
  uVar1 = param_1 - param_2;
  local_20 = uVar1;
  local_8 = param_1;
  local_10 = param_2;
  if (param_2 < uVar1) {
    local_20 = param_1 - uVar1;
    local_8 = param_1;
    local_10 = uVar1;
  }
  while (local_10 < local_8) {
    uVar1 = local_8 - 1;
    uVar2 = local_20;
    uVar3 = local_18 * local_8;
    while( true ) {
      local_18 = uVar3;
      local_20 = uVar2;
      bVar4 = false;
      if (1 < local_20) {
        uVar2 = 0;
        if (local_20 != 0) {
          uVar2 = local_18 / local_20;
        }
        bVar4 = local_18 == uVar2 * local_20;
      }
      local_8 = uVar1;
      if (!bVar4) break;
      uVar2 = local_20 - 1;
      uVar3 = 0;
      if (local_20 != 0) {
        uVar3 = local_18 / local_20;
      }
    }
  }
  return local_18;
}



ulong _catalan1(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = _binomial((long)(param_1 * 2),(long)param_1);
  uVar1 = 0;
  if ((long)(param_1 + 1) != 0) {
    uVar1 = uVar2 / (ulong)(long)(param_1 + 1);
  }
  return uVar1;
}



ulong _catalan2(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = (ulong)(param_1 == 0);
  for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
    lVar1 = _catalan2(local_18);
    lVar2 = _catalan2((param_1 + -1) - local_18);
    local_20 = local_20 + lVar1 * lVar2;
  }
  return local_20;
}



ulong _catalan3(int param_1)

{
  long lVar1;
  undefined8 local_20;
  
  if (param_1 == 0) {
    local_20 = 1;
  }
  else {
    lVar1 = _catalan3(param_1 + -1);
    local_20 = 0;
    if ((long)(param_1 + 1) != 0) {
      local_20 = (ulong)(((param_1 * 2 + -1) * 2) * lVar1) / (ulong)(long)(param_1 + 1);
    }
  }
  return local_20;
}



undefined8 entry(void)

{
  int local_18;
  
  _puts("\tdirect\tsumming\tfrac");
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    _catalan1(local_18);
    _catalan2(local_18);
    _catalan3(local_18);
    _printf("%d\t%llu\t%llu\t%llu\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004008)((int)param_1);
  return iVar1;
}


