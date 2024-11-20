#include "discordian-date.h"



void * _ddate(int param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = _malloc(100);
  if (((param_1 % 400 == 0) || ((param_1 % 4 == 0 && (param_1 % 100 != 0)))) && (param_2 == 0x3c)) {
    ___sprintf_chk(pvVar1,0,0xffffffffffffffff,"St. Tib\'s Day, YOLD %d");
  }
  else {
    ___sprintf_chk(pvVar1,0,0xffffffffffffffff,"%s, %s %d, YOLD %d");
  }
  return pvVar1;
}



int _day_of_year(int param_1,int param_2,int param_3)

{
  int local_54;
  int local_50;
  int aiStack_48 [12];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  _memcpy(aiStack_48,&DAT_100003f78,0x30);
  local_54 = param_3;
  for (local_50 = param_2; 1 < local_50; local_50 = local_50 + -1) {
    local_54 = local_54 + aiStack_48[local_50 + -2];
    if ((local_50 == 3) && ((param_1 % 400 == 0 || ((param_1 % 4 == 0 && (param_1 % 100 != 0)))))) {
      local_54 = local_54 + 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_54;
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  tm *ptVar4;
  char *pcVar5;
  int local_38;
  int local_34;
  time_t local_28;
  long local_20;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = param_2;
  local_18 = param_1;
  if (param_1 == 1) {
    local_28 = _time((time_t *)0x0);
    ptVar4 = _localtime(&local_28);
    local_34 = ptVar4->tm_year + 0x76c;
    local_38 = ptVar4->tm_yday + 1;
  }
  else if (param_1 == 4) {
    local_34 = _atoi(*(char **)(param_2 + 8));
    iVar1 = _atoi(*(char **)(local_20 + 8));
    iVar2 = _atoi(*(char **)(local_20 + 0x10));
    iVar3 = _atoi(*(char **)(local_20 + 0x18));
    local_38 = _day_of_year(iVar1,iVar2,iVar3);
  }
  pcVar5 = (char *)_ddate(local_34,local_38);
  _puts(pcVar5);
  _free(pcVar5);
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * _localtime(time_t *param_1)

{
  tm *ptVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  ptVar1 = (tm *)(*(code *)PTR__localtime_100004028)();
  return ptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004048)();
  return tVar1;
}


