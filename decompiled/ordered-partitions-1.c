#include "ordered-partitions-1.h"



undefined4 _next_perm(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *local_20;
  int *local_18;
  undefined4 local_4;
  
  local_20 = param_2 + (long)param_1 + -2;
  while( true ) {
    bVar1 = false;
    if (param_2 <= local_20) {
      bVar1 = local_20[1] <= *local_20;
    }
    if (!bVar1) break;
    local_20 = local_20 + -1;
  }
  if (local_20 < param_2) {
    local_4 = 0;
  }
  else {
    local_18 = param_2 + param_1;
    do {
      local_18 = local_18 + -1;
    } while (*local_18 <= *local_20);
    iVar2 = *local_20;
    *local_20 = *local_18;
    *local_18 = iVar2;
    local_18 = param_2 + param_1;
    while( true ) {
      local_18 = local_18 + -1;
      local_20 = local_20 + 1;
      if (local_18 <= local_20) break;
      iVar2 = *local_20;
      *local_20 = *local_18;
      *local_18 = iVar2;
    }
    local_4 = 1;
  }
  return local_4;
}



void _make_part(void)

{
  int iVar1;
  int iVar2;
  long extraout_x1;
  int local_104c;
  int *local_1048;
  int local_1040;
  int local_103c;
  int local_1028 [1024];
  long local_28;
  
  iVar1 = (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_104c = 0;
  local_1048 = local_1028;
  for (local_103c = 0; local_103c < iVar1; local_103c = local_103c + 1) {
    local_1040 = 0;
    local_104c = local_104c + *(int *)(extraout_x1 + (long)local_103c * 4);
    while (local_1040 < *(int *)(extraout_x1 + (long)local_103c * 4)) {
      local_1040 = local_1040 + 1;
      *local_1048 = local_103c;
      local_1048 = local_1048 + 1;
    }
  }
  do {
    for (local_103c = 0; local_103c < iVar1; local_103c = local_103c + 1) {
      _printf(" { ");
      for (local_1040 = 0; local_1040 < local_104c; local_1040 = local_1040 + 1) {
        if (local_1028[local_1040] == local_103c) {
          _printf("%d ");
        }
      }
      _printf("}");
    }
    _printf("\n");
    iVar2 = _next_perm(local_104c,local_1028);
  } while (iVar2 != 0);
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(void)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_28 = 2;
  local_20 = 2;
  uStack_38 = 0x400000003;
  local_40 = 0x200000001;
  _printf("Part 2 0 2:\n");
  _make_part(3,&local_28);
  _printf("\nPart 1 2 3 4:\n");
  _make_part(4,&local_40);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 1;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


