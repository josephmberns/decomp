#include "named-parameters.h"



void _FTest(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100004008;
  iVar1 = _printf("x: %d, y: %d, z: %d\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != lVar2) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



int _FTest2(void)

{
  int iVar1;
  
  iVar1 = _printf("x: %d, y: %d, z: %d\n");
  return iVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined8 entry(void)

{
  long lVar1;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100004008;
  _FTest(0xa00000000,(ulong)uStack_2c << 0x20);
  _FTest(0xa00000000,CONCAT44(uStack_3c,0x2a));
  _FTest(0xa0000002a,CONCAT44(uStack_4c,0x2f));
  _FTest(0x8f0000008e,CONCAT44(uStack_5c,0x90));
  _FTest(0x8f0000008e,CONCAT44(uStack_6c,99));
  FUN_100003efc(0x8f0000008e,CONCAT44(uStack_7c,0x90));
  FUN_100003efc(0x8f0000008e,CONCAT44(uStack_8c,99));
  if (*(long *)PTR____stack_chk_guard_100004008 != lVar1) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void FUN_100003efc(ulong param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_34;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_34 = (undefined4)(param_1 >> 0x20);
  _FTest2(param_1 & 0xffffffff,uStack_34,param_2);
  if (*(long *)PTR____stack_chk_guard_100004008 != lVar1) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


