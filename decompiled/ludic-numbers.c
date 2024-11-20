#include "ludic-numbers.h"



void * _ludic(uint param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  void *local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  local_30 = 1;
  local_34 = 0;
  local_24 = 2;
  local_40 = _calloc(2,8);
  *(undefined4 *)((long)local_40 + 8) = 4;
  local_2c = 1;
  do {
    local_28 = 1;
    while( true ) {
      bVar3 = false;
      if (local_28 < local_30) {
        piVar1 = (int *)((long)local_40 + (ulong)local_28 * 8);
        iVar2 = *piVar1 + -1;
        *piVar1 = iVar2;
        bVar3 = iVar2 != 0;
      }
      if (!bVar3) break;
      local_28 = local_28 + 1;
    }
    if (local_28 < local_30) {
      *(undefined4 *)((long)local_40 + (ulong)local_28 * 8) =
           *(undefined4 *)((long)local_40 + (ulong)local_28 * 8 + 4);
    }
    else if (local_34 == *(uint *)((long)local_40 + (ulong)local_28 * 8)) {
      *(undefined4 *)((long)local_40 + (ulong)local_28 * 8) =
           *(undefined4 *)((long)local_40 + (ulong)local_28 * 8 + 4);
      local_30 = local_30 + 1;
    }
    else {
      if (local_24 <= local_34) {
        local_24 = local_24 << 1;
        local_40 = _realloc(local_40,(ulong)local_24 * 8);
      }
      *(ulong *)((long)local_40 + (ulong)local_34 * 8) = CONCAT44(local_2c,local_2c + local_34);
      local_34 = local_34 + 1;
      if ((param_1 <= local_34) && (param_2 <= local_2c)) {
        for (local_28 = 0; local_28 < local_34; local_28 = local_28 + 1) {
          *(undefined4 *)((long)local_40 + (ulong)local_28 * 4) =
               *(undefined4 *)((long)local_40 + (ulong)local_28 * 8 + 4);
        }
        pvVar4 = _realloc(local_40,(ulong)local_34 * 4);
        *param_3 = local_34;
        return pvVar4;
      }
    }
    local_2c = local_2c + 1;
  } while( true );
}



undefined4 _find(long param_1,uint param_2)

{
  uint local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_2 < *(uint *)(param_1 + (ulong)local_18 * 4)) {
      return 0;
    }
    if (param_2 == *(uint *)(param_1 + (ulong)local_18 * 4)) break;
    local_18 = local_18 + 1;
  }
  return 1;
}



undefined8 entry(void)

{
  int iVar1;
  void *pvVar2;
  uint local_1c;
  undefined auStack_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  pvVar2 = (void *)_ludic(0x7d5,1000,auStack_18);
  _printf("First 25:");
  for (local_1c = 0; local_1c < 0x19; local_1c = local_1c + 1) {
    _printf(" %u");
  }
  _putchar(10);
  local_1c = 0;
  while (*(uint *)((long)pvVar2 + (ulong)local_1c * 4) < 0x3e9) {
    local_1c = local_1c + 1;
  }
  _printf("Ludics below 1000: %u\n");
  _printf("Ludic 2000 to 2005:");
  for (local_1c = 2000; local_1c < 0x7d6; local_1c = local_1c + 1) {
    _printf(" %u");
  }
  _putchar(10);
  _printf("Triples below 250:");
  local_1c = 0;
  while (*(int *)((long)pvVar2 + (ulong)local_1c * 4) + 6U < 0xfb) {
    iVar1 = _find(pvVar2,*(int *)((long)pvVar2 + (ulong)local_1c * 4) + 2);
    if ((iVar1 != 0) &&
       (iVar1 = _find(pvVar2,*(int *)((long)pvVar2 + (ulong)local_1c * 4) + 6), iVar1 != 0)) {
      _printf(" (%u %u %u)");
    }
    local_1c = local_1c + 1;
  }
  _putchar(10);
  _free(pvVar2);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004020)();
  return pvVar1;
}


