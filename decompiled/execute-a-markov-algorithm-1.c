#include "execute-a-markov-algorithm-1.h"



void _ruleset_del(void *param_1)

{
  if (*(long *)((long)param_1 + 8) != 0) {
    _free(*(void **)((long)param_1 + 8));
  }
  if (*(long *)((long)param_1 + 0x10) != 0) {
    _free(*(void **)((long)param_1 + 0x10));
  }
  _free(param_1);
  return;
}



undefined8 * _str_new(char *param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  sVar1 = _strlen(param_1);
  puVar2 = (undefined8 *)_malloc(0x10);
  pvVar3 = _malloc((long)((int)sVar1 + 1));
  *puVar2 = pvVar3;
  ___strcpy_chk(*puVar2,param_1,0xffffffffffffffff);
  puVar2[1] = (long)((int)sVar1 + 1);
  return puVar2;
}



void _str_append(long *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  int local_24;
  
  sVar1 = _strlen((char *)*param_1);
  iVar3 = (int)sVar1;
  local_24 = param_3;
  if (param_3 == -1) {
    sVar1 = _strlen(param_2);
    local_24 = (int)sVar1;
  }
  if ((ulong)param_1[1] < (ulong)(long)(iVar3 + local_24 + 1)) {
    param_1[1] = (long)(iVar3 + local_24 + 1);
    pvVar2 = _realloc((void *)*param_1,param_1[1]);
    *param_1 = (long)pvVar2;
  }
  ___memcpy_chk(*param_1 + (long)iVar3,param_2,(long)local_24,0xffffffffffffffff);
  *(undefined *)(*param_1 + (long)(iVar3 + local_24)) = 0;
  return;
}



void _str_transfer(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  *(undefined *)*param_2 = 0;
  return;
}



void _str_del(long *param_1)

{
  if (*param_1 != 0) {
    _free((void *)*param_1);
  }
  _free(param_1);
  return;
}



void _str_markov(long *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  size_t sVar7;
  int local_28;
  int local_24;
  
  bVar2 = false;
  uVar5 = _str_new("");
  do {
    if (bVar2) break;
    bVar3 = false;
    local_24 = 0;
    while( true ) {
      bVar1 = false;
      if ((!bVar2) && (bVar1 = false, !bVar3)) {
        bVar1 = local_24 < *param_2;
      }
      if (!bVar1) break;
      sVar6 = _strlen(*(char **)(*(long *)(param_2 + 2) + (long)local_24 * 0x18));
      sVar7 = _strlen((char *)*param_1);
      for (local_28 = 0; local_28 < (int)sVar7; local_28 = local_28 + 1) {
        iVar4 = _strncmp((char *)(*param_1 + (long)local_28),
                         *(char **)(*(long *)(param_2 + 2) + (long)local_24 * 0x18),(long)(int)sVar6
                        );
        if (iVar4 == 0) {
          _str_append(uVar5,*param_1,local_28);
          _str_append(uVar5,*(undefined8 *)(*(long *)(param_2 + 2) + (long)local_24 * 0x18 + 8));
          _str_append(uVar5,*param_1 + (long)local_28 + (long)(int)sVar6,0xffffffff);
          _str_transfer(param_1,uVar5);
          bVar3 = true;
          if (*(int *)(*(long *)(param_2 + 2) + (long)local_24 * 0x18 + 0x10) != 0) {
            bVar2 = true;
          }
          break;
        }
      }
      local_24 = local_24 + 1;
    }
  } while (bVar3);
  _str_del(uVar5);
  return;
}



