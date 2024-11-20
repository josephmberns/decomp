#include "non-continuous-subsequences-2.h"



void _binprint(uint param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int local_48;
  uint local_44;
  char acStack_39 [33];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_48 = 0;
  local_44 = param_2;
  while (local_44 = local_44 >> 1, local_44 != 0) {
    cVar2 = '#';
    if ((param_1 & local_44) == 0) {
      cVar2 = '-';
    }
    lVar3 = (long)local_48;
    local_48 = local_48 + 1;
    acStack_39[lVar3] = cVar2;
  }
  acStack_39[local_48] = '\0';
  iVar1 = _puts(acStack_39);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined8 entry(int param_1,long param_2)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (1 < param_1) {
    uVar1 = _atoi(*(char **)(param_2 + 8));
    local_24 = 1 << (ulong)(uVar1 & 0x1f);
    if (local_24 != 0) goto LAB_100003eb0;
  }
  local_24 = 0x10;
LAB_100003eb0:
  for (local_28 = 2; local_28 < local_24; local_28 = local_28 << 1) {
    for (local_2c = local_28 << 1; local_2c < local_24; local_2c = local_2c | local_2c << 1) {
      for (local_30 = 1; local_30 < local_28; local_30 = local_30 + 1) {
        _binprint(local_2c | local_30,local_24);
      }
    }
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

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004018)((int)param_1);
  return iVar1;
}


