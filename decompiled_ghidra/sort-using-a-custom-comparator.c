#include "sort-using-a-custom-comparator.h"



int _mycmp(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 local_14;
  
  pcVar3 = (char *)*param_1;
  pcVar4 = (char *)*param_2;
  sVar1 = _strlen(pcVar3);
  sVar2 = _strlen(pcVar4);
  if (sVar2 < sVar1) {
    local_14 = -1;
  }
  else if (sVar1 < sVar2) {
    local_14 = 1;
  }
  else {
    local_14 = _strcasecmp(pcVar3,pcVar4);
  }
  return local_14;
}



undefined8 entry(void)

{
  undefined auStack_58 [64];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_58,&PTR_s_Here_100004030,0x40);
  _qsort(auStack_58,8,8,(int *)_mycmp);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcasecmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcasecmp_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004028)();
  return sVar1;
}


