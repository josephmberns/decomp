#include "continued-fraction.h"



undefined  [16] _calc(code *param_1,code *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  undefined auVar3 [16];
  undefined4 local_44;
  undefined8 local_40;
  
  local_40 = 0.0;
  for (local_44 = param_3; local_44 != 0; local_44 = local_44 + -1) {
    dVar1 = (double)(*param_1)(local_44);
    dVar2 = (double)(*param_2)(local_44);
    local_40 = dVar2 / (dVar1 + local_40);
  }
  dVar1 = (double)(*param_1)(0);
  auVar3._0_8_ = dVar1 + local_40;
  auVar3._8_8_ = 0;
  return auVar3;
}



undefined  [16] _sqrt2_a(int param_1)

{
  ulong uVar1;
  undefined auVar2 [16];
  
  uVar1 = 0x4000000000000000;
  if (param_1 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



undefined  [16] _sqrt2_b(void)

{
  return ZEXT816(0x3ff0000000000000);
}



undefined  [16] _napier_a(uint param_1)

{
  undefined auVar1 [16];
  undefined8 local_10;
  
  if (param_1 == 0) {
    local_10 = 0x4000000000000000;
  }
  else {
    local_10 = NEON_ucvtf((ulong)param_1);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_10;
  return auVar1;
}



undefined  [16] _napier_b(uint param_1)

{
  double dVar1;
  undefined auVar2 [16];
  undefined8 local_10;
  
  dVar1 = (double)NEON_ucvtf((ulong)param_1);
  if (dVar1 <= 1.0) {
    local_10 = 1.0;
  }
  else {
    local_10 = (double)NEON_ucvtf((ulong)param_1);
    local_10 = local_10 - 1.0;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_10;
  return auVar2;
}



undefined  [16] _pi_a(int param_1)

{
  ulong uVar1;
  undefined auVar2 [16];
  
  uVar1 = 0x4018000000000000;
  if (param_1 == 0) {
    uVar1 = 0x4008000000000000;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



undefined  [16] _pi_b(uint param_1)

{
  double dVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  
  uVar3 = NEON_ucvtf((ulong)param_1);
  dVar1 = (double)NEON_fmadd(0x4000000000000000,uVar3,0xbff0000000000000);
  auVar2._0_8_ = dVar1 * dVar1;
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined4 entry(void)

{
  _calc(_sqrt2_a,_sqrt2_b);
  _calc(_napier_a,_napier_b,1000);
  _calc(_pi_a,_pi_b,1000);
  _printf("%12.10g\n%12.10g\n%12.10g\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


