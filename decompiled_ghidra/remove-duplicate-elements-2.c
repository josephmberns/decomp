#include "remove-duplicate-elements-2.h"



undefined _elem(long param_1,ulong param_2,int param_3)

{
  ulong local_28;
  
  local_28 = 0;
  while( true ) {
    if (param_2 <= local_28) {
      return 0;
    }
    if (*(int *)(param_1 + local_28 * 4) == param_3) break;
    local_28 = local_28 + 1;
  }
  return 1;
}



long _nub(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
    uVar1 = _elem(param_1,local_28,*(undefined4 *)(param_1 + local_30 * 4));
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(param_1 + local_28 * 4) = *(undefined4 *)(param_1 + local_30 * 4);
      local_28 = local_28 + 1;
    }
  }
  return local_28;
}



long _nub_new(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = _malloc(param_3 << 2);
  ___memcpy_chk(pvVar2,param_2,param_3 << 2);
  iVar1 = _nub(pvVar2,param_3);
  pvVar3 = _malloc((long)iVar1 << 2);
  *param_1 = pvVar3;
  ___memcpy_chk(*param_1,pvVar2,(long)iVar1 << 2,0xffffffffffffffff);
  _free(pvVar2);
  return (long)iVar1;
}



undefined8 entry(void)

{
  ulong uVar1;
  ulong local_60;
  void *local_50;
  undefined4 local_44;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_44 = 0;
  _memcpy(auStack_40,&DAT_100003f70,0x28);
  uVar1 = _nub_new(&local_50,auStack_40,10);
  for (local_60 = 0; local_60 < uVar1; local_60 = local_60 + 1) {
    _printf("%d ");
  }
  _puts("");
  _free(local_50);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004038)((int)param_1);
  return iVar1;
}


