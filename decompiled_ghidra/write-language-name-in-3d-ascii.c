#include "write-language-name-in-3d-ascii.h"



undefined4 entry(void)

{
  _puts(_s);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004000)((int)param_1);
  return iVar1;
}


