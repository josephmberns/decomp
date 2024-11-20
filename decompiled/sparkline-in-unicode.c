#include "sparkline-in-unicode.h"



undefined8 entry(int param_1,long param_2)

{
  double *pdVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  double dVar5;
  double local_60;
  double local_58;
  int local_44;
  double local_38;
  double local_30;
  
  if (param_1 == 1) {
    _printf("Usage : %s <data points separated by spaces or commas>");
  }
  else {
    pdVar1 = (double *)_malloc((long)(param_1 + -1) << 3);
    for (local_44 = 1; local_44 < param_1; local_44 = local_44 + 1) {
      sVar2 = _strlen(*(char **)(param_2 + (long)local_44 * 8));
      iVar4 = (int)sVar2;
      if (*(char *)(*(long *)(param_2 + (long)local_44 * 8) + (long)(iVar4 + -1)) == ',') {
        pcVar3 = (char *)_malloc((long)iVar4);
        ___strncpy_chk(pcVar3,*(undefined8 *)(param_2 + (long)local_44 * 8),(long)(iVar4 + -1),
                       0xffffffffffffffff);
        dVar5 = _atof(pcVar3);
        pdVar1[local_44 + -1] = dVar5;
        _free(pcVar3);
      }
      else {
        dVar5 = _atof(*(char **)(param_2 + (long)local_44 * 8));
        pdVar1[local_44 + -1] = dVar5;
      }
      if (local_44 == 1) {
        local_30 = *pdVar1;
        local_38 = *pdVar1;
      }
      else {
        if (pdVar1[local_44 + -1] <= local_30) {
          local_58 = pdVar1[local_44 + -1];
        }
        else {
          local_58 = local_30;
        }
        local_30 = local_58;
        if (local_38 <= pdVar1[local_44 + -1]) {
          local_60 = pdVar1[local_44 + -1];
        }
        else {
          local_60 = local_38;
        }
        local_38 = local_60;
      }
    }
    _printf("\n%Max : %lf,Min : %lf,Range : %lf\n");
    _setlocale(0,"");
    for (local_44 = 1; local_44 < param_1; local_44 = local_44 + 1) {
      _printf("%lc");
    }
  }
  return 0;
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__atof_100004008)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}


