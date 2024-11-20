#include "combinations-2.h"



ulong _comb(ulong param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_24;
  
  iVar3 = (int)param_1;
  for (local_24 = 0; iVar2 = param_2, local_24 < param_2; local_24 = local_24 + 1) {
    param_3[local_24] = (char)param_2 - (char)local_24;
  }
  do {
    do {
      while (local_24 = iVar2, local_24 != 0) {
        uVar4 = _printf("%d%c");
        param_1 = (ulong)uVar4;
        iVar2 = local_24 + -1;
      }
      local_24 = 0;
      bVar1 = *param_3;
      *param_3 = bVar1 + 1;
      iVar2 = param_2;
    } while ((int)(uint)bVar1 < iVar3);
    while (iVar3 - local_24 <= (int)(uint)param_3[local_24]) {
      local_24 = local_24 + 1;
      if (param_2 <= local_24) {
        return param_1;
      }
    }
    param_3[local_24] = param_3[local_24] + 1;
    for (; iVar2 = param_2, local_24 != 0; local_24 = local_24 + -1) {
      param_3[local_24 + -1] = param_3[local_24] + 1;
    }
  } while( true );
}



undefined8 entry(void)

{
  undefined auStack_7c [100];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _comb(5,3,auStack_7c);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


