#include "averages-root-mean-square.h"



undefined  [16] _rms(long param_1,int param_2)

{
  undefined auVar1 [16];
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0.0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    local_18 = (double)NEON_fmadd(*(undefined8 *)(param_1 + (long)local_10 * 8),
                                  *(undefined8 *)(param_1 + (long)local_10 * 8),local_18);
  }
  auVar1._0_8_ = SQRT(local_18 / (double)(long)param_2);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined8 entry(void)

{
  int iVar1;
  undefined auStack_68 [80];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_68,&DAT_100003f48,0x50);
  _rms(auStack_68,10);
  iVar1 = _printf("%f\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


