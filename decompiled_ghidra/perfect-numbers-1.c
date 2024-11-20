#include "perfect-numbers-1.h"



bool _perfect(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 1;
  for (local_10 = 2; local_10 < (int)SQRT((double)(long)param_1) + 1; local_10 = local_10 + 1) {
    iVar1 = 0;
    if (local_10 != 0) {
      iVar1 = param_1 / local_10;
    }
    if (param_1 == iVar1 * local_10) {
      local_c = local_c + local_10;
      iVar1 = 0;
      if (local_10 != 0) {
        iVar1 = param_1 / local_10;
      }
      if (local_10 < iVar1) {
        local_c = local_c + iVar1;
      }
    }
  }
  return local_c == param_1;
}



undefined8 entry(void)

{
  int iVar1;
  int local_18;
  
  for (local_18 = 2; local_18 < 0x1fff001; local_18 = local_18 + 1) {
    iVar1 = _perfect(local_18);
    if (iVar1 != 0) {
      _printf("%d\n");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


