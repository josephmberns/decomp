#include "square-free-integers.h"



void _sieve(ulong param_1,undefined8 *param_2,long *param_3)

{
  void *pvVar1;
  long local_40;
  long local_38;
  ulong local_30;
  
  pvVar1 = _calloc(param_1 + 1,1);
  *param_2 = 2;
  local_38 = 1;
  local_40 = 3;
  while (local_30 = local_40 * local_40, local_30 <= param_1) {
    for (; local_30 <= param_1; local_30 = local_30 + local_40 * 2) {
      *(undefined *)((long)pvVar1 + local_30) = 1;
    }
    do {
      local_40 = local_40 + 2;
    } while (*(char *)((long)pvVar1 + local_40) != '\0');
  }
  for (local_30 = 3; local_30 <= param_1; local_30 = local_30 + 2) {
    if (*(char *)((long)pvVar1 + local_30) == '\0') {
      param_2[local_38] = local_30;
      local_38 = local_38 + 1;
    }
  }
  *param_3 = local_38;
  _free(pvVar1);
  return;
}



void _squareFree(ulong param_1,ulong param_2,long param_3,long *param_4)

{
  ulong uVar1;
  bool bVar2;
  void *pvVar3;
  double dVar4;
  long local_60;
  ulong local_58;
  ulong local_50;
  long local_48;
  ulong local_40;
  ulong local_38;
  long *local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_60 = 0;
  dVar4 = (double)NEON_ucvtf(param_2);
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  pvVar3 = _malloc(((long)SQRT(dVar4) + 1) * 8);
  _sieve((long)SQRT(dVar4),pvVar3,&local_58);
  local_38 = local_18;
  do {
    if (local_20 < local_38) {
      *local_30 = local_60;
      _free(pvVar3);
      return;
    }
    bVar2 = true;
    for (local_40 = 0; local_40 < local_58; local_40 = local_40 + 1) {
      local_48 = *(long *)((long)pvVar3 + local_40 * 8);
      local_50 = local_48 * local_48;
      if (local_38 < local_50) break;
      uVar1 = 0;
      if (local_50 != 0) {
        uVar1 = local_38 / local_50;
      }
      if (local_38 == uVar1 * local_50) {
        bVar2 = false;
        break;
      }
    }
    if (bVar2) {
      *(ulong *)(local_28 + local_60 * 8) = local_38;
      local_60 = local_60 + 1;
    }
    local_38 = local_38 + 1;
  } while( true );
}



undefined8 entry(void)

{
  ulong local_50;
  void *local_48;
  ulong local_40;
  undefined4 local_34;
  int local_30 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_34 = 0;
  local_48 = _malloc(8000000);
  _printf("Square-free integers from 1 to 145:\n");
  _squareFree(1,0x91,local_48,&local_50);
  for (local_40 = 0; local_40 < local_50; local_40 = local_40 + 1) {
    if ((local_40 != 0) && (local_40 % 0x14 == 0)) {
      _printf("\n");
    }
    _printf("%4lld");
  }
  _printf("\n\nSquare-free integers from %ld to %ld:\n");
  _squareFree(1000000000000,0xe8d4a51091,local_48,&local_50);
  for (local_40 = 0; local_40 < local_50; local_40 = local_40 + 1) {
    if ((local_40 != 0) && (local_40 % 5 == 0)) {
      _printf("\n");
    }
    _printf("%14lld");
  }
  _printf("\n\nNumber of square-free integers:\n");
  local_30[2] = 10000;
  local_30[3] = 100000;
  local_30[0] = 100;
  local_30[1] = 1000;
  local_30[4] = 1000000;
  for (local_40 = 0; local_40 < 5; local_40 = local_40 + 1) {
    _squareFree(1,(long)local_30[local_40],local_48,&local_50);
    _printf("  from %d to %d = %lld\n");
  }
  _free(local_48);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


