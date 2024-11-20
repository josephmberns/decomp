#include "ackermann-function-2.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _ackermann(int param_1,int param_2)

{
  undefined8 uVar1;
  int local_24;
  int local_20;
  int local_14;
  
  if (param_1 == 0) {
    local_14 = param_2 + 1;
  }
  else {
    if (param_2 < 1 << (ulong)(__n_bits & 0x1f)) {
      local_20 = (param_1 << (ulong)(__n_bits & 0x1f)) + param_2;
      if (*(int *)(__cache + (long)local_20 * 4) != 0) {
        return *(int *)(__cache + (long)local_20 * 4);
      }
    }
    else {
      _printf("%d, %d\n");
      local_20 = 0;
    }
    if (param_2 == 0) {
      local_24 = _ackermann(param_1 + -1,1);
    }
    else {
      uVar1 = _ackermann(param_1,param_2 + -1);
      local_24 = _ackermann(param_1 + -1,uVar1);
    }
    if (local_20 != 0) {
      *(int *)(__cache + (long)local_20 * 4) = local_24;
    }
    local_14 = local_24;
  }
  return local_14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

undefined8 entry(void)

{
  int local_1c;
  int local_18;
  
  __m_bits = 3;
  __n_bits = 0x14;
  __cache = _malloc(0x2000000);
  ___memset_chk(__cache,0,(long)(1 << (ulong)(__m_bits + __n_bits & 0x1f)) * 4,0xffffffffffffffff);
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < 6 - local_18; local_1c = local_1c + 1) {
      _ackermann(local_18,local_1c);
      _printf("A(%d, %d) = %d\n");
    }
  }
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


