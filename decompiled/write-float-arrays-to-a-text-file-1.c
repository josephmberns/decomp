#include "write-float-arrays-to-a-text-file-1.h"



undefined8 entry(void)

{
  uint uVar1;
  FILE *pFVar2;
  int local_54;
  float afStack_40 [4];
  float local_30 [6];
  long local_18;
  FILE *pFVar3;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_30[2] = 3.0;
  local_30[3] = 1e+11;
  local_30[0] = 1.0;
  local_30[1] = 2.0;
  pFVar2 = _fopen("floatArray","w");
  pFVar3 = pFVar2;
  for (local_54 = 0; local_54 < 4; local_54 = local_54 + 1) {
    afStack_40[local_54] = SQRT(local_30[local_54]);
    uVar1 = _fprintf(pFVar2,"%.3g\t%.5g\n");
    pFVar3 = (FILE *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pFVar3);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004010)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}


