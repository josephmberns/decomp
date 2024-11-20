#include "sort-disjoint-sublist.h"



void _bubble_sort(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  
  for (local_1c = 0; local_20 = local_1c, local_1c < param_2; local_1c = local_1c + 1) {
    while (local_20 = local_20 + 1, local_20 < param_2) {
      if (*(int *)(param_1 + (long)local_20 * 4) < *(int *)(param_1 + (long)local_1c * 4)) {
        uVar1 = *(undefined4 *)(param_1 + (long)local_20 * 4);
        *(undefined4 *)(param_1 + (long)local_20 * 4) =
             *(undefined4 *)(param_1 + (long)local_1c * 4);
        *(undefined4 *)(param_1 + (long)local_1c * 4) = uVar1;
      }
    }
  }
  for (local_1c = 0; local_20 = local_1c, local_1c < param_2; local_1c = local_1c + 1) {
    while (local_20 = local_20 + 1, local_20 < param_2) {
      if (*(int *)(param_3 + (long)*(int *)(param_1 + (long)local_20 * 4) * 4) <
          *(int *)(param_3 + (long)*(int *)(param_1 + (long)local_1c * 4) * 4)) {
        uVar1 = *(undefined4 *)(param_3 + (long)*(int *)(param_1 + (long)local_20 * 4) * 4);
        *(undefined4 *)(param_3 + (long)*(int *)(param_1 + (long)local_20 * 4) * 4) =
             *(undefined4 *)(param_3 + (long)*(int *)(param_1 + (long)local_1c * 4) * 4);
        *(undefined4 *)(param_3 + (long)*(int *)(param_1 + (long)local_1c * 4) * 4) = uVar1;
      }
    }
  }
  return;
}



undefined8 entry(void)

{
  int iVar1;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_38 = 0x400000005;
  local_40 = 0x600000007;
  uStack_28 = 1;
  local_30 = 0x200000003;
  local_50 = 0x100000006;
  local_48 = 7;
  _printf("before sort:\n");
  for (local_58 = 0; local_58 < 8; local_58 = local_58 + 1) {
    _printf("%d ");
  }
  _printf("\n\nafter sort:\n");
  _bubble_sort(&local_50,3,&local_40);
  for (local_58 = 0; local_58 < 8; local_58 = local_58 + 1) {
    _printf("%d ");
  }
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


