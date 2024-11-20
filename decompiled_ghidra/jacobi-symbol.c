#include "jacobi-symbol.h"



int _jacobi(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int local_1c;
  ulong local_18;
  ulong local_10;
  int local_4;
  
  local_10 = param_1;
  if (param_2 <= param_1) {
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = param_1 / param_2;
    }
    local_10 = param_1 - uVar2 * param_2;
  }
  local_1c = 1;
  local_18 = param_2;
  while (local_10 != 0) {
    while ((local_10 & 1) == 0) {
      local_10 = local_10 >> 1;
      if (((local_18 & 7) == 3) || ((local_18 & 7) == 5)) {
        local_1c = -local_1c;
      }
    }
    uVar2 = local_10;
    if (((local_18 & 3) == 3) && ((local_10 & 3) == 3)) {
      local_1c = -local_1c;
    }
    uVar1 = 0;
    if (local_10 != 0) {
      uVar1 = local_18 / local_10;
    }
    local_10 = local_18 - uVar1 * local_10;
    local_18 = uVar2;
  }
  if (local_18 == 1) {
    local_4 = local_1c;
  }
  else {
    local_4 = 0;
  }
  return local_4;
}



int _print_table(uint param_1,uint param_2)

{
  int iVar1;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  _printf("n\\k|");
  for (local_1c = 0; local_1c <= param_1; local_1c = local_1c + 1) {
    _printf("%\'3u");
  }
  _printf("\n----");
  for (local_20 = 0; local_20 <= param_1; local_20 = local_20 + 1) {
    _printf("---");
  }
  iVar1 = _putchar(10);
  for (local_24 = 1; local_24 <= param_2; local_24 = local_24 + 2) {
    _printf("%-2u |");
    for (local_28 = 0; local_28 <= param_1; local_28 = local_28 + 1) {
      _jacobi((long)(int)local_28,(long)(int)local_24);
      _printf("%\'3d");
    }
    iVar1 = _putchar(10);
  }
  return iVar1;
}



undefined4 entry(void)

{
  _print_table(0x14,0x15);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


