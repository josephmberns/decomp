#include "percolation-site-percolation-1.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _make_grid(double param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined uVar3;
  int local_28;
  int local_24;
  
  __m = param_2;
  __n = param_3;
  __end = (undefined *)_realloc(__start,(long)((param_2 + 1) * (param_3 + 1) + 1));
  __start = __end;
  ___memset_chk(__end,0,(long)(__m + 1),0xffffffffffffffff);
  __cell = (undefined *)((long)__start + (long)__m + 1);
  __end = __cell;
  for (local_24 = 0; local_24 < __n; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < __m; local_28 = local_28 + 1) {
      iVar2 = _rand();
      uVar3 = 0x2b;
      if ((int)(param_1 * 2147483647.0) <= iVar2) {
        uVar3 = 0x2e;
      }
      puVar1 = __end + 1;
      *__end = uVar3;
      __end = puVar1;
    }
    puVar1 = __end + 1;
    *__end = 10;
    __end = puVar1;
  }
  __end[-1] = 0;
  __m = __m + 1;
  __end = (undefined *)((long)__end - (long)__m);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _ff(char *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*param_1 == '+') {
    *param_1 = '#';
    bVar1 = true;
    if (param_1 < __end) {
      iVar2 = _ff(param_1 + __m);
      bVar1 = true;
      if (iVar2 == 0) {
        iVar2 = _ff(param_1 + 1);
        bVar1 = true;
        if (iVar2 == 0) {
          iVar2 = _ff(param_1 + -1);
          bVar1 = true;
          if (iVar2 == 0) {
            iVar2 = _ff((long)param_1 - (long)__m);
            bVar1 = iVar2 != 0;
          }
        }
      }
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _percolate(void)

{
  bool bVar1;
  int iVar2;
  undefined4 local_14;
  
  local_14 = 0;
  while( true ) {
    bVar1 = false;
    if (local_14 < __m) {
      iVar2 = _ff(__cell + local_14);
      bVar1 = iVar2 == 0;
    }
    if (!bVar1) break;
    local_14 = local_14 + 1;
  }
  return local_14 < __m;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  int local_28;
  int local_24;
  
  _make_grid(0x3fe0000000000000,0xf);
  _percolate();
  _puts("15x15 grid:");
  _puts(__cell);
  _puts("\nrunning 10,000 tests for each case:");
  for (local_24 = 0; local_24 < 0xb; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < 10000; local_28 = local_28 + 1) {
      _make_grid((double)(long)local_24 / 10.0,0xf);
      _percolate();
    }
    _printf("p=%.1f:  %.4f\n");
  }
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004020)();
  return pvVar1;
}


