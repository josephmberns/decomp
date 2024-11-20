#include "probabilistic-choice-1.h"



int _rand_idx(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_2c;
  undefined8 local_28;
  
  iVar2 = _rand();
  local_28 = (double)iVar2 / 2147483648.0;
  local_2c = 0;
  while( true ) {
    bVar1 = false;
    if (local_2c < param_2 + -1) {
      local_28 = local_28 - *(double *)(param_1 + (long)local_2c * 8);
      bVar1 = 0.0 <= local_28;
    }
    if (!bVar1) break;
    local_2c = local_2c + 1;
  }
  return local_2c;
}



undefined8 entry(void)

{
  int iVar1;
  int local_e4;
  int local_d0 [10];
  undefined auStack_a8 [64];
  undefined auStack_68 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_68,&PTR_s_aleph_100004028,0x40);
  _memcpy(auStack_a8,&DAT_100003ef8,0x40);
  local_d0[2] = 0;
  local_d0[3] = 0;
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_d0[4] = 0;
  local_d0[5] = 0;
  for (local_e4 = 0; local_e4 < 1000000; local_e4 = local_e4 + 1) {
    iVar1 = _rand_idx(auStack_a8,8);
    local_d0[iVar1] = local_d0[iVar1] + 1;
  }
  iVar1 = _printf("  Name  Count    Ratio Expected\n");
  for (local_e4 = 0; local_e4 < 8; local_e4 = local_e4 + 1) {
    iVar1 = _printf("%6s%7d %7.4f%% %7.4f%%\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}


