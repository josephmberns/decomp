#include "kolakoski-sequence.h"



undefined4 _next_in_cycle(long param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_3 / param_2;
  }
  return *(undefined4 *)(param_1 + (long)(param_3 - iVar1 * param_2) * 4);
}



void _kolakoski(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = 0;
  local_34 = 0;
  while( true ) {
    uVar2 = _next_in_cycle(param_1,param_3,local_34);
    *(undefined4 *)(param_2 + (long)local_2c * 4) = uVar2;
    if (1 < *(int *)(param_2 + (long)local_34 * 4)) {
      for (local_30 = 1; local_30 < *(int *)(param_2 + (long)local_34 * 4); local_30 = local_30 + 1)
      {
        iVar1 = local_2c + 1;
        if (iVar1 == param_4) {
          return;
        }
        *(undefined4 *)(param_2 + (long)iVar1 * 4) = *(undefined4 *)(param_2 + (long)local_2c * 4);
        local_2c = iVar1;
      }
    }
    local_2c = local_2c + 1;
    if (local_2c == param_4) break;
    local_34 = local_34 + 1;
  }
  return;
}



undefined4 _possible_kolakoski(int *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 local_3c;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_24 = 0;
  local_28 = *param_1;
  local_2c = 1;
  pvVar1 = _calloc((long)param_2,4);
  local_3c = 1;
  for (local_20 = 1; local_20 < param_2; local_20 = local_20 + 1) {
    if (param_1[local_20] == local_28) {
      local_2c = local_2c + 1;
    }
    else {
      lVar2 = (long)local_24;
      local_24 = local_24 + 1;
      *(int *)((long)pvVar1 + lVar2 * 4) = local_2c;
      local_2c = 1;
      local_28 = param_1[local_20];
    }
  }
  local_20 = 0;
  do {
    if (local_24 <= local_20) {
LAB_100003be0:
      _free(pvVar1);
      return local_3c;
    }
    if (*(int *)((long)pvVar1 + (long)local_20 * 4) != param_1[local_20]) {
      local_3c = 0;
      goto LAB_100003be0;
    }
    local_20 = local_20 + 1;
  } while( true );
}



int _print_array(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_20;
  
  _printf("[");
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    _printf("%d");
    if (local_20 < param_2 + -1) {
      _printf(", ");
    }
  }
  iVar1 = _printf("]");
  return iVar1;
}



undefined8 entry(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int local_98;
  int local_90 [8];
  undefined8 *local_70 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_20 = 0x200000001;
  local_28 = 0x100000002;
  uStack_38 = 0x200000001;
  local_40 = 0x300000001;
  uStack_48 = 0x100000002;
  local_50 = 0x300000001;
  local_70[0] = &local_20;
  local_70[1] = &local_28;
  local_70[2] = &local_40;
  local_70[3] = &local_50;
  local_90[6] = 4;
  local_90[7] = 4;
  local_90[4] = 2;
  local_90[5] = 2;
  local_90[2] = 0x1e;
  local_90[3] = 0x1e;
  local_90[0] = 0x14;
  local_90[1] = 0x14;
  for (local_98 = 0; local_98 < 4; local_98 = local_98 + 1) {
    iVar1 = local_90[(long)local_98 + 4];
    iVar2 = local_90[local_98];
    pvVar3 = _calloc((long)iVar2,4);
    _kolakoski(local_70[local_98],pvVar3,iVar1,iVar2);
    _printf("First %d members of the sequence generated by ");
    _print_array(local_70[local_98],iVar1);
    _printf(":\n");
    _print_array(pvVar3,iVar2);
    _printf("\n");
    _possible_kolakoski(pvVar3,iVar2);
    _printf("Possible Kolakoski sequence? %s\n\n");
    _free(pvVar3);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}

