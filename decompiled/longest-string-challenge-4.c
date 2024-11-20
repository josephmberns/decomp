#include "longest-string-challenge-4.h"



long _longer(char *param_1,char *param_2)

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



void entry(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined auStack_30d69 [100001];
  char acStack_186c8 [99999];
  char local_29;
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  pcVar4 = &stack0xffffffffffedb057;
  _memset(acStack_186c8,1,100000);
  _memset(pcVar4,1,0x10c8e1);
  pcVar3 = pcVar4;
  while( true ) {
    pcVar2 = _fgets(acStack_186c8,100000,*(FILE **)PTR____stdinp_100004010);
    if (pcVar2 == (char *)0x0) {
      _printf("%s");
                    // WARNING: Subroutine does not return
      _exit(0);
    }
    if (local_29 == '\0') break;
    iVar1 = _longer(pcVar3,acStack_186c8);
    if (iVar1 == 0) {
      iVar1 = _longer(auStack_30d69,acStack_186c8);
      if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
        _exit(1);
      }
      iVar1 = _longer(acStack_186c8,pcVar3);
      pcVar3 = pcVar4;
      if (iVar1 != 0) {
        pcVar3 = &stack0xffffffffffedb057;
      }
      ___strcpy_chk(pcVar3,acStack_186c8,0xffffffffffffffff);
      for (pcVar4 = pcVar3; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
      }
    }
  }
                    // WARNING: Subroutine does not return
  _exit(1);
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004028)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004030)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}


