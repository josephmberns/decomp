#include "take-notes-on-the-command-line.h"



undefined8 entry(int param_1,undefined8 param_2)

{
  int iVar1;
  int local_44;
  char *local_40;
  int local_34;
  time_t local_30;
  FILE *local_28;
  undefined8 local_20;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_28 = (FILE *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  if (param_1 < 2) {
    local_28 = _fopen("NOTES.TXT","r");
    if (local_28 != (FILE *)0x0) {
      while (iVar1 = _fgetc(local_28), iVar1 != -1) {
        _putchar(iVar1);
      }
    }
  }
  else {
    local_28 = _fopen("NOTES.TXT","a");
    if (local_28 != (FILE *)0x0) {
      local_30 = _time((time_t *)0x0);
      for (local_40 = _ctime(&local_30); *local_40 != '\0'; local_40 = local_40 + 1) {
        if (*local_40 == '\n') {
          local_44 = 9;
        }
        else {
          local_44 = (int)*local_40;
        }
        _fputc(local_44,local_28);
      }
      for (local_34 = 1; local_34 < local_18; local_34 = local_34 + 1) {
        _fprintf(local_28,"%s%c");
      }
    }
  }
  if (local_28 != (FILE *)0x0) {
    _fclose(local_28);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _ctime(time_t *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__ctime_100004000)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004018)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fputc(int param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fputc_100004028)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004030)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004038)();
  return tVar1;
}


