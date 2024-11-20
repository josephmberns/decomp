#include "permutations-derangements.h"



long _deranged(int param_1,int param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_40;
  undefined4 local_30;
  undefined8 local_18;
  
  local_40 = 0;
  if (param_1 == param_2) {
    if (param_4 != 0) {
      for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
        _putchar(*(int *)(param_3 + (long)local_30 * 4) + 0x61);
      }
      _putchar(10);
    }
    local_18 = 1;
  }
  else {
    for (local_30 = param_2 + -1; param_1 <= local_30; local_30 = local_30 + -1) {
      if (local_30 != *(int *)(param_3 + (long)param_1 * 4)) {
        uVar1 = *(undefined4 *)(param_3 + (long)local_30 * 4);
        *(undefined4 *)(param_3 + (long)local_30 * 4) = *(undefined4 *)(param_3 + (long)param_1 * 4)
        ;
        *(int *)(param_3 + (long)param_1 * 4) = (int)(char)uVar1;
        lVar2 = _deranged(param_1 + 1,param_2,param_3,param_4);
        local_40 = local_40 + lVar2;
        uVar1 = *(undefined4 *)(param_3 + (long)local_30 * 4);
        *(undefined4 *)(param_3 + (long)local_30 * 4) = *(undefined4 *)(param_3 + (long)param_1 * 4)
        ;
        *(int *)(param_3 + (long)param_1 * 4) = (int)(char)uVar1;
      }
    }
    local_18 = local_40;
  }
  return local_18;
}



undefined8 _gen_n(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 extraout_w1;
  ulong local_1038;
  undefined4 auStack_1028 [1024];
  long local_28;
  
  iVar1 = (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  for (local_1038 = 0; local_1038 < (ulong)(long)iVar1; local_1038 = local_1038 + 1) {
    auStack_1028[local_1038] = (int)local_1038;
  }
  uVar2 = _deranged(0,iVar1,auStack_1028,extraout_w1);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return uVar2;
}



long _sub_fact(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_20;
  
  if (param_1 < 2) {
    local_20 = (long)(1 - param_1);
  }
  else {
    lVar1 = _sub_fact(param_1 + -1);
    lVar2 = _sub_fact(param_1 + -2);
    local_20 = (lVar1 + lVar2) * (long)(param_1 + -1);
  }
  return local_20;
}



undefined8 entry(void)

{
  int local_18;
  
  _printf("Deranged Four:\n");
  _gen_n(4,1);
  _printf("\nCompare list vs calc:\n");
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    _gen_n(local_18,0);
    _sub_fact(local_18);
    _printf("%d:\t%llu\t%llu\n");
  }
  _printf("\nfurther calc:\n");
  for (local_18 = 10; local_18 < 0x15; local_18 = local_18 + 1) {
    _sub_fact(local_18);
    _printf("%d: %llu\n");
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004020)(param_1);
  return iVar1;
}


