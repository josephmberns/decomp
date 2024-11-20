#include "entropy-1.h"



int _makehist(long param_1,long param_2,int param_3)

{
  int *piVar1;
  int local_444;
  int local_440;
  int aiStack_428 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_444 = 0;
  for (local_440 = 0; local_440 < 0x100; local_440 = local_440 + 1) {
    aiStack_428[local_440] = -1;
  }
  for (local_440 = 0; local_440 < param_3; local_440 = local_440 + 1) {
    if (aiStack_428[(int)(uint)*(byte *)(param_1 + local_440)] == -1) {
      aiStack_428[(int)(uint)*(byte *)(param_1 + local_440)] = local_444;
      local_444 = local_444 + 1;
    }
    piVar1 = (int *)(param_2 + (long)aiStack_428[(int)(uint)*(byte *)(param_1 + local_440)] * 4);
    *piVar1 = *piVar1 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_444;
}



undefined  [16] _entropy(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  int iVar3;
  undefined8 local_30;
  undefined4 local_24;
  
  local_30 = 0;
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    iVar3 = *(int *)(param_1 + (long)local_24 * 4);
    uVar1 = _log2((double)(long)*(int *)(param_1 + (long)local_24 * 4) / (double)(long)param_3);
    local_30 = NEON_fmsub((double)(long)iVar3 / (double)(long)param_3,uVar1,local_30);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_30;
  return auVar2;
}



undefined8 entry(void)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  char acStack_7c [100];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _scanf("%[^\n]");
  sVar3 = _strlen(acStack_7c);
  pvVar4 = _calloc((long)(int)sVar3,4);
  uVar1 = _makehist(acStack_7c,pvVar4,sVar3 & 0xffffffff);
  _entropy(pvVar4,uVar1,sVar3 & 0xffffffff);
  iVar2 = _printf("%lf\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



void _log2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log2_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}


