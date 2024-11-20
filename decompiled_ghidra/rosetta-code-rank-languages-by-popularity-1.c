#include "rosetta-code-rank-languages-by-popularity-1.h"



void * _get_page(void)

{
  FILE *pFVar1;
  size_t sVar2;
  int local_450;
  int local_44c;
  void *local_448;
  void *local_440;
  void *local_430;
  char acStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_44c = 1;
  local_450 = 0;
  ___sprintf_chk(acStack_428,0,0x400,"wget -q \"%s\" -O -");
  pFVar1 = _popen(acStack_428,"r");
  if (pFVar1 == (FILE *)0x0) {
    local_430 = (void *)0x0;
  }
  else {
    local_448 = (void *)0x0;
    local_440 = (void *)0x0;
    while (0 < local_44c) {
      local_448 = _realloc(local_448,(long)(local_450 + 0x401));
      if (local_440 == (void *)0x0) {
        local_440 = local_448;
      }
      sVar2 = _fread(local_440,1,0x400,pFVar1);
      local_44c = (int)sVar2;
      if (local_44c < 1) break;
      local_440 = (void *)((long)local_440 + (long)local_44c);
      local_450 = local_450 + 0x400;
    }
    *(undefined *)((long)local_440 + 1) = 0;
    local_430 = local_448;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return local_430;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void * _get_langs(char *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  void *local_28;
  char *local_18;
  
  local_28 = (void *)0x0;
  *param_2 = 0;
  local_18 = param_1;
  while( true ) {
    local_18 = _strstr(local_18,"Category:");
    bVar2 = false;
    if (local_18 != (char *)0x0) {
      local_18 = local_18 + 9;
      bVar2 = local_18 != (char *)0x0;
    }
    if (!bVar2) break;
    iVar1 = *param_2;
    local_28 = _realloc(local_28,(long)(*param_2 + 1) * 8);
    *(char **)((long)local_28 + (long)iVar1 * 8) = local_18;
    for (; *local_18 != '\"'; local_18 = local_18 + 1) {
    }
    *local_18 = '\0';
    *param_2 = *param_2 + 1;
    local_18 = local_18 + 1;
  }
  return local_28;
}



void * _get_cats(char *param_1,long param_2,int param_3,int *param_4)

{
  char *pcVar1;
  size_t sVar2;
  long lVar3;
  int local_460;
  int local_45c;
  void *local_458;
  char *local_430;
  char acStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_458 = (void *)0x0;
  local_460 = 0;
  local_430 = param_1;
  for (local_45c = 0; local_45c < param_3; local_45c = local_45c + 1) {
    ___sprintf_chk(acStack_428,0,0x400,"/wiki/Category:%s");
    pcVar1 = _strstr(local_430,acStack_428);
    if (pcVar1 != (char *)0x0) {
      sVar2 = _strlen(acStack_428);
      local_430 = pcVar1 + sVar2;
      pcVar1 = _strstr(local_430,"</a> (");
      if (pcVar1 != (char *)0x0) {
        local_458 = _realloc(local_458,(long)(local_460 + 1) * 0x10);
        *(undefined8 *)((long)local_458 + (long)local_460 * 0x10) =
             *(undefined8 *)(param_2 + (long)local_45c * 8);
        lVar3 = _strtol(pcVar1 + 6,(char **)0x0,10);
        *(int *)((long)local_458 + (long)local_460 * 0x10 + 8) = (int)lVar3;
        local_460 = local_460 + 1;
      }
    }
  }
  *param_4 = local_460;
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return local_458;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



uint __scmp(long param_1,long param_2)

{
  undefined4 local_1c;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_2 + 8)) {
    local_1c = 0xffffffff;
  }
  else {
    local_1c = (uint)(*(int *)(param_2 + 8) < *(int *)(param_1 + 8));
  }
  return local_1c;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = _get_page(_lang_url);
  uVar1 = _get_langs(uVar1,&local_18);
  uVar2 = _get_page(_cat_url);
  pvVar3 = (void *)_get_cats(uVar2,uVar1,local_18,&local_1c);
  _qsort(pvVar3,(long)local_1c,0x10,(int *)__scmp);
  while (local_1c = local_1c + -1, -1 < local_1c) {
    _printf("%4d %s\n");
  }
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e28. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004018)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _popen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e34. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__popen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004040)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strstr_100004048)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004050)(param_1,param_2,param_3);
  return lVar1;
}


