#include "averages-mode.h"



uint _cmp_dbl(double *param_1,double *param_2)

{
  undefined4 local_1c;
  
  if (0.0 <= *param_1 - *param_2) {
    local_1c = (uint)(0.0 < *param_1 - *param_2);
  }
  else {
    local_1c = 0xffffffff;
  }
  return local_1c;
}



int _vc_cmp(long param_1,long param_2)

{
  return *(int *)(param_2 + 8) - *(int *)(param_1 + 8);
}



int _get_mode(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  int local_30;
  int local_2c;
  
  _qsort(param_1,(long)param_2,8,(int *)_cmp_dbl);
  local_2c = 0;
  local_30 = 1;
  while (local_2c < param_2 + -1) {
    local_30 = local_30 + (uint)((double)param_1[local_2c + 1] != (double)param_1[local_2c + 2]);
    local_2c = local_2c + 1;
  }
  puVar2 = (undefined8 *)_malloc((long)local_30 * 0x10);
  *param_3 = puVar2;
  *puVar2 = *param_1;
  *(undefined4 *)(puVar2 + 1) = 1;
  local_30 = 0;
  local_2c = 0;
  while (local_2c < param_2 + -1) {
    if ((double)param_1[local_2c] != (double)param_1[local_2c + 1]) {
      local_30 = local_30 + 1;
      puVar2[(long)local_30 * 2] = param_1[local_2c + 1];
    }
    local_2c = local_2c + 1;
    *(int *)(puVar2 + (long)local_30 * 2 + 1) = *(int *)(puVar2 + (long)local_30 * 2 + 1) + 1;
  }
  _qsort(puVar2,(long)(local_30 + 1),0x10,(int *)_vc_cmp);
  local_2c = 0;
  while( true ) {
    bVar1 = false;
    if (local_2c <= local_30) {
      bVar1 = *(int *)(puVar2 + (long)local_2c * 2 + 1) == *(int *)(puVar2 + 1);
    }
    if (!bVar1) break;
    local_2c = local_2c + 1;
  }
  return local_2c;
}



undefined8 entry(void)

{
  int iVar1;
  int local_94;
  void *local_90;
  undefined4 local_84;
  undefined auStack_80 [104];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_84 = 0;
  _memcpy(auStack_80,&DAT_100003f08,0x68);
  iVar1 = _get_mode(auStack_80,0xd,&local_90);
  _printf("got %d modes:\n");
  for (local_94 = 0; local_94 < iVar1; local_94 = local_94 + 1) {
    _printf("\tvalue = %g, count = %d\n");
  }
  _free(local_90);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004030)();
  return;
}


