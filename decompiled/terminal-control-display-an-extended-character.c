#include "terminal-control-display-an-extended-character.h"



undefined4 entry(void)

{
  _puts(s__100003fa4);
  _puts(s__100003fa4);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004000)((int)param_1);
  return iVar1;
}


