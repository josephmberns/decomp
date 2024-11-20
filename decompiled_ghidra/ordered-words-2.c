#include "ordered-words-2.h"



undefined4 _is_ordered_word(long param_1)

{
  int local_24;
  
  if (param_1 == 0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("is_ordered_word","ordered-words-2.c",0x12,"word != NULL");
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



void _array_append(long *param_1,long param_2)

{
  void *pvVar1;
  
  if (param_1 == (long *)0x0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("array_append","ordered-words-2.c",0x1e,"words_array != NULL");
  }
  if (param_2 == 0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("array_append","ordered-words-2.c",0x1f,"new_word != NULL");
  }
  if ((param_1[1] == 0) != (*param_1 == 0)) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("array_append","ordered-words-2.c",0x20,
                  "(words_array->len == 0) == (words_array->words == NULL)");
  }
  param_1[1] = param_1[1] + 1;
  pvVar1 = _realloc((void *)*param_1,param_1[1] * 100);
  *param_1 = (long)pvVar1;
  if (*param_1 == 0) {
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  ___strcpy_chk(*param_1 + (param_1[1] + -1) * 100,param_2,0xffffffffffffffff);
  return;
}



void _array_free(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("array_free","ordered-words-2.c",0x2c,"words_array != NULL");
  }
  _free((void *)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



ulong _list_print(ulong param_1)

{
  uint uVar1;
  ulong local_20;
  ulong uVar2;
  
  if (param_1 == 0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("list_print","ordered-words-2.c",0x34,"words_array != NULL");
  }
  uVar2 = param_1;
  for (local_20 = 0; local_20 < *(ulong *)(param_1 + 8); local_20 = local_20 + 1) {
    uVar1 = _printf("\n%s");
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
}



undefined4 entry(void)

{
  int iVar1;
  size_t sVar2;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  FILE *local_88;
  undefined4 local_80;
  char local_7c [100];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_80 = 0;
  local_88 = _fopen("unixdict.txt","r");
  if (local_88 == (FILE *)0x0) {
    local_80 = 1;
  }
  else {
    local_90 = 0;
    local_98 = 0;
    local_7c[0] = '\0';
    local_9c = 0;
    while (iVar1 = _fscanf(local_88,"%99s\n"), iVar1 != -1) {
      sVar2 = _strlen(local_7c);
      if ((local_9c < sVar2) && (iVar1 = _is_ordered_word(local_7c), iVar1 != 0)) {
        sVar2 = _strlen(local_7c);
        local_9c = (uint)sVar2;
        _array_free();
        _array_append(&local_98,local_7c);
      }
      else {
        sVar2 = _strlen(local_7c);
        if ((sVar2 == local_9c) && (iVar1 = _is_ordered_word(local_7c), iVar1 != 0)) {
          _array_append(&local_98,local_7c);
        }
      }
    }
    _fclose(local_88);
    _list_print();
    _array_free(&local_98);
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
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004030)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004050)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004058)();
  return sVar1;
}


