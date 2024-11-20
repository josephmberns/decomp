#include "leap-year.h"



bool _is_leap_year(uint param_1)

{
  uint uVar1;
  
  uVar1 = 3;
  if (param_1 % 100 == 0) {
    uVar1 = 0xf;
  }
  return (param_1 & uVar1) == 0;
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  uint local_48;
  undefined4 auStack_3c [9];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = _memcpy(auStack_3c,&DAT_100003f60,0x24);
  for (local_48 = 0; local_48 != 9; local_48 = local_48 + 1) {
    _is_leap_year(auStack_3c[local_48]);
    uVar1 = _printf("%u is %sa leap year.\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


