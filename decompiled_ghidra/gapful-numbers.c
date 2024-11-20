#include "gapful-numbers.h"



void _generateGaps(ulong param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong local_98;
  int local_90;
  char local_7c [100];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_90 = 0;
  uVar3 = _printf("\nFirst %d Gapful numbers >= %llu :\n");
  uVar4 = (ulong)uVar3;
  local_98 = param_1;
  while (local_90 < param_2) {
    uVar4 = ___sprintf_chk(local_7c,0,100,"%llu");
    uVar1 = local_98 % 10 + (long)((local_7c[0] + -0x30) * 10);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = local_98 / uVar1;
    }
    if (local_98 == uVar2 * uVar1) {
      uVar3 = _printf("\n%3d : %llu");
      uVar4 = (ulong)uVar3;
      local_90 = local_90 + 1;
    }
    local_98 = local_98 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar4);
}



undefined8 entry(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100004010;
  _generateGaps(100,0x1e);
  _printf("\n");
  _generateGaps(1000000);
  _printf("\n");
  _generateGaps(1000000000,0xf);
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != lVar2) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


