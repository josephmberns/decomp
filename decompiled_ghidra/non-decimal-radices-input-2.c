#include "non-decimal-radices-input-2.h"



undefined8 entry(void)

{
  long lVar1;
  char *local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  lVar1 = _strtol("123459",&local_20,0);
  local_18 = (undefined4)lVar1;
  if (*local_20 != '\0') {
                    // WARNING: Subroutine does not return
    ___assert_rtn("main","non-decimal-radices-input-2.c",0xb,"*endptr == \'\\0\'");
  }
  _printf("%d\n");
  lVar1 = _strtol("0xabcf123",&local_20,0);
  local_18 = (undefined4)lVar1;
  if (*local_20 != '\0') {
                    // WARNING: Subroutine does not return
    ___assert_rtn("main","non-decimal-radices-input-2.c",0xf,"*endptr == \'\\0\'");
  }
  _printf("%d\n");
  lVar1 = _strtol("07651",&local_20,0);
  local_18 = (undefined4)lVar1;
  if (*local_20 != '\0') {
                    // WARNING: Subroutine does not return
    ___assert_rtn("main","non-decimal-radices-input-2.c",0x13,"*endptr == \'\\0\'");
  }
  _printf("%d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004010)(param_1,param_2,param_3);
  return lVar1;
}


