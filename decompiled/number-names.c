#include "number-names.h"



undefined4 _say_hundred(ulong param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  char *local_48;
  int local_40;
  int local_3c;
  undefined4 local_28;
  int local_24 [3];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_40 = -3; local_40 < 0; local_40 = local_40 + 1) {
    if (param_2 + local_40 < 0) {
      local_24[local_40 + 3] = 0;
    }
    else {
      local_24[local_40 + 3] = *(char *)(param_1 + (long)(param_2 + local_40)) + -0x30;
    }
  }
  if (local_24[0] + local_24[1] + local_24[2] == 0) {
    local_28 = 0;
  }
  else {
    local_3c = param_4;
    if (local_24[0] != 0) {
      uVar1 = _printf("%s hundred");
      param_1 = (ulong)uVar1;
      local_3c = 1;
    }
    if ((local_3c != 0) && ((local_24[1] != 0 || (local_24[2] != 0)))) {
      if (((param_3 == 0) || (local_24[0] != 0)) && ((local_24[0] == 0 || (local_24[1] == 0)))) {
        local_48 = "and ";
      }
      else {
        local_48 = " ";
        if (local_24[0] == 0) {
          local_48 = "";
        }
      }
      uVar1 = _printf(local_48);
      param_1 = (ulong)uVar1;
    }
    if (local_24[1] < 2) {
      if ((local_24[1] != 0) || (local_24[2] != 0)) {
        uVar1 = _printf("%s");
        param_1 = (ulong)uVar1;
      }
    }
    else {
      if (local_24[1] != 0) {
        uVar1 = _printf("%s");
        if (local_24[2] != 0) {
          uVar1 = _putchar(0x2d);
        }
        param_1 = (ulong)uVar1;
      }
      if (local_24[2] != 0) {
        uVar1 = _printf("%s");
        param_1 = (ulong)uVar1;
      }
    }
    local_28 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return local_28;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(param_1);
}



undefined8 _say_maxillion(long param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  long local_38;
  int local_2c;
  int local_28;
  undefined4 local_24;
  long local_18;
  
  local_28 = param_2 / 3;
  local_2c = param_2 % 3;
  if (local_2c == 0) {
    local_28 = local_28 + -1;
    local_2c = 3;
  }
  local_38 = param_1 + local_2c;
  local_24 = param_4;
  local_18 = param_1;
  do {
    iVar2 = _say_hundred(local_18,local_2c,local_28,local_24);
    if ((iVar2 != 0) && (local_28 != 0)) {
      local_24 = 1;
      _printf(" %s");
      if (param_3 == 0) {
        _printf(", ");
      }
      else {
        _printf(" ");
      }
    }
    local_18 = local_38;
    local_38 = local_38 + 3;
    local_2c = 3;
    bVar1 = local_28 != 0;
    local_28 = local_28 + -1;
  } while (bVar1);
  return 1;
}



int _say_number(char *param_1)

{
  int iVar1;
  size_t sVar2;
  int local_3c;
  char *local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char *local_18;
  
  for (local_18 = param_1; *local_18 == ' '; local_18 = local_18 + 1) {
  }
  if ((*local_18 < '0') || ('9' < *local_18)) {
    if (*local_18 == '-') {
      local_24 = -1;
    }
    else {
      if (*local_18 != '+') goto LAB_100003d6c;
      local_24 = 1;
    }
    local_18 = local_18 + 1;
  }
  else {
    local_24 = 1;
  }
  while (*local_18 == '0') {
    local_18 = local_18 + 1;
    if (*local_18 == '\0') {
      iVar1 = _printf("zero\n");
      return iVar1;
    }
  }
  sVar2 = _strlen(local_18);
  iVar1 = (int)sVar2;
  if (iVar1 != 0) {
    local_20 = 0;
    while( true ) {
      if (iVar1 <= local_20) {
        if (local_24 == -1) {
          _printf("minus ");
        }
        local_28 = iVar1 / 0xc;
        local_2c = iVar1 % 0xc;
        if (local_2c == 0) {
          local_2c = 0xc;
          local_28 = local_28 + -1;
        }
        local_38 = local_18 + ((long)iVar1 - (long)(local_28 * 0xc));
        local_3c = 0;
        do {
          local_3c = _say_maxillion(local_18,local_2c,local_28,local_3c);
          if (local_3c != 0) {
            for (local_20 = 0; local_20 < local_28; local_20 = local_20 + 1) {
              _printf(" %s");
            }
            if (local_28 != 0) {
              _printf(", ");
            }
          }
          local_28 = local_28 + -1;
          local_2c = 0xc;
          local_18 = local_38;
          local_38 = local_38 + 0xc;
        } while (-1 < local_28);
        iVar1 = _printf("\n");
        return iVar1;
      }
      if ((local_18[local_20] < '0') || ('9' < local_18[local_20])) break;
      local_20 = local_20 + 1;
    }
    iVar1 = _printf("(not a number)");
    return iVar1;
  }
LAB_100003d6c:
  iVar1 = _printf("not a number\n");
  return iVar1;
}



undefined4 entry(void)

{
  _say_number("-42");
  _say_number("1984");
  _say_number("10000");
  _say_number("1024");
  _say_number("1001001001001");
  _say_number("123456789012345678901234567890123456789012345678900000001");
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e24. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}


