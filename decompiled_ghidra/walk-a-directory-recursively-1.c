#include "walk-a-directory-recursively-1.h"



int _walk_recur(char *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  int iVar4;
  int local_504;
  int local_4ec;
  stat sStack_4e8;
  long local_458;
  long local_450;
  uint local_444;
  undefined8 local_440;
  char *local_438;
  int local_42c;
  char acStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_4ec = 0;
  local_444 = param_3;
  local_440 = param_2;
  local_438 = param_1;
  sVar2 = _strlen(param_1);
  iVar4 = (int)sVar2;
  if (iVar4 < 0x3ff) {
    ___strcpy_chk(acStack_428,local_438,0x400);
    acStack_428[iVar4] = '/';
    local_458 = _opendir(local_438);
    if (local_458 == 0) {
      _warn("can\'t open %s");
      local_42c = 3;
    }
    else {
      piVar3 = ___error();
      *piVar3 = 0;
LAB_100003aa0:
      local_450 = _readdir(local_458);
      if (local_450 != 0) {
        if (((((local_444 & 4) != 0) || (*(char *)(local_450 + 0x15) != '.')) &&
            (iVar1 = _strcmp((char *)(local_450 + 0x15),"."), iVar1 != 0)) &&
           (iVar1 = _strcmp((char *)(local_450 + 0x15),".."), iVar1 != 0)) {
          ___strncpy_chk(acStack_428 + (iVar4 + 1),local_450 + 0x15,(long)(0x400 - (iVar4 + 1)),
                         0xffffffffffffffff);
          iVar1 = _lstat(acStack_428,&sStack_4e8);
          if (iVar1 == -1) {
            _warn("Can\'t stat %s");
            local_4ec = 3;
          }
          else if (((sStack_4e8.st_mode & 0xf000) != 0xa000) || ((local_444 & 2) != 0)) {
            if ((sStack_4e8.st_mode & 0xf000) == 0x4000) {
              if ((local_444 & 1) != 0) {
                _walk_recur(acStack_428,local_440,local_444);
              }
              if ((local_444 & 8) == 0) goto LAB_100003aa0;
            }
            iVar1 = _regexec(local_440,acStack_428,0,0,0);
            if (iVar1 == 0) {
              _puts(acStack_428);
            }
          }
        }
        goto LAB_100003aa0;
      }
      if (local_458 != 0) {
        _closedir(local_458);
      }
      if (local_4ec == 0) {
        piVar3 = ___error();
        local_504 = 3;
        if (*piVar3 == 0) {
          local_504 = 0;
        }
      }
      else {
        local_504 = local_4ec;
      }
      local_42c = local_504;
    }
  }
  else {
    local_42c = 2;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return local_42c;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined4 _walk_dir(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_50 [36];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  local_2c = param_3;
  local_28 = param_2;
  local_20 = param_1;
  iVar1 = _regcomp(auStack_50,param_2,5);
  if (iVar1 == 0) {
    uVar2 = _walk_recur(local_20,auStack_50,local_2c);
    _regfree(auStack_50);
    local_14 = uVar2;
  }
  else {
    local_14 = 1;
  }
  return local_14;
}



undefined8 entry(void)

{
  undefined4 uVar1;
  
  uVar1 = _walk_dir(".",".\\.c$",9);
  switch(uVar1) {
  case 0:
    break;
  case 3:
    _err(1,"IO error");
  case 1:
    _err(1,"Bad pattern");
  case 2:
    _err(1,"Filename too long");
  default:
    _err(1,"Unknown error?");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * ___error(void)

{
  int *piVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  piVar1 = (int *)(*(code *)PTR____error_100004000)();
  return piVar1;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004020)();
  return;
}



void _closedir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__closedir_100004028)();
  return;
}



void _err(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__err_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _lstat(char *param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__lstat_100004038)((int)param_1);
  return iVar1;
}



void _opendir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__opendir_100004040)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004048)((int)param_1);
  return iVar1;
}



void _readdir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__readdir_100004050)();
  return;
}



void _regcomp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__regcomp_100004058)();
  return;
}



void _regexec(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__regexec_100004060)();
  return;
}



void _regfree(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__regfree_100004068)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004070)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004078)();
  return sVar1;
}



void _warn(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__warn_100004080)();
  return;
}


