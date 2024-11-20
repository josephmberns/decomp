#include "zig-zag-matrix.h"



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int local_50;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  
  if ((param_1 < 2) || (local_2c = _atoi(*(char **)(param_2 + 8)), local_2c < 1)) {
    local_2c = 5;
  }
  pvVar2 = _malloc((long)local_2c * 4 * (long)local_2c);
  local_30 = 0;
  for (local_24 = 0; (int)(local_24 + local_2c * -2) < 0 != SBORROW4(local_24,local_2c * 2);
      local_24 = local_24 + 1) {
    if ((int)local_24 < local_2c) {
      local_3c = 0;
    }
    else {
      local_3c = (local_24 - local_2c) + 1;
    }
    for (local_28 = local_3c; local_28 <= (int)local_24 && local_28 < local_2c;
        local_28 = local_28 + 1) {
      if ((local_24 & 1) == 0) {
        local_50 = (local_24 - local_28) * local_2c + local_28;
      }
      else {
        local_50 = local_28 * (local_2c + -1) + local_24;
      }
      *(int *)((long)pvVar2 + (long)local_50 * 4) = local_30;
      local_30 = local_30 + 1;
    }
  }
  local_24 = 0;
  while ((int)local_24 < local_2c * local_2c) {
    _printf("%3d");
    local_24 = local_24 + 1;
    iVar1 = 0;
    if (local_2c != 0) {
      iVar1 = (int)local_24 / local_2c;
    }
    iVar3 = 0x20;
    if (local_24 == iVar1 * local_2c) {
      iVar3 = 10;
    }
    _putchar(iVar3);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}


