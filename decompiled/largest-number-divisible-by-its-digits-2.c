#include "largest-number-divisible-by-its-digits-2.h"



undefined _div_by_all(ulong param_1,long param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  int local_28;
  int local_20;
  
  local_20 = 0;
  while( true ) {
    if (param_3 <= local_20) {
      return 1;
    }
    local_28 = (int)*(char *)(param_2 + local_20);
    if (local_28 < 0x3a) {
      local_28 = local_28 + -0x30;
    }
    else {
      local_28 = local_28 + -0x57;
    }
    uVar2 = (ulong)local_28;
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = param_1 / uVar2;
    }
    if (param_1 != uVar1 * uVar2) break;
    local_20 = local_20 + 1;
  }
  return 0;
}



undefined8 entry(char *param_1)

{
  uint uVar1;
  long lVar2;
  char *local_80;
  char local_71;
  int local_70;
  int local_6c;
  ulong local_58;
  char acStack_49 [16];
  char acStack_39 [16];
  char local_29 [17];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_58 = 0xfedcba9876273a8;
  do {
    if (local_58 < 0x57fa8) {
LAB_100003f18:
      if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
        return 0;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail(param_1);
    }
    if (local_58 % 0x10 != 0) {
      ___snprintf_chk(local_29,0x11,0,0x11,"%llx");
      param_1 = _strchr(local_29,0x30);
      if ((long)param_1 - (long)local_29 < 0) {
        for (local_6c = 0; local_6c < 0x10; local_6c = local_6c + 1) {
          acStack_49[local_6c] = '\0';
        }
        local_70 = 0;
        for (local_80 = local_29; *local_80 != '\0'; local_80 = local_80 + 1) {
          if (*local_80 < ':') {
            local_71 = *local_80 + -0x30;
          }
          else {
            local_71 = *local_80 + -0x57;
          }
          if (acStack_49[local_71] == '\0') {
            acStack_49[local_71] = '\x01';
            lVar2 = (long)local_70;
            local_70 = local_70 + 1;
            acStack_39[lVar2] = *local_80;
          }
        }
        if (((long)local_70 == (long)local_80 - (long)local_29) &&
           (param_1 = (char *)_div_by_all(local_58,acStack_39,local_70),
           ((ulong)param_1 & 0xff) != 0)) {
          uVar1 = _printf("Largest hex number is %llx\n");
          param_1 = (char *)(ulong)uVar1;
          goto LAB_100003f18;
        }
      }
    }
    local_58 = local_58 - 0x57fa8;
  } while( true );
}



void ___snprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____snprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004020)(param_1,param_2);
  return pcVar1;
}


