#include "metered-concurrency.h"



void _acquire(void)

{
  _sem_wait(&_sem);
  _count = _count + -1;
  return;
}



void _release(void)

{
  _count = _count + 1;
  _sem_post(&_sem);
  return;
}



void _work(void *param_1,size_t param_2)

{
  int iVar1;
  uint uVar2;
  int local_1c;
  
  local_1c = 10;
  while (local_1c != 0) {
    _acquire(param_1);
    _printf("#%d acquired sema at %d\n");
    iVar1 = _rand();
    iVar1 = _usleep(iVar1 % 4000000);
    _release(iVar1);
    uVar2 = _usleep(0);
    param_1 = (void *)(ulong)uVar2;
    local_1c = local_1c + -1;
  }
  return;
}



undefined4 entry(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  pthread_t ap_Stack_38 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_48 = 0x400000003;
  local_50 = 0x200000001;
  _sem_init(&_sem,0,_count);
  local_58 = 4;
  while (iVar1 = local_58 + -1, local_58 != 0) {
    _pthread_create(ap_Stack_38 + iVar1,(pthread_attr_t *)0x0,(void **)_work,
                    (void *)((long)&local_50 + (long)iVar1 * 4));
    local_58 = iVar1;
  }
  local_58 = 4;
  while( true ) {
    if (local_58 == 0) break;
    _pthread_join(ap_Stack_38[local_58 + -1],(void **)0x0);
    local_58 = local_58 + -1;
  }
  _printf("all workers done\n");
  uVar2 = _sem_destroy(&_sem);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return uVar2;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_create(pthread_t *param_1,pthread_attr_t *param_2,void **param_3,void *param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_create_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_join(pthread_t param_1,void **param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_join_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}



void _sem_destroy(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sem_destroy_100004030)();
  return;
}



void _sem_init(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sem_init_100004038)();
  return;
}



void _sem_post(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sem_post_100004040)();
  return;
}



void _sem_wait(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sem_wait_100004048)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__usleep_100004050)(param_1);
  return iVar1;
}


