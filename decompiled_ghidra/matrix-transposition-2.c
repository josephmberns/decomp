#include "matrix-transposition-2.h"



void _transpose(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  int local_1c;
  int local_18;
  int local_14;
  
  for (local_14 = 0; local_14 <= param_2 * param_3 + -1; local_14 = local_14 + 1) {
    local_18 = local_14;
    local_1c = 0;
    do {
      local_1c = local_1c + 1;
      iVar1 = 0;
      if (param_3 != 0) {
        iVar1 = local_18 / param_3;
      }
      iVar2 = 0;
      if (param_3 != 0) {
        iVar2 = local_18 / param_3;
      }
      local_18 = (local_18 - iVar1 * param_3) * param_2 + iVar2;
    } while (local_14 < local_18);
    if ((local_14 <= local_18) && (local_1c != 1)) {
      local_18 = local_14;
      uVar3 = *(undefined8 *)(param_1 + (long)local_14 * 8);
      do {
        iVar1 = 0;
        if (param_3 != 0) {
          iVar1 = local_18 / param_3;
        }
        iVar2 = 0;
        if (param_3 != 0) {
          iVar2 = local_18 / param_3;
        }
        iVar2 = (local_18 - iVar1 * param_3) * param_2 + iVar2;
        local_30 = uVar3;
        if (iVar2 != local_14) {
          local_30 = *(undefined8 *)(param_1 + (long)iVar2 * 8);
        }
        *(undefined8 *)(param_1 + (long)local_18 * 8) = local_30;
        local_18 = iVar2;
      } while (local_14 < iVar2);
    }
  }
  return;
}



ulong _show_matrix(ulong param_1,int param_2,int param_3)

{
  uint uVar1;
  int local_28;
  int local_24;
  
  for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
      _printf("%2g ");
    }
    uVar1 = _putchar(10);
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



undefined8 entry(void)

{
  int local_98;
  double adStack_90 [15];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_98 = 0; local_98 < 0xf; local_98 = local_98 + 1) {
    adStack_90[local_98] = (double)(local_98 + 1);
  }
  _puts("before transpose:");
  _show_matrix();
  _transpose(adStack_90,3,5);
  _puts("\nafter transpose:");
  _show_matrix(adStack_90,5,3);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004020)((int)param_1);
  return iVar1;
}


