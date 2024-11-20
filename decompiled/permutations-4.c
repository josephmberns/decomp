#include "permutations-4.h"



undefined8 _show(undefined8 param_1,int param_2)

{
  int local_20;
  
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    _printf("%d%c");
  }
  return 1;
}



undefined4 _next_lex_perm(long param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_4;
  
  local_18 = param_2 + -1;
  while( true ) {
    bVar1 = false;
    if (local_18 != 0) {
      bVar1 = *(int *)(param_1 + (long)local_18 * 4) <=
              *(int *)(param_1 + (long)(local_18 + -1) * 4);
    }
    if (!bVar1) break;
    local_18 = local_18 + -1;
  }
  iVar3 = local_18 + -1;
  if (local_18 == 0) {
    local_4 = 0;
  }
  else {
    local_1c = param_2 + -1;
    while (*(int *)(param_1 + (long)local_1c * 4) <= *(int *)(param_1 + (long)iVar3 * 4)) {
      local_1c = local_1c + -1;
    }
    uVar2 = *(undefined4 *)(param_1 + (long)iVar3 * 4);
    *(undefined4 *)(param_1 + (long)iVar3 * 4) = *(undefined4 *)(param_1 + (long)local_1c * 4);
    *(undefined4 *)(param_1 + (long)local_1c * 4) = uVar2;
    local_1c = param_2 + -1;
    for (; local_18 < local_1c; local_18 = local_18 + 1) {
      uVar2 = *(undefined4 *)(param_1 + (long)local_18 * 4);
      *(undefined4 *)(param_1 + (long)local_18 * 4) = *(undefined4 *)(param_1 + (long)local_1c * 4);
      *(undefined4 *)(param_1 + (long)local_1c * 4) = uVar2;
      local_1c = local_1c + -1;
    }
    local_4 = 1;
  }
  return local_4;
}



void _perm1(undefined8 param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  
  do {
    if (param_3 != (code *)0x0) {
      (*param_3)(param_1,param_2);
    }
    iVar1 = _next_lex_perm(param_1,param_2);
  } while (iVar1 != 0);
  return;
}



void _boothroyd(long param_1,uint param_2,undefined4 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 local_38;
  undefined4 local_2c;
  
  local_2c = 0;
  while( true ) {
    if (2 < (int)param_2) {
      _boothroyd(param_1,param_2 - 1,param_3,param_4);
    }
    if ((int)(param_2 - 1) <= local_2c) break;
    if ((param_2 & 1) == 0) {
      local_38 = local_2c;
    }
    else {
      local_38 = 0;
    }
    local_2c = local_2c + 1;
    uVar1 = *(undefined4 *)(param_1 + (long)(int)(param_2 - 1) * 4);
    *(undefined4 *)(param_1 + (long)(int)(param_2 - 1) * 4) =
         *(undefined4 *)(param_1 + (long)local_38 * 4);
    *(undefined4 *)(param_1 + (long)local_38 * 4) = uVar1;
    if (param_4 != (code *)0x0) {
      (*param_4)(param_1,param_3);
    }
  }
  return;
}



void _perm2(undefined8 param_1,undefined4 param_2,code *param_3)

{
  if (param_3 != (code *)0x0) {
    (*param_3)(param_1,param_2);
  }
  _boothroyd(param_1,param_2,param_2,param_3);
  return;
}



void _perm3(long param_1,int param_2,code *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 local_4c;
  undefined4 local_2c;
  
  pvVar3 = _calloc((long)param_2,4);
  if (param_3 != (code *)0x0) {
    (*param_3)(param_1,param_2);
  }
  local_2c = 1;
  do {
    while (1 < (int)local_2c) {
      local_2c = local_2c - 1;
      *(undefined4 *)((long)pvVar3 + (long)(int)local_2c * 4) = 0;
    }
    while ((int)local_2c <= *(int *)((long)pvVar3 + (long)(int)local_2c * 4)) {
      local_2c = local_2c + 1;
      if (param_2 <= (int)local_2c) {
        _free(pvVar3);
        return;
      }
    }
    if ((local_2c & 1) == 0) {
      local_4c = 0;
    }
    else {
      local_4c = *(int *)((long)pvVar3 + (long)(int)local_2c * 4);
    }
    uVar2 = *(undefined4 *)(param_1 + (long)local_4c * 4);
    *(undefined4 *)(param_1 + (long)local_4c * 4) =
         *(undefined4 *)(param_1 + (long)(int)local_2c * 4);
    *(undefined4 *)(param_1 + (long)(int)local_2c * 4) = uVar2;
    if (param_3 != (code *)0x0) {
      (*param_3)(param_1,param_2);
    }
    piVar1 = (int *)((long)pvVar3 + (long)(int)local_2c * 4);
    *piVar1 = *piVar1 + 1;
  } while( true );
}



undefined8 entry(void)

{
  int local_30;
  int aiStack_28 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_30 = 0; local_30 < 4; local_30 = local_30 + 1) {
    aiStack_28[local_30] = local_30 + 1;
  }
  _perm1();
  _perm2(aiStack_28,4,_show);
  _perm3(aiStack_28,4,_show);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


