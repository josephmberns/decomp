#include "range-consolidation.h"



void _normalize_range(double *param_1)

{
  double dVar1;
  
  if (param_1[1] < *param_1) {
    dVar1 = *param_1;
    *param_1 = param_1[1];
    param_1[1] = dVar1;
  }
  return;
}



undefined4 _range_compare(double *param_1,double *param_2)

{
  undefined4 local_4;
  
  if (*param_2 <= *param_1) {
    if (*param_1 <= *param_2) {
      if (param_2[1] <= param_1[1]) {
        if (param_1[1] <= param_2[1]) {
          local_4 = 0;
        }
        else {
          local_4 = 1;
        }
      }
      else {
        local_4 = 0xffffffff;
      }
    }
    else {
      local_4 = 1;
    }
  }
  else {
    local_4 = 0xffffffff;
  }
  return local_4;
}



void _normalize_ranges(void *param_1,ulong param_2)

{
  ulong local_28;
  
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    _normalize_range((void *)((long)param_1 + local_28 * 0x10));
  }
  _qsort(param_1,param_2,0x10,(int *)_range_compare);
  return;
}



long _consolidate_ranges(long param_1,ulong param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  _normalize_ranges(param_1,param_2);
  local_28 = 0;
  local_30 = 0;
  while (local_30 < param_2) {
    local_38 = local_30;
    while( true ) {
      local_38 = local_38 + 1;
      bVar1 = false;
      if (local_38 < param_2) {
        bVar1 = *(double *)(param_1 + local_38 * 0x10) <= *(double *)(param_1 + local_30 * 0x10 + 8)
        ;
      }
      if (!bVar1) break;
      if (*(double *)(param_1 + local_30 * 0x10 + 8) < *(double *)(param_1 + local_38 * 0x10 + 8)) {
        *(undefined8 *)(param_1 + local_30 * 0x10 + 8) =
             *(undefined8 *)(param_1 + local_38 * 0x10 + 8);
      }
    }
    puVar2 = (undefined8 *)(param_1 + local_30 * 0x10);
    uVar4 = *puVar2;
    puVar3 = (undefined8 *)(param_1 + local_28 * 0x10);
    puVar3[1] = puVar2[1];
    *puVar3 = uVar4;
    local_30 = local_38;
    local_28 = local_28 + 1;
  }
  return local_28;
}



int _print_range(void)

{
  int iVar1;
  
  iVar1 = _printf("[%g, %g]");
  return iVar1;
}



void _print_ranges(long param_1,ulong param_2)

{
  ulong local_28;
  
  if (param_2 != 0) {
    _print_range(param_1);
    for (local_28 = 1; local_28 < param_2; local_28 = local_28 + 1) {
      _printf(", ");
      _print_range(param_1 + local_28 * 0x10);
    }
  }
  return;
}



int _test_consolidate_ranges(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  _print_ranges(param_1,param_2);
  _printf(" -> ");
  uVar2 = _consolidate_ranges(param_1,param_2);
  _print_ranges(param_1,uVar2);
  iVar1 = _printf("\n");
  return iVar1;
}



undefined8 entry(void)

{
  undefined auStack_110 [80];
  undefined auStack_c0 [64];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_38 = 0x400199999999999a;
  local_40 = 0x3ff199999999999a;
  uStack_58 = 0x401ccccccccccccd;
  local_60 = 0x4018666666666666;
  uStack_48 = 0x402099999999999a;
  local_50 = 0x401ccccccccccccd;
  uStack_78 = 0x4008000000000000;
  local_80 = 0x4010000000000000;
  uStack_68 = 0x3ff0000000000000;
  local_70 = 0x4000000000000000;
  _memcpy(auStack_c0,&DAT_100003f00,0x40);
  _memcpy(auStack_110,&DAT_100003f40,0x50);
  _test_consolidate_ranges(&local_40,1);
  _test_consolidate_ranges(&local_60);
  _test_consolidate_ranges(&local_80,2);
  _test_consolidate_ranges(auStack_c0,4);
  _test_consolidate_ranges(auStack_110,5);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
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

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004020)();
  return;
}


