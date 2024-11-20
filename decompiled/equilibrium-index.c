#include "equilibrium-index.h"



int _eq_idx(long param_1,int param_2,long *param_3)

{
  void *pvVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  pvVar1 = _malloc((long)param_2 * 4);
  *param_3 = (long)pvVar1;
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    local_30 = local_30 + *(int *)(param_1 + (long)local_2c * 4);
  }
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    if (*(int *)(param_1 + (long)local_2c * 4) + local_34 * 2 == local_30) {
      *(int *)(*param_3 + (long)local_38 * 4) = local_2c;
      local_38 = local_38 + 1;
    }
    local_34 = local_34 + *(int *)(param_1 + (long)local_2c * 4);
  }
  pvVar1 = _realloc((void *)*param_3,(long)local_38 << 2);
  *param_3 = (long)pvVar1;
  return local_38;
}



undefined8 entry(void)

{
  undefined local_28 [12];
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_1c = _eq_idx(&_list,7,local_28);
  _printf("Found:");
  for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
    _printf(" %d");
  }
  _printf("\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004010)();
  return pvVar1;
}


