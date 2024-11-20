#include "sorting-algorithms-cocktail-sort-3.h"



void _swap(undefined *param_1,undefined *param_2,long param_3)

{
  undefined uVar1;
  long local_18;
  undefined *local_10;
  undefined *local_8;
  
  local_18 = param_3;
  local_10 = param_2;
  local_8 = param_1;
  while (local_18 != 0) {
    uVar1 = *local_8;
    *local_8 = *local_10;
    *local_10 = uVar1;
    local_8 = local_8 + 1;
    local_10 = local_10 + 1;
    local_18 = local_18 + -1;
  }
  return;
}



void _cocktail_sort(ulong param_1,long param_2,long param_3,code *param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong local_60;
  ulong local_50;
  
  uVar1 = param_1 + param_3 * param_2;
  if (uVar1 != param_1) {
    bVar2 = true;
    uVar1 = uVar1 - param_3;
    while (bVar2) {
      bVar2 = false;
      for (local_50 = param_1; local_50 < uVar1; local_50 = local_50 + param_3) {
        iVar3 = (*param_4)(local_50,local_50 + param_3);
        if (0 < iVar3) {
          _swap(local_50,local_50 + param_3,param_3);
          bVar2 = true;
        }
      }
      if (!bVar2) {
        return;
      }
      bVar2 = false;
      for (local_60 = uVar1; param_1 < local_60; local_60 = local_60 - param_3) {
        iVar3 = (*param_4)(local_60 - param_3,local_60);
        if (0 < iVar3) {
          _swap(local_60,local_60 - param_3,param_3);
          bVar2 = true;
        }
      }
    }
  }
  return;
}



int _string_compare(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}



int _print(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong local_28;
  
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    _printf("%s ");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



undefined8 entry(void)

{
  undefined auStack_68 [80];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_68,&PTR_s_one_100004028,0x50);
  _printf("before: ");
  _print(auStack_68,10);
  _cocktail_sort(auStack_68,10,8,_string_compare);
  _printf("after: ");
  _print(auStack_68,10);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004020)((int)param_1);
  return iVar1;
}


