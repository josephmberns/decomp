#include "knapsack-problem-0-1.h"



void * _knapsack(long param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int local_50;
  int local_28;
  int local_24;
  
  pvVar2 = _calloc((long)((param_2 + 1) * (param_3 + 1)),4);
  puVar3 = (undefined8 *)_malloc((long)(param_2 + 1) << 3);
  *puVar3 = pvVar2;
  for (local_24 = 1; local_24 <= param_2; local_24 = local_24 + 1) {
    puVar3[local_24] = (void *)((long)pvVar2 + (long)(local_24 * (param_3 + 1)) * 4);
    for (local_28 = 0; local_28 <= param_3; local_28 = local_28 + 1) {
      if (local_28 < *(int *)(param_1 + (long)(local_24 + -1) * 0x10 + 8)) {
        *(undefined4 *)(puVar3[local_24] + (long)local_28 * 4) =
             *(undefined4 *)(puVar3[local_24 + -1] + (long)local_28 * 4);
      }
      else {
        iVar1 = *(int *)(puVar3[local_24 + -1] + (long)local_28 * 4);
        local_50 = *(int *)(puVar3[local_24 + -1] +
                           (long)(local_28 - *(int *)(param_1 + (long)(local_24 + -1) * 0x10 + 8)) *
                           4) + *(int *)(param_1 + (long)(local_24 + -1) * 0x10 + 0xc);
        if (local_50 < iVar1) {
          local_50 = iVar1;
        }
        *(int *)(puVar3[local_24] + (long)local_28 * 4) = local_50;
      }
    }
  }
  pvVar4 = _calloc((long)param_2,4);
  local_28 = param_3;
  for (local_24 = param_2; 0 < local_24; local_24 = local_24 + -1) {
    if (*(int *)(puVar3[local_24 + -1] + (long)local_28 * 4) <
        *(int *)(puVar3[local_24] + (long)local_28 * 4)) {
      *(undefined4 *)((long)pvVar4 + (long)(local_24 + -1) * 4) = 1;
      local_28 = local_28 - *(int *)(param_1 + (long)(local_24 + -1) * 0x10 + 8);
    }
  }
  _free(pvVar2);
  _free(puVar3);
  return pvVar4;
}



undefined8 entry(void)

{
  long lVar1;
  int local_18;
  
  lVar1 = _knapsack(&_items,0x16,400);
  for (local_18 = 0; local_18 < 0x16; local_18 = local_18 + 1) {
    if (*(int *)(lVar1 + (long)local_18 * 4) != 0) {
      _printf("%-22s %5d %5d\n");
    }
  }
  _printf("%-22s %5d %5d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


