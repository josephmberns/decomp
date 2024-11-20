#include "arithmetic-rational.h"



long _gcd(long param_1,long param_2)

{
  long lVar1;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_1;
  while (local_10 != 0) {
    lVar1 = 0;
    if (local_10 != 0) {
      lVar1 = local_8 / local_10;
    }
    lVar1 = local_8 - lVar1 * local_10;
    local_8 = local_10;
    local_10 = lVar1;
  }
  return local_8;
}



undefined  [16] _frac_new(long param_1,long param_2)

{
  undefined auVar1 [16];
  int iVar2;
  long local_30;
  long local_28;
  
  if (param_2 != 0) {
    iVar2 = _gcd(param_1,param_2);
    if (iVar2 == 0) {
      local_28 = 0;
      local_30 = 1;
    }
    else {
      local_28 = 0;
      if ((long)iVar2 != 0) {
        local_28 = param_1 / (long)iVar2;
      }
      local_30 = 0;
      if ((long)iVar2 != 0) {
        local_30 = param_2 / (long)iVar2;
      }
    }
    if (local_30 < 0) {
      local_30 = -local_30;
      local_28 = -local_28;
    }
    auVar1._8_8_ = local_30;
    auVar1._0_8_ = local_28;
    return auVar1;
  }
  _printf("divide by zero: %lld/%lld\n");
                    // WARNING: Subroutine does not return
  _abort();
}



undefined  [16] _frac_add(long param_1,long param_2,long param_3,long param_4)

{
  undefined auVar1 [16];
  
  auVar1 = _frac_new(param_1 * param_4 + param_3 * param_2,param_2 * param_4);
  return auVar1;
}



undefined  [16] _frac_sub(long param_1,long param_2,long param_3,long param_4)

{
  undefined auVar1 [16];
  
  auVar1 = _frac_new((param_1 * param_4 - param_3) + param_2,param_2 * param_4);
  return auVar1;
}



undefined  [16] _frac_mul(long param_1,long param_2,long param_3,long param_4)

{
  undefined auVar1 [16];
  
  auVar1 = _frac_new(param_1 * param_3,param_2 * param_4);
  return auVar1;
}



undefined  [16] _frac_div(long param_1,long param_2,long param_3,long param_4)

{
  undefined auVar1 [16];
  
  auVar1 = _frac_new(param_1 * param_4,param_2 * param_3);
  return auVar1;
}



uint _frac_cmp(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 local_2c;
  
  if (param_1 * param_4 < param_2 * param_3) {
    local_2c = 0xffffffff;
  }
  else {
    local_2c = (uint)(param_2 * param_3 < param_1 * param_4);
  }
  return local_2c;
}



long _frtoi(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 / param_1;
  }
  return lVar1;
}



undefined  [16] _frtod(long param_1,long param_2)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = (double)param_2 / (double)param_1;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined8 entry(void)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  int local_1c;
  int local_18;
  
  for (local_18 = 2; local_18 < 0x80000; local_18 = local_18 + 1) {
    auVar2 = _frac_new(1,(long)local_18);
    local_1c = 2;
    while( true ) {
      uStack_28 = auVar2._8_8_;
      local_30 = auVar2._0_8_;
      if (local_18 <= local_1c * local_1c) break;
      iVar1 = 0;
      if (local_1c != 0) {
        iVar1 = local_18 / local_1c;
      }
      if (local_18 == iVar1 * local_1c) {
        auVar2 = _frac_new(1,(long)local_1c);
        auVar2 = _frac_add(local_30,uStack_28,auVar2._0_8_,auVar2._8_8_);
        iVar1 = 0;
        if (local_1c != 0) {
          iVar1 = local_18 / local_1c;
        }
        auVar3 = _frac_new(1,(long)iVar1);
        auVar2 = _frac_add(auVar2._0_8_,auVar2._8_8_,auVar3._0_8_,auVar3._8_8_);
      }
      local_1c = local_1c + 1;
    }
    auVar2 = _frac_new(1);
    iVar1 = _frac_cmp(local_30,uStack_28,auVar2._0_8_,auVar2._8_8_);
    if (iVar1 == 0) {
      _printf("%d\n");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__abort_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


