#include "csv-data-manipulation-1.h"



int _trim(long *param_1)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  sVar3 = _strlen((char *)*param_1);
  local_20 = (int)sVar3;
  while( true ) {
    local_20 = local_20 + -1;
    bVar1 = false;
    if (-1 < local_20) {
      iVar2 = _isspace((int)*(char *)(*param_1 + (long)local_20));
      bVar1 = iVar2 != 0;
    }
    if (!bVar1) break;
    *(undefined *)(*param_1 + (long)local_20) = 0;
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while( true ) {
    bVar1 = false;
    if (local_20 < (int)sVar3) {
      iVar2 = _isspace((int)*(char *)*param_1);
      bVar1 = iVar2 != 0;
    }
    if (!bVar1) break;
    *(undefined *)*param_1 = 0;
    *param_1 = *param_1 + 1;
    local_1c = local_1c + 1;
    local_20 = local_20 + 1;
  }
  return local_1c;
}



undefined4 _csv_destroy(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (param_1[2] != 0) {
      _free((void *)param_1[2]);
    }
    if (*param_1 != 0) {
      _free((void *)*param_1);
    }
    _free(param_1);
  }
  return 0;
}



undefined8 * _csv_create(uint param_1,uint param_2)

{
  char *pcVar1;
  void *pvVar2;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)_malloc(0x18);
  *(uint *)(local_18 + 1) = param_2;
  *(uint *)((long)local_18 + 0xc) = param_1;
  pcVar1 = _strdup(",");
  *local_18 = pcVar1;
  pvVar2 = _malloc((ulong)param_1 * 8 * (ulong)param_2);
  local_18[2] = pvVar2;
  if (local_18[2] == 0) {
    _csv_destroy(local_18);
    local_18 = (undefined8 *)0x0;
  }
  else {
    ___memset_chk(local_18[2],0,(ulong)param_1 * 8 * (ulong)param_2,0xffffffffffffffff);
  }
  return local_18;
}



undefined8 _csv_get(long param_1,int param_2,int param_3)

{
  return *(undefined8 *)
          (*(long *)(param_1 + 0x10) +
          (ulong)(uint)(param_2 + param_3 * *(int *)(param_1 + 0xc)) * 8);
}



undefined8 _csv_set(long param_1,int param_2,int param_3,undefined8 param_4)

{
  *(undefined8 *)
   (*(long *)(param_1 + 0x10) + (ulong)(uint)(param_2 + param_3 * *(int *)(param_1 + 0xc)) * 8) =
       param_4;
  return 0;
}



int _csv_display(long param_1)

{
  int iVar1;
  uint local_20;
  uint local_1c;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    iVar1 = _printf("[Empty table]\n");
  }
  else {
    _printf("\n[Table cols=%d rows=%d]\n");
    for (local_1c = 0; local_1c < *(uint *)(param_1 + 8); local_1c = local_1c + 1) {
      _printf("[|");
      for (local_20 = 0; local_20 < *(uint *)(param_1 + 0xc); local_20 = local_20 + 1) {
        _csv_get(param_1,local_20,local_1c);
        _printf("%s\t|");
      }
      _printf("]\n");
    }
    iVar1 = _printf("\n");
  }
  return iVar1;
}



undefined4 _csv_resize(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  int *piVar6;
  uint local_58;
  uint local_54;
  uint local_30;
  uint local_2c;
  undefined4 local_14;
  
  lVar3 = _csv_create(param_2,param_3);
  if (lVar3 == 0) {
    ___error();
    piVar6 = ___error();
    _strerror(*piVar6);
    _printf("Unable to resize CSV table: error %d - %s\n");
    local_14 = 0xffffffff;
  }
  else {
    *(uint *)(lVar3 + 8) = param_3;
    *(uint *)(lVar3 + 0xc) = param_2;
    local_54 = param_2;
    if (param_2 <= *(uint *)(param_1 + 0xc)) {
      local_54 = *(uint *)(param_1 + 0xc);
    }
    local_58 = param_3;
    if (param_3 <= *(uint *)(param_1 + 8)) {
      local_58 = *(uint *)(param_1 + 8);
    }
    for (local_2c = 0; local_2c < local_54; local_2c = local_2c + 1) {
      for (local_30 = 0; local_30 < local_58; local_30 = local_30 + 1) {
        bVar1 = false;
        if (local_2c < *(uint *)(param_1 + 0xc)) {
          bVar1 = local_30 < *(uint *)(param_1 + 8);
        }
        bVar2 = false;
        if (local_2c < *(uint *)(lVar3 + 0xc)) {
          bVar2 = local_30 < *(uint *)(lVar3 + 8);
        }
        if ((bVar1) && (bVar2)) {
          uVar4 = _csv_get(param_1,local_2c,local_30);
          _csv_set(lVar3,local_2c,local_30,uVar4);
        }
        else if (bVar1) {
          pvVar5 = (void *)_csv_get(param_1,local_2c,local_30);
          _free(pvVar5);
        }
      }
    }
    _free(*(void **)(param_1 + 0x10));
    *(uint *)(param_1 + 8) = param_3;
    *(uint *)(param_1 + 0xc) = param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    _csv_destroy(lVar3);
    local_14 = 0;
  }
  return local_14;
}



