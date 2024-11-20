#include "next-highest-int-from-digits.h"



void _swap(long param_1,int param_2,int param_3)

{
  undefined uVar1;
  
  uVar1 = *(undefined *)(param_1 + param_2);
  *(undefined *)(param_1 + param_2) = *(undefined *)(param_1 + param_3);
  *(undefined *)(param_1 + param_3) = uVar1;
  return;
}



void _reverse(undefined8 param_1,int param_2,int param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = param_3;
  for (local_1c = param_2; local_1c < local_20; local_1c = local_1c + 1) {
    _swap(param_1,local_1c,local_20);
    local_20 = local_20 + -1;
  }
  return;
}



undefined _next_permutation(char *param_1)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int local_30;
  int local_28;
  undefined local_11;
  
  sVar2 = _strlen(param_1);
  iVar3 = (int)sVar2;
  if (iVar3 < 2) {
    local_11 = 0;
  }
  else {
    iVar1 = iVar3 + -1;
    do {
      local_28 = iVar1;
      if (local_28 < 1) {
        return 0;
      }
      iVar1 = local_28 + -1;
      local_30 = iVar3;
    } while (param_1[local_28] <= param_1[iVar1]);
    do {
      local_30 = local_30 + -1;
    } while (param_1[local_30] <= param_1[iVar1]);
    _swap(param_1,iVar1,local_30);
    _reverse(param_1,local_28,iVar3 + -1);
    local_11 = 1;
  }
  return local_11;
}



undefined4 _next_highest_int(void)

{
  ulong uVar1;
  undefined4 local_2c;
  char acStack_28 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  ___snprintf_chk(acStack_28,0x10,0,0x10,"%u");
  uVar1 = _next_permutation(acStack_28);
  if ((uVar1 & 1) == 0) {
    local_2c = 0;
  }
  else {
    uVar1 = _strtoul(acStack_28,(char **)0x0,10);
    local_2c = (undefined4)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_2c;
}



undefined8 entry(void)

{
  int iVar1;
  int local_8c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  uStack_38 = 0x150000000c;
  local_40 = 0x900000000;
  uStack_28 = 0x5ae7fa402afbe8a;
  local_30 = 0xb4488000030a5;
  for (local_8c = 0; local_8c < 8; local_8c = local_8c + 1) {
    _next_highest_int(*(undefined4 *)((long)&local_40 + (long)local_8c * 4));
    _printf("%d -> %d\n");
  }
  _next_permutation();
  iVar1 = _printf("%s -> %s\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___snprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____snprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ulong _strtoul(char *param_1,char **param_2,int param_3)

{
  ulong uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__strtoul_100004028)(param_1,param_2,param_3);
  return uVar1;
}


