#include "find-the-intersection-of-two-lines.h"



undefined  [16] _lineSlope(double param_1,double param_2,double param_3,double param_4)

{
  undefined auVar1 [16];
  undefined8 local_8;
  
  if (param_1 - param_3 == 0.0) {
    local_8 = NAN;
  }
  else {
    local_8 = (param_2 - param_4) / (param_1 - param_3);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_8;
  return auVar1;
}



undefined  [16] _extractPoint(long param_1)

{
  char *pcVar1;
  undefined auVar2 [16];
  int local_34;
  int local_30;
  int local_2c;
  double local_20;
  
  for (local_2c = 0; *(char *)(param_1 + local_2c) != '\0'; local_2c = local_2c + 1) {
    if (*(char *)(param_1 + local_2c) == '(') {
      local_34 = local_2c;
    }
    if ((*(char *)(param_1 + local_2c) == ',') || (*(char *)(param_1 + local_2c) == ')')) {
      pcVar1 = (char *)_malloc((long)(local_2c - local_34));
      for (local_30 = 0; local_30 < (local_2c - local_34) + -1; local_30 = local_30 + 1) {
        pcVar1[local_30] = *(char *)(param_1 + (local_34 + local_30 + 1));
      }
      pcVar1[local_30] = '\0';
      if (*(char *)(param_1 + local_2c) == ',') {
        local_34 = local_2c;
        local_20 = _atof(pcVar1);
      }
      else {
        _atof(pcVar1);
      }
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_20;
  return auVar2;
}



// WARNING: Removing unreachable block (ram,0x000100003c58)
// WARNING: Removing unreachable block (ram,0x000100003c7c)
// WARNING: Removing unreachable block (ram,0x000100003bc4)
// WARNING: Removing unreachable block (ram,0x000100003be8)
// WARNING: Removing unreachable block (ram,0x000100003b08)
// WARNING: Removing unreachable block (ram,0x000100003b2c)
// WARNING: Removing unreachable block (ram,0x000100003a74)
// WARNING: Removing unreachable block (ram,0x000100003a98)
// WARNING: Removing unreachable block (ram,0x000100003a10)
// WARNING: Removing unreachable block (ram,0x000100003a3c)
// WARNING: Removing unreachable block (ram,0x000100003aa4)
// WARNING: Removing unreachable block (ram,0x000100003ad0)
// WARNING: Removing unreachable block (ram,0x000100003b60)
// WARNING: Removing unreachable block (ram,0x000100003b8c)
// WARNING: Removing unreachable block (ram,0x000100003bf4)
// WARNING: Removing unreachable block (ram,0x000100003c20)
// WARNING: Removing unreachable block (ram,0x000100003a9c)
// WARNING: Removing unreachable block (ram,0x000100003b04)
// WARNING: Removing unreachable block (ram,0x000100003bec)

undefined  [16]
_intersectionPoint(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,undefined8 param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined auVar4 [16];
  undefined8 local_70;
  
  dVar1 = (double)_lineSlope(param_1,param_2,param_3,param_4);
  dVar2 = (double)_lineSlope(param_5,param_6,param_7,param_8);
  if (dVar1 == dVar2) {
    local_70 = NAN;
  }
  else {
    dVar3 = (double)NEON_fnmsub(dVar1,param_1,dVar2 * param_5);
    local_70 = ((dVar3 + param_6) - param_2) / (dVar1 - dVar2);
    NEON_fmadd(dVar2,local_70 - param_5,param_6);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_70;
  return auVar4;
}



// WARNING: Removing unreachable block (ram,0x000100003e5c)
// WARNING: Removing unreachable block (ram,0x000100003e80)
// WARNING: Removing unreachable block (ram,0x000100003df8)
// WARNING: Removing unreachable block (ram,0x000100003e24)
// WARNING: Removing unreachable block (ram,0x000100003e84)

undefined8 entry(undefined param_1 [16],undefined8 param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_3 < 5) {
    _printf("Usage : %s <four points specified as (x,y) separated by a space>");
  }
  else {
    uVar1 = _extractPoint(*(undefined8 *)(param_4 + 8));
    uVar5 = param_2;
    uVar2 = _extractPoint(*(undefined8 *)(param_4 + 0x10));
    uVar6 = uVar5;
    uVar3 = _extractPoint(*(undefined8 *)(param_4 + 0x18));
    uVar7 = uVar6;
    uVar4 = _extractPoint(*(undefined8 *)(param_4 + 0x20));
    _intersectionPoint(uVar1,param_2,uVar2,uVar5,uVar3,uVar6,uVar4,uVar7);
    _printf("Point of intersection : (%lf,%lf)");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__atof_100004000)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


