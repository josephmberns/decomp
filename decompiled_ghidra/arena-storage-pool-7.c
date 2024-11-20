#include "arena-storage-pool-7.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __add_mem_entry(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)_mmap(0,0x18,3,0x1002,0xffffffff,0);
  puVar1 = puVar2;
  if (____ALLOCC_TAIL__ != (undefined8 *)0x0) {
    *(undefined8 **)((long)____ALLOCC_TAIL__ + 0x10) = puVar2;
    puVar2 = ____ALLOCC_ROOT__;
    puVar1 = *(undefined8 **)((long)____ALLOCC_TAIL__ + 0x10);
  }
  ____ALLOCC_TAIL__ = puVar1;
  ____ALLOCC_ROOT__ = puVar2;
  *____ALLOCC_TAIL__ = param_1;
  ____ALLOCC_TAIL__[1] = param_2;
  ____ALLOCC_TAIL__[2] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long __remove_mem_entry(long param_1)

{
  long *plVar1;
  long *local_28;
  long local_18;
  
  plVar1 = ____ALLOCC_ROOT__;
  local_28 = ____ALLOCC_ROOT__;
  if (____ALLOCC_ROOT__ == (long *)0x0) {
    local_18 = 0;
  }
  else if (*____ALLOCC_ROOT__ == param_1) {
    local_18 = ____ALLOCC_ROOT__[1];
    if ((long *)____ALLOCC_ROOT__[2] == (long *)0x0) {
      ____ALLOCC_TAIL__ = (long *)0x0;
    }
    ____ALLOCC_ROOT__ = (long *)____ALLOCC_ROOT__[2];
    _munmap(plVar1,0x18);
  }
  else {
    do {
      local_28 = plVar1;
      if (local_28[2] == 0) {
        return 0;
      }
      plVar1 = (long *)local_28[2];
    } while (*plVar1 != param_1);
    local_18 = plVar1[1];
    if ((long *)local_28[2] == ____ALLOCC_TAIL__) {
      ____ALLOCC_TAIL__ = local_28;
    }
    local_28[2] = plVar1[2];
    _munmap(plVar1,0x18);
  }
  return local_18;
}



undefined8 _customMalloc(long param_1)

{
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = _mmap(0,param_1,3,0x1002,0xffffffff,0);
    __add_mem_entry(local_18,param_1);
  }
  return local_18;
}



void _customFree(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __remove_mem_entry(param_1);
  _munmap(param_1,uVar1);
  return;
}



undefined8 entry(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_40;
  int local_3c;
  
  lVar1 = _customMalloc();
  uVar2 = _customMalloc(0x10);
  uVar3 = _customMalloc(0x10);
  if (lVar1 != 0) {
    for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
      *(int *)(lVar1 + (long)local_3c * 4) = local_3c * local_3c;
    }
    for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
      _printf("p1[%d] == %d\n");
    }
  }
  _customFree(lVar1);
  _customFree(uVar2);
  _customFree(uVar3);
  return 0;
}



void _mmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__mmap_100004000)();
  return;
}



void _munmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__munmap_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


