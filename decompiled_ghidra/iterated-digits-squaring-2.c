#include "iterated-digits-squaring-2.h"



int _factorial(int param_1)

{
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 1;
  }
  else {
    local_18 = _factorial(param_1 + -1);
    local_18 = param_1 * local_18;
  }
  return local_18;
}



int _sum_square_digits(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  for (local_c = param_1; 0 < local_c; local_c = (local_c - iVar1) / 10) {
    iVar1 = local_c % 10;
    local_10 = local_10 + iVar1 * iVar1;
  }
  return local_10;
}



long _choose_sum_and_count_89
               (long param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_84;
  int local_7c;
  long local_78;
  int local_6c;
  long local_48;
  int aiStack_40 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_78 = 0;
  for (local_6c = 0; local_6c < 10; local_6c = local_6c + 1) {
    aiStack_40[local_6c] = 0;
  }
  local_6c = param_4;
  if (param_2 == param_3) {
    if (param_1 == 0) {
      local_48 = 1;
    }
    else {
      local_7c = 0;
      for (local_6c = 0; local_6c < param_3; local_6c = local_6c + 1) {
        iVar1 = *(int *)((long)&_digits + (long)*(int *)(param_1 + (long)local_6c * 4) * 4);
        aiStack_40[iVar1] = aiStack_40[iVar1] + 1;
        local_7c = local_7c + iVar1 * iVar1;
      }
      if (local_7c == 0) {
        local_48 = 1;
      }
      else {
        if ((local_7c != 1) && (local_7c != 0x59)) {
          for (; local_7c != 1 && local_7c != 0x59; local_7c = _sum_square_digits(local_7c)) {
          }
        }
        if (local_7c == 0x59) {
          local_84 = _factorial(param_3);
          for (local_6c = 0; local_6c < 10; local_6c = local_6c + 1) {
            iVar2 = _factorial(aiStack_40[local_6c]);
            iVar1 = 0;
            if (iVar2 != 0) {
              iVar1 = local_84 / iVar2;
            }
            local_84 = iVar1;
          }
          *param_6 = *param_6 + local_84;
        }
        local_48 = 1;
      }
    }
  }
  else {
    for (; local_6c < param_5; local_6c = local_6c + 1) {
      if (param_1 != 0) {
        *(int *)(param_1 + (long)param_2 * 4) = local_6c;
      }
      lVar3 = _choose_sum_and_count_89(param_1,param_2 + 1,param_3,local_6c,param_5,param_6);
      local_78 = local_78 + lVar3;
    }
    local_48 = local_78;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_48;
}



undefined8 entry(void)

{
  int iVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_44 = 0;
  local_48 = 0;
  _choose_sum_and_count_89(auStack_40,0,8,0,10,&local_48);
  iVar1 = _printf("%d\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
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


