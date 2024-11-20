#include "untouchable-numbers.h"



undefined * _primeSieve(int param_1)

{
  undefined *puVar1;
  int local_1c;
  int local_18;
  
  param_1 = param_1 + 1;
  puVar1 = (undefined *)_calloc((long)param_1,1);
  *puVar1 = 1;
  puVar1[1] = 1;
  for (local_18 = 4; local_18 < param_1; local_18 = local_18 + 2) {
    puVar1[local_18] = 1;
  }
  local_1c = 3;
  while (local_18 = local_1c * local_1c, local_18 < param_1) {
    for (; local_18 < param_1; local_18 = local_18 + local_1c * 2) {
      puVar1[local_18] = 1;
    }
    do {
      local_1c = local_1c + 2;
    } while ((puVar1[local_1c] & 1) != 0);
  }
  return puVar1;
}



undefined8 entry(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 *puVar6;
  long lVar7;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_28 = 2;
  local_2c = 10;
  pvVar3 = (void *)_primeSieve();
  pvVar4 = _calloc(0x3c14dc1,4);
  for (local_1c = 1; local_1c < 0x3c14dc1; local_1c = local_1c + 1) {
    for (local_20 = local_1c; local_20 < 0x3c14dc1; local_20 = local_20 + local_1c) {
      piVar1 = (int *)((long)pvVar4 + (long)local_20 * 4);
      *piVar1 = *piVar1 + local_1c;
    }
  }
  pvVar5 = _calloc(0x3c14dc1,1);
  for (local_1c = 1; local_1c < 0x3c14dc1; local_1c = local_1c + 1) {
    iVar2 = *(int *)((long)pvVar4 + (long)local_1c * 4) - local_1c;
    if (iVar2 < 0x3c14dc2) {
      *(undefined *)((long)pvVar5 + (long)iVar2) = 1;
    }
  }
  _free(pvVar4);
  puVar6 = (undefined4 *)_malloc(0x93760);
  *puVar6 = 2;
  puVar6[1] = 5;
  for (local_24 = 6; local_24 < 0xf4241; local_24 = local_24 + 2) {
    if ((((*(byte *)((long)pvVar5 + (long)local_24) & 1) == 0) &&
        ((*(byte *)((long)pvVar3 + (long)(local_24 + -1)) & 1) != 0)) &&
       ((*(byte *)((long)pvVar3 + (long)(local_24 + -3)) & 1) != 0)) {
      lVar7 = (long)local_28;
      local_28 = local_28 + 1;
      puVar6[lVar7] = local_24;
    }
  }
  _setlocale(4,"");
  _printf("List of untouchable numbers <= 2,000:\n");
  for (local_1c = 0; (local_1c < local_28 && ((int)puVar6[local_1c] < 0x7d1));
      local_1c = local_1c + 1) {
    _printf("%\'6d ");
    if ((local_1c + 1) % 10 == 0) {
      _printf("\n");
    }
  }
  _printf("\n\n%\'7d untouchable numbers were found  <=     2,000\n");
  for (local_1c = 0; local_1c < local_28; local_1c = local_1c + 1) {
    if (local_2c < (int)puVar6[local_1c]) {
      _printf("%\'7d untouchable numbers were found  <= %\'9d\n");
      local_2c = local_2c * 10;
      if (local_2c == 1000000) break;
    }
  }
  _printf("%\'7d untouchable numbers were found  <= %\'d\n");
  _free(pvVar3);
  _free(pvVar5);
  _free(puVar6);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004020)();
  return;
}


