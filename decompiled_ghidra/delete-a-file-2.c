#include "delete-a-file-2.h"



undefined4 entry(void)

{
  _unlink("input.txt");
  _unlink("/input.txt");
  _rmdir("docs");
  _rmdir("/docs");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rmdir(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rmdir_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _unlink(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__unlink_100004008)((int)param_1);
  return iVar1;
}


