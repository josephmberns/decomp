#include "arithmetic-integer.h"



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  
  if (param_1 < 3) {
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  iVar1 = _atoi(*(char **)(param_2 + (long)(param_1 + -1) * 8));
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    _exit(2);
  }
  _atoi(*(char **)(param_2 + (long)(param_1 + -2) * 8));
  _printf("a+b = %d\n");
  _printf("a-b = %d\n");
  _printf("a*b = %d\n");
  _printf("a/b = %d\n");
  _printf("a%%b = %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004008)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


