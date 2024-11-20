#include "n-queens-problem-1.h"



undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_14;
  
  if ((param_1 == 2) && (iVar1 = _atoi(*(char **)(param_2 + 8)), 0 < iVar1)) {
    uVar2 = FUN_100003bd0((long)iVar1,4);
    uVar3 = FUN_100003bd0((long)iVar1);
    uVar4 = FUN_100003bd0((long)(iVar1 * 2 + -1),1);
    uVar5 = FUN_100003bd0((long)(iVar1 * 2 + -1),1);
    FUN_100003c20(uVar2,uVar3,uVar4,uVar5,(long)iVar1);
    local_14 = 0;
  }
  else {
    _printf("%s: specify a natural number argument\n");
    local_14 = 1;
  }
  return local_14;
}



void * FUN_100003bd0(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = _calloc(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  return pvVar1;
}



void FUN_100003c20(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  ulong local_48;
  ulong local_40;
  
  local_48 = 0;
LAB_100003c48:
  if (local_48 < param_5) {
    local_40 = 0;
    goto LAB_100003c78;
  }
  FUN_100003e0c(param_1,param_5);
  do {
    if (local_48 == 0) {
      return;
    }
    local_48 = local_48 - 1;
    local_40 = (ulong)*(int *)(param_1 + local_48 * 4);
    *(undefined *)(param_4 + (local_40 - local_48) + param_5) = 0;
    *(undefined *)(param_3 + local_40 + local_48 + -1) = 0;
    *(undefined *)(param_2 + local_40) = 0;
    while (local_40 < param_5 - 1) {
      local_40 = local_40 + 1;
LAB_100003c78:
      if ((((*(byte *)(param_2 + local_40) & 1) == 0) &&
          ((*(byte *)(param_3 + local_40 + local_48 + -1) & 1) == 0)) &&
         ((*(byte *)(param_4 + (local_40 - local_48) + param_5) & 1) == 0)) {
        *(undefined *)(param_2 + local_40) = 1;
        *(undefined *)(param_3 + local_40 + local_48 + -1) = 1;
        *(undefined *)(param_4 + (local_40 - local_48) + param_5) = 1;
        *(int *)(param_1 + local_48 * 4) = (int)local_40;
        local_48 = local_48 + 1;
        goto LAB_100003c48;
      }
    }
  } while( true );
}



int FUN_100003e0c(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong local_30;
  ulong local_28;
  
  if (param_2 < 0x1b) {
    for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
      _printf("%c%u ");
    }
  }
  else {
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      _printf("%u ");
    }
  }
  iVar1 = _putchar(10);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004020)(param_1);
  return iVar1;
}


