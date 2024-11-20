#include "taxicab-numbers.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _add_cube(void)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_30;
  uint local_2c;
  
  uVar6 = __n_cubes;
  uVar2 = __n_cubes + 2;
  __n_cubes = __n_cubes + 1;
  __cube = _realloc(__cube,(ulong)uVar2 * 8);
  *(ulong *)((long)__cube + (ulong)__n_cubes * 8) =
       (ulong)__n_cubes * (ulong)__n_cubes * (ulong)__n_cubes;
  if (1 < uVar6) {
    __pq_len = __pq_len + 1;
    if (__pq_cap <= __pq_len) {
      __pq_cap = __pq_cap << 1;
      if (__pq_cap == 0) {
        __pq_cap = 2;
      }
      __pq = _realloc(__pq,(ulong)__pq_cap * 0x10);
    }
    uVar3 = *(long *)((long)__cube + (ulong)uVar6 * 8) + 1;
    local_2c = __pq_len;
    while( true ) {
      bVar1 = false;
      if (local_2c != 0) {
        local_30 = local_2c >> 1;
        bVar1 = uVar3 < *(ulong *)((long)__pq + (ulong)local_30 * 0x10 + 8);
      }
      if (!bVar1) break;
      puVar4 = (undefined8 *)((long)__pq + (ulong)local_30 * 0x10);
      uVar7 = *puVar4;
      puVar5 = (undefined8 *)((long)__pq + (ulong)local_2c * 0x10);
      puVar5[1] = puVar4[1];
      *puVar5 = uVar7;
      local_2c = local_30;
    }
    puVar4 = (undefined8 *)((long)__pq + (ulong)local_2c * 0x10);
    puVar4[1] = uVar3;
    *puVar4 = CONCAT44(1,uVar6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _next_sum(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint local_28;
  uint local_24;
  undefined8 local_20;
  ulong uStack_18;
  
  do {
    while( true ) {
      puVar2 = __pq;
      bVar4 = true;
      if (__pq_len != 0) {
        bVar4 = *(ulong *)(__cube + (ulong)__n_cubes * 8) <= (ulong)__pq[3];
      }
      if (!bVar4) break;
      _add_cube();
    }
    puVar1 = __pq + 2;
    __pq[1] = __pq[3];
    *puVar2 = *puVar1;
    local_20._4_4_ = (uint)((ulong)*puVar2 >> 0x20);
    uVar3 = local_20._4_4_;
    local_20._4_4_ = local_20._4_4_ + 1;
    local_20._0_4_ = (uint)*puVar2;
    if (local_20._4_4_ < (uint)local_20) {
      uStack_18 = puVar2[1] +
                  (*(long *)(__cube + (ulong)local_20._4_4_ * 8) -
                  *(long *)(__cube + (ulong)uVar3 * 8));
      break;
    }
    uVar5 = (ulong)__pq_len;
    __pq_len = __pq_len - 1;
    uStack_18 = (__pq + uVar5 * 2)[1];
    local_20 = __pq[uVar5 * 2];
  } while (__pq_len == 0);
  local_24 = 1;
  while (local_28 = local_24 * 2, local_28 <= __pq_len) {
    if ((local_28 < __pq_len) &&
       ((ulong)__pq[(ulong)(local_28 + 1) * 2 + 1] < (ulong)__pq[(ulong)local_28 * 2 + 1])) {
      local_28 = local_28 + 1;
    }
    if (uStack_18 <= (ulong)__pq[(ulong)local_28 * 2 + 1]) break;
    uVar6 = __pq[(ulong)local_28 * 2];
    puVar2 = __pq + (ulong)local_24 * 2;
    puVar2[1] = (__pq + (ulong)local_28 * 2)[1];
    *puVar2 = uVar6;
    local_24 = local_28;
  }
  puVar2 = __pq + (ulong)local_24 * 2;
  puVar2[1] = uStack_18;
  *puVar2 = local_20;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint _next_taxi(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint local_1c;
  
  do {
    _next_sum();
  } while (__pq[1] != __pq[3]);
  local_1c = 1;
  uVar2 = *__pq;
  param_1[1] = __pq[1];
  *param_1 = uVar2;
  do {
    uVar1 = (ulong)local_1c;
    local_1c = local_1c + 1;
    uVar2 = __pq[2];
    (param_1 + uVar1 * 2)[1] = __pq[3];
    param_1[uVar1 * 2] = uVar2;
    _next_sum();
  } while (__pq[1] == __pq[3]);
  return local_1c;
}



undefined8 entry(ulong param_1)

{
  uint uVar1;
  int local_c4;
  uint local_c0;
  undefined auStack_b8 [160];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_c0 = 1; local_c0 < 0x7d7; local_c0 = local_c0 + 1) {
    param_1 = _next_taxi(auStack_b8);
    if ((local_c0 < 0x1a) || (1999 < local_c0)) {
      _printf("%4u:%10llu");
      local_c4 = (int)param_1;
      while (local_c4 != 0) {
        _printf(" = %4u^3 + %4u^3");
        local_c4 = local_c4 + -1;
      }
      uVar1 = _putchar(10);
      param_1 = (ulong)uVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(param_1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004020)();
  return pvVar1;
}


