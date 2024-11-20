#include "van-der-corput-sequence.h"



void _vc(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_4;
  
  local_1c = 0;
  local_20 = 1;
  iVar2 = param_1;
  while (local_4 = iVar2, local_4 != 0) {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = local_4 / param_2;
    }
    local_1c = local_1c * param_2 + (local_4 - iVar2 * param_2);
    local_20 = local_20 * param_2;
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = local_4 / param_2;
    }
  }
  *param_3 = local_1c;
  *param_4 = local_20;
  while (local_1c != 0) {
    iVar2 = 0;
    if (local_1c != 0) {
      iVar2 = local_20 / local_1c;
    }
    iVar1 = local_1c;
    local_1c = local_20 - iVar2 * local_1c;
    local_20 = iVar1;
  }
  iVar2 = 0;
  if (local_20 != 0) {
    iVar2 = *param_3 / local_20;
  }
  *param_3 = iVar2;
  iVar2 = 0;
  if (local_20 != 0) {
    iVar2 = *param_4 / local_20;
  }
  *param_4 = iVar2;
  return;
}



undefined8 entry(void)

{
  int local_24;
  int local_20;
  int local_1c;
  undefined local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  for (local_24 = 2; local_24 < 6; local_24 = local_24 + 1) {
    _printf("base %d:");
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      _vc(local_20,local_24,&local_1c,local_18);
      if (local_1c == 0) {
        _printf("  0");
      }
      else {
        _printf("  %d/%d");
      }
    }
    _printf("\n");
  }
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


