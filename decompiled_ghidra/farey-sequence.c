#include "farey-sequence.h"



int _farey(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  _printf("%d/%d %d/%d");
  iVar1 = param_1;
  iVar3 = 1;
  while (iVar2 = iVar1, 1 < iVar2) {
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = (param_1 + iVar3) / iVar2;
    }
    _printf(" %d/%d");
    iVar1 = iVar2 * iVar1 - iVar3;
    iVar3 = iVar2;
  }
  iVar3 = _putchar(10);
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

ulong _farey_len(int param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int local_34;
  ulong local_30;
  
  uVar3 = __ccap;
  if ((ulong)(long)param_1 < __ccap) {
    if (*(long *)((long)__cache + (long)param_1 * 8) != 0) {
      return *(ulong *)((long)__cache + (long)param_1 * 8);
    }
  }
  else {
    if (__ccap == 0) {
      __ccap = 0x10;
    }
    for (; __ccap <= (ulong)(long)param_1; __ccap = __ccap << 1) {
    }
    __cache = _realloc(__cache,__ccap * 8);
    ___memset_chk((void *)((long)__cache + uVar3 * 8),0,(__ccap - uVar3) * 8,0xffffffffffffffff);
  }
  local_30 = (ulong)((long)param_1 * (long)(param_1 + 3)) / 2;
  local_34 = 2;
  while (local_34 <= param_1) {
    iVar1 = 0;
    if (local_34 != 0) {
      iVar1 = param_1 / local_34;
    }
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_1 / iVar1;
    }
    iVar1 = 0;
    if (local_34 != 0) {
      iVar1 = param_1 / local_34;
    }
    lVar4 = _farey_len(iVar1);
    local_30 = local_30 - lVar4 * ((iVar2 + 1) - local_34);
    local_34 = iVar2 + 1;
  }
  *(ulong *)((long)__cache + (long)param_1 * 8) = local_30;
  return local_30;
}



undefined8 entry(void)

{
  int local_18;
  
  for (local_18 = 1; local_18 < 0xc; local_18 = local_18 + 1) {
    _printf("%d: ");
    _farey(local_18);
  }
  for (local_18 = 100; local_18 < 0x3e9; local_18 = local_18 + 100) {
    _farey_len(local_18);
    _printf("%d: %llu items\n");
  }
  _farey_len(10000000);
  _printf("\n%d: %llu items\n");
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004018)();
  return pvVar1;
}


