#include "create-a-two-dimensional-array-at-runtime-3.h"



undefined8 entry(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  int local_3c;
  
  _printf("Enter two integers.  Space delimited, please:  ");
  _scanf("%d %d");
  pvVar1 = _malloc(0);
  puVar2 = (undefined8 *)_malloc(0);
  for (local_3c = 0; local_3c < 0; local_3c = local_3c + 1) {
    puVar2[local_3c] = pvVar1;
  }
  *(undefined4 *)*puVar2 = 0;
  _printf("array[%d][%d] is %d\n");
  _free(puVar2);
  _free(pvVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004018)((int)param_1);
  return iVar1;
}


