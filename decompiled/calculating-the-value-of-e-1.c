#include "calculating-the-value-of-e-1.h"



undefined8 entry(void)

{
  int iVar1;
  int local_1f88;
  int local_1f84;
  int local_1f7c;
  double local_1f68 [1000];
  long local_28;
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  iVar1 = _puts(
               "The double precision in C give about 15 significant digits.\nValues below are presented with 16 digits after the decimal point.\n"
               );
  _exp(0x3ff0000000000000,iVar1);
  _printf("Euler constant e = %.16lf\n");
  for (local_1f7c = 0; local_1f7c < 0x1a; local_1f7c = local_1f7c + 1) {
  }
  _printf("Euler constant e = %.16lf\n");
  local_1f68[0] = 1.0;
  for (local_1f84 = 1; local_1f84 < 1000; local_1f84 = local_1f84 + 1) {
    local_1f68[local_1f84] = local_1f68[local_1f84 + -1] / (double)(long)local_1f84;
  }
  for (local_1f88 = 999; 0 < local_1f88; local_1f88 = local_1f88 + -1) {
  }
  iVar1 = _printf("Euler constant e = %.16lf\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void _exp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exp_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004028)((int)param_1);
  return iVar1;
}


