#include "pascals-triangle-1.h"



ulong _pascaltriangle(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  uVar1 = (uint)param_1;
  for (local_1c = 0; local_1c < uVar1; local_1c = local_1c + 1) {
    for (local_20 = 1; local_20 <= ((uVar1 - 1) - local_1c) * 2; local_20 = local_20 + 1) {
      _printf(" ");
    }
    for (local_24 = 0; local_24 <= local_1c; local_24 = local_24 + 1) {
      _printf("%3d ");
    }
    uVar2 = _printf("\n");
    param_1 = (ulong)uVar2;
  }
  return param_1;
}



undefined4 entry(void)

{
  _pascaltriangle(8);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


