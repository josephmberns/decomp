#include "stern-brocot-sequence-1.h"



uint _f(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = param_1;
  if (1 < param_1) {
    if ((param_1 & 1) == 0) {
      local_1c = _f(param_1 / 2);
    }
    else {
      iVar1 = _f(param_1 / 2);
      iVar2 = _f(param_1 / 2 + 1);
      local_1c = iVar1 + iVar2;
    }
    local_18 = local_1c;
  }
  return local_18;
}



uint _gcd(uint param_1,uint param_2)

{
  uint uVar1;
  uint local_20;
  uint local_1c;
  
  local_20 = param_2;
  if (param_1 != 0) {
    if (param_1 < param_2) {
      uVar1 = 0;
      if (param_1 != 0) {
        uVar1 = param_2 / param_1;
      }
      local_1c = _gcd(param_2 - uVar1 * param_1,param_1);
    }
    else {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = param_1 / param_2;
      }
      local_1c = _gcd(param_1 - uVar1 * param_2,param_2);
    }
    local_20 = local_1c;
  }
  return local_20;
}



int _find(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int local_1c;
  uint local_14;
  
  local_14 = param_1;
  do {
    local_1c = 1;
    while (uVar1 = _f(local_1c), uVar1 != local_14) {
      local_1c = local_1c + 1;
    }
    iVar2 = _printf("%3u at Stern #%u.\n");
    local_14 = local_14 + 1;
  } while (local_14 <= param_2);
  return iVar2;
}



undefined8 entry(void)

{
  char *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_18;
  
  for (local_18 = 1; local_18 < 0x10; local_18 = local_18 + 1) {
    _f(local_18);
    _printf("%u ");
  }
  _puts("are the first fifteen.");
  _find(1,10);
  _find(100,0);
  local_18 = 1;
  while( true ) {
    bVar2 = false;
    if (local_18 < 1000) {
      uVar3 = _f(local_18);
      uVar5 = _f(local_18 + 1);
      iVar4 = _gcd(uVar3,uVar5);
      bVar2 = iVar4 == 1;
    }
    if (!bVar2) break;
    local_18 = local_18 + 1;
  }
  pcVar1 = "All GCDs are 1.\n";
  if (local_18 != 1000) {
    pcVar1 = "GCD of #%d and #%d is not 1";
  }
  _printf(pcVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004008)((int)param_1);
  return iVar1;
}


