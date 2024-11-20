#include "text-processing-1.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _mungeLine(char *param_1,undefined8 param_2,FILE *param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  double dVar4;
  int local_84;
  double local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_44;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_84 = 0;
  pcVar3 = _strtok(param_1,".");
  if (pcVar3 != (char *)0x0) {
    iVar1 = _sscanf(pcVar3,"%s %d");
    if (iVar1 < 2) {
      uVar2 = _printf("badly formated line - %d %s\n");
      pcVar3 = (char *)(ulong)uVar2;
      local_44 = 0;
      goto LAB_100003b78;
    }
    local_80 = 0.0;
    while (pcVar3 = _strtok((char *)0x0,"."), pcVar3 != (char *)0x0) {
      iVar1 = _sscanf(pcVar3,"%d %d %d");
      if (iVar1 < 2) {
        _printf("bad file syntax line %d: %s\n");
      }
      else {
        if (local_70 < 1) {
          _DAT_100008004 = _DAT_100008004 + 1;
        }
        else {
          dVar4 = (double)NEON_fmadd(0x3ff0000000000000,(double)(long)local_74,
                                     (double)(long)local_6c * 0.001);
          local_80 = local_80 + dVar4;
          local_84 = local_84 + 1;
          if (_DAT_100008000 < _DAT_100008004) {
            _DAT_100008000 = _DAT_100008004;
            ___strcpy_chk(&_bhEndDate,auStack_40,0x28);
          }
          _DAT_100008004 = 0;
        }
        local_74 = local_78;
      }
    }
    uVar2 = _fprintf(param_3,"%s  Reject: %2d  Accept: %2d  Average: %7.3f\n");
    pcVar3 = (char *)(ulong)uVar2;
    _DAT_100008008 = _DAT_100008008 + local_80;
    _DAT_100008010 = _DAT_100008010 + local_84;
  }
  local_44 = 1;
LAB_100003b78:
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pcVar3);
  }
  return local_44;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  int iVar1;
  FILE *pFVar2;
  FILE *pFVar3;
  char *pcVar4;
  int local_244;
  char acStack_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_244 = 0;
  pFVar2 = _fopen("V0.txt","w");
  pFVar3 = _fopen("readings.txt","rb");
  if (pFVar3 == (FILE *)0x0) {
    _printf("Can\'t open %s\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  while (pcVar4 = _fgets(acStack_228,0x200,pFVar3), pcVar4 != (char *)0x0) {
    local_244 = local_244 + 1;
    iVar1 = _mungeLine(acStack_228,local_244,pFVar2);
    if (iVar1 == 0) {
      _printf("Bad line at %d");
    }
  }
  _fclose(pFVar3);
  _fprintf(pFVar2,"File:     %s\n");
  _fprintf(pFVar2,"Total:    %.3f\n");
  _fprintf(pFVar2,"Readings: %d\n");
  _fprintf(pFVar2,"Average:  %.3f\n");
  _fprintf(pFVar2,"\nMaximum number of consecutive bad readings is %d\n");
  _fprintf(pFVar2,"Ends on date %s\n");
  iVar1 = _fclose(pFVar2);
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003df8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e28. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004028)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e34. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004030)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004050)();
  return pcVar1;
}


