#include "exponentiation-operator-1.h"



int _ipow(int param_1,uint param_2)

{
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_14;
  
  local_24 = 1;
  local_20 = param_1;
  local_1c = param_2;
  if ((int)param_2 < 0) {
    if (param_1 == 0) {
                    // WARNING: Subroutine does not return
      ___assert_rtn("ipow","exponentiation-operator-1.c",9,"base != 0");
    }
    if (param_1 * param_1 == 1) {
      local_2c = param_1;
      if ((param_2 & 1) == 0) {
        local_2c = 1;
      }
      local_28 = local_2c;
    }
    else {
      local_28 = 0;
    }
    local_14 = local_28;
  }
  else {
    for (; 0 < (int)local_1c; local_1c = (int)local_1c >> 1) {
      if ((local_1c & 1) != 0) {
        local_24 = local_24 * local_20;
      }
      local_20 = local_20 * local_20;
    }
    local_14 = local_24;
  }
  return local_14;
}



undefined  [16] _dpow(double param_1,uint param_2)

{
  undefined auVar1 [16];
  double local_28;
  double local_20;
  double local_18;
  uint local_c;
  
  local_18 = 1.0;
  local_28 = param_1;
  if ((int)param_2 < 0) {
    local_28 = 1.0 / param_1;
  }
  local_20 = local_28;
  local_c = param_2;
  if ((int)param_2 < 0) {
    local_c = -param_2;
  }
  for (; 0 < (int)local_c; local_c = (int)local_c >> 1) {
    if ((local_c & 1) != 0) {
      local_18 = local_18 * local_20;
    }
    local_20 = local_20 * local_20;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_18;
  return auVar1;
}



undefined8 entry(void)

{
  _ipow();
  _printf("2^6 = %d\n");
  _ipow(2);
  _printf("2^-6 = %d\n");
  _dpow(6);
  _printf("2.71^6 = %lf\n");
  _dpow(0x4005ae147ae147ae,0xfffffffa);
  _printf("2.71^-6 = %lf\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


