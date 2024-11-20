#include "sailors-coconuts-and-a-monkey-problem-1.h"



bool _valid(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int local_10;
  int local_c;
  
  local_10 = param_1;
  local_c = param_2;
  while( true ) {
    if (local_10 == 0) {
      bVar2 = false;
      if (local_c != 0) {
        iVar1 = 0;
        if (param_1 != 0) {
          iVar1 = local_c / param_1;
        }
        bVar2 = local_c == iVar1 * param_1;
      }
      return bVar2;
    }
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = local_c / param_1;
    }
    if (local_c - iVar1 * param_1 != 1) break;
    local_10 = local_10 + -1;
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = local_c / param_1;
    }
    local_c = local_c - (iVar1 + 1);
  }
  return false;
}



undefined8 entry(void)

{
  int iVar1;
  int local_1c;
  int local_18;
  
  for (local_18 = 2; local_18 < 10; local_18 = local_18 + 1) {
    local_1c = 0;
    while (iVar1 = _valid(local_18,local_1c), iVar1 == 0) {
      local_1c = local_1c + 1;
    }
    _printf("%d: %d\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


