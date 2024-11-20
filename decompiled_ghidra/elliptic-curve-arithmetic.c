#include "elliptic-curve-arithmetic.h"



undefined  [16] _zero(void)

{
  return ZEXT816(0x7ff0000000000000);
}



bool _is_zero(double param_1)

{
  return 1e+20 < param_1 || param_1 < -1e+20;
}



undefined  [16] _neg(ulong param_1)

{
  undefined auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined  [16] _dbl(double param_1,double param_2)

{
  int iVar1;
  double dVar2;
  undefined auVar3 [16];
  undefined8 local_20;
  
  iVar1 = _is_zero(param_1,param_2);
  local_20 = param_1;
  if (iVar1 == 0) {
    dVar2 = (param_1 * 3.0 * param_1) / (param_2 * 2.0);
    local_20 = (double)NEON_fnmsub(dVar2,dVar2,param_1 * 2.0);
    NEON_fnmsub(dVar2,param_1 - local_20,param_2);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_20;
  return auVar3;
}



undefined  [16] _add(double param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  double dVar2;
  undefined auVar3 [16];
  double local_20;
  
  if ((param_1 == param_3) && (param_2 == param_4)) {
    local_20 = (double)_dbl(param_1);
  }
  else {
    iVar1 = _is_zero(param_1,param_2);
    local_20 = param_3;
    if ((iVar1 == 0) && (iVar1 = _is_zero(param_3,param_4), local_20 = param_1, iVar1 == 0)) {
      dVar2 = (param_4 - param_2) / (param_3 - param_1);
      local_20 = (double)NEON_fnmsub(dVar2,dVar2,param_1);
      local_20 = local_20 - param_3;
      NEON_fnmsub(dVar2,param_1 - local_20,param_2);
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_20;
  return auVar3;
}



undefined  [16] _mul(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined auVar1 [16];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  local_20 = _zero();
  local_30 = param_1;
  uStack_28 = param_2;
  for (local_38 = 1; (int)local_38 <= (int)param_3; local_38 = local_38 << 1) {
    if ((local_38 & param_3) != 0) {
      local_20 = _add(local_20,uStack_18,local_30,uStack_28);
    }
    local_30 = _dbl(local_30);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  return auVar1;
}



int _show(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = _printf("%s");
  iVar2 = _is_zero(param_1,param_2,iVar2);
  pcVar1 = "Zero\n";
  if (iVar2 == 0) {
    pcVar1 = "(%.3f, %.3f)\n";
  }
  iVar2 = _printf(pcVar1);
  return iVar2;
}



undefined  [16] _from_y(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  uVar1 = NEON_fmadd(param_1,param_1,0xc01c000000000000);
  auVar2._0_8_ = _pow(uVar1,0x3fd5555555555555);
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined4 entry(undefined param_1 [16],undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = _from_y(0x3ff0000000000000);
  uVar6 = param_2;
  uVar2 = _from_y(0x4000000000000000);
  _show(uVar1,param_2,"a = ");
  _show(uVar2,uVar6,"b = ");
  uVar7 = param_2;
  uVar3 = _add(uVar1,param_2,uVar2,uVar6);
  _show(uVar3,uVar7,"c = a + b = ");
  uVar5 = uVar7;
  uVar4 = _neg(uVar3);
  _show(uVar4,uVar5,"d = -c = ");
  uVar3 = _add(uVar3,uVar7,uVar4,uVar5);
  _show(uVar3,uVar7,"c + d = ");
  uVar5 = _add(uVar2,uVar6,uVar4,uVar5);
  uVar7 = param_2;
  uVar6 = _add(uVar1,param_2,uVar5,uVar6);
  _show(uVar6,uVar7,"a + b + d = ");
  uVar6 = _mul(uVar1,0x3039);
  _show(uVar6,param_2,"a * 12345 = ");
  return 0;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


