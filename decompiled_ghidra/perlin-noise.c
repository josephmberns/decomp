#include "perlin-noise.h"



undefined  [16] _fade(double param_1)

{
  undefined auVar1 [16];
  double dVar2;
  undefined8 uVar3;
  
  uVar3 = NEON_fmadd(param_1,0x4018000000000000,0xc02e000000000000);
  dVar2 = (double)NEON_fmadd(param_1,uVar3,0x4024000000000000);
  auVar1._0_8_ = param_1 * param_1 * param_1 * dVar2;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _lerp(undefined8 param_1,double param_2,double param_3)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = NEON_fmadd(param_1,param_3 - param_2,param_2);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _grad(double param_1,double param_2,double param_3,uint param_4)

{
  uint uVar1;
  undefined auVar2 [16];
  double local_68;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  
  uVar1 = param_4 & 0xf;
  local_40 = param_2;
  if (uVar1 < 8) {
    local_40 = param_1;
  }
  local_48 = param_2;
  if (3 < uVar1) {
    local_50 = param_1;
    if ((uVar1 != 0xc) && (uVar1 != 0xe)) {
      local_50 = param_3;
    }
    local_48 = local_50;
  }
  if ((param_4 & 1) == 0) {
    local_58 = local_40;
  }
  else {
    local_58 = -local_40;
  }
  if ((param_4 & 2) == 0) {
    local_68 = local_48;
  }
  else {
    local_68 = -local_48;
  }
  auVar2._0_8_ = local_58 + local_68;
  auVar2._8_8_ = 0;
  return auVar2;
}



void _noise(double param_1,double param_2,double param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar2 = (int)param_3 & 0xff;
  dVar6 = param_1 - (double)(long)param_1;
  dVar7 = param_2 - (double)(long)param_2;
  param_3 = param_3 - (double)(long)param_3;
  uVar8 = _fade(dVar6);
  uVar9 = _fade(dVar7);
  uVar10 = _fade(param_3);
  iVar1 = *(int *)(&_p + (long)(int)((int)param_1 & 0xffU) * 4) + ((int)param_2 & 0xffU);
  iVar3 = *(int *)(&_p + (long)iVar1 * 4);
  iVar4 = *(int *)(&_p + (long)(iVar1 + 1) * 4);
  iVar1 = *(int *)(&_p + (long)(int)(((int)param_1 & 0xffU) + 1) * 4) + ((int)param_2 & 0xffU);
  iVar5 = *(int *)(&_p + (long)iVar1 * 4);
  iVar1 = *(int *)(&_p + (long)(iVar1 + 1) * 4);
  uVar11 = _grad(dVar6,dVar7,param_3,*(undefined4 *)(&_p + (long)(int)(iVar3 + uVar2) * 4));
  uVar12 = _grad(dVar6 - 1.0,dVar7,param_3,*(undefined4 *)(&_p + (long)(int)(iVar5 + uVar2) * 4));
  uVar11 = _lerp(uVar8,uVar11,uVar12);
  uVar12 = _grad(dVar6,dVar7 - 1.0,param_3,*(undefined4 *)(&_p + (long)(int)(iVar4 + uVar2) * 4));
  uVar13 = _grad(dVar6 - 1.0,dVar7 - 1.0,param_3,
                 *(undefined4 *)(&_p + (long)(int)(iVar1 + uVar2) * 4));
  uVar12 = _lerp(uVar8,uVar12,uVar13);
  uVar11 = _lerp(uVar9,uVar11,uVar12);
  uVar12 = _grad(dVar6,dVar7,param_3 - 1.0,*(undefined4 *)(&_p + (long)(int)(iVar3 + uVar2 + 1) * 4)
                );
  uVar13 = _grad(dVar6 - 1.0,dVar7,param_3 - 1.0,
                 *(undefined4 *)(&_p + (long)(int)(iVar5 + uVar2 + 1) * 4));
  uVar12 = _lerp(uVar8,uVar12,uVar13);
  uVar13 = _grad(dVar6,dVar7 - 1.0,param_3 - 1.0,
                 *(undefined4 *)(&_p + (long)(int)(iVar4 + uVar2 + 1) * 4));
  uVar14 = _grad(dVar6 - 1.0,dVar7 - 1.0,param_3 - 1.0,
                 *(undefined4 *)(&_p + (long)(int)(iVar1 + uVar2 + 1) * 4));
  uVar8 = _lerp(uVar8,uVar13,uVar14);
  uVar8 = _lerp(uVar9,uVar12,uVar8);
  _lerp(uVar10,uVar11,uVar8);
  return;
}



void _loadPermutation(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  FILE *pFVar3;
  int local_440;
  int local_43c;
  undefined4 auStack_428 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  pFVar3 = _fopen(param_1,"r");
  for (local_43c = 0; local_43c < 0x100; local_43c = local_43c + 1) {
    _fscanf(pFVar3,"%d");
  }
  iVar2 = _fclose(pFVar3);
  for (local_440 = 0; local_440 < 0x100; local_440 = local_440 + 1) {
    uVar1 = auStack_428[local_440];
    *(undefined4 *)(&_p + (long)local_440 * 4) = uVar1;
    *(undefined4 *)(&_p + (long)(local_440 + 0x100) * 4) = uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return;
}



undefined8 entry(int param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_1 == 5) {
    _loadPermutation(*(undefined8 *)(param_2 + 8));
    dVar1 = _strtod(*(char **)(param_2 + 0x10),(char **)0x0);
    dVar2 = _strtod(*(char **)(param_2 + 0x18),(char **)0x0);
    dVar3 = _strtod(*(char **)(param_2 + 0x20),(char **)0x0);
    _noise(dVar1,dVar2,dVar3);
    _printf("Perlin Noise for (%s,%s,%s) is %.17lf");
  }
  else {
    _printf("Usage : %s <permutation data file> <x,y,z co-ordinates separated by space>");
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004018)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _strtod(char *param_1,char **param_2)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__strtod_100004030)();
  return dVar1;
}


