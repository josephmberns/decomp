#include "file-size-2.h"



undefined4 entry(void)

{
  stat sStack_a8;
  undefined4 local_14;
  
  local_14 = 0;
  _stat("input.txt",&sStack_a8);
  _printf("%ld\n");
  _stat("/input.txt",&sStack_a8);
  _printf("%ld\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _stat(char *param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__stat_100004008)((int)param_1);
  return iVar1;
}


