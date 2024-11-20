#include "create-a-two-dimensional-array-at-runtime-4.h"



undefined8 entry(void)

{
  void *pvVar1;
  void *pvVar2;
  int local_44;
  int local_40;
  int local_3c;
  
  _printf("Enter size of array:  ");
  _scanf("%d");
  pvVar1 = _malloc(0);
  pvVar2 = _malloc(0);
  local_44 = 0;
  for (local_3c = 0; local_3c < 0; local_3c = local_3c + 1) {
    *(long *)((long)pvVar2 + (long)local_3c * 8) =
         (long)pvVar1 + (long)local_3c * -4 + (long)local_44 * 4;
    for (local_40 = local_3c; local_40 < 0; local_40 = local_40 + 1) {
      *(int *)(*(long *)((long)pvVar2 + (long)local_3c * 8) + (long)local_40 * 4) =
           (local_40 + 1) - local_3c;
    }
    local_44 = local_44 - local_3c;
  }
  for (local_3c = 0; local_3c < 0; local_3c = local_3c + 1) {
    _printf("%d ");
  }
  _printf("\n");
  _free(pvVar2);
  _free(pvVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004018)((int)param_1);
  return iVar1;
}


