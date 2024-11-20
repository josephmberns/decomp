#include "walk-a-directory-recursively-2.h"



int _entcmp(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(*param_1 + 0x68),(char *)(*param_2 + 0x68));
  return iVar1;
}



void _pmatch(char *param_1,undefined8 param_2)

{
  int iVar1;
  FTS *pFVar2;
  FTSENT *pFVar3;
  int *piVar4;
  char *local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_20 = 0;
  local_28 = param_1;
  pFVar2 = _fts_open(&local_28,10,(int *)_entcmp);
  if (pFVar2 == (FTS *)0x0) {
    _err(1,"fts_open");
  }
  while (pFVar3 = _fts_read(pFVar2), pFVar3 != (FTSENT *)0x0) {
    switch(pFVar3->fts_info) {
    case 4:
    case 7:
    case 10:
      _warn("%s");
      break;
    default:
      iVar1 = _fnmatch(param_2,pFVar3->fts_name,4);
      if (iVar1 == 0) {
        _puts(pFVar3->fts_path);
      }
      if (pFVar3->fts_info == 2) {
        _warnx("%s: cycle in directory tree");
      }
      break;
    case 6:
    }
  }
  piVar4 = ___error();
  if (*piVar4 != 0) {
    _err(1,"fts_read");
  }
  iVar1 = _fts_close(pFVar2);
  if (iVar1 < 0) {
    _err(1,"fts_close");
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



undefined4 entry(void)

{
  _pmatch(".","*.c");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * ___error(void)

{
  int *piVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  piVar1 = (int *)(*(code *)PTR____error_100004000)();
  return piVar1;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void _err(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__err_100004018)();
  return;
}



void _fnmatch(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__fnmatch_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fts_close(FTS *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fts_close_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FTS * _fts_open(char **param_1,int param_2,int *param_3)

{
  FTS *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FTS *)(*(code *)PTR__fts_open_100004030)(param_1,param_2);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FTSENT * _fts_read(FTS *param_1)

{
  FTSENT *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FTSENT *)(*(code *)PTR__fts_read_100004038)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004048)((int)param_1);
  return iVar1;
}



void _warn(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__warn_100004050)();
  return;
}



void _warnx(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__warnx_100004058)();
  return;
}


