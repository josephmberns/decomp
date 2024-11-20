#include "knapsack-problem-bounded.h"



void * _knapsack(int param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int local_20;
  int local_1c;
  int local_18;
  
  pvVar3 = _calloc((long)((_n + 1) * (param_1 + 1)),4);
  puVar4 = (undefined8 *)_malloc((long)(_n + 1) << 3);
  *puVar4 = pvVar3;
  for (local_18 = 1; local_18 <= _n; local_18 = local_18 + 1) {
    puVar4[local_18] = (void *)((long)pvVar3 + (long)(local_18 * (param_1 + 1)) * 4);
    for (local_1c = 0; local_1c <= param_1; local_1c = local_1c + 1) {
      *(undefined4 *)(puVar4[local_18] + (long)local_1c * 4) =
           *(undefined4 *)(puVar4[local_18 + -1] + (long)local_1c * 4);
      for (local_20 = 1;
          (local_20 <= (int)(&DAT_100008010)[(long)(local_18 + -1) * 6] &&
          (local_20 * (&DAT_100008008)[(long)(local_18 + -1) * 6] <= local_1c));
          local_20 = local_20 + 1) {
        iVar2 = *(int *)(puVar4[local_18 + -1] +
                        (long)(local_1c - local_20 * (&DAT_100008008)[(long)(local_18 + -1) * 6]) *
                        4) + local_20 * (&DAT_10000800c)[(long)(local_18 + -1) * 6];
        if (*(int *)(puVar4[local_18] + (long)local_1c * 4) < iVar2) {
          *(int *)(puVar4[local_18] + (long)local_1c * 4) = iVar2;
        }
      }
    }
  }
  pvVar5 = _calloc((long)_n,4);
  local_1c = param_1;
  for (local_18 = _n; 0 < local_18; local_18 = local_18 + -1) {
    iVar2 = *(int *)(puVar4[local_18] + (long)local_1c * 4);
    for (local_20 = 0;
        iVar2 != *(int *)(puVar4[local_18 + -1] + (long)local_1c * 4) +
                 local_20 * (&DAT_10000800c)[(long)(local_18 + -1) * 6]; local_20 = local_20 + 1) {
      piVar1 = (int *)((long)pvVar5 + (long)(local_18 + -1) * 4);
      *piVar1 = *piVar1 + 1;
      local_1c = local_1c - (&DAT_100008008)[(long)(local_18 + -1) * 6];
    }
  }
  _free(pvVar3);
  _free(puVar4);
  return pvVar5;
}



undefined8 entry(void)

{
  long lVar1;
  int local_18;
  
  lVar1 = _knapsack(400);
  for (local_18 = 0; local_18 < _n; local_18 = local_18 + 1) {
    if (*(int *)(lVar1 + (long)local_18 * 4) != 0) {
      _printf("%-22s %5d %5d %5d\n");
    }
  }
  _printf("%-22s %5d %5d %5d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


