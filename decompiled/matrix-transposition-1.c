#include "matrix-transposition-1.h"



void _transpose(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  for (local_1c = 0; local_1c < (int)param_3; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < (int)param_4; local_20 = local_20 + 1) {
      *(undefined8 *)(param_1 + (long)local_20 * (ulong)param_3 * 8 + (long)local_1c * 8) =
           *(undefined8 *)(param_2 + (long)local_1c * (ulong)param_4 * 8 + (long)local_20 * 8);
    }
  }
  return;
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  int local_124;
  int local_120;
  undefined auStack_118 [120];
  undefined auStack_a0 [120];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_a0,&DAT_100003f20,0x78);
  uVar2 = _transpose(auStack_118,auStack_a0,3,5);
  for (local_120 = 0; local_120 < 5; local_120 = local_120 + 1) {
    for (local_124 = 0; local_124 < 3; local_124 = local_124 + 1) {
      uVar1 = _printf("%g%c");
      uVar2 = (ulong)uVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


