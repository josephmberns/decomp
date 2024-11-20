#include "sum-to-100-2.h"



int _evaluate(int param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 1;
  local_4 = param_1;
  for (local_14 = 9; 0 < local_14; local_14 = local_14 + -1) {
    local_c = local_10 * local_14 + local_c;
    iVar1 = local_4 % 3;
    if (iVar1 == 0) {
      local_8 = local_8 + local_c;
      local_c = 0;
      local_10 = 1;
    }
    else if (iVar1 == 1) {
      local_8 = local_8 - local_c;
      local_c = 0;
      local_10 = 1;
    }
    else if (iVar1 == 2) {
      local_10 = local_10 * 10;
    }
    local_4 = local_4 / 3;
  }
  return local_8;
}



int _print(int param_1)

{
  int iVar1;
  int iVar2;
  int local_2c;
  int local_28;
  int local_24;
  char *local_20;
  
  local_20 = &DAT_100008000;
  local_24 = 0x4ce3;
  local_28 = 0x19a1;
  for (local_2c = 1; local_2c < 10; local_2c = local_2c + 1) {
    iVar2 = 0;
    if (local_24 != 0) {
      iVar2 = param_1 / local_24;
    }
    iVar1 = 0;
    if (local_28 != 0) {
      iVar1 = (param_1 - iVar2 * local_24) / local_28;
    }
    if (iVar1 == 0) {
      if (1 < local_2c) {
        *local_20 = '+';
        local_20 = local_20 + 1;
      }
    }
    else if (iVar1 == 1) {
      *local_20 = '-';
      local_20 = local_20 + 1;
    }
    local_24 = local_28;
    local_28 = local_28 / 3;
    *local_20 = (char)local_2c + '0';
    local_20 = local_20 + 1;
  }
  *local_20 = '\0';
  _evaluate(param_1);
  iVar2 = _printf("%9d = %s\n");
  return iVar2;
}



undefined8 entry(void)

{
  int iVar1;
  int iVar2;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_1c;
  int local_18;
  
  _puts("\nShow all solutions that sum to 100\n");
  for (local_18 = 0; local_18 < 0x3342; local_18 = local_18 + 1) {
    iVar1 = _evaluate(local_18);
    if (iVar1 == 100) {
      _print(local_18);
    }
  }
  _puts("\nShow the sum that has the maximum number of solutions\n");
  local_28 = -1;
  for (local_18 = 0; local_18 < 0x3342; local_18 = local_18 + 1) {
    iVar1 = _evaluate(local_18);
    if (0 < iVar1) {
      local_30 = 0;
      for (local_1c = 0; local_1c < 0x3342; local_1c = local_1c + 1) {
        iVar2 = _evaluate(local_1c);
        if (iVar2 == iVar1) {
          local_30 = local_30 + 1;
        }
      }
      if (local_28 < local_30) {
        local_28 = local_30;
      }
    }
  }
  _printf("%d has %d solutions\n");
  _puts("\nShow the lowest positive number that can\'t be expressed\n");
  for (local_18 = 0; local_18 < 0x75bcd16; local_18 = local_18 + 1) {
    local_1c = 0;
    while ((local_1c < 0x3342 && (iVar1 = _evaluate(local_1c), local_18 != iVar1))) {
      local_1c = local_1c + 1;
    }
    iVar1 = _evaluate(local_1c);
    if (local_18 != iVar1) break;
  }
  _printf("%d\n");
  _puts("\nShow the ten highest numbers that can be expressed\n");
  local_34 = 0x75bcd16;
  for (local_18 = 1; local_18 < 0xb; local_18 = local_18 + 1) {
    local_38 = 0;
    for (local_1c = 0; local_1c < 0x3342; local_1c = local_1c + 1) {
      iVar1 = _evaluate(local_1c);
      if ((iVar1 < local_34) && (local_38 < iVar1)) {
        local_38 = iVar1;
      }
    }
    for (local_1c = 0; local_1c < 0x3342; local_1c = local_1c + 1) {
      iVar1 = _evaluate(local_1c);
      if (iVar1 == local_38) {
        _print(local_1c);
      }
    }
    local_34 = local_38;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004008)((int)param_1);
  return iVar1;
}


