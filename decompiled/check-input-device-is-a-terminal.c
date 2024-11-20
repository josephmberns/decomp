#include "check-input-device-is-a-terminal.h"



undefined4 entry(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = _fileno(*(FILE **)PTR____stdinp_100004000);
  iVar2 = _isatty(iVar2);
  pcVar1 = "stdin is tty";
  if (iVar2 == 0) {
    pcVar1 = "stdin is not tty";
  }
  _puts(pcVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fileno(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fileno_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isatty(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isatty_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004018)((int)param_1);
  return iVar1;
}


