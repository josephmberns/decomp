#include "mean.h"



undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  int local_30;
  int local_2c;
  undefined4 local_14;
  
  local_2c = 10;
  if ((param_1 == 2) && (local_2c = _atoi(*(char **)(param_2 + 8)), 0x7ffffffe < local_2c)) {
    _fprintf(*(FILE **)PTR____stderrp_100004000,"Maximum %d!\n");
    local_14 = 1;
  }
  else {
    pvVar2 = _malloc((long)local_2c << 2);
    _printf("Random Numbers Generated are: ");
    for (local_30 = 0; local_30 < local_2c; local_30 = local_30 + 1) {
      iVar1 = _rand();
      *(int *)((long)pvVar2 + (long)local_30 * 4) = iVar1 % 100;
      _printf("%2d, ");
    }
    _putchar(10);
    for (local_30 = 0; local_30 < local_2c; local_30 = local_30 + 1) {
    }
    _printf("\nMean: ");
    _printf("%f\n");
    _free(pvVar2);
    local_14 = 0;
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004030)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004038)();
  return iVar1;
}