int * _read_rules(char *param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  int local_f4;
  void *local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  stat sStack_c0;
  char *local_30;
  int *local_28;
  
  local_f0 = (void *)0x0;
  local_f4 = 0;
  local_30 = param_1;
  iVar4 = _open(param_1,0);
  if (iVar4 == -1) {
    local_28 = (int *)0x0;
  }
  else {
    _fstat(iVar4,&sStack_c0);
    pvVar5 = _malloc(sStack_c0.st_size + 2);
    _read(iVar4,pvVar5,sStack_c0.st_size);
    *(undefined *)((long)pvVar5 + sStack_c0.st_size) = 10;
    *(undefined *)((long)pvVar5 + sStack_c0.st_size + 1U) = 0;
    _close(iVar4);
    local_d8 = 0;
    for (local_d0 = 0; *(char *)((long)pvVar5 + local_d0) != '\0'; local_d0 = local_d0 + 1) {
      if (*(char *)((long)pvVar5 + local_d0) == '\n') {
        if ((*(char *)((long)pvVar5 + local_d8) == '#') || (uVar2 = local_d8, local_d0 == local_d8))
        {
          local_d8 = local_d0 + 1;
        }
        else {
          do {
            uVar1 = uVar2;
            local_e0 = uVar1 + 1;
            if (local_d0 - 3 <= local_e0) break;
            iVar4 = _isspace((int)*(char *)((long)pvVar5 + local_e0));
            uVar2 = local_e0;
          } while ((iVar4 == 0) ||
                  (iVar4 = _strncmp((char *)((long)pvVar5 + uVar1 + 2),"->",2), uVar2 = local_e0,
                  iVar4 != 0));
          if (local_d0 - 3 <= local_e0) {
            _printf("parse error: no -> in %.*s\n");
            break;
          }
          local_e8 = local_e0;
          do {
            bVar3 = false;
            if (local_d8 < local_e8) {
              local_e8 = local_e8 - 1;
              iVar4 = _isspace((int)*(char *)((long)pvVar5 + local_e8));
              bVar3 = iVar4 != 0;
            }
          } while (bVar3);
          if (local_e8 < local_d8) {
            _printf("left side blank? %.*s\n");
            break;
          }
          *(undefined *)((long)pvVar5 + local_e8 + 1) = 0;
          local_e0 = uVar1 + 4;
          do {
            bVar3 = false;
            if (local_e0 < local_d0) {
              local_e0 = local_e0 + 1;
              iVar4 = _isspace((int)*(char *)((long)pvVar5 + local_e0));
              bVar3 = iVar4 != 0;
            }
          } while (bVar3);
          *(undefined *)((long)pvVar5 + local_d0) = 0;
          local_f0 = _realloc(local_f0,(long)(local_f4 + 1) * 0x18);
          *(ulong *)((long)local_f0 + (long)local_f4 * 0x18) = (long)pvVar5 + local_d8;
          if (*(char *)((long)pvVar5 + local_e0) == '.') {
            *(undefined4 *)((long)local_f0 + (long)local_f4 * 0x18 + 0x10) = 1;
            *(ulong *)((long)local_f0 + (long)local_f4 * 0x18 + 8) = (long)pvVar5 + local_e0 + 1;
          }
          else {
            *(undefined4 *)((long)local_f0 + (long)local_f4 * 0x18 + 0x10) = 0;
            *(ulong *)((long)local_f0 + (long)local_f4 * 0x18 + 8) = (long)pvVar5 + local_e0;
          }
          local_f4 = local_f4 + 1;
          local_d8 = local_d0 + 1;
        }
      }
    }
    local_28 = (int *)_malloc(0x18);
    *(void **)(local_28 + 4) = pvVar5;
    *(void **)(local_28 + 2) = local_f0;
    *local_28 = local_f4;
  }
  return local_28;
}



int _test_rules(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int local_14;
  
  lVar1 = _read_rules(param_2);
  if (lVar1 == 0) {
    local_14 = 0;
  }
  else {
    _printf("Rules from \'%s\' ok\n");
    uVar2 = _str_new(param_1);
    _printf("text:     %s\n");
    _str_markov(uVar2,lVar1);
    _printf("markoved: %s\n");
    _str_del(uVar2);
    _ruleset_del(lVar1);
    local_14 = _printf("\n");
  }
  return local_14;
}



undefined4 entry(void)

{
  _test_rules("I bought a B of As from T S.","rule1");
  _test_rules("I bought a B of As from T S.","rule2");
  _test_rules("I bought a B of As W my Bgage from T S.","rule3");
  _test_rules("_1111*11111_","rule4");
  _test_rules("000000A000000","rule5");
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fstat(int param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fstat_100004020)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004028)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004038)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _read(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__read_100004048)(param_1);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004050)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004058)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strncmp_100004060)((int)param_1);
  return iVar1;
}


