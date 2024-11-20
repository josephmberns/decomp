#include "move-to-front-algorithm.h"



int _move_to_front(byte *param_1,byte param_2)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  sVar1 = _strlen((char *)param_1);
  pcVar2 = (char *)_malloc(sVar1 + 1);
  ___strcpy_chk(pcVar2,param_1);
  pcVar3 = _strchr(pcVar2,(uint)param_2);
  iVar4 = (int)pcVar3 - (int)pcVar2;
  ___strncpy_chk(param_1 + 1,pcVar2,(long)iVar4,0xffffffffffffffff);
  *param_1 = param_2;
  _free(pcVar2);
  return iVar4;
}



void _decode(ulong param_1,int param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  int local_5c;
  char local_40 [16];
  undefined3 uStack_30;
  undefined uStack_2d;
  undefined7 uStack_2c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  builtin_strncpy(local_40,"abcdefghijklmnop",0x10);
  _uStack_2d = CONCAT71(0x7a7978777675,uStack_2d);
  uVar3 = _uStack_2d;
  _uStack_30 = CONCAT13(uStack_2d,0x737271);
  uVar5 = param_1;
  for (local_5c = 0; _uStack_2d = uVar3, uVar3 = _uStack_2d, _uStack_2d = uVar3, local_5c < param_2;
      local_5c = local_5c + 1) {
    cVar1 = local_40[*(int *)(param_1 + (long)local_5c * 4)];
    uVar2 = _uStack_30;
    uVar5 = _move_to_front(local_40,(long)cVar1);
    uVar2 = _uStack_30;
    if (*(int *)(param_1 + (long)local_5c * 4) != (int)uVar5) {
      uVar3 = _uStack_2d;
      _uStack_30 = uVar2;
      uVar2 = _uStack_30;
      _uStack_2d = uVar3;
      uVar4 = _printf("there is an error");
      uVar2 = _uStack_30;
      uVar5 = (ulong)uVar4;
    }
    _uStack_30 = uVar2;
    uVar3 = _uStack_2d;
    *(char *)(param_3 + local_5c) = cVar1;
  }
  *(undefined *)(param_3 + param_2) = 0;
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
    uVar2 = _uStack_30;
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar5);
  }
  return;
}



void _encode(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_5c;
  char local_40 [16];
  undefined3 uStack_30;
  undefined uStack_2d;
  undefined7 uStack_2c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  builtin_strncpy(local_40,"abcdefghijklmnop",0x10);
  _uStack_2d = CONCAT71(0x7a7978777675,uStack_2d);
  uVar1 = _uStack_2d;
  _uStack_30 = CONCAT13(uStack_2d,0x737271);
  uVar2 = _uStack_30;
  _uStack_2d = uVar1;
  for (local_5c = 0; _uStack_30 = uVar2, uVar1 = _uStack_2d, _uStack_2d = uVar1, local_5c < param_2;
      local_5c = local_5c + 1) {
    uVar2 = _uStack_30;
    uVar3 = _move_to_front(local_40,(long)*(char *)(param_1 + local_5c));
    uVar2 = _uStack_30;
    *(undefined4 *)(param_3 + (long)local_5c * 4) = uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
    uVar2 = _uStack_30;
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



bool _check(char *param_1,int param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  int local_3c;
  
  pvVar3 = _malloc((long)param_2 * 4);
  pcVar4 = (char *)_malloc((long)param_2);
  _encode(param_1,param_2,pvVar3);
  local_3c = 0;
  while( true ) {
    bVar1 = false;
    if (local_3c < param_2) {
      bVar1 = *(int *)(param_3 + (long)local_3c * 4) == *(int *)((long)pvVar3 + (long)local_3c * 4);
    }
    if (!bVar1) break;
    local_3c = local_3c + 1;
  }
  _decode(param_3,param_2,pcVar4);
  iVar2 = _strcmp(param_1,pcVar4);
  _free(pcVar4);
  _free(pvVar3);
  return iVar2 == 0 && local_3c == param_2;
}



undefined8 entry(void)

{
  int iVar1;
  size_t sVar2;
  int local_2f4;
  int local_2ec;
  undefined auStack_2e4 [400];
  char acStack_154 [300];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(acStack_154,"broood",300);
  _bzero(auStack_2e4,400);
  for (local_2ec = 0; local_2ec < 3; local_2ec = local_2ec + 1) {
    sVar2 = _strlen(acStack_154 + (long)local_2ec * 100);
    _encode(acStack_154 + (long)local_2ec * 100,sVar2 & 0xffffffff,auStack_2e4);
    _printf("%s : [");
    for (local_2f4 = 0; local_2f4 < (int)sVar2; local_2f4 = local_2f4 + 1) {
      _printf("%d ");
    }
    _printf("]\n");
    iVar1 = _check(acStack_154 + (long)local_2ec * 100,(int)sVar2,auStack_2e4);
    if (iVar1 == 0) {
      _printf("Incorrect :(\n");
    }
    else {
      _printf("Correct :)\n");
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003da0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003db8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003dc4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003dd0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ddc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e00. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004048)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e18. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004058)();
  return sVar1;
}


