#include "longest-string-challenge-1.h"



long _cmp(char *param_1,char *param_2)

{
  bool bVar1;
  char *local_10;
  char *local_8;
  
  local_10 = param_2;
  local_8 = param_1;
  while( true ) {
    bVar1 = false;
    if (*local_8 != '\0') {
      bVar1 = *local_10 != '\0';
    }
    if (!bVar1) break;
    local_8 = local_8 + 1;
    local_10 = local_10 + 1;
  }
  return (long)*local_8;
}



undefined8 entry(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char acStack_10028 [65544];
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar3 = *(long *)PTR____stack_chk_guard_100004010;
  pcVar5 = &stack0xffffffffffefbd98;
  _bzero(pcVar5,1000000);
  pcVar4 = pcVar5;
  while (pcVar2 = _gets(acStack_10028), pcVar2 != (char *)0x0) {
    ___strcat_chk(acStack_10028,"\n",0x10000);
    iVar1 = _cmp(pcVar4,acStack_10028);
    if (iVar1 == 0) {
      iVar1 = _cmp(acStack_10028,pcVar4);
      pcVar4 = pcVar5;
      if (iVar1 != 0) {
        pcVar4 = &stack0xffffffffffefbd98;
      }
      ___strcpy_chk(pcVar4,acStack_10028,0xffffffffffffffff);
      for (pcVar5 = pcVar4; *pcVar5 != '\0'; pcVar5 = pcVar5 + 1) {
      }
    }
  }
  iVar1 = _printf("%s");
  if (*(long *)PTR____stack_chk_guard_100004010 == lVar3) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004018)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _gets(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__gets_100004030)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}


