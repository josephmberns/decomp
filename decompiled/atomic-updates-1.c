#include "atomic-updates-1.h"



ulong _transfer_value(ulong param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = (int)param_1;
  if (((((local_14 != param_2) && (-1 < param_3)) && (-1 < local_14)) &&
      ((-1 < param_2 && (local_14 < 0xf)))) && (param_2 < 0xf)) {
    bVar1 = param_2 < local_14;
    local_1c = param_3;
    local_18 = param_2;
    if (bVar1) {
      local_1c = -param_3;
      local_18 = local_14;
      local_14 = param_2;
    }
    _pthread_mutex_lock((pthread_mutex_t *)(&_bucket_mutex + (long)local_14 * 0x40));
    _pthread_mutex_lock((pthread_mutex_t *)(&_bucket_mutex + (long)local_18 * 0x40));
    if ((*(int *)(&_buckets + (long)local_14 * 4) < local_1c) && (!bVar1)) {
      local_1c = *(int *)(&_buckets + (long)local_14 * 4);
    }
    if ((*(int *)(&_buckets + (long)local_18 * 4) < -local_1c) && (bVar1)) {
      local_1c = -*(int *)(&_buckets + (long)local_18 * 4);
    }
    *(int *)(&_buckets + (long)local_14 * 4) = *(int *)(&_buckets + (long)local_14 * 4) - local_1c;
    *(int *)(&_buckets + (long)local_18 * 4) = *(int *)(&_buckets + (long)local_18 * 4) + local_1c;
    _pthread_mutex_unlock((pthread_mutex_t *)(&_bucket_mutex + (long)local_14 * 0x40));
    uVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(&_bucket_mutex + (long)local_18 * 0x40));
    param_1 = (ulong)uVar2;
  }
  return param_1;
}



int _print_buckets(void)

{
  int iVar1;
  int local_14;
  
  for (local_14 = 0; local_14 < 0xf; local_14 = local_14 + 1) {
    _pthread_mutex_lock((pthread_mutex_t *)(&_bucket_mutex + (long)local_14 * 0x40));
  }
  for (local_14 = 0; local_14 < 0xf; local_14 = local_14 + 1) {
    _printf("%3d ");
  }
  iVar1 = _printf("= %d\n");
  for (local_14 = 0; local_14 < 0xf; local_14 = local_14 + 1) {
    iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(&_bucket_mutex + (long)local_14 * 0x40));
  }
  return iVar1;
}



void _equalizer_start(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  do {
    while( true ) {
      iVar2 = _rand();
      iVar2 = iVar2 % 0xf;
      iVar3 = _rand();
      iVar3 = iVar3 % 0xf;
      iVar1 = *(int *)(&_buckets + (long)iVar2 * 4) - *(int *)(&_buckets + (long)iVar3 * 4);
      if (-1 < iVar1) break;
      _transfer_value(iVar3,iVar2,-iVar1 / 2);
    }
    _transfer_value(iVar2,iVar3,iVar1 / 2);
  } while( true );
}



void _randomizer_start(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  do {
    iVar3 = _rand();
    iVar4 = _rand();
    iVar5 = _rand();
    iVar1 = *(int *)(&_buckets + (long)(iVar3 % 0xf) * 4) + 1;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar5 / iVar1;
    }
    _transfer_value(iVar3 % 0xf,iVar4 % 0xf,iVar5 - iVar2 * iVar1);
  } while( true );
}



void entry(void)

{
  int iVar1;
  uint uVar2;
  int local_18;
  
  for (local_18 = 0; local_18 < 0xf; local_18 = local_18 + 1) {
    _pthread_mutex_init((pthread_mutex_t *)(&_bucket_mutex + (long)local_18 * 0x40),
                        (pthread_mutexattr_t *)0x0);
  }
  for (local_18 = 0; local_18 < 0xf; local_18 = local_18 + 1) {
    iVar1 = _rand();
    *(int *)(&_buckets + (long)local_18 * 4) = iVar1 % 100;
    _printf("%3d ");
  }
  _printf("= %d\n");
  _pthread_create((pthread_t *)&_equalizer,(pthread_attr_t *)0x0,(void **)_equalizer_start,
                  (void *)0x0);
  _pthread_create((pthread_t *)&_randomizer,(pthread_attr_t *)0x0,(void **)_randomizer_start,
                  (void *)0x0);
  do {
    uVar2 = _sleep(1);
    _print_buckets(uVar2);
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_create(pthread_t *param_1,pthread_attr_t *param_2,void **param_3,void *param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_create_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_init(pthread_mutex_t *param_1,pthread_mutexattr_t *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_init_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_lock_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_unlock_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_100004030)(param_1);
  return uVar1;
}


