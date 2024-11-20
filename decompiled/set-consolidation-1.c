#include "set-consolidation-1.h"



int _consolidate(long param_1,int param_2)

{
  uint *puVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_2;
  for (local_10 = param_2 + -2; local_14 = local_c, -1 < local_10; local_10 = local_10 + -1) {
    while (local_14 = local_14 + -1, local_10 < local_14) {
      if ((*(uint *)(param_1 + (long)local_10 * 4) & *(uint *)(param_1 + (long)local_14 * 4)) != 0)
      {
        puVar1 = (uint *)(param_1 + (long)local_10 * 4);
        *puVar1 = *puVar1 | *(uint *)(param_1 + (long)local_14 * 4);
        local_c = local_c + -1;
        *(undefined4 *)(param_1 + (long)local_14 * 4) = *(undefined4 *)(param_1 + (long)local_c * 4)
        ;
      }
    }
  }
  return local_c;
}



ulong _show_sets(ulong param_1,int param_2)

{
  uint uVar1;
  uint local_20;
  int local_1c;
  ulong uVar2;
  
  uVar2 = param_1;
  local_1c = param_2;
  while (local_1c != 0) {
    for (local_20 = 0x41; local_20 < 0x5b; local_20 = local_20 + 1) {
      if ((*(uint *)(param_1 + (long)(local_1c + -1) * 4) & 1 << (ulong)(local_20 - 0x41 & 0x1f)) !=
          0) {
        _printf("%c ");
      }
    }
    uVar1 = _putchar(10);
    uVar2 = (ulong)uVar1;
    local_1c = local_1c + -1;
  }
  return uVar2;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_28 = 0xe00000000a;
  local_30 = 0xc00000003;
  local_20 = 0x580;
  _puts("Before:");
  _show_sets(&local_30,5);
  _puts("\nAfter:");
  uVar1 = _consolidate(&local_30,5);
  _show_sets(&local_30,uVar1);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004020)((int)param_1);
  return iVar1;
}


