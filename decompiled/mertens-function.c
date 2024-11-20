#include "mertens-function.h"



void * _mertens_numbers(int param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_30;
  undefined4 local_2c;
  
  pvVar3 = _malloc((long)(param_1 + 1) << 2);
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)((long)pvVar3 + 4) = 1;
    for (local_2c = 2; local_2c <= param_1; local_2c = local_2c + 1) {
      *(undefined4 *)((long)pvVar3 + (long)local_2c * 4) = 1;
      for (local_30 = 2; local_30 <= local_2c; local_30 = local_30 + 1) {
        iVar2 = 0;
        if (local_30 != 0) {
          iVar2 = local_2c / local_30;
        }
        piVar1 = (int *)((long)pvVar3 + (long)local_2c * 4);
        *piVar1 = *piVar1 - *(int *)((long)pvVar3 + (long)iVar2 * 4);
      }
    }
  }
  return pvVar3;
}



undefined4 entry(void)

{
  void *pvVar1;
  int local_3c;
  int local_2c;
  int local_28;
  undefined4 local_14;
  
  pvVar1 = (void *)_mertens_numbers();
  if (pvVar1 == (void *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_100004000,"Out of memory\n");
    local_14 = 1;
  }
  else {
    _printf("First 199 Mertens numbers:\n");
    local_2c = 0;
    for (local_28 = 0; local_28 < 200; local_28 = local_28 + 1) {
      if (0 < local_2c) {
        _printf(" ");
      }
      if (local_28 == 0) {
        _printf("  ");
      }
      else {
        _printf("%2d");
      }
      local_2c = local_2c + 1;
      if (local_2c == 0x14) {
        _printf("\n");
        local_2c = 0;
      }
    }
    for (local_3c = 1; local_3c < 0x3e9; local_3c = local_3c + 1) {
    }
    _free(pvVar1);
    _printf("M(n) is zero %d times for 1 <= n <= %d.\n");
    _printf("M(n) crosses zero %d times for 1 <= n <= %d.\n");
    local_14 = 0;
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


