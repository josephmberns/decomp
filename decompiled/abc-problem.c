#include "abc-problem.h"



int _can_make_words(long *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  int local_30;
  int local_2c;
  int local_14;
  
  local_30 = 0;
  iVar1 = _toupper((int)*param_2);
  if (iVar1 == 0) {
    local_14 = 1;
  }
  else if (*param_1 == 0) {
    local_14 = 0;
  }
  else {
    local_2c = 0;
    while (param_1[local_2c] != 0 && local_30 == 0) {
      if ((*(char *)param_1[local_2c] == iVar1) || (*(char *)(param_1[local_2c] + 1) == iVar1)) {
        if (param_1[local_2c] != *param_1) {
          lVar2 = param_1[local_2c];
          param_1[local_2c] = *param_1;
          *param_1 = lVar2;
        }
        local_30 = _can_make_words(param_1 + 1,param_2 + 1);
        if (param_1[local_2c] != *param_1) {
          lVar2 = param_1[local_2c];
          param_1[local_2c] = *param_1;
          *param_1 = lVar2;
        }
      }
      local_2c = local_2c + 1;
    }
    local_14 = local_30;
  }
  return local_14;
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  long *local_128;
  long local_118 [9];
  undefined auStack_d0 [168];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_d0,&PTR_s_BO_100004028,0xa8);
  local_128 = local_118;
  pvVar2 = _memcpy(local_128,&PTR_s__1000040d0,0x48);
  for (; *local_128 != 0; local_128 = local_128 + 1) {
    _can_make_words(auStack_d0,*local_128);
    uVar1 = _printf("%s\t%d\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _toupper(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__toupper_100004020)(_c);
  return iVar1;
}


