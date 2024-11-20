#include "bin-given-limits.h"



long _upper_bound(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  long local_20;
  ulong local_10;
  
  local_20 = 0;
  uVar1 = param_2;
  while (local_10 = uVar1, local_10 != 0) {
    uVar1 = local_10 / 2;
    if (*(int *)(param_1 + (local_20 + uVar1) * 4) <= param_3) {
      local_20 = local_20 + uVar1 + 1;
      uVar1 = local_10 - (uVar1 + 1);
    }
  }
  return local_20;
}



void * _bins(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  int *piVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 local_18;
  
  local_18 = _calloc(param_2 + 1,4);
  if (local_18 == (void *)0x0) {
    local_18 = (void *)0x0;
  }
  else {
    for (local_48 = 0; local_48 < param_4; local_48 = local_48 + 1) {
      lVar2 = _upper_bound(param_1,param_2,*(undefined4 *)(param_3 + local_48 * 4));
      piVar1 = (int *)((long)local_18 + lVar2 * 4);
      *piVar1 = *piVar1 + 1;
    }
  }
  return local_18;
}



ulong _print_bins(ulong param_1,ulong param_2)

{
  uint uVar1;
  ulong local_30;
  
  if (param_2 != 0) {
    _printf("           < %3d: %2d\n");
    for (local_30 = 1; local_30 < param_2; local_30 = local_30 + 1) {
      _printf(">= %3d and < %3d: %2d\n");
    }
    uVar1 = _printf(">= %3d          : %2d\n");
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



undefined4 entry(void)

{
  void *pvVar1;
  undefined4 local_454;
  undefined auStack_450 [800];
  undefined auStack_130 [40];
  undefined auStack_108 [200];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_38 = 0x350000002b;
  local_40 = 0x2500000017;
  local_30 = 0x5300000043;
  _memcpy(auStack_108,&DAT_100003b88,200);
  _printf("Example 1:\n");
  pvVar1 = (void *)_bins(&local_40,6,auStack_108,0x32);
  if (pvVar1 == (void *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_100004010,"Out of memory\n");
    local_454 = 1;
  }
  else {
    _print_bins(&local_40,6,pvVar1);
    _free(pvVar1);
    _memcpy(auStack_130,&DAT_100003c50,0x28);
    _memcpy(auStack_450,&DAT_100003c78,800);
    _printf("\nExample 2:\n");
    pvVar1 = (void *)_bins(auStack_130,10,auStack_450,200);
    if (pvVar1 == (void *)0x0) {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"Out of memory\n");
      local_454 = 1;
    }
    else {
      _print_bins(auStack_130,10,pvVar1);
      _free(pvVar1);
      local_454 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_454;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ac0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003acc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ad8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ae4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003af0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003afc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}


