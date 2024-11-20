#include "ordered-words-1.h"



undefined4 _is_ordered_word(long param_1)

{
  int local_24;
  
  if (param_1 == 0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("is_ordered_word","ordered-words-1.c",0x12,"word != NULL");
  }
  local_24 = 0;
  while( true ) {
    if (*(char *)(param_1 + local_24) == '\0') {
      return 1;
    }
    if ((*(char *)(param_1 + (local_24 + 1)) < *(char *)(param_1 + local_24)) &&
       (*(char *)(param_1 + (local_24 + 1)) != '\0')) break;
    local_24 = local_24 + 1;
  }
  return 0;
}



void * _list_prepend(undefined8 param_1,long param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("list_prepend","ordered-words-1.c",0x1e,"new_word != NULL");
  }
  pvVar1 = _malloc(0x70);
  if (pvVar1 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  ___strcpy_chk(pvVar1,param_2,100);
  *(undefined8 *)((long)pvVar1 + 0x68) = param_1;
  return pvVar1;
}



undefined8 _list_destroy(void *param_1)

{
  void *pvVar1;
  undefined8 local_18;
  
  local_18 = param_1;
  while (local_18 != (void *)0x0) {
    pvVar1 = *(void **)((long)local_18 + 0x68);
    _free(local_18);
    local_18 = pvVar1;
  }
  return 0;
}



ulong _list_print(ulong param_1)

{
  uint uVar1;
  ulong local_18;
  
  for (local_18 = param_1; local_18 != 0; local_18 = *(ulong *)(local_18 + 0x68)) {
    uVar1 = _printf("\n%s");
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



undefined4 entry(void)

{
  int iVar1;
  FILE *pFVar2;
  size_t sVar3;
  undefined8 uVar4;
  uint local_94;
  undefined8 local_90;
  undefined4 local_80;
  char acStack_7c [100];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  pFVar2 = _fopen("unixdict.txt","r");
  if (pFVar2 == (FILE *)0x0) {
    local_80 = 1;
  }
  else {
    local_90 = 0;
    local_94 = 0;
    while (iVar1 = _fscanf(pFVar2,"%99s\n"), iVar1 != -1) {
      sVar3 = _strlen(acStack_7c);
      if ((local_94 < sVar3) && (iVar1 = _is_ordered_word(acStack_7c), iVar1 != 0)) {
        sVar3 = _strlen(acStack_7c);
        local_94 = (uint)sVar3;
        uVar4 = _list_destroy(local_90);
        local_90 = _list_prepend(uVar4,acStack_7c);
      }
      else {
        sVar3 = _strlen(acStack_7c);
        if ((sVar3 == local_94) && (iVar1 = _is_ordered_word(acStack_7c), iVar1 != 0)) {
          local_90 = _list_prepend(local_90,acStack_7c);
        }
      }
    }
    _fclose(pFVar2);
    _list_print(local_90);
    local_80 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return local_80;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004030)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004048)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004058)();
  return sVar1;
}


