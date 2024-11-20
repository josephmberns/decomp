#include "euler-method-1.h"



int _ivp_euler(undefined8 param_1,code *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_d0;
  int local_2c;
  undefined8 local_20;
  
  local_2c = 0;
  uVar1 = _printf(" Step %2d: ");
  uVar3 = (ulong)uVar1;
  local_20 = param_1;
  do {
    if (local_2c % 10 == 0) {
      uVar1 = _printf(" %7.3f");
      uVar3 = (ulong)uVar1;
    }
    uVar3 = (*param_2)((double)(long)local_2c,local_20,uVar3);
    local_20 = NEON_fmadd((double)(long)param_3,extraout_d0,local_20);
    local_2c = local_2c + param_3;
  } while (local_2c <= param_4);
  iVar2 = _printf("\n");
  return iVar2;
}



int _analytic(void)

{
  int iVar1;
  undefined8 uVar2;
  double local_18;
  
  _printf("    Time: ");
  local_18 = 0.0;
  while( true ) {
    if (100.0 < local_18) break;
    _printf(" %7g");
    local_18 = local_18 + 10.0;
  }
  iVar1 = _printf("\nAnalytic: ");
  local_18 = 0.0;
  while( true ) {
    if (100.0 < local_18) break;
    uVar2 = _exp(local_18 * -0.07,iVar1);
    NEON_fmadd(0x4054000000000000,uVar2,0x4034000000000000);
    iVar1 = _printf(" %7.3f");
    local_18 = local_18 + 10.0;
  }
  iVar1 = _printf("\n");
  return iVar1;
}



undefined  [16] _cooling(undefined param_1 [16],double param_2)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = (param_2 - 20.0) * -0.07;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined4 entry(void)

{
  _analytic();
  _ivp_euler(_cooling,2);
  _ivp_euler(0x4059000000000000,_cooling,5,100);
  _ivp_euler(0x4059000000000000,_cooling,10,100);
  return 0;
}



void _exp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exp_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


