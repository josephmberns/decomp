#include "negative-base-numbers.h"



void _encodeNegativeBase(long param_1,long param_2,char *param_3)

{
  char cVar1;
  long lVar2;
  long local_28;
  char *local_20;
  char *local_18;
  long local_8;
  
  if (((param_2 < 0) && (param_2 + 0x3e < 0 == SCARRY8(param_2,0x3e))) &&
     (local_20 = param_3, local_8 = param_1, param_1 != 0)) {
    while (local_8 != 0) {
      lVar2 = 0;
      if (param_2 != 0) {
        lVar2 = local_8 / param_2;
      }
      local_28 = local_8 - lVar2 * param_2;
      lVar2 = 0;
      if (param_2 != 0) {
        lVar2 = local_8 / param_2;
      }
      local_8 = lVar2;
      if (local_28 < 0) {
        local_8 = lVar2 + 1;
        local_28 = local_28 - param_2;
      }
      *local_20 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[local_28];
      local_20 = local_20 + 1;
    }
    *local_20 = '\0';
    for (local_18 = param_3; local_20 = local_20 + -1, local_18 < local_20; local_18 = local_18 + 1)
    {
      cVar1 = *local_18;
      *local_18 = *local_20;
      *local_20 = cVar1;
    }
  }
  return;
}



long _decodeNegativeBase(char *param_1,long param_2)

{
  char *local_38;
  int local_2c;
  long local_28;
  long local_20;
  long local_8;
  
  if ((param_2 + 0x3e < 0 == SCARRY8(param_2,0x3e)) && (param_2 < 0)) {
    if ((*param_1 == '\0') || ((local_38 = param_1, *param_1 == '0' && (param_1[1] == '\0')))) {
      local_8 = 0;
    }
    else {
      for (; *local_38 != '\0'; local_38 = local_38 + 1) {
      }
      local_20 = 0;
      local_28 = 1;
LAB_100003d04:
      local_38 = local_38 + -1;
      if (param_1 <= local_38) {
        for (local_2c = 0; local_2c < 0x40; local_2c = local_2c + 1) {
          if (*local_38 ==
              "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[local_2c]) {
            local_20 = local_20 + local_2c * local_28;
            local_28 = local_28 * param_2;
            break;
          }
        }
        goto LAB_100003d04;
      }
      local_8 = local_20;
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



void _driver(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined auStack_58 [64];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _encodeNegativeBase(param_1,param_2);
  _printf("%12d encoded in base %3d = %12s\n");
  _decodeNegativeBase(auStack_58,param_2);
  _printf("%12s decoded in base %3d = %12d\n");
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined4 entry(void)

{
  _driver(10,0xfffffffffffffffe);
  _driver(0x92,0xfffffffffffffffd);
  _driver(0xf,0xfffffffffffffff6);
  _driver(0xc,0xffffffffffffffc2);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


