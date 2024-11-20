#include "matrix-multiplication.h"



undefined8 entry(void)

{
  undefined auStack_168 [96];
  undefined auStack_108 [96];
  undefined auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_a8,&DAT_100003eb0,0x80);
  _memcpy(auStack_108,&DAT_100003f30,0x60);
  _memset(auStack_168,0,0x60);
  FUN_100003c70(4,4,3,auStack_a8,auStack_108,auStack_168);
  FUN_100003db0(4,3,auStack_168);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void FUN_100003c70(int param_1,int param_2,int param_3,long param_4,long param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 1) {
      *(undefined8 *)(param_6 + (long)(local_2c * param_3 + local_30) * 8) = 0;
      for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
        puVar1 = (undefined8 *)(param_6 + (long)(local_2c * param_3 + local_30) * 8);
        uVar2 = NEON_fmadd(*(undefined8 *)(param_4 + (long)(local_2c * param_2 + local_34) * 8),
                           *(undefined8 *)(param_5 + (long)(local_34 * param_3 + local_30) * 8),
                           *puVar1);
        *puVar1 = uVar2;
      }
    }
  }
  return;
}



ulong FUN_100003db0(ulong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_28;
  int local_24;
  
  iVar1 = (int)param_1;
  for (local_24 = 0; local_24 < iVar1; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
      _printf("\t%7.3f");
    }
    uVar2 = _putchar(10);
    param_1 = (ulong)uVar2;
  }
  return param_1;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004018)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004028)(param_1);
  return iVar1;
}


