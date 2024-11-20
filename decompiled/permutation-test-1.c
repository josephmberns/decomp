#include "permutation-test-1.h"



uint _pick(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_2c;
  uint local_14;
  
  if (param_2 == 0) {
    local_14 = (uint)(param_4 < param_3);
  }
  else {
    iVar1 = _pick(param_1 + -1,param_2 + -1,param_3 + *(int *)(&_data + (long)(param_1 + -1) * 4),
                  param_4);
    if (param_2 < param_1) {
      local_2c = _pick(param_1 + -1,param_2,param_3,param_4);
    }
    else {
      local_2c = 0;
    }
    local_14 = iVar1 + local_2c;
  }
  return local_14;
}



undefined4 entry(void)

{
  int local_1c;
  int local_18;
  
  local_18 = 0;
  for (local_1c = 0; local_1c < 9; local_1c = local_1c + 1) {
    local_18 = local_18 + *(int *)(&_data + (long)local_1c * 4);
  }
  for (local_1c = 0x13; 10 < local_1c; local_1c = local_1c + -1) {
  }
  for (local_1c = 9; 0 < local_1c; local_1c = local_1c + -1) {
  }
  _pick(0x13,9,0,local_18);
  _printf("<= : %f%%  %d\n > : %f%%  %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


