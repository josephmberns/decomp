#include "hailstone-sequence-1.h"



int _hailstone(uint param_1,uint *param_2)

{
  uint local_18;
  int local_14;
  uint *local_10;
  uint local_4;
  
  local_14 = 1;
  local_10 = param_2;
  local_4 = param_1;
  while (local_4 != 1) {
    local_14 = local_14 + 1;
    if (local_10 != (uint *)0x0) {
      *local_10 = local_4;
      local_10 = local_10 + 1;
    }
    if ((local_4 & 1) == 0) {
      local_18 = (int)local_4 / 2;
    }
    else {
      local_18 = local_4 * 3 + 1;
    }
    local_4 = local_18;
  }
  if (local_10 != (uint *)0x0) {
    *local_10 = 1;
  }
  return local_14;
}



undefined8 entry(void)

{
  int iVar1;
  void *pvVar2;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  for (local_18 = 1; local_18 < 100000; local_18 = local_18 + 1) {
    iVar1 = _hailstone(local_18,0);
    if (local_1c < iVar1) {
      local_1c = iVar1;
    }
  }
  iVar1 = _hailstone(0x1b,0);
  pvVar2 = _malloc((long)iVar1 << 2);
  _hailstone(0x1b,pvVar2);
  _printf("[ %d, %d, %d, %d, ...., %d, %d, %d, %d] len=%d\n");
  _printf("Max %d at j= %d\n");
  _free(pvVar2);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


