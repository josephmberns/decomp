#include "balanced-brackets-1.h"



bool _isBal(long param_1,int param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = param_2;
  do {
    while( true ) {
      iVar1 = local_c + -1;
      if (local_c == 0) goto LAB_100003cfc;
      local_c = iVar1;
      if (*(char *)(param_1 + iVar1) != ']') break;
      local_10 = local_10 + 1;
    }
  } while ((*(char *)(param_1 + iVar1) != '[') || (local_10 = local_10 + -1, -1 < local_10));
LAB_100003cfc:
  return local_10 == 0;
}



void _shuffle(long param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  
  local_28 = param_2;
  while (iVar3 = local_28 + -1, local_28 != 0) {
    iVar4 = _rand();
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = iVar4 / param_2;
    }
    iVar4 = iVar4 - iVar2 * param_2;
    uVar1 = *(undefined *)(param_1 + iVar4);
    *(undefined *)(param_1 + iVar4) = *(undefined *)(param_1 + iVar3);
    *(undefined *)(param_1 + iVar3) = uVar1;
    local_28 = iVar3;
  }
  return;
}



void _genSeq(long param_1,int param_2)

{
  if (param_2 != 0) {
    ___memset_chk(param_1,0x5b,(long)param_2);
    ___memset_chk(param_1 + param_2,0x5d,(long)param_2,0xffffffffffffffff);
    _shuffle(param_1,param_2 << 1);
  }
  *(undefined *)(param_1 + (param_2 << 1)) = 0;
  return;
}



void _doSeq(int param_1)

{
  int iVar1;
  undefined auStack_58 [64];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  _genSeq(auStack_58,param_1);
  _isBal(auStack_58,param_1 << 1);
  iVar1 = _printf("\'%s\': %s\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined8 entry(void)

{
  undefined4 local_18;
  
  local_18 = 0;
  while (local_18 < 9) {
    local_18 = local_18 + 1;
    _doSeq();
  }
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}


