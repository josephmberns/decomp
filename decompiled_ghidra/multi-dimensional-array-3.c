#include "multi-dimensional-array-3.h"



undefined8 entry(void)

{
  void *pvVar1;
  void *pvVar2;
  int local_2c;
  int local_28;
  int local_24;
  
  pvVar1 = _malloc(0x28);
  for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
    pvVar2 = _malloc(0x20);
    *(void **)((long)pvVar1 + (long)local_24 * 8) = pvVar2;
    for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
      pvVar2 = _malloc(0x18);
      *(void **)(*(long *)((long)pvVar1 + (long)local_24 * 8) + (long)local_28 * 8) = pvVar2;
      for (local_2c = 0; local_2c < 3; local_2c = local_2c + 1) {
        pvVar2 = _malloc(8);
        *(void **)(*(long *)(*(long *)((long)pvVar1 + (long)local_24 * 8) + (long)local_28 * 8) +
                  (long)local_2c * 8) = pvVar2;
      }
    }
  }
  *(undefined4 *)(*(long *)(*(long *)(*(long *)((long)pvVar1 + 0x20) + 0x18) + 0x10) + 4) = 1;
  _printf("\n%d");
  _printf("\n%d");
  **(undefined4 **)(*(long *)(*(long *)((long)pvVar1 + 0x18) + 0x10) + 8) = 3;
  _printf("\n%d");
  _free(pvVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


