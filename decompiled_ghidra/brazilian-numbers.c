#include "brazilian-numbers.h"



undefined _same_digits(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_1 / param_2;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = param_1 / param_2;
  }
  while( true ) {
    local_8 = iVar2;
    if (local_8 < 1) {
      return 1;
    }
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = local_8 / param_2;
    }
    if (local_8 - iVar2 * param_2 != param_1 - iVar1 * param_2) break;
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = local_8 / param_2;
    }
  }
  return 0;
}



undefined _is_brazilian(int param_1)

{
  char cVar1;
  int local_1c;
  undefined local_11;
  
  if (param_1 < 7) {
    local_11 = 0;
  }
  else if ((param_1 % 2 == 0) && (7 < param_1)) {
    local_11 = 1;
  }
  else {
    for (local_1c = 2; local_1c < param_1 + -1; local_1c = local_1c + 1) {
      cVar1 = _same_digits(param_1,local_1c);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    local_11 = 0;
  }
  return local_11;
}



bool _is_prime(int param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  bool local_1;
  
  local_c = 5;
  if (param_1 < 2) {
    local_1 = false;
  }
  else if (param_1 % 2 == 0) {
    local_1 = param_1 == 2;
  }
  else if (param_1 % 3 == 0) {
    local_1 = param_1 == 3;
  }
  else {
    for (; local_c * local_c <= param_1; local_c = local_c + 6) {
      iVar1 = 0;
      if (local_c != 0) {
        iVar1 = param_1 / local_c;
      }
      if (param_1 == iVar1 * local_c) {
        return false;
      }
      iVar1 = local_c + 2;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = param_1 / iVar1;
      }
      if (param_1 == iVar2 * iVar1) {
        return false;
      }
    }
    local_1 = true;
  }
  return local_1;
}



undefined8 entry(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int local_40;
  int local_3c;
  int local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100004008;
  local_38 = 0;
LAB_100003d18:
  if (2 < local_38) {
    local_40 = 7;
    local_3c = 0;
    while (local_3c < 100000) {
      cVar1 = _is_brazilian(local_40);
      if (cVar1 != '\0') {
        local_3c = local_3c + 1;
      }
      local_40 = local_40 + 1;
    }
    iVar2 = _printf("The 100,000th Brazilian number: %d\n");
    if (*(long *)PTR____stack_chk_guard_100004008 == lVar3) {
      return 0;
    }
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  _printf("First 20%sBrazilian numbers:\n");
  local_3c = 0;
  local_40 = 7;
LAB_100003d5c:
  cVar1 = _is_brazilian(local_40);
  if (cVar1 != '\0') {
    _printf("%d ");
    local_3c = local_3c + 1;
    if (local_3c == 0x14) goto LAB_100003dac;
  }
  if (local_38 == 0) {
    local_40 = local_40 + 1;
  }
  else if (local_38 == 1) {
    local_40 = local_40 + 2;
  }
  else if (local_38 == 2) {
    do {
      local_40 = local_40 + 2;
      cVar1 = _is_prime(local_40);
    } while (cVar1 == '\0');
  }
  goto LAB_100003d5c;
LAB_100003dac:
  _printf("\n\n");
  local_38 = local_38 + 1;
  goto LAB_100003d18;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


