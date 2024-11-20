#include "find-limit-of-recursion-2.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong _get_diff(ulong param_1)

{
  uint uVar1;
  undefined uStack_11;
  
  if (__base - (long)&uStack_11 < 200) {
    uVar1 = _printf("%p %d\n");
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



void _recur(void)

{
  _get_diff();
  _recur();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(void)

{
  int iVar1;
  undefined local_15;
  undefined4 local_14;
  
  local_14 = 0;
  __base = &local_15;
  local_15 = 0x20;
  iVar1 = _printf("pos of v: %p\n");
  _recur(iVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


