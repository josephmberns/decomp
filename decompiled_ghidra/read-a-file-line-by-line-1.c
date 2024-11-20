#include "read-a-file-line-by-line-1.h"



undefined8 entry(void)

{
  char *pcVar1;
  
  while (pcVar1 = _fgets((char *)0x100008000,0x400,*(FILE **)PTR____stdinp_100004000),
        pcVar1 != (char *)0x0) {
    _puts((char *)0x100008000);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004008)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004010)((int)param_1);
  return iVar1;
}


