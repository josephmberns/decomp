#include "erd-s-nicolas-numbers-2.h"



int _get_div_cnt(int param_1)

{
  int iVar1;
  int local_24;
  int local_1c;
  
  local_24 = 1;
  for (local_1c = 2; local_1c <= param_1 / 2; local_1c = local_1c + 1) {
    iVar1 = 0;
    if (local_1c != 0) {
      iVar1 = param_1 / local_1c;
    }
    if (param_1 == iVar1 * local_1c) {
      local_24 = local_24 + local_1c;
    }
    if (local_24 == param_1) break;
  }
  iVar1 = _printf("%8d equals the sum of its first %d divisors\n");
  return iVar1;
}



undefined8 entry(void)

{
  int *piVar1;
  void *pvVar2;
  undefined4 local_28;
  undefined4 local_24;
  
  pvVar2 = _malloc(0x17d78404);
  for (local_24 = 0; local_24 < 0x5f5e101; local_24 = local_24 + 1) {
    *(undefined4 *)((long)pvVar2 + (long)local_24 * 4) = 1;
  }
  for (local_24 = 2; local_24 < 0x5f5e101; local_24 = local_24 + 1) {
    for (local_28 = local_24 * 2; local_28 < 0x5f5e101; local_28 = local_28 + local_24) {
      if (*(int *)((long)pvVar2 + (long)local_28 * 4) == local_28) {
        _get_div_cnt(local_28);
      }
      piVar1 = (int *)((long)pvVar2 + (long)local_28 * 4);
      *piVar1 = *piVar1 + local_24;
    }
  }
  _free(pvVar2);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


