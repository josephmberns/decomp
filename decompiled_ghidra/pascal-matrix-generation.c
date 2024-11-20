#include "pascal-matrix-generation.h"



void _pascal_low(long param_1,int param_2)

{
  int local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
      if (local_10 < local_14) {
        *(undefined4 *)(*(long *)(param_1 + (long)local_10 * 8) + (long)local_14 * 4) = 0;
      }
      else if ((local_10 == local_14) || (local_14 == 0)) {
        *(undefined4 *)(*(long *)(param_1 + (long)local_10 * 8) + (long)local_14 * 4) = 1;
      }
      else {
        *(int *)(*(long *)(param_1 + (long)local_10 * 8) + (long)local_14 * 4) =
             *(int *)(*(long *)(param_1 + (long)(local_10 + -1) * 8) + (long)(local_14 + -1) * 4) +
             *(int *)(*(long *)(param_1 + (long)(local_10 + -1) * 8) + (long)local_14 * 4);
      }
    }
  }
  return;
}



void _pascal_upp(long param_1,int param_2)

{
  int local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
      if (local_14 < local_10) {
        *(undefined4 *)(*(long *)(param_1 + (long)local_10 * 8) + (long)local_14 * 4) = 0;
      }
      else if ((local_10 == local_14) || (local_10 == 0)) {
        *(undefined4 *)(*(long *)(param_1 + (long)local_10 * 8) + (long)local_14 * 4) = 1;
      }
      else {
        *(int *)(*(long *)(param_1 + (long)local_10 * 8) + (long)local_14 * 4) =
             *(int *)(*(long *)(param_1 + (long)(local_10 + -1) * 8) + (long)(local_14 + -1) * 4) +
             *(int *)(*(long *)(param_1 + (long)local_10 * 8) + (long)(local_14 + -1) * 4);
      }
    }
  }
  return;
}



void _pascal_sym(long param_1,int param_2)

{
  int local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
      if ((local_10 == 0) || (local_14 == 0)) {
        *(undefined4 *)(*(long *)(param_1 + (long)local_10 * 8) + (long)local_14 * 4) = 1;
      }
      else {
        *(int *)(*(long *)(param_1 + (long)local_10 * 8) + (long)local_14 * 4) =
             *(int *)(*(long *)(param_1 + (long)(local_10 + -1) * 8) + (long)local_14 * 4) +
             *(int *)(*(long *)(param_1 + (long)local_10 * 8) + (long)(local_14 + -1) * 4);
      }
    }
  }
  return;
}



undefined8 entry(void)

{
  void *pvVar1;
  void *pvVar2;
  int local_30;
  int local_2c;
  
  pvVar1 = _calloc(5,8);
  for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
    pvVar2 = _calloc(5,4);
    *(void **)((long)pvVar1 + (long)local_2c * 8) = pvVar2;
  }
  _printf("=== Pascal upper matrix ===\n");
  _pascal_upp(pvVar1,5);
  for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < 5; local_30 = local_30 + 1) {
      _printf("%4d%c");
    }
  }
  _printf("=== Pascal lower matrix ===\n");
  _pascal_low(pvVar1,5);
  for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < 5; local_30 = local_30 + 1) {
      _printf("%4d%c");
    }
  }
  _printf("=== Pascal symmetric matrix ===\n");
  _pascal_sym(pvVar1,5);
  for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < 5; local_30 = local_30 + 1) {
      _printf("%4d%c");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


