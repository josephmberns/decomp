#include "spiral-matrix-1.h"



undefined8 entry(int param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  int local_44;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_2c = 0;
  local_30 = 0;
  if (1 < param_1) {
    local_2c = _atoi(*(char **)(param_2 + 8));
  }
  if (2 < param_1) {
    local_30 = _atoi(*(char **)(param_2 + 0x10));
  }
  if (local_2c < 1) {
    local_2c = 5;
  }
  if (local_30 < 1) {
    local_30 = local_2c;
  }
  plVar3 = (long *)_calloc(1,(long)local_2c * 8 + (long)local_2c * 4 * (long)local_30);
  *plVar3 = (long)(plVar3 + local_2c);
  for (local_24 = 1; local_24 < local_2c; local_24 = local_24 + 1) {
    plVar3[local_24] = plVar3[local_24 + -1] + (long)local_30 * 4;
  }
  local_3c = 1;
  local_40 = 0;
  local_44 = 0;
  local_28 = 0;
  local_24 = 0;
  while( true ) {
    bVar1 = false;
    if ((((-1 < local_24) && (bVar1 = false, local_24 < local_2c)) && (bVar1 = false, -1 < local_28)
        ) && (bVar1 = false, local_28 < local_30)) {
      bVar1 = *(int *)(plVar3[local_24] + (long)local_28 * 4) == 0;
    }
    if (!bVar1) break;
    while( true ) {
      bVar1 = false;
      if (((-1 < local_24) && (bVar1 = false, local_24 < local_2c)) &&
         ((bVar1 = false, -1 < local_28 && (bVar1 = false, local_28 < local_30)))) {
        bVar1 = *(int *)(plVar3[local_24] + (long)local_28 * 4) == 0;
      }
      if (!bVar1) break;
      local_44 = local_44 + 1;
      *(int *)(plVar3[local_24] + (long)local_28 * 4) = local_44;
      local_28 = local_28 + local_3c;
      local_24 = local_24 + local_40;
    }
    iVar2 = -local_40;
    local_24 = (local_24 - local_40) + local_3c;
    local_28 = (local_28 - local_3c) + iVar2;
    local_40 = local_3c;
    local_3c = iVar2;
  }
  do {
    local_44 = local_44 / 10;
  } while (local_44 != 0);
  for (local_24 = 0; local_24 < local_2c; local_24 = local_24 + 1) {
    local_28 = 0;
    while( true ) {
      bVar1 = true;
      if (local_30 <= local_28) {
        iVar2 = _putchar(10);
        bVar1 = iVar2 == 0;
      }
      if (!bVar1) break;
      _printf("%*d");
      local_28 = local_28 + 1;
    }
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

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004008)();
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


