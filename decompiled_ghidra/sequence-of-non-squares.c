#include "sequence-of-non-squares.h"



int _nonsqr(int param_1)

{
  return param_1 + (int)(SQRT((double)(long)param_1) + 0.5);
}



undefined8 entry(void)

{
  int iVar1;
  int local_18;
  
  for (local_18 = 1; local_18 < 0x17; local_18 = local_18 + 1) {
    _nonsqr(local_18);
    _printf("%d ");
  }
  _printf("\n");
  local_18 = 1;
  while( true ) {
    if (999999 < local_18) {
      return 0;
    }
    iVar1 = _nonsqr(local_18);
    if (SQRT((double)iVar1) == (double)(long)SQRT((double)iVar1)) break;
    local_18 = local_18 + 1;
  }
                    // WARNING: Subroutine does not return
  ___assert_rtn("main","sequence-of-non-squares.c",0x15,"j != floor(j)");
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


