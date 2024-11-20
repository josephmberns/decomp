#include "isbn13-check-digit.h"



bool _check_isbn13(char *param_1)

{
  char cVar1;
  bool bVar2;
  int local_1c;
  uint local_18;
  int local_14;
  char *local_10;
  
  cVar1 = *param_1;
  local_18 = 0;
  local_1c = 0;
  local_10 = param_1;
  do {
    local_14 = (int)cVar1;
    if (local_14 == 0) {
      if (local_18 == 0xd) {
        bVar2 = local_1c % 10 == 0;
      }
      else {
        bVar2 = false;
      }
      return bVar2;
    }
    if ((local_14 == 0x20) || (local_14 == 0x2d)) {
      local_18 = local_18 - 1;
    }
    else {
      if ((local_14 < 0x30) || (0x39 < local_14)) {
        return false;
      }
      if ((local_18 & 1) == 0) {
        local_14 = local_14 + -0x30;
      }
      else {
        local_14 = (local_14 + -0x30) * 3;
      }
      local_1c = local_1c + local_14;
    }
    cVar1 = local_10[1];
    local_18 = local_18 + 1;
    local_10 = local_10 + 1;
  } while( true );
}



undefined8 entry(ulong param_1)

{
  uint uVar1;
  int local_48;
  char *local_40 [5];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_40[1] = "978-0596528120";
  local_40[0] = "978-0596528126";
  local_40[3] = "978-1788399083";
  local_40[2] = "978-1788399081";
  for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
    _check_isbn13(local_40[local_48]);
    uVar1 = _printf("%s: %s\n");
    param_1 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


