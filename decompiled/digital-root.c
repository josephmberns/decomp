#include "digital-root.h"



int _droot(long param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 local_1c;
  undefined8 local_8;
  
  local_1c = 0;
  if (param_3 == (int *)0x0) {
    if (param_1 != 0) {
      iVar2 = param_2 + -1;
      iVar1 = 0;
      if ((long)iVar2 != 0) {
        iVar1 = (int)(param_1 / (long)iVar2);
      }
      local_1c = (int)param_1 - iVar1 * iVar2;
      if (local_1c == 0) {
        local_1c = param_2 + -1;
      }
    }
  }
  else {
    *param_3 = 0;
    local_8 = param_1;
    while (param_2 <= local_8) {
      local_1c = 0;
      lVar3 = local_8;
      while (local_8 = lVar3, local_8 != 0) {
        iVar1 = 0;
        if ((long)param_2 != 0) {
          iVar1 = (int)(local_8 / (long)param_2);
        }
        local_1c = local_1c + ((int)local_8 - iVar1 * param_2);
        lVar3 = 0;
        if ((long)param_2 != 0) {
          lVar3 = local_8 / (long)param_2;
        }
      }
      local_8 = (long)local_1c;
      *param_3 = *param_3 + 1;
    }
  }
  return local_1c;
}



undefined8 entry(ulong param_1)

{
  uint uVar1;
  undefined local_50 [4];
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined8 local_40 [5];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_44 = 0;
  local_40[1] = 0x99de;
  local_40[0] = 0x9939f;
  local_40[3] = 0x5bb64dfcc1;
  local_40[2] = 0x8f9c1;
  for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
    local_4c = _droot(local_40[local_48],10,local_50);
    uVar1 = _printf("%lld: pers %d, root %d\n");
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
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


