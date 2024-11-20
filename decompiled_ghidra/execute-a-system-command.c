#include "execute-a-system-command.h"



undefined4 entry(void)

{
  _system("ls");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _system(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__system_100004000)((int)param_1);
  return iVar1;
}


