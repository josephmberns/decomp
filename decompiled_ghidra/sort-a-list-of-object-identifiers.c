#include "sort-a-list-of-object-identifiers.h"



void _oid_destroy(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    _free((void *)*param_1);
    _free((void *)param_1[1]);
    _free(param_1);
  }
  return;
}



int _char_count(char *param_1,char param_2)

{
  char *local_18;
  int local_10;
  
  local_10 = 0;
  for (local_18 = param_1; *local_18 != '\0'; local_18 = local_18 + 1) {
    if (*local_18 == param_2) {
      local_10 = local_10 + 1;
    }
  }
  return local_10;
}



long * _oid_create(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  char *local_48;
  int local_3c;
  char *local_38;
  int local_2c;
  long *local_28;
  char *local_20;
  
  local_20 = param_1;
  local_28 = (long *)_calloc(1,0x18);
  if (local_28 != (long *)0x0) {
    pcVar2 = _strdup(local_20);
    *local_28 = (long)pcVar2;
    if (*local_28 == 0) {
      _oid_destroy(local_28);
    }
    else {
      local_2c = _char_count(local_20,0x2e);
      pvVar3 = _malloc((long)(local_2c + 1) * 4);
      local_28[1] = (long)pvVar3;
      if (local_28[1] == 0) {
        _oid_destroy(local_28);
      }
      else {
        *(int *)(local_28 + 2) = local_2c + 1;
        local_38 = local_20;
        local_3c = 0;
        while( true ) {
          bVar1 = false;
          if (local_3c <= local_2c) {
            bVar1 = *local_38 != '\0';
          }
          if (!bVar1) {
            return local_28;
          }
          local_48 = (char *)0x0;
          lVar4 = _strtol(local_38,&local_48,10);
          if ((*local_48 != '\0') && (*local_48 != '.')) break;
          lVar5 = (long)local_3c;
          local_3c = local_3c + 1;
          *(int *)(local_28[1] + lVar5 * 4) = (int)lVar4;
          local_38 = local_48;
          if (*local_48 != '\0') {
            local_38 = local_48 + 1;
          }
        }
        _oid_destroy(local_28);
      }
    }
  }
  return (long *)0x0;
}



undefined4 _oid_compare(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int local_30;
  int local_2c;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  local_2c = 0;
  local_30 = 0;
  while( true ) {
    bVar1 = false;
    if (local_2c < *(int *)(lVar2 + 0x10)) {
      bVar1 = local_30 < *(int *)(lVar3 + 0x10);
    }
    if (!bVar1) {
      if (*(int *)(lVar2 + 0x10) < *(int *)(lVar3 + 0x10)) {
        return 0xffffffff;
      }
      if (*(int *)(lVar3 + 0x10) < *(int *)(lVar2 + 0x10)) {
        return 1;
      }
      return 0;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + (long)local_2c * 4) <
        *(int *)(*(long *)(lVar3 + 8) + (long)local_30 * 4)) {
      return 0xffffffff;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + (long)local_30 * 4) <
        *(int *)(*(long *)(lVar2 + 8) + (long)local_2c * 4)) break;
    local_2c = local_2c + 1;
    local_30 = local_30 + 1;
  }
  return 1;
}



undefined8 entry(void)

{
  long lVar1;
  int local_84;
  long alStack_78 [6];
  undefined8 auStack_48 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_48,&PTR_s_1_3_6_1_4_1_11_2_17_19_3_4_0_10_100004068,0x30);
  _memset(alStack_78,0,0x30);
  local_84 = 0;
  do {
    if (5 < local_84) {
      _qsort(alStack_78,6,8,(int *)_oid_compare);
      for (local_84 = 0; local_84 < 6; local_84 = local_84 + 1) {
        _puts(*(char **)alStack_78[local_84]);
      }
LAB_100003ddc:
      for (local_84 = 0; local_84 < 6; local_84 = local_84 + 1) {
        _oid_destroy(alStack_78[local_84]);
      }
      if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
        return 0;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail();
    }
    lVar1 = _oid_create(auStack_48[local_84]);
    alStack_78[local_84] = lVar1;
    if (alStack_78[local_84] == 0) {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"Out of memory\n");
      goto LAB_100003ddc;
    }
    local_84 = local_84 + 1;
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004040)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004050)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004058)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004060)(param_1,param_2,param_3);
  return lVar1;
}


