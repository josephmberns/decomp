#include "percolation-bond-percolation.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _make_grid(double param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_28;
  int local_24;
  
  iVar4 = (int)(param_1 * 2147483647.0);
  __m = param_2;
  __n = param_3;
  __start = _realloc(__start,(long)(param_2 * (param_3 + 2)) << 2);
  __cells = (uint *)((long)__start + (long)__m * 4);
  for (local_24 = 0; local_24 < __m; local_24 = local_24 + 1) {
    *(undefined4 *)((long)__start + (long)local_24 * 4) = 6;
  }
  __end = __cells;
  for (local_24 = 0; local_28 = param_2, local_24 < param_3; local_24 = local_24 + 1) {
    while (local_28 = local_28 + -1, local_28 != 0) {
      iVar3 = _rand();
      uVar5 = 4;
      if (iVar4 <= iVar3) {
        uVar5 = 0;
      }
      iVar3 = _rand();
      uVar1 = 2;
      if (iVar4 <= iVar3) {
        uVar1 = 0;
      }
      puVar2 = __end + 1;
      *__end = uVar5 | uVar1;
      __end = puVar2;
    }
    iVar3 = _rand();
    uVar5 = 4;
    if (iVar4 <= iVar3) {
      uVar5 = 0;
    }
    puVar2 = __end + 1;
    *__end = uVar5 | 2;
    __end = puVar2;
  }
  ___memset_chk(__end,0,(long)__m * 4,0xffffffffffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _show_grid(void)

{
  char *pcVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  for (local_18 = 0; local_18 < __m; local_18 = local_18 + 1) {
    _printf("+--");
  }
  iVar2 = _puts("+");
  local_14 = 0;
  while( true ) {
    if (__n < local_14) {
      return iVar2;
    }
    iVar2 = 0x20;
    if (local_14 != __n) {
      iVar2 = 0x7c;
    }
    _putchar(iVar2);
    for (local_18 = 0; local_18 < __m; local_18 = local_18 + 1) {
      pcVar1 = "[]";
      if ((*(uint *)(__cells + (long)(local_14 * __m + local_18) * 4) & 1) == 0) {
        pcVar1 = "  ";
      }
      _printf(pcVar1);
      iVar2 = 0x7c;
      if ((*(uint *)(__cells + (long)(local_14 * __m + local_18) * 4) & 2) == 0) {
        iVar2 = 0x20;
      }
      _putchar(iVar2);
    }
    iVar2 = _putchar(10);
    if (local_14 == __n) break;
    for (local_18 = 0; local_18 < __m; local_18 = local_18 + 1) {
      pcVar1 = "+--";
      if ((*(uint *)(__cells + (long)(local_14 * __m + local_18) * 4) & 4) == 0) {
        pcVar1 = "+  ";
      }
      _printf(pcVar1);
    }
    iVar2 = _puts("+");
    local_14 = local_14 + 1;
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _fill(uint *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((*param_1 & 1) == 0) {
    *param_1 = *param_1 | 1;
    if (param_1 < __end) {
      if (((*param_1 & 4) == 0) && (iVar2 = _fill(param_1 + __m), iVar2 != 0)) {
        return true;
      }
      if (((*param_1 & 2) == 0) && (iVar2 = _fill(param_1 + 1), iVar2 != 0)) {
        return true;
      }
      if (((param_1[-1] & 2) == 0) && (iVar2 = _fill(param_1 + -1), iVar2 != 0)) {
        return true;
      }
      bVar1 = false;
      if ((param_1[-__m] & 4) == 0) {
        iVar2 = _fill(param_1 + -(long)__m);
        bVar1 = iVar2 != 0;
      }
    }
    else {
      bVar1 = true;
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
      iVar2 = _fill(__cells + (long)local_14 * 4);
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
  int local_20;
  int local_1c;
  
  _make_grid(0x3fe0000000000000,10);
  _percolate();
  _show_grid();
  _puts("\nrunning 10x10 grids 10000 times for each p:");
  for (local_20 = 1; local_20 < 10; local_20 = local_20 + 1) {
    for (local_1c = 0; local_1c < 10000; local_1c = local_1c + 1) {
      _make_grid((double)(long)local_20 / 10.0,10);
      _percolate();
    }
    _printf("p = %3g: %.4f\n");
  }
  _free(__start);
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004030)();
  return pvVar1;
}


