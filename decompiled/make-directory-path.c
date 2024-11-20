#include "make-directory-path.h"



undefined8 entry(int param_1,undefined8 *param_2)

{
  int iVar1;
  FILE *pFVar2;
  stat sStack_c0;
  char *local_30;
  char *local_28;
  undefined8 *local_20;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = param_2;
  if (param_1 != 2) {
    pFVar2 = *(FILE **)PTR____stderrp_100004000;
    local_18 = param_1;
    _basename((char *)*param_2);
    _fprintf(pFVar2,"usage: %s <path>\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  local_30 = (char *)param_2[1];
  local_18 = 2;
  do {
    local_28 = _strtok(local_30,"/");
    if (local_28 == (char *)0x0) {
      return 0;
    }
    if (local_28 != local_30) {
      local_28[-1] = '/';
    }
    iVar1 = _stat((char *)local_20[1],&sStack_c0);
    if (iVar1 == -1) {
      _mkdir((char *)local_20[1],0);
    }
    else if ((sStack_c0.st_mode & 0xf000) != 0x4000) {
      _fprintf(*(FILE **)PTR____stderrp_100004000,"couldn\'t create directory %s\n");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    local_30 = (char *)0x0;
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _basename(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__basename_100004008)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _mkdir(char *param_1,mode_t param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__mkdir_100004020)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _stat(char *param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__stat_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004030)();
  return pcVar1;
}


