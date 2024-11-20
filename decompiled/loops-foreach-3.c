#include "loops-foreach-3.h"



void entry(void)

{
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)PTR____stack_chk_guard_100004000;
  uStack_28 = 0x300000002;
  local_30 = 0x100000001;
  local_20 = 0x800000005;
  uStack_48 = 0x100000004;
  local_50 = 0x100000003;
  local_40 = 0x900000005;
  for (local_68 = &local_30; local_68 < &local_18; local_68 = (undefined8 *)((long)local_68 + 4)) {
    _printf("loop 1 %d\n");
  }
  for (local_70 = &local_50; local_70 < &uStack_38; local_70 = (undefined8 *)((long)local_70 + 4)) {
    _printf("loop 2 %d\n");
  }
                    // WARNING: Subroutine does not return
  _exit(0);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004008)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