undefined4 _csv_open(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  char *local_868;
  char *local_860;
  uint local_854;
  uint local_850;
  int local_84c;
  FILE *local_848;
  char *local_840;
  undefined8 *local_838;
  undefined4 local_82c;
  char acStack_828 [2048];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004018;
  local_840 = param_2;
  local_838 = param_1;
  local_848 = _fopen(param_2,"r");
  if (local_848 == (FILE *)0x0) {
    _fclose((FILE *)0x0);
    iVar3 = _printf("Unable to open %s for reading.");
    local_82c = 0xffffffff;
  }
  else {
    local_84c = 0;
    local_850 = 0;
    while (pcVar4 = _fgets(acStack_828,0x800,local_848), pcVar4 != (char *)0x0) {
      local_84c = local_84c + 1;
      local_854 = 0;
      local_860 = acStack_828;
      while (local_868 = _strtok(local_860,(char *)*local_838), local_868 != (char *)0x0) {
        local_860 = (char *)0x0;
        _trim(&local_868);
        local_854 = local_854 + 1;
        if (local_850 < local_854) {
          local_850 = local_854;
        }
        _csv_resize(local_838,local_850,local_84c);
        puVar2 = local_838;
        iVar3 = local_854 - 1;
        iVar1 = local_84c + -1;
        pcVar4 = _strdup(local_868);
        _csv_set(puVar2,iVar3,iVar1,pcVar4);
      }
    }
    iVar3 = _fclose(local_848);
    *(int *)(local_838 + 1) = local_84c;
    *(uint *)((long)local_838 + 0xc) = local_850;
    local_82c = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100004018 == local_28) {
    return local_82c;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar3);
}



undefined8 _csv_save(long param_1,char *param_2)

{
  FILE *pFVar1;
  uint local_30;
  uint local_2c;
  
  pFVar1 = _fopen(param_2,"w");
  for (local_2c = 0; local_2c < *(uint *)(param_1 + 8); local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < *(uint *)(param_1 + 0xc); local_30 = local_30 + 1) {
      _csv_get(param_1,local_30,local_2c);
      _fprintf(pFVar1,"%s%s");
    }
    _fprintf(pFVar1,"\n");
  }
  _fclose(pFVar1);
  return 0;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  
  _printf("%s\n%s\n\n");
  uVar1 = _csv_create(0);
  _csv_open(uVar1,"fixtures/csv-data-manipulation.csv");
  _csv_display(uVar1);
  _csv_set(uVar1,0,0,"Column0");
  _csv_set(uVar1,1,1,"100");
  _csv_set(uVar1,2,2,"200");
  _csv_set(uVar1,3,3,"300");
  _csv_set(uVar1,4,4,"400");
  _csv_display(uVar1);
  _csv_save(uVar1,"tmp/csv-data-manipulation.result.csv");
  _csv_destroy(uVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * ___error(void)

{
  int *piVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003da8. Too many branches
                    // WARNING: Treating indirect jump as call
  piVar1 = (int *)(*(code *)PTR____error_100004000)();
  return piVar1;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003db4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004008)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dc0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dcc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004028)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de4. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004030)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003dfc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004040)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004048)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e14. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004050)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004058)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004060)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strerror(int param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e38. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strerror_100004068)(param_1);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e44. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004070)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004078)();
  return pcVar1;
}


