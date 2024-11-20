#include "disarium-numbers.h"



int _power(int param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 1;
  for (local_10 = 1; local_10 <= param_2; local_10 = local_10 + 1) {
    local_c = local_c * param_1;
  }
  return local_c;
}



bool _is_disarium(int param_1)

{
  int iVar1;
  double dVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0;
  if (param_1 < 10) {
    local_28 = 1.0;
  }
  else {
    dVar2 = (double)_log10((double)(long)param_1);
    local_28 = (double)(long)dVar2 + 1.0;
  }
  local_20 = (int)local_28;
  for (local_18 = param_1; 0 < local_18; local_18 = local_18 / 10) {
    iVar1 = _power(local_18 % 10,local_20);
    local_1c = local_1c + iVar1;
    local_20 = local_20 + -1;
  }
  return param_1 == local_1c;
}



undefined4 entry(void)

{
  int iVar1;
  int local_1c;
  int local_18;
  
  local_18 = 0;
  local_1c = 0;
  while (local_18 < 0x13) {
    iVar1 = _is_disarium(local_1c);
    if (iVar1 != 0) {
      _printf("%d ");
      local_18 = local_18 + 1;
    }
    local_1c = local_1c + 1;
  }
  _printf("%s\n");
  return 0;
}



void _log10(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log10_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


