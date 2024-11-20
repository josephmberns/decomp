#include "random-numbers.h"



undefined  [16] _drand(void)

{
  int iVar1;
  undefined auVar2 [16];
  
  iVar1 = _rand();
  auVar2._0_8_ = ((double)iVar1 + 1.0) / 2147483648.0;
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined  [16] _random_normal(void)

{
  double dVar1;
  double dVar2;
  undefined auVar3 [16];
  
  _drand();
  dVar1 = (double)_log();
  dVar2 = (double)_drand();
  dVar2 = (double)_cos(dVar2 * 6.283185307179586);
  auVar3._0_8_ = SQRT(dVar1 * -2.0) * dVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  int local_1f70;
  undefined8 auStack_1f68 [1000];
  long local_28;
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  for (local_1f70 = 0; local_1f70 < 1000; local_1f70 = local_1f70 + 1) {
    uVar1 = _random_normal();
    uVar1 = NEON_fmadd(0x3fe0000000000000,uVar1,0x3ff0000000000000);
    auStack_1f68[local_1f70] = uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004018)();
  return;
}



void _log(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}


