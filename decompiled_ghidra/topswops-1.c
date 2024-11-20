#include "topswops-1.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _tryswaps(undefined8 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_40 = param_3;
  if (*(uint *)(&_best + (ulong)__n * 4) < __d) {
    *(uint *)(&_best + (ulong)__n * 4) = __d;
  }
  while ((((int)*(char *)((long)param_1 + (ulong)local_40) != local_40 &&
          ((*(char *)((long)param_1 + (ulong)local_40) != -1 ||
           ((param_2 & 1 << (ulong)(local_40 & 0x1f)) != 0)))) ||
         ((__d + *(int *)(&_best + (ulong)local_40 * 4) < *(uint *)(&_best + (ulong)__n * 4) &&
          (*(char *)((long)param_1 + (ulong)local_40) != -1))))) {
    if ((__d + *(int *)(&_best + (ulong)local_40 * 4) <= *(uint *)(&_best + (ulong)__n * 4)) ||
       (local_40 = local_40 - 1, local_40 == 0)) goto LAB_100003e48;
  }
  __d = __d + 1;
  uStack_28 = param_1[1];
  local_30 = *param_1;
  local_48 = 2;
  for (local_44 = 1; local_44 <= local_40; local_44 = local_44 + 1) {
    if (((int)*(char *)((long)param_1 + (ulong)local_44) == local_44) ||
       ((*(char *)((long)param_1 + (ulong)local_44) == -1 && ((param_2 & local_48) == 0)))) {
      local_30 = CONCAT71(local_30._1_7_,(char)local_44);
      local_4c = (int)(char)local_44;
      while (uVar1 = local_4c - 1, local_4c != 0) {
        *(undefined *)((long)&local_30 + (ulong)(local_44 - uVar1)) =
             *(undefined *)((long)param_1 + (ulong)uVar1);
        local_4c = uVar1;
      }
      _tryswaps(&local_30,param_2 | local_48,local_40);
    }
    local_48 = local_48 << 1;
  }
  __d = __d - 1;
LAB_100003e48:
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(ulong param_1)

{
  uint uVar1;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_20 = 0xffffffffffffffff;
  local_28 = 0xffffffffffffff00;
  for (__n = 1; __n < 0xd; __n = __n + 1) {
    _tryswaps(&local_28,1,__n - 1);
    uVar1 = _printf("%2d: %d\n");
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
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


