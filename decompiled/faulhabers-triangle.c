#include "faulhabers-triangle.h"



int _binomial(int param_1,int param_2)

{
  int local_18;
  int local_14;
  int local_10;
  int local_4;
  
  if (((param_1 < 0) || (param_2 < 0)) || (param_1 < param_2)) {
    local_4 = -1;
  }
  else if ((param_1 == 0) || (param_2 == 0)) {
    local_4 = 1;
  }
  else {
    local_10 = 1;
    for (local_18 = param_2 + 1; local_18 <= param_1; local_18 = local_18 + 1) {
      local_10 = local_10 * local_18;
    }
    local_14 = 1;
    for (local_18 = 2; local_18 <= param_1 - param_2; local_18 = local_18 + 1) {
      local_14 = local_14 * local_18;
    }
    local_4 = 0;
    if (local_14 != 0) {
      local_4 = local_10 / local_14;
    }
  }
  return local_4;
}



int _gcd(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_2;
  local_4 = param_1;
  while (local_8 != 0) {
    iVar1 = 0;
    if (local_8 != 0) {
      iVar1 = local_4 / local_8;
    }
    iVar1 = local_4 - iVar1 * local_8;
    local_4 = local_8;
    local_8 = iVar1;
  }
  return local_4;
}



undefined8 _makeFrac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_2 == 0) {
    local_18 = 0;
    uStack_14 = 0;
  }
  else {
    local_1c = param_1;
    if (param_1 == 0) {
      local_20 = 1;
    }
    else {
      local_20 = param_2;
      if (param_2 < 0) {
        local_1c = -param_1;
        local_20 = -param_2;
      }
    }
    iVar2 = _gcd(local_1c,local_20);
    iVar3 = _abs(iVar2);
    iVar2 = local_20;
    if (1 < iVar3) {
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = local_1c / iVar3;
      }
      iVar2 = 0;
      local_1c = iVar1;
      if (iVar3 != 0) {
        iVar2 = local_20 / iVar3;
      }
    }
    local_20 = iVar2;
    local_18 = local_1c;
    uStack_14 = local_20;
  }
  return CONCAT44(uStack_14,local_18);
}



undefined8 _negateFrac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (int)param_1;
  uStack_1c = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = _makeFrac(-local_20,uStack_1c);
  return uVar1;
}



undefined8 _subFrac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (int)param_1;
  uStack_24 = (int)((ulong)param_2 >> 0x20);
  uStack_1c = (int)((ulong)param_1 >> 0x20);
  local_28 = (int)param_2;
  uVar1 = _makeFrac(local_20 * uStack_24 - uStack_1c * local_28,uStack_24 * uStack_1c);
  return uVar1;
}



undefined8 _multFrac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (int)param_1;
  local_28 = (int)param_2;
  uStack_1c = (int)((ulong)param_1 >> 0x20);
  uStack_24 = (int)((ulong)param_2 >> 0x20);
  uVar1 = _makeFrac(local_20 * local_28,uStack_1c * uStack_24);
  return uVar1;
}



bool _equalFrac(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = (int)param_1;
  local_10 = (int)param_2;
  bVar1 = false;
  if (local_8 == local_10) {
    uStack_4 = (int)((ulong)param_1 >> 0x20);
    uStack_c = (int)((ulong)param_2 >> 0x20);
    bVar1 = uStack_4 == uStack_c;
  }
  return bVar1;
}



bool _lessFrac(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = (int)param_1;
  uStack_c = (int)((ulong)param_2 >> 0x20);
  local_10 = (int)param_2;
  uStack_4 = (int)((ulong)param_1 >> 0x20);
  return local_8 * uStack_c < local_10 * uStack_4;
}



int _printFrac(undefined8 param_1)

{
  int iVar1;
  size_t sVar2;
  int local_24;
  char acStack_1f [7];
  undefined8 local_18;
  
  local_18._4_4_ = (int)((ulong)param_1 >> 0x20);
  local_18 = param_1;
  if (local_18._4_4_ == 1) {
    ___snprintf_chk(acStack_1f,7,0,7,"%d");
  }
  else {
    ___snprintf_chk(acStack_1f,7,0,7,"%d/%d");
  }
  sVar2 = _strlen(acStack_1f);
  local_24 = 7 - (int)sVar2;
  while( true ) {
    if (local_24 < 1) break;
    _putc(0x20,*(FILE **)PTR____stdoutp_100004018);
    local_24 = local_24 + -1;
  }
  iVar1 = _printf(acStack_1f);
  return iVar1;
}



undefined8 _bernoulli(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_bc;
  int local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  if (param_1 < 0) {
    local_a8 = 0;
    uStack_a4 = 0;
    local_b0 = 0;
  }
  else {
    for (local_bc = 0; local_bc <= param_1; local_bc = local_bc + 1) {
      uVar1 = _makeFrac(1,local_bc + 1);
      *(undefined8 *)(&local_a8 + (long)local_bc * 2) = uVar1;
      for (local_b8 = local_bc; 0 < local_b8; local_b8 = local_b8 + -1) {
        uVar1 = _subFrac(*(undefined8 *)(&local_a8 + (long)(local_b8 + -1) * 2),
                         *(undefined8 *)(&local_a8 + (long)local_b8 * 2));
        uVar2 = _makeFrac(local_b8,1);
        uVar1 = _multFrac(uVar1,uVar2);
        *(undefined8 *)(&local_a8 + (long)(local_b8 + -1) * 2) = uVar1;
      }
    }
    if (param_1 == 1) {
      local_b0 = _negateFrac(CONCAT44(uStack_a4,local_a8));
    }
    else {
      local_b0 = CONCAT44(uStack_a4,local_a8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_b0;
}



void _faulhaber(int param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_30;
  int local_2c;
  
  pvVar1 = _malloc((long)(param_1 + 1) * 8);
  uVar2 = _makeFrac(1,param_1 + 1);
  local_30 = -1;
  for (local_2c = 0; local_2c <= param_1; local_2c = local_2c + 1) {
    local_30 = -local_30;
    uVar3 = _makeFrac(local_30);
    uVar3 = _multFrac(uVar2,uVar3);
    uVar4 = _binomial(param_1 + 1,local_2c);
    uVar4 = _makeFrac(uVar4,1);
    uVar3 = _multFrac(uVar3,uVar4);
    uVar4 = _bernoulli(local_2c);
    uVar3 = _multFrac(uVar3,uVar4);
    *(undefined8 *)((long)pvVar1 + (long)(param_1 - local_2c) * 8) = uVar3;
  }
  for (local_2c = 0; local_2c <= param_1; local_2c = local_2c + 1) {
    _printFrac(*(undefined8 *)((long)pvVar1 + (long)local_2c * 8));
  }
  _printf("\n");
  _free(pvVar1);
  return;
}



undefined8 entry(void)

{
  undefined4 local_18;
  
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    _faulhaber(local_18);
  }
  return 0;
}



void ___snprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____snprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _abs(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__abs_100004020)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putc(int param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putc_100004040)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004048)();
  return sVar1;
}


