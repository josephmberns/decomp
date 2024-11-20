#include "dining-philosophers-2.h"



undefined8 _PhilPhunction(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  int local_44;
  pthread_mutex_t *local_38;
  pthread_mutex_t *local_30;
  int local_28;
  
  while (_running != 0) {
    _printf("%s is sleeping --er thinking\n");
    iVar2 = _rand();
    _sleep(iVar2 % 8 + 1);
    local_30 = (pthread_mutex_t *)*param_1;
    local_38 = (pthread_mutex_t *)param_1[1];
    _printf("%s is hungry\n");
    local_28 = 2;
    do {
      ppVar1 = local_30;
      _pthread_mutex_lock(local_30);
      if (local_28 < 1) {
        local_44 = _pthread_mutex_lock(local_38);
      }
      else {
        local_44 = _pthread_mutex_trylock(local_38);
      }
      if (local_44 != 0) {
        _pthread_mutex_unlock(local_30);
        local_30 = local_38;
        local_38 = ppVar1;
        local_28 = local_28 + -1;
      }
    } while (local_44 != 0 && _running != 0);
    if (local_44 == 0) {
      _printf("%s is eating\n");
      iVar2 = _rand();
      _sleep(iVar2 % 8 + 1);
      _pthread_mutex_unlock(local_38);
      _pthread_mutex_unlock(local_30);
    }
  }
  return 0;
}



void _Ponder(void)

{
  int iVar1;
  long lVar2;
  int local_264;
  long alStack_258 [3];
  pthread_t p_Stack_240;
  int aiStack_238 [42];
  pthread_mutex_t apStack_190 [5];
  long alStack_50 [5];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(alStack_50,&PTR_s_Kant_100004068,0x28);
  local_264 = 0;
  while( true ) {
    if (4 < local_264) {
      for (local_264 = 0; local_264 < 5; local_264 = local_264 + 1) {
        lVar2 = (long)local_264;
        alStack_258[lVar2 * 5 + 2] = alStack_50[local_264];
        alStack_258[lVar2 * 5] = (long)(apStack_190 + local_264);
        alStack_258[lVar2 * 5 + 1] = (long)(apStack_190 + (local_264 + 1) % 5);
        iVar1 = _pthread_create(&p_Stack_240 + lVar2 * 5,(pthread_attr_t *)0x0,
                                (void **)_PhilPhunction,alStack_258 + lVar2 * 5);
        aiStack_238[lVar2 * 10] = iVar1;
      }
      _sleep(0x28);
      _running = 0;
      iVar1 = _printf("cleanup time\n");
      local_264 = 0;
      do {
        if (4 < local_264) {
          if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
            return;
          }
                    // WARNING: Subroutine does not return
          ___stack_chk_fail(iVar1);
        }
        if (aiStack_238[(long)local_264 * 10] == 0) {
          iVar1 = _pthread_join((&p_Stack_240)[(long)local_264 * 5],(void **)0x0);
          if (iVar1 != 0) {
            _printf("error joining thread for %s");
                    // WARNING: Subroutine does not return
            _exit(1);
          }
        }
        local_264 = local_264 + 1;
      } while( true );
    }
    iVar1 = _pthread_mutex_init(apStack_190 + local_264,(pthread_mutexattr_t *)0x0);
    if (iVar1 != 0) break;
    local_264 = local_264 + 1;
  }
  _printf("Failed to initialize mutexes.");
                    // WARNING: Subroutine does not return
  _exit(1);
}



undefined4 entry(void)

{
  _Ponder();
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_create(pthread_t *param_1,pthread_attr_t *param_2,void **param_3,void *param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_create_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_join(pthread_t param_1,void **param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_join_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_init(pthread_mutex_t *param_1,pthread_mutexattr_t *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_init_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_lock_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_trylock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_trylock_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_unlock_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004058)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_100004060)(param_1);
  return uVar1;
}


