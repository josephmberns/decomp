#include "menu.h"



undefined8 entry(void)

{
  int iVar1;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_40,&PTR_s_fee_fie_100004038,0x28);
  _menu_select(auStack_40,"Which is from the three pigs?");
  iVar1 = _printf("You chose %s.\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



undefined8 _menu_select(long param_1,long param_2)

{
  char *pcVar1;
  int local_448;
  int local_444;
  undefined8 local_430;
  char acStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  if (param_1 == 0) {
    local_430 = 0;
  }
  else {
    do {
      local_444 = 0;
      while (*(long *)(param_1 + (long)local_444 * 8) != 0) {
        _printf("%d) %s\n");
        local_444 = local_444 + 1;
      }
      if (param_2 == 0) {
        _printf("Choice? ");
      }
      else {
        _printf("%s ");
      }
      pcVar1 = _fgets(acStack_428,0x400,*(FILE **)PTR____stdinp_100004010);
      if (pcVar1 != (char *)0x0) {
        local_448 = _atoi(acStack_428);
      }
    } while (local_448 < 1 || local_444 < local_448);
    local_430 = *(undefined8 *)(param_1 + (long)(local_448 + -1) * 8);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_430;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004020)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


