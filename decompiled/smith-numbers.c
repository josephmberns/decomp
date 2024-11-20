#include "smith-numbers.h"



int _numPrimeFactors(uint param_1)

{
  uint uVar1;
  int local_10;
  uint local_c;
  uint local_8;
  int local_4;
  
  local_c = 2;
  local_10 = 0;
  local_8 = param_1;
  if (param_1 == 1) {
    local_4 = 1;
  }
  else {
    do {
      while( true ) {
        uVar1 = 0;
        if (local_c != 0) {
          uVar1 = local_8 / local_c;
        }
        if (local_8 == uVar1 * local_c) break;
        local_c = local_c + 1;
      }
      local_10 = local_10 + 1;
      uVar1 = 0;
      if (local_c != 0) {
        uVar1 = local_8 / local_c;
      }
      local_8 = uVar1;
      local_4 = local_10;
    } while (uVar1 != 1);
  }
  return local_4;
}



void _primeFactors(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  int local_18;
  uint local_14;
  uint local_4;
  
  local_14 = 2;
  local_18 = 0;
  local_4 = param_1;
  if (param_1 == 1) {
    *param_2 = 1;
  }
  else {
    do {
      while( true ) {
        uVar1 = 0;
        if (local_14 != 0) {
          uVar1 = local_4 / local_14;
        }
        if (local_4 == uVar1 * local_14) break;
        local_14 = local_14 + 1;
      }
      lVar2 = (long)local_18;
      local_18 = local_18 + 1;
      param_2[lVar2] = local_14;
      uVar1 = 0;
      if (local_14 != 0) {
        uVar1 = local_4 / local_14;
      }
      local_4 = uVar1;
    } while (uVar1 != 1);
  }
  return;
}



int _sumDigits(uint param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  for (local_4 = param_1; local_4 != 0; local_4 = local_4 / 10) {
    local_8 = local_8 + local_4 % 10;
  }
  return local_8;
}



int _sumFactors(long param_1,int param_2)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  
  local_20 = 0;
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    iVar1 = _sumDigits(*(undefined4 *)(param_1 + (long)local_24 * 4));
    local_20 = local_20 + iVar1;
  }
  return local_20;
}



void _listAllSmithNumbers(uint param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint local_24;
  
  for (local_24 = 4; local_24 < param_1; local_24 = local_24 + 1) {
    iVar1 = _numPrimeFactors(local_24);
    pvVar3 = _malloc((long)iVar1 << 2);
    if (1 < iVar1) {
      _primeFactors(local_24,pvVar3);
      iVar2 = _sumDigits(local_24);
      iVar1 = _sumFactors(pvVar3,iVar1);
      if (iVar2 == iVar1) {
        _printf("%4u ");
      }
      _free(pvVar3);
    }
  }
  return;
}



undefined4 entry(void)

{
  _printf("All the Smith Numbers < 10000 are:\n");
  _listAllSmithNumbers(10000);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


