#include "active-object.h"



void _update(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double local_48;
  timeval local_28;
  undefined8 *local_18;
  
  pcVar2 = (code *)*param_1;
  local_18 = param_1;
  iVar1 = _gettimeofday(&local_28,(void *)0x0);
  dVar3 = (double)(((local_28.tv_sec - local_18[1]) * 1000000 + (long)local_28.tv_usec) -
                  (long)*(int *)(local_18 + 2)) * 1e-06;
  if (pcVar2 == (code *)0x0) {
    local_48 = 0.0;
  }
  else {
    local_48 = (double)(*pcVar2)(dVar3,iVar1);
  }
  local_18[3] = (double)local_18[3] +
                (((double)local_18[4] + local_48) * (dVar3 - (double)local_18[5])) / 2.0;
  local_18[5] = dVar3;
  return;
}



void _tick(undefined8 param_1)

{
  do {
    _usleep(100000);
    _update(param_1);
  } while( true );
}



void _set_input(undefined8 *param_1,code *param_2)

{
  undefined8 local_28;
  
  _update(param_1);
  *param_1 = param_2;
  param_1[5] = 0;
  if (param_2 == (code *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = (*param_2)(0);
  }
  param_1[4] = local_28;
  return;
}



undefined8 * _new_integ(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x38);
  puVar1[4] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  _gettimeofday((timeval *)(puVar1 + 1),(void *)0x0);
  _set_input(puVar1,param_1);
  _pthread_create((pthread_t *)(puVar1 + 6),(pthread_attr_t *)0x0,(void **)_tick,puVar1);
  return puVar1;
}



void _sine(double param_1)

{
  double dVar1;
  
  dVar1 = (double)_atan2(0x3ff0000000000000);
  _sin(dVar1 * 4.0 * param_1);
  return;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  
  uVar1 = _new_integ(_sine);
  _sleep(2);
  _set_input(uVar1,0);
  _usleep(500000);
  _printf("%g\n");
  return 0;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan2_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _gettimeofday(timeval *param_1,void *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__gettimeofday_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_create(pthread_t *param_1,pthread_attr_t *param_2,void **param_3,void *param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_create_100004020)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_100004030)(param_1);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__usleep_100004038)(param_1);
  return iVar1;
}


