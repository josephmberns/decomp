#include "one-dimensional-cellular-automata-1.h"



int _evolve(long param_1,long param_2,int param_3)

{
  int local_2c;
  int local_28;
  
  local_2c = 0;
  for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
    *(char *)(param_2 + local_28) =
         _trans[(int)((uint)(*(char *)(param_1 + local_28) != '_') * 2 +
                      (uint)(*(char *)(param_1 + (local_28 + -1)) != '_') * 4 +
                     (uint)(*(char *)(param_1 + (local_28 + 1)) != '_'))];
    local_2c = local_2c + (uint)(*(char *)(param_2 + local_28) != *(char *)(param_1 + local_28));
  }
  ___strcpy_chk(param_1,param_2,0xffffffffffffffff);
  return local_2c;
}



undefined8 entry(void)

{
  int iVar1;
  char local_50 [32];
  char local_30 [24];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  builtin_strncpy(local_30,"_###_##_#_#_#_#__#__\n",0x16);
  builtin_strncpy(local_50,"____________________\n",0x16);
  do {
    _printf(local_30 + 1);
    iVar1 = _evolve(local_30 + 1,local_50 + 1,0x13);
  } while (iVar1 != 0);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


