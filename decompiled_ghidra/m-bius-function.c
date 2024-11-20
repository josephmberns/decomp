#include "m-bius-function.h"



undefined8 entry(void)

{
  int *piVar1;
  void *pvVar2;
  int local_20;
  int local_1c;
  
  pvVar2 = _malloc(0x3d0904);
  for (local_1c = 0; local_1c < 1000000; local_1c = local_1c + 1) {
    *(undefined4 *)((long)pvVar2 + (long)local_1c * 4) = 1;
  }
  for (local_1c = 2; local_1c < 0x3e9; local_1c = local_1c + 1) {
    if (*(int *)((long)pvVar2 + (long)local_1c * 4) == 1) {
      for (local_20 = local_1c; local_20 < 0xf4241; local_20 = local_20 + local_1c) {
        piVar1 = (int *)((long)pvVar2 + (long)local_20 * 4);
        *piVar1 = -(local_1c * *piVar1);
      }
      for (local_20 = local_1c * local_1c; local_20 < 0xf4241;
          local_20 = local_20 + local_1c * local_1c) {
        *(undefined4 *)((long)pvVar2 + (long)local_20 * 4) = 0;
      }
    }
  }
  for (local_1c = 2; local_1c < 0xf4241; local_1c = local_1c + 1) {
    if (*(int *)((long)pvVar2 + (long)local_1c * 4) == local_1c) {
      *(undefined4 *)((long)pvVar2 + (long)local_1c * 4) = 1;
    }
    else if (*(int *)((long)pvVar2 + (long)local_1c * 4) + local_1c == 0) {
      *(undefined4 *)((long)pvVar2 + (long)local_1c * 4) = 0xffffffff;
    }
    else if (*(int *)((long)pvVar2 + (long)local_1c * 4) < 0) {
      *(undefined4 *)((long)pvVar2 + (long)local_1c * 4) = 1;
    }
    else if (0 < *(int *)((long)pvVar2 + (long)local_1c * 4)) {
      *(undefined4 *)((long)pvVar2 + (long)local_1c * 4) = 0xffffffff;
    }
  }
  _printf(s_First_199_terms_of_the_m_bius_fu_100003f60);
  for (local_1c = 1; local_1c < 200; local_1c = local_1c + 1) {
    _printf("%2d  ");
    if ((local_1c + 1) % 0x14 == 0) {
      _printf("\n");
    }
  }
  _free(pvVar2);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


