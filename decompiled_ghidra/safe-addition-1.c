#include "safe-addition-1.h"



void _safe_add(double param_1,double param_2,double *param_3)

{
  undefined4 uVar1;
  
  uVar1 = _fegetround();
  _fesetround(0x800000);
  *param_3 = param_1 + param_2;
  _fesetround(0x400000);
  param_3[1] = param_1 + param_2;
  _fesetround(uVar1);
  return;
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  uint local_70;
  undefined local_68 [16];
  long alStack_58 [9];
  
  alStack_58[8] = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = _memcpy(alStack_58,&DAT_100003f30,0x40);
  for (local_70 = 0; local_70 < 4; local_70 = local_70 + 1) {
    _safe_add(alStack_58[(long)(int)local_70 * 2],alStack_58[(long)(int)local_70 * 2 + 1],local_68);
    _printf("%.17g + %.17g =\n");
    _printf("    [%.17g, %.17g]\n");
    uVar1 = _printf("    size %.17g\n\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != alStack_58[8]) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void _fegetround(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__fegetround_100004010)();
  return;
}



void _fesetround(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__fesetround_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


