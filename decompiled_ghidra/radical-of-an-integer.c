#include "radical-of-an-integer.h"



int _radical(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  local_14 = 1;
  local_18 = 0;
  local_4 = param_1;
  if ((param_1 & 1) == 0) {
    for (; (local_4 & 1) == 0; local_4 = (int)local_4 >> 1) {
    }
    local_14 = 2;
    local_18 = 1;
  }
  for (local_1c = 3; local_1c <= (int)local_4; local_1c = local_1c + 2) {
    iVar1 = 0;
    if (local_1c != 0) {
      iVar1 = (int)local_4 / local_1c;
    }
    if (local_4 == iVar1 * local_1c) {
      local_14 = local_14 * local_1c;
      local_18 = local_18 + 1;
      uVar2 = local_4;
      while( true ) {
        local_4 = uVar2;
        iVar1 = 0;
        if (local_1c != 0) {
          iVar1 = (int)local_4 / local_1c;
        }
        if (local_4 != iVar1 * local_1c) break;
        uVar2 = 0;
        if (local_1c != 0) {
          uVar2 = (int)local_4 / local_1c;
        }
      }
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_18;
  }
  return local_14;
}



int _show_first_50(void)

{
  int iVar1;
  int local_14;
  
  iVar1 = _printf("Radicals of 1..50:\n");
  for (local_14 = 1; local_14 < 0x33; local_14 = local_14 + 1) {
    _radical(local_14,0);
    iVar1 = _printf("%5d");
    if (local_14 % 5 == 0) {
      iVar1 = _printf("\n");
    }
  }
  return iVar1;
}



int _show_rad(undefined4 param_1)

{
  int iVar1;
  
  _radical(param_1,0);
  iVar1 = _printf("The radical of %d is %d.\n");
  return iVar1;
}



void _find_distribution(void)

{
  int iVar1;
  int local_48;
  int local_44;
  int local_40 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  for (local_44 = 1; local_44 < 0xf4241; local_44 = local_44 + 1) {
    _printf("%d\r");
    _radical(local_44,&local_48);
    local_40[local_48] = local_40[local_48] + 1;
  }
  iVar1 = _printf("Distribution of radicals:\n");
  for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
    iVar1 = _printf("%d: %d\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined4 entry(void)

{
  int iVar1;
  
  _show_first_50();
  _printf("\n");
  _show_rad(99999);
  _show_rad(499999);
  _show_rad(999999);
  iVar1 = _printf("\n");
  _find_distribution(iVar1);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


