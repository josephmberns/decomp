#include "assertions-1.h"



undefined8 entry(void)

{
  int local_18;
  
  if (local_18 != 0x2a) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("main","assertions-1.c",6,"a == 42");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}


