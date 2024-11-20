#include "sum-multiples-of-3-and-5-1.h"



long _sum35(ulong param_1)

{
  ulong local_18;
  long local_10;
  
  local_10 = 0;
  for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
    if ((local_18 % 3 == 0) || (local_18 % 5 == 0)) {
      local_10 = local_10 + local_18;
    }
  }
  return local_10;
}



undefined8 entry(int param_1,long param_2)

{
  ulonglong local_28;
  
  if (param_1 == 2) {
    local_28 = _strtoull(*(char **)(param_2 + 8),(char **)0x0,10);
  }
  else {
    local_28 = 1000;
  }
  _sum35(local_28);
  _printf("%lld\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ulonglong _strtoull(char *param_1,char **param_2,int param_3)

{
  ulonglong uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__strtoull_100004008)(param_1,param_2,param_3);
  return uVar1;
}


