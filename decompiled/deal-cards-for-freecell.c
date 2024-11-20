#include "deal-cards-for-freecell.h"



int _rnd(void)

{
  DAT_10000804c = DAT_10000804c * 0x343fd + 0x269ec3 & 0x7fffffff;
  return (int)DAT_10000804c >> 0x10;
}



void _srnd(undefined4 param_1)

{
  DAT_10000804c = param_1;
  return;
}



ulong _show(ulong param_1)

{
  uint uVar1;
  int local_1c;
  
  local_1c = 0;
  while (local_1c < 0x34) {
    uVar1 = _printf("  \x1b[%dm%lc\x1b[m%lc");
    local_1c = local_1c + 1;
    if ((local_1c % 8 == 0) || (local_1c == 0x34)) {
      uVar1 = _putchar(10);
    }
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



void _deal(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_24;
  
  _srnd(param_1);
  for (local_24 = 0; local_24 < 0x34; local_24 = local_24 + 1) {
    *(int *)(param_2 + (long)local_24 * 4) = 0x33 - local_24;
  }
  for (local_24 = 0; local_24 < 0x33; local_24 = local_24 + 1) {
    iVar4 = _rnd();
    iVar3 = 0x34 - local_24;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = iVar4 / iVar3;
    }
    iVar2 = 0x33 - (iVar4 - iVar2 * iVar3);
    uVar1 = *(undefined4 *)(param_2 + (long)local_24 * 4);
    *(undefined4 *)(param_2 + (long)local_24 * 4) = *(undefined4 *)(param_2 + (long)iVar2 * 4);
    *(undefined4 *)(param_2 + (long)iVar2 * 4) = uVar1;
  }
  return;
}



undefined8 entry(int param_1,long param_2)

{
  int local_10c;
  undefined auStack_f8 [208];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  if ((param_1 < 2) || (local_10c = _atoi(*(char **)(param_2 + 8)), local_10c < 1)) {
    local_10c = 0x2ece;
  }
  _setlocale(0,"");
  _deal(local_10c);
  _printf("Hand %d\n");
  _show(auStack_f8);
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004020)(param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004028)();
  return;
}


