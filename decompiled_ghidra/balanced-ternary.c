#include "balanced-ternary.h"



void _reverse(byte *param_1)

{
  size_t sVar1;
  byte *local_28;
  byte *local_18;
  
  sVar1 = _strlen((char *)param_1);
  local_28 = param_1 + sVar1;
  local_18 = param_1;
  while (local_28 = local_28 + -1, local_18 < local_28) {
    *local_18 = *local_18 ^ *local_28;
    *local_28 = *local_28 ^ *local_18;
    *local_18 = *local_18 ^ *local_28;
    local_18 = local_18 + 1;
  }
  return;
}



void _to_bt(int param_1,undefined *param_2)

{
  int local_2c;
  undefined *local_28;
  int local_14;
  
  *param_2 = 0;
  local_28 = param_2;
  for (local_14 = param_1; local_14 != 0;
      local_14 = (local_14 - *(int *)((long)&PTR___mh_execute_header_100008004 + (long)local_2c * 4)
                 ) / 3) {
    local_2c = local_14 % 3;
    if (local_2c < 0) {
      local_2c = local_2c + 3;
    }
    *local_28 = (&DAT_100008000)[local_2c];
    local_28[1] = 0;
    local_28 = local_28 + 1;
  }
  _reverse(param_2);
  return;
}



int _from_bt(char *param_1)

{
  int local_c;
  char *local_8;
  
  local_c = 0;
  for (local_8 = param_1; *local_8 != '\0'; local_8 = local_8 + 1) {
    local_c = local_c * 3;
    if (*local_8 == '+') {
      local_c = local_c + 1;
    }
    else if (*local_8 == '-') {
      local_c = local_c + -1;
    }
  }
  return local_c;
}



long _last_char(char *param_1)

{
  char *local_10;
  char local_1;
  
  if ((param_1 == (char *)0x0) || (local_10 = param_1, *param_1 == '\0')) {
    local_1 = '\0';
  }
  else {
    for (; *local_10 != '\0'; local_10 = local_10 + 1) {
    }
    local_1 = local_10[-1];
    local_10[-1] = '\0';
  }
  return (long)local_1;
}



void _add(char *param_1,char *param_2,undefined *param_3)

{
  char cVar1;
  char local_76;
  char local_75;
  undefined2 local_74;
  undefined local_72;
  undefined *local_70;
  char *local_68;
  char *local_60;
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_70 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  if ((*param_1 == '\0') || (*param_2 == '\0')) {
    if (*param_1 == '\0') {
      if (*param_2 == '\0') {
        *param_3 = 0;
      }
      else {
        ___strcpy_chk(param_3,param_2,0xffffffffffffffff);
      }
    }
    else {
      ___strcpy_chk(param_3,param_1,0xffffffffffffffff);
    }
  }
  else {
    local_74._0_1_ = 0;
    local_74._1_1_ = 0;
    local_72 = 0;
    ___strcpy_chk(auStack_28,param_1);
    ___strcpy_chk(auStack_38,local_68,0x10);
    local_75 = _last_char(auStack_28);
    cVar1 = _last_char(auStack_38);
    local_76 = cVar1;
    if (cVar1 < local_75) {
      local_76 = local_75;
      local_75 = cVar1;
    }
    if (local_75 == '-') {
      if (local_76 == '0') {
        local_74._0_1_ = 0x2d;
      }
      if (local_76 == '-') {
        local_74._0_1_ = 0x2b;
        local_74._1_1_ = 0x2d;
      }
    }
    if (local_75 == '+') {
      if (local_76 == '0') {
        local_74._0_1_ = 0x2b;
      }
      if (local_76 == '-') {
        local_74._0_1_ = 0x30;
      }
      if (local_76 == '+') {
        local_74._0_1_ = 0x2d;
        local_74._1_1_ = 0x2b;
      }
    }
    if ((local_75 == '0') && (local_76 == '0')) {
      local_74._0_1_ = 0x30;
    }
    _add(auStack_28,(long)&local_74 + 1);
    _add(auStack_48,auStack_38);
    ___strcpy_chk(local_70,auStack_58);
    local_74 = (ushort)(byte)local_74;
    ___strcat_chk(local_70,&local_74,0xffffffffffffffff);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void _unary_minus(char *param_1,char *param_2)

{
  char *local_10;
  char *local_8;
  
  local_10 = param_2;
  for (local_8 = param_1; *local_8 != '\0'; local_8 = local_8 + 1) {
    if (*local_8 == '-') {
      *local_10 = '+';
    }
    else if (*local_8 == '+') {
      *local_10 = '-';
    }
    else {
      *local_10 = *local_8;
    }
    local_10 = local_10 + 1;
  }
  *local_10 = '\0';
  return;
}



void _subtract(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_28 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _unary_minus(param_2);
  _add(param_1,auStack_28,param_3);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



void _mult(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *local_80;
  char local_60 [16];
  undefined auStack_50 [16];
  undefined auStack_40 [16];
  char local_30 [24];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  local_30[0] = '0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_80 = local_60;
  ___strcpy_chk(auStack_50,param_1);
  ___strcpy_chk(local_80,param_2,0x10);
  _reverse(local_80);
  for (; *local_80 != '\0'; local_80 = local_80 + 1) {
    if (*local_80 == '+') {
      _add(local_30,auStack_50);
      ___strcpy_chk(local_30,auStack_40,0x10);
    }
    if (*local_80 == '-') {
      _subtract(local_30,auStack_50);
      ___strcpy_chk(local_30,auStack_40,0x10);
    }
    ___strcat_chk(auStack_50,"0",0x10);
  }
  for (local_80 = local_30; *local_80 == '0'; local_80 = local_80 + 1) {
  }
  ___strcpy_chk(param_3,local_80,0xffffffffffffffff);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



undefined8 entry(void)

{
  int iVar1;
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _to_bt(0xfffffe4c);
  _subtract(auStack_28,"+-++-");
  _mult("+-0++0+",auStack_38);
  _from_bt("+-0++0+");
  _printf("      a: %14s %10d\n");
  _from_bt(auStack_28);
  _printf("      b: %14s %10d\n");
  _from_bt("+-++-");
  _printf("      c: %14s %10d\n");
  _from_bt(auStack_48);
  iVar1 = _printf("a*(b-c): %14s %10d\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004010)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004028)();
  return sVar1;
}


