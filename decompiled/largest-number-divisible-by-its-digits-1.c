#include "largest-number-divisible-by-its-digits-1.h"



undefined8 entry(void)

{
  int iVar1;
  int iVar2;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  char acStack_3a [10];
  int local_30 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_44 = 0x96b3d0;
  local_30[2] = 2;
  local_30[3] = 2;
  local_30[0] = 4;
  local_30[1] = 2;
  local_50 = 0;
LAB_100003d68:
  do {
    ___snprintf_chk(acStack_3a,10,0,10,"%d");
    local_48 = 0;
    while( true ) {
      if (acStack_3a[local_48 + 1] == '\0') {
        iVar2 = _printf("Number found : %d");
        if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
          return 0;
        }
                    // WARNING: Subroutine does not return
        ___stack_chk_fail(iVar2);
      }
      if ((acStack_3a[local_48] == '0') || (acStack_3a[local_48] == '5')) break;
      iVar1 = acStack_3a[local_48] + -0x30;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = local_44 / iVar1;
      }
      local_4c = local_48;
      if (local_44 != iVar2 * iVar1) break;
      while (local_4c = local_4c + 1, acStack_3a[local_4c] != '\0') {
        if (acStack_3a[local_48] == acStack_3a[local_4c]) {
          local_44 = local_44 - local_30[local_50];
          local_50 = (local_50 + 1) % 4;
          goto LAB_100003d68;
        }
      }
      local_48 = local_48 + 1;
    }
    local_44 = local_44 - local_30[local_50];
    local_50 = (local_50 + 1) % 4;
  } while( true );
}



void ___snprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____snprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


