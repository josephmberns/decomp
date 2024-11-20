#include "hello-world-standard-error.h"



undefined4 entry(void)

{
  undefined *puVar1;
  
  puVar1 = PTR____stderrp_100004000;
  _fprintf(*(FILE **)PTR____stderrp_100004000,"Goodbye, ");
  _fputs("World!\n",*(FILE **)puVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fputs(char *param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fputs_100004010)((int)param_1);
  return iVar1;
}


