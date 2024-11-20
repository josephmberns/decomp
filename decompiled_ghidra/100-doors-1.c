#include "100-doors-1.h"



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  int local_88;
  int local_84;
  char acStack_7c [100];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = _memset(acStack_7c,0,100);
  for (local_84 = 0; local_84 < 100; local_84 = local_84 + 1) {
    for (local_88 = local_84; local_88 < 100; local_88 = local_88 + local_84 + 1) {
      acStack_7c[local_88] = acStack_7c[local_88] == '\0';
    }
  }
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    uVar1 = _printf("door #%d is %s.\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004010)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


