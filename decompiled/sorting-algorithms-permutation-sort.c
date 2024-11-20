#include "sorting-algorithms-permutation-sort.h"



void _perm_sort(ulong param_1,int param_2,size_t param_3,code *param_4)

{
  ulong uVar1;
  int iVar2;
  void *pvVar3;
  ulong local_40;
  ulong local_38;
  
  pvVar3 = _malloc(param_3);
  do {
    uVar1 = param_1 + param_3 * (long)(param_2 + -1);
    do {
      local_38 = uVar1;
      if (local_38 <= param_1) break;
      local_40 = local_38 - param_3;
      iVar2 = (*param_4)(local_40,local_38);
      uVar1 = local_40;
    } while (iVar2 < 1);
    if (local_38 <= param_1) {
      _free(pvVar3);
      return;
    }
    local_38 = param_1 + param_3 * (long)(param_2 + -1);
    while ((local_40 < local_38 && (iVar2 = (*param_4)(local_40,local_38), iVar2 < 1))) {
      local_38 = local_38 - param_3;
    }
    ___memcpy_chk(pvVar3,local_38,param_3);
    ___memcpy_chk(local_38,local_40,param_3,0xffffffffffffffff);
    ___memcpy_chk(local_40,pvVar3,param_3,0xffffffffffffffff);
    for (local_38 = param_1 + param_3 * (long)(param_2 + -1); local_40 = local_40 + param_3,
        local_40 < local_38; local_38 = local_38 - param_3) {
      ___memcpy_chk(pvVar3,local_38,param_3);
      ___memcpy_chk(local_38,local_40,param_3,0xffffffffffffffff);
      ___memcpy_chk(local_40,pvVar3,param_3,0xffffffffffffffff);
    }
  } while( true );
}



int _scmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  int local_48;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  _memcpy(auStack_40,&PTR_s_spqr_100004040,0x28);
  uVar2 = _perm_sort(auStack_40,5,8,_scmp);
  for (local_48 = 0; local_48 < 5; local_48 = local_48 + 1) {
    uVar1 = _printf("%s\n");
    uVar2 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar2);
  }
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004038)((int)param_1);
  return iVar1;
}


