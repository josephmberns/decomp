#include "sorting-algorithms-circle-sort.h"



uint _circle_sort_inner(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint local_40;
  int *local_38;
  int *local_30;
  uint local_14;
  
  if (param_1 == param_2) {
    local_14 = 0;
  }
  else {
    local_40 = 0;
    local_38 = param_2;
    local_30 = param_1;
    while( true ) {
      bVar2 = true;
      if ((local_38 <= local_30) && (bVar2 = false, local_30 == local_38)) {
        local_38 = local_38 + 1;
        bVar2 = local_38 != (int *)0x0;
      }
      if (!bVar2) break;
      if (*local_38 < *local_30) {
        iVar1 = *local_30;
        *local_30 = *local_38;
        *local_38 = iVar1;
        local_40 = 1;
      }
      local_30 = local_30 + 1;
      local_38 = local_38 + -1;
    }
    uVar3 = _circle_sort_inner(param_1,local_38);
    local_14 = _circle_sort_inner(local_30,param_2);
    local_14 = local_40 | uVar3 | local_14;
  }
  return local_14;
}



void _circle_sort(long param_1,int param_2)

{
  int iVar1;
  int local_20;
  
  do {
    for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
      _printf("%d ");
    }
    _putchar(10);
    iVar1 = _circle_sort_inner(param_1,param_1 + (long)(param_2 + -1) * 4);
  } while (iVar1 != 0);
  return;
}



undefined8 entry(void)

{
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_40,&DAT_100003f80,0x28);
  _circle_sort(auStack_40,10);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004020)(param_1);
  return iVar1;
}


