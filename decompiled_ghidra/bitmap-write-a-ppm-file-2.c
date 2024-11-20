#include "bitmap-write-a-ppm-file-2.h"



undefined8 entry(void)

{
  int iVar1;
  FILE *pFVar2;
  int local_2750;
  int local_274c;
  char acStack_2738 [10000];
  long local_28;
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  for (local_2750 = 0; local_2750 < 100; local_2750 = local_2750 + 1) {
    for (local_274c = 0; local_274c < 100; local_274c = local_274c + 1) {
      acStack_2738[(long)local_274c + (long)local_2750 * 100] = (char)local_274c + (char)local_2750;
    }
  }
  pFVar2 = _fopen("n.pgm","wb");
  _fprintf(pFVar2,"P5\n %s\n %d\n %d\n %d\n");
  _fwrite(acStack_2738,10000,1,pFVar2);
  _fclose(pFVar2);
  iVar1 = _printf("OK - file %s saved\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004030)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}


