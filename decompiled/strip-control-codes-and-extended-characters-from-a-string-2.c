#include "strip-control-codes-and-extended-characters-from-a-string-2.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _init_table(void)

{
  int local_4;
  
  for (local_4 = 0; local_4 < 0x20; local_4 = local_4 + 1) {
    *(uint *)(&_char_tbl + (long)local_4 * 4) = *(uint *)(&_char_tbl + (long)local_4 * 4) | 1;
  }
  _DAT_1000081fc = _DAT_1000081fc | 1;
  for (local_4 = 0x41; local_4 < 0x5b; local_4 = local_4 + 1) {
    *(uint *)(&_char_tbl + (long)local_4 * 4) = *(uint *)(&_char_tbl + (long)local_4 * 4) | 4;
    *(uint *)(&_char_tbl + (long)(local_4 + 0x20) * 4) =
         *(uint *)(&_char_tbl + (long)(local_4 + 0x20) * 4) | 4;
  }
  for (local_4 = 0x80; local_4 < 0x100; local_4 = local_4 + 1) {
    *(uint *)(&_char_tbl + (long)local_4 * 4) = *(uint *)(&_char_tbl + (long)local_4 * 4) | 2;
  }
  return;
}



void _strip(byte *param_1,uint param_2)

{
  byte *local_20;
  byte *local_18;
  
  local_18 = param_1;
  for (local_20 = param_1; *local_20 != 0; local_20 = local_20 + 1) {
    if ((*(uint *)(&_char_tbl + (long)(int)(uint)*local_20 * 4) & param_2) == 0) {
      *local_18 = *local_20;
      local_18 = local_18 + 1;
    }
  }
  *local_18 = 0;
  return;
}



undefined8 entry(void)

{
  int iVar1;
  int local_130;
  undefined local_128 [255];
  undefined local_29;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _init_table();
  for (local_130 = 1; local_130 < 0xff; local_130 = local_130 + 1) {
    local_128[local_130 + -1] = (char)local_130;
  }
  local_29 = 0;
  _strip();
  _printf("%s\n");
  for (local_130 = 1; local_130 < 0xff; local_130 = local_130 + 1) {
    local_128[local_130 + -1] = (char)local_130;
  }
  local_29 = 0;
  _strip(local_128,3);
  _printf("%s\n");
  for (local_130 = 1; local_130 < 0xff; local_130 = local_130 + 1) {
    local_128[local_130 + -1] = (char)local_130;
  }
  local_29 = 0;
  _strip(local_128,7);
  iVar1 = _printf("%s\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


