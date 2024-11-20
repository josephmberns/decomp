#include "modular-inverse-1.h"



int _mul_inv(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = 0;
  local_20 = 1;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == 1) {
    local_4 = 1;
  }
  else {
    while (1 < local_8) {
      iVar1 = 0;
      if (local_c != 0) {
        iVar1 = local_8 / local_c;
      }
      iVar2 = 0;
      if (local_c != 0) {
        iVar2 = local_8 / local_c;
      }
      iVar2 = local_8 - iVar2 * local_c;
      iVar1 = local_20 - iVar1 * local_1c;
      local_20 = local_1c;
      local_8 = local_c;
      local_1c = iVar1;
      local_c = iVar2;
    }
    if (local_20 < 0) {
      local_20 = local_20 + param_2;
    }
    local_4 = local_20;
  }
  return local_4;
}



undefined4 entry(void)

{
  _mul_inv(0x2a,0x7e1);
  _printf("%d\n");
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


