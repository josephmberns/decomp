#include "concurrent-computing-1.h"



void _t_enjoy(void)

{
  _pthread_mutex_lock((pthread_mutex_t *)&_condm);
  while (_bang == 0) {
    _pthread_cond_wait((pthread_cond_t *)&_cond,(pthread_mutex_t *)&_condm);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)&_condm);
  _printf("Enjoy\n");
                    // WARNING: Subroutine does not return
  _pthread_exit((void *)0x0);
}



void _t_rosetta(void)

{
  _pthread_mutex_lock((pthread_mutex_t *)&_condm);
  while (_bang == 0) {
    _pthread_cond_wait((pthread_cond_t *)&_cond,(pthread_mutex_t *)&_condm);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)&_condm);
  _printf("Rosetta\n");
                    // WARNING: Subroutine does not return
  _pthread_exit((void *)0x0);
}



void _t_code(void)

{
  _pthread_mutex_lock((pthread_mutex_t *)&_condm);
  while (_bang == 0) {
    _pthread_cond_wait((pthread_cond_t *)&_cond,(pthread_mutex_t *)&_condm);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)&_condm);
  _printf("Code\n");
                    // WARNING: Subroutine does not return
  _pthread_exit((void *)0x0);
}



undefined4 entry(void)

{
  int iVar1;
  int local_58;
  code *local_50 [4];
  pthread_t ap_Stack_30 [3];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_50[1] = _t_rosetta;
  local_50[0] = _t_enjoy;
  local_50[2] = _t_code;
  for (local_58 = 0; local_58 < 3; local_58 = local_58 + 1) {
    _pthread_create(ap_Stack_30 + local_58,(pthread_attr_t *)0x0,(void **)local_50[local_58],
                    (void *)0x0);
  }
  _sleep(1);
  _bang = 1;
  iVar1 = _pthread_cond_broadcast((pthread_cond_t *)&_cond);
  for (local_58 = 0; local_58 < 3; local_58 = local_58 + 1) {
    iVar1 = _pthread_join(ap_Stack_30[local_58],(void **)0x0);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_cond_broadcast(pthread_cond_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_cond_broadcast_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_cond_wait(pthread_cond_t *param_1,pthread_mutex_t *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_cond_wait_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_create(pthread_t *param_1,pthread_attr_t *param_2,void **param_3,void *param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_create_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _pthread_exit(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pthread_exit_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_join(pthread_t param_1,void **param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_join_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_lock_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_unlock_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_100004050)(param_1);
  return uVar1;
}


