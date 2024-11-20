#include "date-format.h"



undefined8 entry(void)

{
  int iVar1;
  tm *ptVar2;
  time_t local_108;
  undefined4 local_fc;
  undefined auStack_f8 [56];
  undefined auStack_c0 [102];
  char acStack_5a [50];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_fc = 0;
  local_108 = _time((time_t *)0x0);
  ptVar2 = _localtime(&local_108);
  _memcpy(auStack_c0,&PTR_s_January_100004038,0x60);
  _memcpy(auStack_f8,&PTR_s_Sunday_100004098,0x38);
  _printf("%d-%d-%d\n");
  _printf("%s, %s %d, %d\n");
  _strftime(acStack_5a,0x32,"%A, %B %e, %Y",ptVar2);
  iVar1 = _printf("%s\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * _localtime(time_t *param_1)

{
  tm *ptVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  ptVar1 = (tm *)(*(code *)PTR__localtime_100004010)();
  return ptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strftime(char *param_1,size_t param_2,char *param_3,tm *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strftime_100004028)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004030)();
  return tVar1;
}


