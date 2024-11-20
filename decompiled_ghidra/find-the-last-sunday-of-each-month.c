#include "find-the-last-sunday-of-each-month.h"



void _last_sunday(tm *param_1,int param_2,uint param_3)

{
  tm *ptVar1;
  time_t tVar2;
  tm *ptVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  uint local_20;
  int local_1c;
  tm *local_18;
  
  local_60 = 0;
  local_5c = 0;
  local_58 = 0xc;
  local_54 = 0;
  local_50 = param_3 % 0xc;
  local_4c = param_2 + param_3 / 0xc;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_30 = 0;
  local_20 = param_3;
  local_1c = param_2;
  local_18 = param_1;
  _memcpy(param_1,&local_60,0x38);
  tVar2 = _mktime(local_18);
  ptVar1 = local_18;
  local_28 = tVar2 - local_18->tm_wday * 0x15180;
  ptVar3 = _localtime(&local_28);
  _memcpy(ptVar1,ptVar3,0x38);
  return;
}



undefined4 entry(ulong param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint local_74;
  tm tStack_70;
  long local_38;
  int local_2c;
  undefined4 local_28;
  char acStack_24 [12];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_28 = 0;
  local_2c = (int)param_1;
  local_38 = param_2;
  if (local_2c < 2) {
    local_28 = 1;
  }
  else {
    param_1 = _strtoul(*(char **)(param_2 + 8),(char **)0x0,0);
    iVar1 = (int)param_1;
    for (local_74 = 1; local_74 < 0xd; local_74 = local_74 + 1) {
      _last_sunday(&tStack_70,iVar1 + -0x76c,local_74);
      _strftime(acStack_24,0xc,"%F",&tStack_70);
      uVar2 = _puts(acStack_24);
      param_1 = (ulong)uVar2;
    }
    local_28 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return local_28;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * _localtime(time_t *param_1)

{
  tm *ptVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  ptVar1 = (tm *)(*(code *)PTR__localtime_100004010)();
  return ptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _mktime(tm *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__mktime_100004020)();
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strftime(char *param_1,size_t param_2,char *param_3,tm *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strftime_100004030)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ulong _strtoul(char *param_1,char **param_2,int param_3)

{
  ulong uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__strtoul_100004038)(param_1,param_2,param_3);
  return uVar1;
}


