#include "general-fizzbuzz.h"



int _compare(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



ulong _generic_fizz_buzz(ulong param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int local_2c;
  int local_28;
  
  iVar4 = (int)param_1;
  for (local_28 = 1; local_28 < iVar4; local_28 = local_28 + 1) {
    bVar3 = false;
    for (local_2c = 0; local_2c < param_3; local_2c = local_2c + 1) {
      iVar1 = *(int *)(param_2 + (long)local_2c * 0x10);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = local_28 / iVar1;
      }
      if (local_28 == iVar2 * iVar1) {
        _printf("%s");
        bVar3 = true;
      }
    }
    if (!bVar3) {
      _printf("%d");
    }
    uVar5 = _printf("\n");
    param_1 = (ulong)uVar5;
  }
  return param_1;
}



undefined8 entry(void)

{
  undefined auStack_48 [48];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_48,&DAT_100004028,0x30);
  _qsort(auStack_48,3,0x10,(int *)_compare);
  _generic_fizz_buzz(0x14,auStack_48,3);
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004020)();
  return;
}


