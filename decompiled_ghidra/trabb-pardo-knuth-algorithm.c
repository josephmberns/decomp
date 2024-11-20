#include "trabb-pardo-knuth-algorithm.h"



undefined8 entry(void)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  int local_8c;
  double adStack_70 [11];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _printf("\nPlease enter 11 numbers :");
  for (local_8c = 0; local_8c < 0xb; local_8c = local_8c + 1) {
    _scanf("%lf");
  }
  iVar1 = _printf("\n\n\nEvaluating f(x) = |x|^0.5 + 5x^3 for the given inputs :");
  for (local_8c = 10; -1 < local_8c; local_8c = local_8c + -1) {
    dVar2 = adStack_70[local_8c];
    uVar3 = _pow(adStack_70[local_8c],0x4008000000000000);
    dVar2 = (double)NEON_fmadd(0x4014000000000000,uVar3,SQRT(ABS(dVar2)));
    _printf("\nf(%lf) = ");
    if (dVar2 <= 400.0) {
      iVar1 = _printf("%lf");
    }
    else {
      iVar1 = _printf("Overflow!");
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004020)((int)param_1);
  return iVar1;
}


