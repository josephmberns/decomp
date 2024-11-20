#include "runge-kutta-method.h"



undefined  [16] _rk4(double param_1,double param_2,double param_3,code *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined auVar5 [16];
  undefined8 uVar6;
  
  dVar1 = (double)(*param_4)(param_2,param_3);
  dVar2 = (double)(*param_4)(param_2 + param_1 / 2.0,param_3 + (param_1 * dVar1) / 2.0);
  dVar3 = (double)(*param_4)(param_2 + param_1 / 2.0,param_3 + (param_1 * dVar2) / 2.0);
  dVar4 = (double)(*param_4)(param_2 + param_1,param_3 + param_1 * dVar3);
  uVar6 = NEON_fmadd(0x4000000000000000,param_1 * dVar2,param_1 * dVar1);
  dVar1 = (double)NEON_fmadd(0x4000000000000000,param_1 * dVar3,uVar6);
  auVar5._0_8_ = param_3 + (dVar1 + param_1 * dVar4) / 6.0;
  auVar5._8_8_ = 0;
  return auVar5;
}



undefined  [16] _rate(double param_1,double param_2)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 * SQRT(param_2);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined8 entry(void)

{
  int iVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  int local_4c;
  
  puVar2 = (undefined8 *)_malloc(0x328);
  *puVar2 = 0x3ff0000000000000;
  for (local_4c = 1; local_4c < 0x65; local_4c = local_4c + 1) {
    uVar4 = NEON_fmadd(0x3fb999999999999a,(double)(local_4c + -1),0);
    uVar4 = _rk4(0x3fb999999999999a,uVar4,puVar2[local_4c + -1],_rate);
    puVar2[local_4c] = uVar4;
  }
  iVar1 = _printf("x\ty\trel. err.\n------------\n");
  local_4c = 0;
  while( true ) {
    if (100 < local_4c) break;
    dVar3 = (double)NEON_fmadd(0x3fb999999999999a,(double)(long)local_4c,0);
    _pow((dVar3 * dVar3) / 4.0 + 1.0,0x4000000000000000,iVar1);
    iVar1 = _printf("%g\t%g\t%g\n");
    local_4c = local_4c + 10;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


