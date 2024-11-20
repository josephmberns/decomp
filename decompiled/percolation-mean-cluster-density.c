#include "percolation-mean-cluster-density.h"



void _make_map(double param_1)

{
  int iVar1;
  undefined4 local_1c;
  
  local_1c = _w * _w;
  _ww = local_1c;
  _map = _realloc(_map,(long)local_1c << 2);
  while (local_1c != 0) {
    iVar1 = _rand();
    *(uint *)((long)_map + (long)(local_1c + -1) * 4) =
         -(uint)(iVar1 < (int)(param_1 * 2147483647.0));
    local_1c = local_1c + -1;
  }
  return;
}



ulong _show_cluster(ulong param_1)

{
  uint uVar1;
  int local_18;
  int local_14;
  
  for (local_14 = 0; local_14 < _w; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < _w; local_18 = local_18 + 1) {
      _printf(" %c");
    }
    uVar1 = _putchar(10);
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



void _recur(int param_1,undefined4 param_2)

{
  if (((-1 < param_1) && (param_1 < _ww)) && (*(int *)(_map + (long)param_1 * 4) == -1)) {
    *(undefined4 *)(_map + (long)param_1 * 4) = param_2;
    _recur(param_1 - _w,param_2);
    _recur(param_1 + -1,param_2);
    _recur(param_1 + 1,param_2);
    _recur(param_1 + _w,param_2);
  }
  return;
}



int _count_clusters(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  for (local_14 = 0; local_14 < _ww; local_14 = local_14 + 1) {
    if (*(int *)(_map + (long)local_14 * 4) == -1) {
      local_18 = local_18 + 1;
      _recur(local_14);
    }
  }
  return local_18;
}



undefined  [16] _tests(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined auVar2 [16];
  undefined8 local_30;
  undefined4 local_24;
  
  local_30 = 0.0;
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    _make_map(param_1);
    iVar1 = _count_clusters();
    local_30 = local_30 + (double)iVar1 / (double)(long)_ww;
  }
  auVar2._0_8_ = local_30 / (double)(long)param_2;
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined8 entry(void)

{
  int iVar1;
  
  _w = 0xf;
  _make_map(0x3fe0000000000000);
  _count_clusters();
  iVar1 = _printf("width=15, p=0.5, %d clusters:\n");
  _show_cluster(iVar1);
  _printf("\np=0.5, iter=5:\n");
  for (_w = 4; _w < 0x4001; _w = _w << 2) {
    _tests(0x3fe0000000000000,5);
    _printf("%5d %9.6f\n");
  }
  _free(_map);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004020)();
  return pvVar1;
}


