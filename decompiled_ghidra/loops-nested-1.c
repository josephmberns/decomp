#include "loops-nested-1.h"



undefined8 entry(void)

{
  int iVar1;
  time_t tVar2;
  int local_1c4;
  int local_1c0;
  int aiStack_1b8 [100];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  tVar2 = _time((time_t *)0x0);
  _srand((uint)tVar2);
  for (local_1c0 = 0; local_1c0 < 10; local_1c0 = local_1c0 + 1) {
    for (local_1c4 = 0; local_1c4 < 10; local_1c4 = local_1c4 + 1) {
      iVar1 = _rand();
      aiStack_1b8[(long)local_1c0 * 10 + (long)local_1c4] = iVar1 % 0x14 + 1;
    }
  }
  for (local_1c0 = 0; local_1c0 < 10; local_1c0 = local_1c0 + 1) {
    for (local_1c4 = 0; local_1c4 < 10; local_1c4 = local_1c4 + 1) {
      _printf(" %d");
      if (aiStack_1b8[(long)local_1c0 * 10 + (long)local_1c4] == 0x14) goto LAB_100003f20;
    }
    _printf("\n");
  }
LAB_100003f20:
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004028)();
  return tVar1;
}


