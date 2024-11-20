#include "chinese-zodiac.h"



undefined * _getElement(int param_1)

{
  return (&_elements)[(int)(double)(((param_1 + -4) % 10) / 2)];
}



undefined * _getAnimal(int param_1)

{
  return (&_animals)[(param_1 + -4) % 0xc];
}



char * _getYY(int param_1)

{
  char *local_8;
  
  if (param_1 % 2 == 0) {
    local_8 = "yang";
  }
  else {
    local_8 = "yin";
  }
  return local_8;
}



undefined8 entry(ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_28 = 0x7b4000007b0;
  local_30 = 0x7920000078f;
  local_20 = 0x7e1000007b8;
  for (local_38 = 0; local_38 < 6; local_38 = local_38 + 1) {
    uVar1 = *(undefined4 *)((long)&local_30 + (long)local_38 * 4);
    _getElement(uVar1);
    _getAnimal(uVar1);
    _getYY(uVar1);
    uVar2 = _printf("%d is the year of the %s %s (%s).\n");
    param_1 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


