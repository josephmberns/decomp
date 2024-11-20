#include "hamming-numbers-1.h"



void _qpush(ulong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 local_28;
  undefined4 local_1c;
  
  if (_alloc <= _n) {
    if (_alloc == 0) {
      local_28 = 0x10;
    }
    else {
      local_28 = _alloc << 1;
    }
    _alloc = local_28;
    _q = _realloc(_q,local_28 * 8);
  }
  local_1c = (int)_n;
  _n = _n + 1;
  while( true ) {
    iVar2 = local_1c / 2;
    bVar1 = false;
    if (iVar2 != 0) {
      bVar1 = param_1 < *(ulong *)((long)_q + (long)iVar2 * 8);
    }
    if (!bVar1) break;
    *(undefined8 *)((long)_q + (long)local_1c * 8) = *(undefined8 *)((long)_q + (long)iVar2 * 8);
    local_1c = iVar2;
  }
  *(ulong *)((long)_q + (long)local_1c * 8) = param_1;
  return;
}



long _qpop(void)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  int local_8;
  int local_4;
  
  lVar2 = *(long *)(_q + 8);
  do {
    bVar1 = false;
    if (1 < _n) {
      bVar1 = lVar2 == *(long *)(_q + 8);
    }
    if (!bVar1) {
      return lVar2;
    }
    local_4 = 1;
    _n = _n - 1;
    uVar3 = *(ulong *)(_q + _n * 8);
    while (local_8 = local_4 * 2, (ulong)(long)local_8 < _n) {
      if (((ulong)(long)(local_8 + 1) < _n) &&
         (*(ulong *)(_q + (long)(local_8 + 1) * 8) < *(ulong *)(_q + (long)local_8 * 8))) {
        local_8 = local_8 + 1;
      }
      if (uVar3 <= *(ulong *)(_q + (long)local_8 * 8)) break;
      *(undefined8 *)(_q + (long)local_4 * 8) = *(undefined8 *)(_q + (long)local_8 * 8);
      local_4 = local_8;
    }
    *(ulong *)(_q + (long)local_4 * 8) = uVar3;
  } while( true );
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int local_18;
  
  local_18 = 1;
  uVar2 = _qpush(1);
  for (; local_18 < 0x69c; local_18 = local_18 + 1) {
    lVar3 = _qpop(uVar2);
    _qpush(lVar3 << 1);
    _qpush(lVar3 * 3);
    uVar2 = _qpush(lVar3 * 5);
    if ((local_18 < 0x15) || (local_18 == 0x69b)) {
      uVar1 = _printf("%6d: %llu\n");
      uVar2 = (ulong)uVar1;
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004008)();
  return pvVar1;
}


