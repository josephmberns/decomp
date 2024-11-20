#include "weird-numbers.h"



undefined  [16] _divisors(int param_1)

{
  int iVar1;
  undefined auVar2 [16];
  undefined4 *puVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_44;
  
  local_50 = 0;
  puVar3 = (undefined4 *)_malloc((ulong)((long)param_1 << 2) / 2);
  pvVar4 = _malloc((ulong)((long)param_1 << 2) / 2);
  local_4c = 1;
  *puVar3 = 1;
  for (local_44 = 2; local_44 * local_44 <= param_1; local_44 = local_44 + 1) {
    iVar1 = 0;
    if (local_44 != 0) {
      iVar1 = param_1 / local_44;
    }
    if (param_1 == iVar1 * local_44) {
      iVar1 = 0;
      if (local_44 != 0) {
        iVar1 = param_1 / local_44;
      }
      lVar6 = (long)local_4c;
      local_4c = local_4c + 1;
      puVar3[lVar6] = local_44;
      if (local_44 != iVar1) {
        lVar6 = (long)local_50;
        local_50 = local_50 + 1;
        *(int *)((long)pvVar4 + lVar6 * 4) = iVar1;
      }
    }
  }
  pvVar5 = _malloc((long)(local_4c + local_50) << 2);
  for (local_54 = 0; local_54 < local_50; local_54 = local_54 + 1) {
    *(undefined4 *)((long)pvVar5 + (long)local_54 * 4) =
         *(undefined4 *)((long)pvVar4 + (long)local_54 * 4);
  }
  for (local_58 = 0; local_58 < local_4c; local_58 = local_58 + 1) {
    *(undefined4 *)((long)pvVar5 + (long)(local_50 + local_58) * 4) =
         puVar3[(local_4c - local_58) + -1];
  }
  _free(puVar3);
  _free(pvVar4);
  auVar2._8_8_ = (long)(local_4c + local_50);
  auVar2._0_8_ = pvVar5;
  return auVar2;
}



bool _abundant(int param_1,long param_2,ulong param_3)

{
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  for (local_1c = 0; (ulong)(long)local_1c < param_3; local_1c = local_1c + 1) {
    local_18 = local_18 + *(int *)(param_2 + (long)local_1c * 4);
  }
  return param_1 < local_18;
}



byte _semiperfect(int param_1,int *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  byte local_4c;
  byte local_11;
  
  if (param_3 == 0) {
    local_11 = 0;
  }
  else {
    iVar1 = *param_2;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    if (param_1 < iVar1) {
      local_11 = _semiperfect(param_1,param_2,param_3);
      local_11 = local_11 & 1;
    }
    else {
      local_4c = 1;
      if (param_1 != iVar1) {
        uVar2 = _semiperfect(param_1 - iVar1,param_2,param_3);
        local_4c = 1;
        if ((uVar2 & 1) == 0) {
          local_4c = _semiperfect(param_1,param_2,param_3);
        }
      }
      local_11 = local_4c & 1;
    }
  }
  return local_11;
}



void * _sieve(int param_1)

{
  void *pvVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  pvVar1 = _calloc((long)param_1,1);
  for (local_34 = 2; local_34 < param_1; local_34 = local_34 + 2) {
    if ((*(byte *)((long)pvVar1 + (long)local_34) & 1) == 0) {
      auVar3 = _divisors(local_34);
      local_30 = auVar3._0_8_;
      uVar2 = _abundant(local_34,local_30,auVar3._8_8_);
      if ((uVar2 & 1) == 0) {
        *(undefined *)((long)pvVar1 + (long)local_34) = 1;
      }
      else {
        uVar2 = _semiperfect(local_34,local_30,auVar3._8_8_);
        if ((uVar2 & 1) != 0) {
          for (local_38 = local_34; local_38 < param_1; local_38 = local_38 + local_34) {
            *(undefined *)((long)pvVar1 + (long)local_38) = 1;
          }
        }
      }
    }
  }
  _free(local_30);
  return pvVar1;
}



undefined8 entry(void)

{
  void *pvVar1;
  int local_2c;
  int local_24;
  
  pvVar1 = (void *)_sieve(17000);
  local_24 = 0;
  _printf("The first 25 weird numbers:\n");
  local_2c = 2;
  while (local_24 < 0x19) {
    if ((*(byte *)((long)pvVar1 + (long)local_2c) & 1) == 0) {
      _printf("%d ");
      local_24 = local_24 + 1;
    }
    local_2c = local_2c + 2;
  }
  _printf("\n");
  _free(pvVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


