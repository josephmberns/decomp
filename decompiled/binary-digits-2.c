#include "binary-digits-2.h"



undefined4 entry(void)

{
  void *pvVar1;
  ulong local_20;
  
  for (local_20 = 0; local_20 < 0x14; local_20 = local_20 + 1) {
    pvVar1 = (void *)_bin(local_20);
    _printf("%s\n");
    _free(pvVar1);
  }
  return 0;
}



void * _bin(uint param_1)

{
  void *pvVar1;
  undefined uVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_38 = 1.0;
  }
  else {
    uVar4 = NEON_ucvtf((ulong)param_1);
    dVar5 = (double)_log10(uVar4);
    dVar6 = (double)_log10(0x4000000000000000);
    local_38 = dVar5 / dVar6 + 1.0;
  }
  uVar3 = (ulong)local_38;
  pvVar1 = _malloc(uVar3 + 1);
  local_14 = param_1;
  for (local_30 = 0; local_30 < uVar3; local_30 = local_30 + 1) {
    uVar2 = 0x31;
    if ((local_14 & 1) == 0) {
      uVar2 = 0x30;
    }
    *(undefined *)((long)pvVar1 + (uVar3 - local_30) + -1) = uVar2;
    local_14 = local_14 >> 1;
  }
  *(undefined *)((long)pvVar1 + uVar3) = 0;
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



void _log10(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log10_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


