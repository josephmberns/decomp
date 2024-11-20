#include "greatest-subsequential-sum.h"



undefined  [16] _maxSubseq(long param_1,int param_2)

{
  undefined auVar1 [16];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_34;
  int iStack_30;
  int local_2c;
  undefined4 uStack_1c;
  
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = -1;
  for (local_5c = 0; local_5c < param_2; local_5c = local_5c + 1) {
    local_4c = local_4c + *(int *)(param_1 + (long)local_5c * 4);
    if (local_4c < 0) {
      local_50 = local_5c + 1;
      local_4c = 0;
    }
    else if (local_48 < local_4c) {
      local_54 = local_50;
      local_58 = local_5c;
      local_48 = local_4c;
    }
  }
  if (((local_58 < local_54) || (local_54 < 0)) || (local_58 < 0)) {
    local_34 = 0;
    iStack_30 = 0;
    local_2c = 0;
  }
  else {
    local_34 = local_54;
    iStack_30 = local_58 + 1;
    local_2c = local_48;
  }
  auVar1._4_4_ = iStack_30;
  auVar1._0_4_ = local_34;
  auVar1._12_4_ = uStack_1c;
  auVar1._8_4_ = local_2c;
  if (*(long *)PTR____stack_chk_guard_100004008 == *(long *)PTR____stack_chk_guard_100004008) {
    return auVar1;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(void)

{
  int iVar1;
  undefined8 uVar2;
  int local_7c;
  int local_78;
  int iStack_74;
  undefined auStack_44 [44];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_44,&DAT_100003f68,0x2c);
  uVar2 = _maxSubseq(auStack_44,0xb);
  _printf("Max sum = %d\n");
  local_78 = (int)uVar2;
  for (local_7c = local_78; iStack_74 = (int)((ulong)uVar2 >> 0x20), local_7c < iStack_74;
      local_7c = local_7c + 1) {
    _printf("%d ");
  }
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


