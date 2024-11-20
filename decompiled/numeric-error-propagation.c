#include "numeric-error-propagation.h"



undefined  [16] _imprecise_add(double param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 + param_3;
  NEON_fmadd(param_2,param_2,param_4 * param_4);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _imprecise_mul(double param_1,double param_2,double param_3,double param_4)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 * param_3;
  NEON_fmadd(param_1 * param_4,param_1 * param_4,param_3 * param_2 * param_3 * param_2);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _imprecise_div(double param_1,double param_2,double param_3,double param_4)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 / param_3;
  NEON_fmadd(param_1 * param_4,param_1 * param_4,param_3 * param_2 * param_3 * param_2);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _imprecise_pow(undefined8 param_1,undefined param_2 [16],undefined8 param_3)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = _pow(param_1,param_3);
  auVar1._8_8_ = 0;
  return auVar1;
}



void * _printImprecise(undefined8 param_1,undefined8 param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined local_72;
  undefined local_71;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  char acStack_54 [30];
  char acStack_36 [30];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_72 = 0xf1;
  local_71 = 0;
  local_68 = param_1;
  local_60 = param_2;
  ___sprintf_chk();
  ___sprintf_chk(acStack_54,0,0x1e,"%f");
  sVar1 = _strlen(acStack_36);
  sVar2 = _strlen(acStack_54);
  local_70 = _malloc(sVar1 + sVar2 + 2);
  ___strcpy_chk(local_70,acStack_36);
  ___strcat_chk(local_70,&local_72,0xffffffffffffffff);
  ___strcat_chk(local_70,acStack_54,0xffffffffffffffff);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_70;
}



undefined4 entry(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = 0x3ff199999999999a;
  uVar2 = _imprecise_add(0x4059000000000000,0x3ff199999999999a,0xc069000000000000,0x400199999999999a
                        );
  uVar2 = _imprecise_pow(uVar2);
  uVar5 = 0x3ff3333333333333;
  uVar3 = _imprecise_add(0x4049000000000000,0x3ff3333333333333,0xc059000000000000,0x4002666666666666
                        );
  uVar3 = _imprecise_pow(uVar3,uVar5,0x4000000000000000);
  uVar2 = _imprecise_add(uVar2,uVar4,uVar3,uVar5);
  uVar2 = _imprecise_pow(uVar2,uVar4,0x3fe0000000000000);
  iVar1 = _printf("Distance, d, between the following points :");
  _printImprecise(0x4059000000000000,0x3ff199999999999a,iVar1);
  _printImprecise(0x4049000000000000,0x3ff3333333333333);
  iVar1 = _printf("\n( x1, y1) = ( %s, %s)");
  _printImprecise(0xc069000000000000,0x400199999999999a,iVar1);
  _printImprecise(0xc059000000000000,0x4002666666666666);
  iVar1 = _printf("\n( x2, y2) = ( %s, %s)");
  _printImprecise(uVar2,uVar4,iVar1);
  _printf("\nis d = %s");
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004018)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004028)();
  return pvVar1;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004040)();
  return sVar1;
}


