#include "search-a-list-of-records.h"



undefined4 _search_get_index_by_name(undefined8 param_1,void *param_2,size_t param_3,int *param_4)

{
  void *pvVar1;
  undefined8 local_48;
  undefined8 local_40;
  int *local_38;
  size_t local_30;
  void *local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  local_40 = 0;
  local_48 = param_1;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pvVar1 = _bsearch(&local_48,param_2,param_3,0x10,param_4);
  if (pvVar1 == (void *)0x0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = (undefined4)((ulong)((long)pvVar1 - (long)local_28) / 0x10);
  }
  return local_14;
}



undefined  [16]
_search_get_pop_by_name(undefined8 param_1,void *param_2,size_t param_3,int *param_4)

{
  void *pvVar1;
  undefined auVar2 [16];
  undefined8 local_48;
  undefined8 local_40;
  int *local_38;
  size_t local_30;
  void *local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_40 = 0;
  local_48 = param_1;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pvVar1 = _lfind(&local_48,param_2,&local_30,0x10,param_4);
  if (pvVar1 == (void *)0x0) {
    local_18 = 0xbff0000000000000;
  }
  else {
    local_18 = *(ulong *)((long)pvVar1 + 8);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_18;
  return auVar2;
}



undefined8 _search_get_pop_threshold(undefined8 param_1,void *param_2,size_t param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 local_48;
  undefined8 local_40;
  int *local_38;
  size_t local_30;
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = 0;
  local_40 = param_1;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  puVar1 = (undefined8 *)_lfind(&local_48,param_2,&local_30,0x10,param_4);
  if (puVar1 == (undefined8 *)0x0) {
    local_18 = 0;
  }
  else {
    local_18 = *puVar1;
  }
  return local_18;
}



undefined4 _cd_nameChar_cmp(long *param_1,long *param_2)

{
  size_t sVar1;
  int local_3c;
  
  sVar1 = _strlen((char *)*param_1);
  local_3c = 0;
  while( true ) {
    if ((int)sVar1 <= local_3c) {
      return 0;
    }
    if (*(char *)(*param_2 + (long)local_3c) != *(char *)(*param_1 + (long)local_3c)) break;
    local_3c = local_3c + 1;
  }
  return 0xffffffff;
}



int _cd_name_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)*param_2,(char *)*param_1);
  return iVar1;
}



bool _cd_pop_cmp(long param_1,long param_2)

{
  return *(double *)(param_1 + 8) <= *(double *)(param_2 + 8);
}



undefined8 entry(void)

{
  int iVar1;
  undefined auStack_b8 [160];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_b8,&PTR_s_Lagos_100004040,0xa0);
  _search_get_index_by_name("Dar Es Salaam",auStack_b8,10,_cd_name_cmp);
  _printf("%d\n");
  _search_get_pop_threshold(0x4014000000000000,auStack_b8,10,_cd_pop_cmp);
  _printf("%s\n");
  _search_get_pop_by_name("A",auStack_b8,10,_cd_nameChar_cmp);
  iVar1 = _printf("%lf\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _bsearch(void *param_1,void *param_2,size_t param_3,size_t param_4,int *param_5)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__bsearch_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _lfind(void *param_1,void *param_2,size_t *param_3,size_t param_4,int *param_5)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__lfind_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004038)();
  return sVar1;
}


