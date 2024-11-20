#include "longest-string-challenge-3.h"



long _inc(int param_1)

{
  return (long)param_1 + 1;
}



long _dec(int param_1)

{
  return (long)param_1 + -1;
}



int _gt(int param_1,int param_2)

{
  int local_18;
  int local_14;
  
  local_18 = param_2;
  for (local_14 = param_1; local_18 != 0 && local_14 != 0; local_14 = _dec(local_14)) {
    local_18 = _dec(local_18);
  }
  return local_14;
}



bool _eq(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = _gt(param_1,param_2);
  bVar1 = false;
  if (iVar2 == 0) {
    iVar2 = _gt(param_2,param_1);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}



undefined4 _add(undefined4 param_1,int param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = _dec(local_18)) {
    local_14 = _inc(local_14);
  }
  return local_14;
}



int _length(char *param_1)

{
  char *local_10;
  int local_4;
  
  local_4 = 0;
  local_10 = param_1;
  if (param_1 == (char *)0x0) {
    local_4 = 0;
  }
  else {
    for (; *local_10 != '\0'; local_10 = local_10 + 1) {
      local_4 = local_4 + 1;
    }
  }
  return local_4;
}



void _str_cat(void *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  uVar1 = _length(param_1);
  uVar3 = _length(param_2);
  uVar3 = _add(uVar1,uVar3);
  iVar2 = _add(1,uVar3);
  pvVar4 = _realloc(param_1,(long)iVar2);
  if (pvVar4 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _abort();
  }
  ___strcat_chk(pvVar4,param_2,0xffffffffffffffff);
  return;
}



undefined * _get_line(undefined *param_1,FILE *param_2)

{
  int iVar1;
  undefined *local_48;
  undefined2 local_32;
  int local_30;
  int local_2c;
  FILE *local_28;
  undefined *local_20;
  
  local_30 = 0;
  local_32 = 0;
  *param_1 = 0;
  local_28 = param_2;
  local_20 = param_1;
  do {
    local_2c = _fgetc(local_28);
    if (local_2c == -1) {
      local_32 = CONCAT11(local_32._1_1_,10);
      if (local_30 == 0) {
        local_48 = local_20;
      }
      else {
        local_48 = (undefined *)_str_cat(local_20,&local_32);
      }
      return local_48;
    }
    local_32 = CONCAT11(local_32._1_1_,(char)local_2c);
    local_30 = _inc(local_30);
    local_20 = (undefined *)_str_cat(local_20,&local_32);
    iVar1 = _eq((long)(char)local_32,10);
  } while (iVar1 == 0);
  return local_20;
}



undefined8 entry(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *local_38;
  undefined *local_30;
  void *local_28;
  
  local_28 = _malloc(1);
  local_30 = (undefined *)_malloc(1);
  local_38 = (undefined *)_malloc(1);
LAB_100003e44:
  local_28 = (void *)_get_line(local_28,*(undefined8 *)PTR____stdinp_100004000);
  iVar1 = _length(local_28);
  if (iVar1 == 0) {
    _printf("%s");
    _free(local_30);
    _free(local_38);
    _free(local_28);
    return 0;
  }
  uVar2 = _length(local_38);
  iVar3 = _gt(iVar1,uVar2);
  if (iVar3 == 0) goto LAB_100003ec8;
  *local_38 = 0;
  *local_30 = 0;
  local_38 = (undefined *)_str_cat(local_38,local_28);
  goto LAB_100003eec;
LAB_100003ec8:
  iVar1 = _gt(uVar2,iVar1);
  if (iVar1 == 0) {
LAB_100003eec:
    local_30 = (undefined *)_str_cat(local_30,local_28);
  }
  goto LAB_100003e44;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__abort_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004038)();
  return pvVar1;
}


