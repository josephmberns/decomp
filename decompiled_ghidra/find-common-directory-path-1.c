#include "find-common-directory-path-1.h"



int _common_len(long *param_1,int param_2,char param_3)

{
  bool bVar1;
  int local_18;
  int local_14;
  
  local_18 = 0;
  do {
    for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
      if ((*(char *)(param_1[local_14] + (long)local_18) == '\0') ||
         (*(char *)(param_1[local_14] + (long)local_18) != *(char *)(*param_1 + (long)local_18))) {
        do {
          bVar1 = false;
          if (0 < local_18) {
            local_18 = local_18 + -1;
            bVar1 = *(char *)(*param_1 + (long)local_18) != param_3;
          }
        } while (bVar1);
        return local_18;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}



undefined8 entry(void)

{
  int iVar1;
  char *local_30;
  char *pcStack_28;
  char *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pcStack_28 = "/home/user1/tmp/covert/operator";
  local_30 = "/home/user1/tmp/coverage/test";
  local_20 = "/home/user1/tmp/coven/members";
  iVar1 = _common_len(&local_30,3,0x2f);
  if (iVar1 == 0) {
    iVar1 = _printf("No common path\n");
  }
  else {
    iVar1 = _printf("Common path: %.*s\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


