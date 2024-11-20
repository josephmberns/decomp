#include "knuths-algorithm-s.h"



void _s_of_n_init(uint *param_1,long param_2,uint param_3)

{
  void *pvVar1;
  
  param_1[1] = 0;
  *param_1 = param_3;
  *(long *)(param_1 + 2) = param_2;
  pvVar1 = _malloc((ulong)param_3 * param_2);
  *(void **)(param_1 + 4) = pvVar1;
  return;
}



void _sample_set_i(long param_1,uint param_2,undefined8 param_3)

{
  ___memcpy_chk(*(long *)(param_1 + 0x10) + (ulong)param_2 * *(long *)(param_1 + 8),param_3,
                *(undefined8 *)(param_1 + 8),0xffffffffffffffff);
  return;
}



undefined8 _s_of_n(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  param_1[1] = param_1[1] + 1;
  if (*param_1 < param_1[1]) {
    uVar3 = _rand();
    uVar1 = param_1[1];
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    if (uVar3 - uVar2 * uVar1 < *param_1) {
      uVar3 = _rand();
      uVar1 = *param_1;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar3 / uVar1;
      }
      _sample_set_i(param_1,uVar3 - uVar2 * uVar1,param_2);
    }
  }
  else {
    _sample_set_i(param_1,param_1[1] - 1,param_2);
  }
  return *(undefined8 *)(param_1 + 4);
}



undefined8 _test(undefined4 param_1,long param_2,uint param_3)

{
  undefined auStack_40 [16];
  undefined8 local_30;
  uint local_28;
  uint local_24;
  long local_20;
  undefined4 local_14;
  
  local_24 = param_3;
  local_20 = param_2;
  local_14 = param_1;
  _s_of_n_init(auStack_40,4,param_1);
  for (local_28 = 0; local_28 < local_24; local_28 = local_28 + 1) {
    _s_of_n(auStack_40,local_20 + (long)(int)local_28 * 4);
  }
  return local_30;
}



undefined8 entry(void)

{
  int *piVar1;
  time_t tVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint local_1c;
  uint local_18;
  
  tVar2 = _time((time_t *)0x0);
  _srand((uint)tVar2);
  pvVar3 = _malloc(0x28);
  pvVar4 = _malloc(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(uint *)((long)pvVar3 + (ulong)local_18 * 4) = local_18;
    *(undefined4 *)((long)pvVar4 + (ulong)local_18 * 4) = 0;
  }
  for (local_18 = 0; local_18 < 100000; local_18 = local_18 + 1) {
    pvVar5 = (void *)_test(3,pvVar3,10);
    for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
      piVar1 = (int *)((long)pvVar4 + (long)*(int *)((long)pvVar5 + (ulong)local_1c * 4) * 4);
      *piVar1 = *piVar1 + 1;
    }
    _free(pvVar5);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    _printf(" %d");
  }
  _puts("");
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004030)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004038)();
  return tVar1;
}


