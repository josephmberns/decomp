#include "sailors-coconuts-and-a-monkey-problem-2.h"



int _total(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = param_2 * param_1;
  while( true ) {
    if (param_1 <= local_10) {
      return local_c;
    }
    iVar2 = param_1 + -1;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = local_c / iVar2;
    }
    if (local_c != iVar1 * iVar2) break;
    iVar1 = 0;
    if (param_1 + -1 != 0) {
      iVar1 = local_c / (param_1 + -1);
    }
    local_c = local_c + iVar1 + 1;
    local_10 = local_10 + 1;
  }
  return 0;
}



undefined8 entry(void)

{
  int iVar1;
  int local_1c;
  int local_18;
  
  for (local_18 = 2; local_18 < 10; local_18 = local_18 + 1) {
    local_1c = 1;
    while( true ) {
      iVar1 = _total(local_18,local_1c);
      if (iVar1 != 0) break;
      local_1c = local_1c + 1;
    }
    _printf("%d: %d\t%d\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


