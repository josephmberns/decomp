#include "chinese-remainder-theorem.h"



int _mul_inv(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = 0;
  local_20 = 1;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == 1) {
    local_4 = 1;
  }
  else {
    while (1 < local_8) {
      iVar1 = 0;
      if (local_c != 0) {
        iVar1 = local_8 / local_c;
      }
      iVar2 = 0;
      if (local_c != 0) {
        iVar2 = local_8 / local_c;
      }
      iVar2 = local_8 - iVar2 * local_c;
      iVar1 = local_20 - iVar1 * local_1c;
      local_20 = local_1c;
      local_8 = local_c;
      local_1c = iVar1;
      local_c = iVar2;
    }
    if (local_20 < 0) {
      local_20 = local_20 + param_2;
    }
    local_4 = local_20;
  }
  return local_4;
}



int _chinese_remainder(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = 1;
  local_34 = 0;
  for (local_2c = 0; local_2c < param_3; local_2c = local_2c + 1) {
    local_30 = local_30 * *(int *)(param_1 + (long)local_2c * 4);
  }
  for (local_2c = 0; local_2c < param_3; local_2c = local_2c + 1) {
    iVar1 = *(int *)(param_1 + (long)local_2c * 4);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = local_30 / iVar1;
    }
    iVar1 = *(int *)(param_2 + (long)local_2c * 4);
    iVar3 = _mul_inv(iVar2,*(undefined4 *)(param_1 + (long)local_2c * 4));
    local_34 = local_34 + iVar1 * iVar3 * iVar2;
  }
  iVar1 = 0;
  if (local_30 != 0) {
    iVar1 = local_34 / local_30;
  }
  return local_34 - iVar1 * local_30;
}



undefined8 entry(void)

{
  int iVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_28 = 0x500000003;
  local_20 = 7;
  local_38 = 0x300000002;
  local_30 = 2;
  _chinese_remainder(&local_28,&local_38,3);
  iVar1 = _printf("%d\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


