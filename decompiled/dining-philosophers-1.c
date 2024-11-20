#include "dining-philosophers-1.h"



int _print(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100008050);
  _printf("\x1b[%d;%dH");
  _vprintf(param_3,&stack0x00000000);
  _printf("\x1b[%d;%dH");
  _fflush(*(FILE **)PTR____stdoutp_100004018);
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100008050);
  return iVar1;
}



void _eat(uint param_1)

{
  int iVar1;
  uint uVar2;
  int local_2c;
  uint local_20 [2];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_20[0] = param_1;
  local_20[1] = param_1;
  local_20[(int)(param_1 & 1)] = (int)(param_1 + 1) % 5;
  _print(param_1,0xc,"\x1b[K");
  _print(param_1,0xc,"..oO (forks, need forks)");
  for (local_2c = 0; local_2c < 2; local_2c = local_2c + 1) {
    _pthread_mutex_lock((pthread_mutex_t *)(&_forks + (long)(int)local_20[local_2c] * 0x40));
    if (local_2c == 0) {
      _print(param_1,0xc,"\x1b[K");
    }
    _print(param_1,(local_20[local_2c] != param_1) * '\x06' + '\f',"fork%d");
    _sleep(1);
  }
  local_2c = 0;
  uVar2 = _rand();
  iVar1 = (int)uVar2 % 8;
  for (; local_2c < iVar1 + 3; local_2c = local_2c + 1) {
    _print(param_1,local_2c * 4 + 0x18,"nom");
    uVar2 = _sleep(1);
  }
  for (local_2c = 0; local_2c < 2; local_2c = local_2c + 1) {
    uVar2 = _pthread_mutex_unlock
                      ((pthread_mutex_t *)(&_forks + (long)(int)local_20[local_2c] * 0x40));
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar2);
}



void _think(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_60;
  char acStack_58 [64];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  _memset(acStack_58,0,0x40);
  do {
    _print(param_1,0xc,"\x1b[K");
    iVar1 = _rand();
    ___sprintf_chk(acStack_58,0,0x40,"..oO (%s)");
    for (local_60 = 0; acStack_58[local_60] != '\0'; local_60 = local_60 + 1) {
      _print(param_1,local_60 + 0xc,"%c");
      if (local_60 < 5) {
        _usleep(200000);
      }
    }
    iVar2 = _rand();
    iVar2 = _usleep(iVar2 % 1000000 + 500000);
  } while (iVar1 % 5 != 0);
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar2);
}



void _philosophize(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  _print(uVar1,1,"%10s");
  do {
    _think(uVar1);
    _eat(uVar1);
  } while( true );
}



int entry(void)

{
  int iVar1;
  int local_60;
  pthread_t local_58 [5];
  int aiStack_2c [5];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  for (local_60 = 0; local_60 < 5; local_60 = local_60 + 1) {
    aiStack_2c[local_60] = local_60;
    _pthread_mutex_init((pthread_mutex_t *)(&_forks + (long)local_60 * 0x40),
                        (pthread_mutexattr_t *)0x0);
  }
  for (local_60 = 0; local_60 < 5; local_60 = local_60 + 1) {
    _pthread_create(local_58 + local_60,(pthread_attr_t *)0x0,(void **)_philosophize,
                    aiStack_2c + local_60);
  }
  iVar1 = _pthread_join(local_58[0],(void **)0x0);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return iVar1;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004028)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_create(pthread_t *param_1,pthread_attr_t *param_2,void **param_3,void *param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_create_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_join(pthread_t param_1,void **param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_join_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_init(pthread_mutex_t *param_1,pthread_mutexattr_t *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_init_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_lock_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_unlock_100004058)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004060)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_100004068)(param_1);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__usleep_100004070)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _vprintf(char *param_1,va_list param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__vprintf_100004078)((int)param_1);
  return iVar1;
}


