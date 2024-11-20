#include "fibonacci-n-step-number-sequences.h"



void * _anynacci(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  pvVar4 = _malloc((long)param_2 << 2);
  local_2c = 0;
  while (iVar2 = local_2c, *(int *)(param_1 + (long)local_2c * 4) != 0) {
    local_2c = local_2c + 1;
  }
  for (local_2c = 0; iVar3 = iVar2, local_2c < iVar2; local_2c = local_2c + 1) {
    *(undefined4 *)((long)pvVar4 + (long)local_2c * 4) =
         *(undefined4 *)(param_1 + (long)local_2c * 4);
  }
  while (local_2c = iVar3, local_2c < param_2) {
    *(undefined4 *)((long)pvVar4 + (long)local_2c * 4) = 0;
    for (local_30 = local_2c - iVar2; local_30 < local_2c; local_30 = local_30 + 1) {
      piVar1 = (int *)((long)pvVar4 + (long)local_2c * 4);
      *piVar1 = *piVar1 + *(int *)((long)pvVar4 + (long)local_30 * 4);
    }
    iVar3 = local_2c + 1;
  }
  return pvVar4;
}



undefined8 entry(void)

{
  int iVar1;
  int local_9c;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_28 = 0x100000001;
  local_20 = 0;
  uStack_38 = 2;
  local_40 = 0x100000001;
  uStack_58 = 0x400000002;
  local_60 = 0x100000001;
  local_50 = 0;
  local_70 = 0x100000002;
  local_68 = 0;
  _anynacci(&local_28);
  _anynacci(&local_40,10);
  _anynacci(&local_60,10);
  _anynacci(&local_70,10);
  iVar1 = _printf("\nFibonacci\tTribonacci\tTetranacci\tLucas\n");
  for (local_9c = 0; local_9c < 10; local_9c = local_9c + 1) {
    iVar1 = _printf("\n%d\t\t%d\t\t%d\t\t%d");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


