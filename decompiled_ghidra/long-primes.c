#include "long-primes.h"



void _sieve(int param_1,long param_2,int *param_3)

{
  void *pvVar1;
  long lVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  pvVar1 = _calloc((long)(param_1 + 1),4);
  local_38 = 3;
  local_40 = 0;
  local_3c = 9;
  while (local_3c <= param_1) {
    for (local_34 = local_3c; local_34 <= param_1; local_34 = local_34 + local_38 * 2) {
      *(undefined4 *)((long)pvVar1 + (long)local_34 * 4) = 1;
    }
    do {
      local_38 = local_38 + 2;
    } while (*(int *)((long)pvVar1 + (long)local_38 * 4) != 0);
    local_3c = local_38 * local_38;
  }
  for (local_34 = 3; local_34 <= param_1; local_34 = local_34 + 2) {
    if (*(int *)((long)pvVar1 + (long)local_34 * 4) == 0) {
      lVar2 = (long)local_40;
      local_40 = local_40 + 1;
      *(int *)(param_2 + lVar2 * 4) = local_34;
    }
  }
  *param_3 = local_40;
  _free(pvVar1);
  return;
}



int _findPeriod(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 1;
  local_14 = 0;
  for (local_8 = 1; iVar1 = local_c, local_8 <= param_1 + 1; local_8 = local_8 + 1) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = (local_c * 10) / param_1;
    }
    local_c = local_c * 10 - iVar1 * param_1;
  }
  do {
    iVar2 = 0;
    if (param_1 != 0) {
      iVar2 = (local_c * 10) / param_1;
    }
    local_c = local_c * 10 - iVar2 * param_1;
    local_14 = local_14 + 1;
  } while (local_c != iVar1);
  return local_14;
}



undefined8 entry(void)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  void *pvVar4;
  long lVar5;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_44 = 0;
  local_50 = 0;
  local_54 = 0;
  local_5c = 0;
  local_40[2] = 2000;
  local_40[3] = 4000;
  local_40[0] = 500;
  local_40[1] = 1000;
  local_40[6] = 32000;
  local_40[7] = 64000;
  local_40[4] = 8000;
  local_40[5] = 16000;
  pvVar2 = _calloc(0x1964,4);
  piVar3 = (int *)_calloc(8,4);
  _sieve(64000,pvVar2,&local_58);
  pvVar4 = _calloc((long)local_58,4);
  for (local_48 = 0; local_48 < local_58; local_48 = local_48 + 1) {
    local_4c = *(int *)((long)pvVar2 + (long)local_48 * 4);
    iVar1 = _findPeriod(local_4c);
    if (iVar1 == local_4c + -1) {
      lVar5 = (long)local_5c;
      local_5c = local_5c + 1;
      *(int *)((long)pvVar4 + lVar5 * 4) = local_4c;
    }
  }
  for (local_48 = 0; local_48 < local_5c; local_48 = local_48 + 1) {
    if (local_40[local_54] < *(int *)((long)pvVar4 + (long)local_48 * 4)) {
      lVar5 = (long)local_54;
      local_54 = local_54 + 1;
      piVar3[lVar5] = local_50;
    }
    local_50 = local_50 + 1;
  }
  piVar3[7] = local_50;
  _printf("The long primes up to %d are:\n");
  _printf("[");
  for (local_48 = 0; local_48 < *piVar3; local_48 = local_48 + 1) {
    _printf("%d ");
  }
  _printf("\b]\n");
  _printf("\nThe number of long primes up to:\n");
  for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
    _printf("  %5d is %d\n");
  }
  _free(piVar3);
  _free(pvVar4);
  _free(pvVar2);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


