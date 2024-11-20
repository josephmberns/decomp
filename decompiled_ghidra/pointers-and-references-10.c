#include "pointers-and-references-10.h"



undefined8 entry(void)

{
  void *local_28;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_28 = (void *)0x0;
  local_18 = _addNodes(&local_28,10);
  for (local_1c = 0; local_1c < local_18; local_1c = local_1c + 1) {
    _printf("%d) %d\n");
  }
  _free(local_28);
  return 0;
}



int _addNodes(long *param_1,int param_2)

{
  void *pvVar1;
  int local_34;
  
  local_34 = 0;
  while( true ) {
    if (param_2 <= local_34) {
      return local_34;
    }
    pvVar1 = _realloc((void *)*param_1,(long)(local_34 + 1) << 2);
    if (pvVar1 == (void *)0x0) break;
    *param_1 = (long)pvVar1;
    *(int *)(*param_1 + (long)local_34 * 4) = local_34;
    local_34 = local_34 + 1;
  }
  _free((void *)*param_1);
  return -1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004010)();
  return pvVar1;
}


