#include "kronecker-product.h"



undefined4 entry(void)

{
  undefined *puVar1;
  int iVar2;
  FILE *pFVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  char acStack_f0 [100];
  char acStack_8c [100];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _printf("Enter full path of input file : ");
  puVar1 = PTR____stdinp_100004010;
  _fscanf(*(FILE **)PTR____stdinp_100004010,"%s");
  _printf("Enter full path of output file : ");
  _fscanf(*(FILE **)puVar1,"%s");
  pFVar3 = _fopen(acStack_8c,"r");
  _fscanf(pFVar3,"%d%d");
  pvVar4 = _malloc((long)local_108 << 3);
  for (local_f8 = 0; local_f8 < local_108; local_f8 = local_f8 + 1) {
    pvVar5 = _malloc((long)local_10c << 3);
    *(void **)((long)pvVar4 + (long)local_f8 * 8) = pvVar5;
    for (local_fc = 0; local_fc < local_10c; local_fc = local_fc + 1) {
      _fscanf(pFVar3,"%lf");
    }
  }
  _fscanf(pFVar3,"%d%d");
  pvVar5 = _malloc((long)local_110 << 3);
  for (local_f8 = 0; local_f8 < local_110; local_f8 = local_f8 + 1) {
    pvVar6 = _malloc((long)local_114 << 3);
    *(void **)((long)pvVar5 + (long)local_f8 * 8) = pvVar6;
    for (local_fc = 0; local_fc < local_114; local_fc = local_fc + 1) {
      _fscanf(pFVar3,"%lf");
    }
  }
  _fclose(pFVar3);
  pvVar6 = _malloc((long)(local_108 * local_110) << 3);
  for (local_f8 = 0; local_f8 < local_108 * local_110; local_f8 = local_f8 + 1) {
    pvVar7 = _malloc((long)(local_10c * local_114) << 3);
    *(void **)((long)pvVar6 + (long)local_f8 * 8) = pvVar7;
  }
  for (local_f8 = 0; local_f8 < local_108; local_f8 = local_f8 + 1) {
    for (local_fc = 0; local_fc < local_10c; local_fc = local_fc + 1) {
      for (local_100 = 0; local_100 < local_110; local_100 = local_100 + 1) {
        for (local_104 = 0; local_104 < local_114; local_104 = local_104 + 1) {
          *(double *)
           (*(long *)((long)pvVar6 + (long)(local_f8 * local_110 + local_100) * 8) +
           (long)(local_fc * local_114 + local_104) * 8) =
               *(double *)(*(long *)((long)pvVar4 + (long)local_f8 * 8) + (long)local_fc * 8) *
               *(double *)(*(long *)((long)pvVar5 + (long)local_100 * 8) + (long)local_104 * 8);
        }
      }
    }
  }
  pFVar3 = _fopen(acStack_f0,"w");
  for (local_f8 = 0; local_f8 < local_108 * local_110; local_f8 = local_f8 + 1) {
    for (local_fc = 0; local_fc < local_10c * local_114; local_fc = local_fc + 1) {
      _fprintf(pFVar3,"%lf\t");
    }
    _fprintf(pFVar3,"\n");
  }
  _fclose(pFVar3);
  iVar2 = _printf("\n\n\nKronecker product of the two matrices written to %s.");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}


