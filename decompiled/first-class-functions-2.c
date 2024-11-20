#include "first-class-functions-2.h"



void _dummy(undefined8 param_1)

{
  (*(code *)&SUB_baddecaf)(param_1);
  (*(code *)&SUB_deadbeef)();
  return;
}



undefined8 * _composite(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_38;
  
  puVar1 = (undefined8 *)_malloc(0x50);
  ___memcpy_chk(puVar1,_dummy,0x50,0xffffffffffffffff);
  for (local_38 = puVar1; local_38 < puVar1 + 9; local_38 = (undefined8 *)((long)local_38 + 1)) {
    if ((undefined *)*local_38 == &SUB_deadbeef) {
      *local_38 = param_1;
    }
    else if ((undefined *)*local_38 == &SUB_baddecaf) {
      *local_38 = param_2;
    }
  }
  return puVar1;
}



undefined  [16] _cube(double param_1)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 * param_1 * param_1;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined8 entry(ulong param_1)

{
  uint uVar1;
  double local_78;
  int local_70;
  ulong auStack_68 [3];
  undefined *local_50 [4];
  code *local_30 [3];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_30[1] = (code *)&_exp;
  local_30[0] = _cube;
  local_30[2] = (code *)&_sin;
  local_50[1] = &_log;
  local_50[0] = &_cbrt;
  local_50[2] = &_asin;
  for (local_70 = 0; local_70 < 3; local_70 = local_70 + 1) {
    param_1 = _composite(local_30[local_70],local_50[local_70]);
    auStack_68[local_70] = param_1;
  }
  for (local_70 = 0; local_70 < 3; local_70 = local_70 + 1) {
    local_78 = 0.2;
    while( true ) {
      if (1.0 < local_78) break;
      (*(code *)auStack_68[local_70])(local_78,param_1);
      uVar1 = _printf("C%d(%g) = %g\n");
      param_1 = (ulong)uVar1;
      local_78 = local_78 + 0.2;
    }
    uVar1 = _printf("\n");
    param_1 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


