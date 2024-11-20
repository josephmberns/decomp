#include "hofstadter-q-sequence.h"



undefined8 entry(void)

{
  undefined4 *puVar1;
  int local_18;
  
  puVar1 = (undefined4 *)_malloc(400000);
  puVar1[1] = 1;
  *puVar1 = 1;
  for (local_18 = 3; local_18 < 0x186a1; local_18 = local_18 + 1) {
    puVar1[(long)local_18 + -1] =
         puVar1[(long)(local_18 - puVar1[(long)(local_18 + -1) + -1]) + -1] +
         puVar1[(long)(local_18 - puVar1[(long)(local_18 + -2) + -1]) + -1];
  }
  for (local_18 = 1; local_18 < 0xb; local_18 = local_18 + 1) {
    _printf("%d%c");
  }
  _printf("%d\n");
  for (local_18 = 1; local_18 < 100000; local_18 = local_18 + 1) {
  }
  _printf("flips: %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
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


