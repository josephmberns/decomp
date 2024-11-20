#include "verhoeff-algorithm.h"



uint _verhoeff(char *param_1,byte param_2,byte param_3)

{
  size_t sVar1;
  uint local_48;
  uint local_40;
  int local_34;
  int local_30;
  int local_2c;
  
  param_2 = param_2 & 1;
  param_3 = param_3 & 1;
  if (param_3 != 0) {
    _printf("%s calculations for \'%s\':\n\n");
    _puts(s_i_n_p_i_n___c_100003bbf);
    _puts("------------------");
  }
  sVar1 = _strlen(param_1);
  local_2c = (int)sVar1;
  if (param_2 != 0) {
    local_2c = local_2c + -1;
  }
  local_30 = 0;
  local_34 = local_2c;
  while( true ) {
    if (local_34 < 0) {
      if ((param_3 != 0) && (param_2 == 0)) {
        _printf("\ninv[%d] = %d\n");
      }
      if (param_2 == 0) {
        local_48 = *(uint *)(&DAT_100003f80 + (long)local_30 * 4);
      }
      else {
        local_48 = (uint)(local_30 == 0);
      }
      return local_48;
    }
    if ((local_34 == local_2c) && (param_2 == 0)) {
      local_40 = 0;
    }
    else {
      local_40 = (int)param_1[local_34] - 0x30;
    }
    if (9 < local_40) break;
    local_30 = *(int *)(&UNK_100003df0 +
                       (long)*(int *)((long)&PTR___mh_execute_header_100003cb0 +
                                     (long)(int)local_40 * 4 +
                                     (long)((local_2c - local_34) % 8) * 0x28) * 4 +
                       (long)local_30 * 0x28);
    if (param_3 != 0) {
      _printf("%2d  %d      %d     %d\n");
    }
    local_34 = local_34 + -1;
  }
                    // WARNING: Subroutine does not return
  ___assert_rtn("verhoeff","verhoeff-algorithm.c",0x24,"ni >= 0 && ni < 10");
}



undefined8 entry(ulong param_1)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  size_t sVar5;
  ulong uVar6;
  undefined auStack_80 [4];
  int local_7c;
  ulong local_78;
  long local_70;
  int local_68;
  int local_64;
  undefined *local_58;
  int local_4c;
  uint local_48;
  byte local_41;
  char *local_40;
  int local_38;
  undefined4 local_34;
  char *local_30 [3];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  local_34 = 0;
  local_30[1] = "12345";
  local_30[0] = "236";
  local_30[2] = "123456789012";
  puVar3 = auStack_80;
  for (local_38 = 0; local_38 < 3; local_38 = local_38 + 1) {
    local_40 = local_30[local_38];
    local_41 = local_38 < 2;
    local_48 = _verhoeff(local_40,0,local_41);
    uVar6 = (ulong)local_48;
    *(char **)(puVar3 + -0x10) = local_40;
    *(ulong *)(puVar3 + -8) = uVar6;
    _printf("\nThe check digit for \'%s\' is \'%d\'.\n");
    sVar5 = _strlen(local_40);
    local_4c = (int)sVar5;
    local_78 = (ulong)(local_4c + 2) + 0xf & 0xfffffffffffffff0;
    local_58 = puVar3;
    (*(code *)PTR____chkstk_darwin_100004008)();
    lVar2 = (long)puVar3 - local_78;
    local_70 = lVar2;
    param_1 = ___strncpy_chk(lVar2,local_40,(long)(local_4c + 2),0xffffffffffffffff);
    for (local_64 = 0; local_64 < 2; local_64 = local_64 + 1) {
      if (local_64 == 0) {
        local_7c = local_48 + 0x30;
      }
      else {
        local_7c = 0x39;
      }
      *(char *)(local_70 + local_4c) = (char)local_7c;
      local_68 = _verhoeff(local_70,1,local_41 & 1);
      pcVar1 = "correct";
      if (local_68 == 0) {
        pcVar1 = "incorrect";
      }
      *(long *)(lVar2 + -0x10) = local_70;
      *(char **)(lVar2 + -8) = pcVar1;
      uVar4 = _printf("\nThe validation for \'%s\' is %s.\n");
      param_1 = (ulong)uVar4;
    }
    puVar3 = local_58;
  }
  if (*(long *)PTR____stack_chk_guard_100004018 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003b4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003b58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003b64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b88. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004038)();
  return sVar1;
}


