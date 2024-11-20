#include "imaginary-base-numbers.h"



int _find(char *param_1,char param_2)

{
  char *local_20;
  
  local_20 = param_1;
  while( true ) {
    if (*local_20 == '\0') {
      return -1;
    }
    if (*local_20 == param_2) break;
    local_20 = local_20 + 1;
  }
  return (int)local_20 - (int)param_1;
}



void _reverse(undefined *param_1,long param_2)

{
  undefined uVar1;
  undefined *local_10;
  undefined *local_8;
  
  local_10 = (undefined *)(param_2 + -1);
  for (local_8 = param_1; local_8 < local_10; local_8 = local_8 + 1) {
    uVar1 = *local_8;
    *local_8 = *local_10;
    *local_10 = uVar1;
    local_10 = local_10 + -1;
  }
  return;
}



int _printComplex(void)

{
  int iVar1;
  
  iVar1 = _printf("(%3.0f + %3.0fi)");
  return iVar1;
}



undefined  [16] _makeComplex(ulong param_1)

{
  undefined auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined  [16] _addComplex(double param_1,undefined param_2 [16],double param_3)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 + param_3;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _mulComplex(undefined8 param_1,double param_2,double param_3,double param_4)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = NEON_fnmsub(param_1,param_3,param_2 * param_4);
  NEON_fnmsub(param_1,param_4,param_2 * param_3);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _mulComplexD(double param_1,undefined param_2 [16],double param_3)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 * param_3;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _negComplex(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = _mulComplexD(param_1,param_2,0xbff0000000000000);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _divComplex(double param_1,double param_2,undefined8 param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined auVar3 [16];
  
  dVar1 = (double)NEON_fmadd(param_1,param_3,param_2 * param_4);
  NEON_fnmsub(param_2,param_3,param_1 * param_4);
  dVar2 = (double)NEON_fmadd(param_3,param_3,param_4 * param_4);
  auVar3._0_8_ = dVar1 / dVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



undefined  [16] _inv(double param_1,double param_2)

{
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)NEON_fmadd(param_1,param_1,param_2 * param_2);
  auVar2._0_8_ = param_1 / dVar1;
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined  [16] _makeQuaterImaginary(char *param_1)

{
  undefined auVar1 [16];
  ulong local_30;
  int local_28;
  long local_20;
  undefined4 uStack_4;
  
  local_28 = 1;
  local_30 = 0;
  if (*param_1 != '\0') {
    for (local_20 = 0; local_28 = 1, param_1[local_20] != '\0'; local_20 = local_20 + 1) {
      if ((param_1[local_20] < '0') || ('3' < param_1[local_20])) {
        if (param_1[local_20] != '.') {
          local_28 = 0;
          break;
        }
        local_30 = local_30 + 1;
      }
    }
    if ((local_28 != 0) && (1 < local_30)) {
      local_28 = 0;
    }
  }
  auVar1._8_4_ = local_28;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = uStack_4;
  return auVar1;
}



int _printQuaterImaginary(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = _printf(" ERROR  ");
  }
  else {
    iVar1 = _printf("%8s");
  }
  return iVar1;
}



undefined  [16] _qi2c(char *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 uVar5;
  ulong local_e8;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_20;
  undefined8 uStack_18;
  
  sVar2 = _strlen(param_1);
  iVar1 = _find(param_1,0x2e);
  local_e8 = sVar2;
  if (0 < iVar1) {
    local_e8 = (long)iVar1;
  }
  uStack_18 = 0;
  local_20 = _makeComplex(0);
  uStack_58 = 0;
  local_60 = _makeComplex(0x3ff0000000000000);
  for (local_68 = 0; local_68 < local_e8; local_68 = local_68 + 1) {
    if (0.0 < (double)(param_1[(local_e8 - 1) - local_68] + -0x30)) {
      uVar5 = uStack_58;
      uVar3 = _mulComplexD(local_60,uStack_58,(double)(param_1[(local_e8 - 1) - local_68] + -0x30));
      local_20 = _addComplex(local_20,uStack_18,uVar3,uVar5);
    }
    local_60 = _mulComplex(local_60,uStack_58,0,0x4000000000000000);
  }
  if (iVar1 != -1) {
    uStack_58 = 0xbfe0000000000000;
    local_60 = 0;
    while (local_68 = local_e8 + 1, local_68 < sVar2) {
      if (0.0 < (double)(param_1[local_68] + -0x30)) {
        uVar5 = uStack_58;
        uVar3 = _mulComplexD(local_60,uStack_58,(double)(param_1[local_68] + -0x30));
        local_20 = _addComplex(local_20,uStack_18,uVar3,uVar5);
      }
      local_60 = _mulComplex(local_60,uStack_58,0,0xbfe0000000000000);
      local_e8 = local_68;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_20;
  return auVar4;
}



undefined  [16] _c2qi(double param_1,double param_2,char *param_3)

{
  char *pcVar1;
  bool bVar2;
  double dVar3;
  long lVar4;
  undefined auVar5 [16];
  long local_a0;
  int local_94;
  ulong local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  char *local_40;
  
  *param_3 = '\0';
  if ((param_1 == 0.0) && (param_2 == 0.0)) {
    auVar5 = _makeQuaterImaginary("0");
  }
  else {
    local_44 = (int)param_1;
    local_4c = -1;
    local_40 = param_3;
    while (local_44 != 0) {
      local_50 = local_44 % -4;
      local_44 = local_44 / -4;
      if (local_50 < 0) {
        local_50 = local_50 + 4;
        local_44 = local_44 + 1;
      }
      pcVar1 = local_40 + 1;
      *local_40 = (char)local_50 + '0';
      local_40 = local_40 + 2;
      *pcVar1 = '0';
      *local_40 = '\0';
    }
    if ((int)param_2 != 0) {
      local_58 = 1;
      dVar3 = (double)_divComplex(0,param_2,0,0x4000000000000000);
      local_48 = (int)dVar3;
      lVar4 = (long)local_48;
      while (local_48 != 0) {
        local_94 = local_48 % -4;
        local_48 = local_48 / -4;
        if (local_94 < 0) {
          local_94 = local_94 + 4;
          local_48 = local_48 + 1;
        }
        if (local_58 < (ulong)((long)local_40 - (long)param_3)) {
          param_3[local_58] = (char)local_94 + '0';
        }
        else {
          pcVar1 = local_40 + 1;
          *local_40 = '0';
          local_40 = local_40 + 2;
          *pcVar1 = (char)local_94 + '0';
          *local_40 = '\0';
        }
        local_58 = local_58 + 2;
      }
      local_4c = (int)((dVar3 - (double)lVar4) * -4.0);
    }
    _reverse(param_3,local_40);
    if (local_4c != -1) {
      pcVar1 = local_40 + 1;
      *local_40 = '.';
      local_40 = local_40 + 2;
      *pcVar1 = (char)local_4c + '0';
      *local_40 = '\0';
    }
    while( true ) {
      bVar2 = false;
      if (*param_3 == '0') {
        bVar2 = param_3[1] != '.';
      }
      if (!bVar2) break;
      for (local_a0 = 0; param_3[local_a0] != '\0'; local_a0 = local_a0 + 1) {
        param_3[local_a0] = param_3[local_a0 + 1];
      }
    }
    if (*param_3 == '.') {
      _reverse(param_3,local_40);
      *local_40 = '0';
      local_40[1] = '\0';
      _reverse(param_3,local_40 + 1);
    }
    auVar5 = _makeQuaterImaginary(param_3);
  }
  return auVar5;
}



undefined8 entry(void)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  int local_40;
  undefined auStack_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_40 = 1; local_40 < 0x11; local_40 = local_40 + 1) {
    dVar2 = (double)(long)local_40;
    uVar6 = 0;
    auVar8 = _c2qi(dVar2);
    uVar3 = _qi2c(auVar8._0_8_,auVar8._8_8_);
    _printComplex(dVar2,0);
    _printf(" -> ");
    _printQuaterImaginary(auVar8._0_8_,auVar8._8_8_);
    iVar1 = _printf(" -> ");
    _printComplex(uVar3,uVar6,iVar1);
    iVar1 = _printf("     ");
    uVar7 = 0;
    uVar6 = _negComplex(dVar2,iVar1);
    uVar3 = uVar7;
    auVar8 = _c2qi(uVar6,auStack_38);
    uVar4 = _qi2c(auVar8._0_8_,auVar8._8_8_);
    _printComplex(uVar6,uVar7);
    _printf(" -> ");
    _printQuaterImaginary(auVar8._0_8_,auVar8._8_8_);
    iVar1 = _printf(" -> ");
    _printComplex(uVar4,uVar3,iVar1);
    _printf("\n");
  }
  iVar1 = _printf("\n");
  local_40 = 1;
  while( true ) {
    if (0x10 < local_40) break;
    dVar5 = (double)(long)local_40;
    dVar2 = dVar5;
    auVar8 = _c2qi(0);
    uVar3 = _qi2c(auVar8._0_8_,auVar8._8_8_);
    _printComplex(0,dVar5);
    _printf(" -> ");
    _printQuaterImaginary(auVar8._0_8_,auVar8._8_8_);
    iVar1 = _printf(" -> ");
    _printComplex(uVar3,dVar2,iVar1);
    iVar1 = _printf("     ");
    uVar3 = _negComplex(0,iVar1);
    dVar2 = dVar5;
    auVar8 = _c2qi(uVar3,auStack_38);
    uVar6 = _qi2c(auVar8._0_8_,auVar8._8_8_);
    _printComplex(uVar3,dVar5);
    _printf(" -> ");
    _printQuaterImaginary(auVar8._0_8_,auVar8._8_8_);
    iVar1 = _printf(" -> ");
    _printComplex(uVar6,dVar2,iVar1);
    iVar1 = _printf("\n");
    local_40 = local_40 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004018)();
  return sVar1;
}


