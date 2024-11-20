#include "vogels-approximation-method-1.h"



void _diff(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  
  local_24 = 0x7fffffff;
  local_28 = 0x7fffffff;
  local_2c = -1;
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    if (param_3 == 0) {
      iVar1 = *(int *)(&_row_done + (long)local_1c * 4);
    }
    else {
      iVar1 = *(int *)(&_col_done + (long)local_1c * 4);
    }
    if (iVar1 == 0) {
      if (param_3 == 0) {
        local_30 = *(int *)(&_costs + (long)param_1 * 4 + (long)local_1c * 0x14);
      }
      else {
        local_30 = *(int *)(&_costs + (long)local_1c * 4 + (long)param_1 * 0x14);
      }
      if (local_30 < local_24) {
        local_28 = local_24;
        local_24 = local_30;
        local_2c = local_1c;
      }
      else if (local_30 < local_28) {
        local_28 = local_30;
      }
    }
  }
  *param_4 = local_28 - local_24;
  param_4[1] = local_24;
  param_4[2] = local_2c;
  return;
}



void _max_penalty(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_24;
  int local_20;
  int local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_40 = -1;
  local_44 = -1;
  local_48 = -1;
  local_4c = -0x80000000;
  for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
    if (param_3 == 0) {
      iVar1 = *(int *)(&_col_done + (long)local_3c * 4);
    }
    else {
      iVar1 = *(int *)(&_row_done + (long)local_3c * 4);
    }
    if ((iVar1 == 0) && (_diff(local_3c,param_2,param_3,&local_24), local_4c < local_24)) {
      local_4c = local_24;
      local_44 = local_3c;
      local_48 = local_20;
      local_40 = local_1c;
    }
  }
  if (param_3 == 0) {
    *param_4 = local_40;
    param_4[1] = local_44;
  }
  else {
    *param_4 = local_44;
    param_4[1] = local_40;
  }
  param_4[2] = local_48;
  param_4[3] = local_4c;
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



void _next_cell(long param_1)

{
  int local_44;
  int aiStack_38 [4];
  int aiStack_28 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _max_penalty(4,5,1,aiStack_28);
  _max_penalty(5,4,0,aiStack_38);
  if (aiStack_28[3] == aiStack_38[3]) {
    if (aiStack_28[2] < aiStack_38[2]) {
      for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
        *(int *)(param_1 + (long)local_44 * 4) = aiStack_28[local_44];
      }
    }
    else {
      for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
        *(int *)(param_1 + (long)local_44 * 4) = aiStack_38[local_44];
      }
    }
  }
  else if (aiStack_38[3] < aiStack_28[3]) {
    for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
      *(int *)(param_1 + (long)local_44 * 4) = aiStack_38[local_44];
    }
  }
  else {
    for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
      *(int *)(param_1 + (long)local_44 * 4) = aiStack_28[local_44];
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(void)

{
  int iVar1;
  int local_9c;
  int local_94;
  int local_84;
  int local_80;
  int aiStack_78 [20];
  int local_28;
  int local_24;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_94 = 0;
  _memset(aiStack_78,0,0x50);
  for (local_80 = 0; local_80 < 4; local_80 = local_80 + 1) {
    local_94 = local_94 + *(int *)(&_supply + (long)local_80 * 4);
  }
  for (; 0 < local_94; local_94 = local_94 - local_9c) {
    _next_cell(&local_28);
    if (*(int *)(&_supply + (long)local_28 * 4) < *(int *)(&_demand + (long)local_24 * 4)) {
      local_9c = *(int *)(&_supply + (long)local_28 * 4);
    }
    else {
      local_9c = *(int *)(&_demand + (long)local_24 * 4);
    }
    *(int *)(&_demand + (long)local_24 * 4) = *(int *)(&_demand + (long)local_24 * 4) - local_9c;
    if (*(int *)(&_demand + (long)local_24 * 4) == 0) {
      *(undefined4 *)(&_col_done + (long)local_24 * 4) = 1;
    }
    *(int *)(&_supply + (long)local_28 * 4) = *(int *)(&_supply + (long)local_28 * 4) - local_9c;
    if (*(int *)(&_supply + (long)local_28 * 4) == 0) {
      *(undefined4 *)(&_row_done + (long)local_28 * 4) = 1;
    }
    aiStack_78[(long)local_28 * 5 + (long)local_24] = local_9c;
  }
  _printf("    A   B   C   D   E\n");
  for (local_80 = 0; local_80 < 4; local_80 = local_80 + 1) {
    _printf("%c");
    for (local_84 = 0; local_84 < 5; local_84 = local_84 + 1) {
      _printf("  %2d");
    }
    _printf("\n");
  }
  iVar1 = _printf("\nTotal cost = %d\n");
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004010)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


