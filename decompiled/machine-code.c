#include "machine-code.h"



undefined4 _test(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 local_28;
  undefined local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_28 = 0x82444030424448b;
  local_20 = 0xc3;
  pcVar2 = (code *)_mmap(0,9,7,0x1002,0xffffffff,0);
  ___memcpy_chk(pcVar2,&local_28,9,0xffffffffffffffff);
  uVar1 = (*pcVar2)(param_1,param_2);
  _munmap(pcVar2,9);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return uVar1;
}



undefined4 entry(void)

{
  _test(7,0xc);
  _printf("%d\n");
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void _mmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__mmap_100004018)();
  return;
}



void _munmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__munmap_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


