#include "modular-inverse-2.h"



int _mul_inv(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_2;
  if (param_2 < 0) {
    local_c = -param_2;
  }
  local_8 = param_1;
  if (param_1 < 0) {
    iVar2 = 0;
    if (local_c != 0) {
      iVar2 = -param_1 / local_c;
    }
    local_8 = local_c - (-param_1 - iVar2 * local_c);
  }
  local_10 = 0;
  local_14 = 1;
  local_18 = local_c;
  iVar2 = 0;
  if (local_c != 0) {
    iVar2 = local_8 / local_c;
  }
  local_1c = local_8 - iVar2 * local_c;
  while (local_1c != 0) {
    iVar2 = 0;
    if (local_1c != 0) {
      iVar2 = local_18 / local_1c;
    }
    iVar3 = local_10 - iVar2 * local_14;
    local_10 = local_14;
    iVar1 = local_1c;
    local_1c = local_18 - iVar2 * local_1c;
    local_18 = iVar1;
    local_14 = iVar3;
  }
  if (local_18 < 2) {
    if (local_10 < 0) {
      local_10 = local_10 + local_c;
    }
    local_4 = local_10;
  }
  else {
    local_4 = -1;
  }
  return local_4;
}



undefined4 entry(void)

{
  _mul_inv(0x2a,0x7e1);
  _printf("%d\n");
  _mul_inv(0x28,1);
  _printf("%d\n");
  _mul_inv(0x34,0xffffff27);
  _printf("%d\n");
  _mul_inv(0xfffffe1a,0xd9);
  _printf("%d\n");
  _mul_inv(0x28,0x7e2);
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


