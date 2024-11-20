#include "morse-code.h"



void _append(undefined8 param_1,char *param_2)

{
  char *local_20;
  
  for (local_20 = param_2; *local_20 != '\0'; local_20 = local_20 + 1) {
    ___strcat_chk(param_1,(&_dd)[*local_20 == '3'],0xffffffffffffffff);
  }
  ___strcat_chk(param_1,&_medium,0xffffffffffffffff);
  return;
}



undefined8 _translate(char *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  char *local_18;
  
  ___sprintf_chk(param_2,0,0xffffffffffffffff,"beep");
  for (local_18 = param_1; puVar1 = _ascii, *local_18 != '\0'; local_18 = local_18 + 1) {
    iVar2 = _toupper((int)*local_18);
    pcVar3 = _strchr(puVar1,iVar2);
    if (pcVar3 == (char *)0x0) {
      ___strcat_chk(param_2,&_word,0xffffffffffffffff);
    }
    else {
      _append(param_2,(&_itu)[(long)pcVar3 - (long)_ascii]);
    }
  }
  ___strcat_chk(param_2,&_word,0xffffffffffffffff);
  return param_2;
}



undefined4 entry(void)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  long extraout_x1;
  undefined auStack_18711 [100000];
  char acStack_71 [73];
  long local_28;
  
  iVar1 = (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004018;
  if (1 < iVar1) {
    sVar2 = _strlen(*(char **)(extraout_x1 + 8));
    sVar3 = _strspn(*(char **)(extraout_x1 + 8),"0123456789");
    if (sVar2 != sVar3) {
      _fprintf(*(FILE **)PTR____stderrp_100004020,"use: %s [duration]   dit in ms, default %d\n");
      goto LAB_100003d20;
    }
    iVar1 = _atoi(*(char **)(extraout_x1 + 8));
    if ((1 < iVar1) && (iVar1 = _atoi(*(char **)(extraout_x1 + 8)), iVar1 < 1000)) {
      _atoi(*(char **)(extraout_x1 + 8));
    }
  }
  ___sprintf_chk(&_dah);
  ___sprintf_chk(&_dih,0,0x32," -n -f 440 -l %d -D %d");
  ___sprintf_chk(&_medium,0);
  ___sprintf_chk(&_word,0,0x1e," -n -D %d");
  while (pcVar4 = _fgets(acStack_71,0x48,*(FILE **)PTR____stdinp_100004028), pcVar4 != (char *)0x0)
  {
    pcVar4 = (char *)_translate(acStack_71,auStack_18711);
    _puts(pcVar4);
  }
LAB_100003d20:
  if (*(long *)PTR____stack_chk_guard_100004018 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004008)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d9c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004040)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003da8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003db4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dc0. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004058)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dcc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004060)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strspn(char *param_1,char *param_2)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd8. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strspn_100004068)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _toupper(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__toupper_100004070)(_c);
  return iVar1;
}


