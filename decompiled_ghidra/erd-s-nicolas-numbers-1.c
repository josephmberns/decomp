#include "erd-s-nicolas-numbers-1.h"



undefined8 entry(void)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  int local_30;
  int local_2c;
  
  pvVar2 = _malloc(0x17d78404);
  pvVar3 = _malloc(0x17d78404);
  for (local_2c = 0; local_2c < 0x5f5e101; local_2c = local_2c + 1) {
    *(undefined4 *)((long)pvVar2 + (long)local_2c * 4) = 1;
    *(undefined4 *)((long)pvVar3 + (long)local_2c * 4) = 1;
  }
  for (local_2c = 2; local_2c < 0x5f5e101; local_2c = local_2c + 1) {
    for (local_30 = local_2c * 2; local_30 < 0x5f5e101; local_30 = local_30 + local_2c) {
      if (*(int *)((long)pvVar2 + (long)local_30 * 4) == local_30) {
        _printf("%8d equals the sum of its first %d divisors\n");
      }
      piVar1 = (int *)((long)pvVar2 + (long)local_30 * 4);
      *piVar1 = *piVar1 + local_2c;
      piVar1 = (int *)((long)pvVar3 + (long)local_30 * 4);
      *piVar1 = *piVar1 + 1;
    }
  }
  _free(pvVar2);
  _free(pvVar3);
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


