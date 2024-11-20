#include "thue-morse-1.h"



undefined8 entry(void)

{
  int iVar1;
  int local_344;
  undefined auStack_32b [257];
  undefined local_22a [257];
  char local_129 [257];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _bzero(local_129,0x101);
  local_129[0] = '0';
  _bzero(local_22a,0x101);
  local_22a[0] = 0x31;
  for (local_344 = 0; local_344 < 8; local_344 = local_344 + 1) {
    ___strcpy_chk();
    ___strcat_chk(local_129,local_22a,0x101);
    ___strcat_chk(local_22a,auStack_32b,0x101);
  }
  iVar1 = _puts(local_129);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004010)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004028)((int)param_1);
  return iVar1;
}


