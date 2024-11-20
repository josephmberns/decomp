#include "fusc-sequence.h"



int _fusc(int param_1)

{
  int iVar1;
  int local_14;
  
  local_14 = param_1;
  if ((param_1 != 0) && (param_1 != 1)) {
    if (param_1 % 2 == 0) {
      local_14 = _fusc(param_1 / 2);
    }
    else {
      local_14 = _fusc((param_1 + -1) / 2);
      iVar1 = _fusc((param_1 + 1) / 2);
      local_14 = local_14 + iVar1;
    }
  }
  return local_14;
}



int _numLen(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 1;
  for (local_4 = param_1; 9 < local_4; local_4 = local_4 / 10) {
    local_8 = local_8 + 1;
  }
  return local_8;
}



ulong _printLargeFuscs(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  int local_24;
  int local_18;
  
  local_24 = 1;
  uVar1 = _printf("\n\nPrinting all largest Fusc numbers upto %d \nIndex-------Value");
  uVar4 = (ulong)uVar1;
  for (local_18 = 0; local_18 <= param_1; local_18 = local_18 + 1) {
    uVar2 = _fusc(local_18);
    uVar4 = _numLen(uVar2);
    iVar3 = (int)uVar4;
    if (local_24 < iVar3) {
      uVar1 = _printf("\n%5d%12d");
      uVar4 = (ulong)uVar1;
      local_24 = iVar3;
    }
  }
  return uVar4;
}



undefined8 entry(void)

{
  int local_18;
  
  _printf("Index-------Value");
  for (local_18 = 0; local_18 < 0x3d; local_18 = local_18 + 1) {
    _fusc(local_18);
    _printf("\n%5d%12d");
  }
  _printLargeFuscs(0x7fffffff);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


