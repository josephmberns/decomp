#include "environment-variables.h"



undefined4 entry(void)

{
  char *pcVar1;
  
  pcVar1 = _getenv("HOME");
  _puts(pcVar1);
  pcVar1 = _getenv("PATH");
  _puts(pcVar1);
  pcVar1 = _getenv("USER");
  _puts(pcVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _getenv(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__getenv_100004000)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004008)((int)param_1);
  return iVar1;
}


