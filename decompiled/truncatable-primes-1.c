#include "truncatable-primes-1.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _init_primes(void)

{
  bool bVar1;
  int local_18;
  int local_14;
  
  __primes = (undefined *)_malloc(1000000);
  ___memset_chk(__primes,1,1000000,0xffffffffffffffff);
  __primes[1] = 0;
  *__primes = 0;
  local_18 = 2;
  while (local_18 * local_18 < 1000000) {
    for (local_14 = local_18 << 1; local_14 < 1000000; local_14 = local_14 + local_18) {
      __primes[local_14] = 0;
    }
    do {
      local_18 = local_18 + 1;
      bVar1 = false;
      if (local_18 < 1000000) {
        bVar1 = __primes[local_18] == '\0';
      }
    } while (bVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _left_trunc(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  for (local_c = 1; local_8 = param_1, local_c < param_1; local_c = local_c * 10) {
  }
  while( true ) {
    if (local_8 == 0) {
      return 1;
    }
    if (*(char *)(__primes + local_8) == '\0') break;
    local_c = local_c / 10;
    if (local_8 < local_c) {
      return 0;
    }
    iVar1 = 0;
    if (local_c != 0) {
      iVar1 = local_8 / local_c;
    }
    local_8 = local_8 - iVar1 * local_c;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _right_trunc(int param_1)

{
  int local_8;
  
  local_8 = param_1;
  while( true ) {
    if (local_8 == 0) {
      return 1;
    }
    if (*(char *)(__primes + local_8) == '\0') break;
    local_8 = local_8 / 10;
  }
  return 0;
}



undefined8 entry(void)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  local_20 = 0;
  _init_primes();
  local_18 = 999999;
  while (local_1c == 0) {
    iVar1 = _left_trunc(local_18);
    if (iVar1 != 0) {
      local_1c = local_18;
    }
    local_18 = local_18 + -2;
  }
  local_18 = 999999;
  while (local_20 == 0) {
    iVar1 = _right_trunc(local_18);
    if (iVar1 != 0) {
      local_20 = local_18;
    }
    local_18 = local_18 + -2;
  }
  _printf("Left: %d; right: %d\n");
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


