#include "text-processing-max-licenses-in-use-1.h"



void entry(int param_1,long param_2)

{
  int iVar1;
  int local_34;
  int local_30;
  int local_2c;
  FILE *local_28;
  
  local_2c = 0;
  local_30 = -1;
  local_34 = 0;
  if (param_1 < 2) {
    local_28 = *(FILE **)PTR____stdinp_100004008;
  }
  else {
    local_28 = _fopen(*(char **)(param_2 + 8),"r");
    if (local_28 == (FILE *)0x0) {
      _fprintf(*(FILE **)PTR____stderrp_100004000,"cannot read %s\n");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
  }
  while( true ) {
    do {
      iVar1 = _fscanf(local_28,"License %s @ %s for job %u\n");
      if (iVar1 == -1) {
        _printf("Maximum simultaneous license use is %d at the following times:\n");
        for (local_2c = 0; local_2c < local_34; local_2c = local_2c + 1) {
          _printf("%s\n");
        }
        if (local_28 != *(FILE **)PTR____stdinp_100004008) {
          _fclose(local_28);
        }
                    // WARNING: Subroutine does not return
        _exit(0);
      }
      iVar1 = _strcmp(&_inout,"OUT");
      if (iVar1 == 0) {
        local_2c = local_2c + 1;
      }
      else {
        local_2c = local_2c + -1;
      }
      if (local_30 < local_2c) {
        local_30 = local_2c;
        local_34 = 0;
        _maxtime = 0;
      }
    } while (local_2c != local_30);
    if (999 < local_34) break;
    ___strncpy_chk(&_maxtime + (long)local_34 * 0x14,&_time,0x14,0xffffffffffffffff);
    local_34 = local_34 + 1;
  }
  _fprintf(*(FILE **)PTR____stderrp_100004000,"increase MAX_MAXOUT (now it is %u)\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004028)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004048)((int)param_1);
  return iVar1;
}


