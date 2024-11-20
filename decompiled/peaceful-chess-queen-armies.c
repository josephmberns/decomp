#include "peaceful-chess-queen-armies.h"



void _releaseNode(void *param_1)

{
  if (param_1 != (void *)0x0) {
    _releaseNode(*(undefined8 *)((long)param_1 + 8));
    *(undefined8 *)((long)param_1 + 8) = 0;
    _free(param_1);
  }
  return;
}



void _makeList(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



void _releaseList(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    _releaseNode(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



void _addNode(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (long *)0x0) {
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  puVar1 = (undefined8 *)_malloc(0x10);
  if (puVar1 == (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  puVar1[1] = 0;
  *puVar1 = param_2;
  if (*param_1 == 0) {
    param_1[1] = (long)puVar1;
    *param_1 = (long)puVar1;
  }
  else {
    *(undefined8 **)(param_1[1] + 8) = puVar1;
    param_1[1] = (long)puVar1;
  }
  param_1[2] = param_1[2] + 1;
  return;
}



void _removeAt(long *param_1,ulong param_2)

{
  void *pvVar1;
  ulong local_40;
  long local_30;
  
  if (param_1 != (long *)0x0) {
    if (param_2 == 0) {
      pvVar1 = (void *)*param_1;
      if (param_1[1] == *param_1) {
        param_1[1] = 0;
      }
      *param_1 = *(long *)(*param_1 + 8);
      *(undefined8 *)((long)pvVar1 + 8) = 0;
      _free(pvVar1);
      param_1[2] = param_1[2] + -1;
    }
    else {
      local_30 = *param_1;
      local_40 = param_2;
      while (1 < local_40) {
        local_30 = *(long *)(local_30 + 8);
        local_40 = local_40 - 1;
      }
      pvVar1 = *(void **)(local_30 + 8);
      if (pvVar1 == (void *)param_1[1]) {
        param_1[1] = local_30;
      }
      *(undefined8 *)(local_30 + 8) = *(undefined8 *)((long)pvVar1 + 8);
      *(undefined8 *)((long)pvVar1 + 8) = 0;
      _free(pvVar1);
      param_1[2] = param_1[2] + -1;
    }
  }
  return;
}



bool _isAttacking(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  
  local_18 = (int)param_1;
  local_20 = (int)param_2;
  bVar1 = true;
  if ((local_18 != local_20) &&
     (iStack_14 = (int)((ulong)param_1 >> 0x20), iStack_1c = (int)((ulong)param_2 >> 0x20),
     bVar1 = true, iStack_14 != iStack_1c)) {
    iVar2 = _abs(local_18 - local_20);
    iVar3 = _abs(iStack_14 - iStack_1c);
    bVar1 = iVar2 == iVar3;
  }
  return bVar1;
}



undefined _place(int param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  ulong uVar2;
  int local_44;
  int local_40;
  int *local_38;
  undefined local_11;
  
  bVar1 = true;
  if ((param_3 == (undefined8 *)0x0) || (param_4 == (undefined8 *)0x0)) {
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  if (param_1 == 0) {
    local_11 = 1;
  }
  else {
    for (local_40 = 0; local_40 < param_2; local_40 = local_40 + 1) {
      for (local_44 = 0; local_44 < param_2; local_44 = local_44 + 1) {
        for (local_38 = (int *)*param_3; local_38 != (int *)0x0; local_38 = *(int **)(local_38 + 2))
        {
          if (((*local_38 == local_40) && (local_38[1] == local_44)) ||
             ((!bVar1 &&
              (uVar2 = _isAttacking(*(undefined8 *)local_38,CONCAT44(local_44,local_40)),
              (uVar2 & 1) != 0)))) goto LAB_1000039a8;
        }
        for (local_38 = (int *)*param_4; local_38 != (int *)0x0; local_38 = *(int **)(local_38 + 2))
        {
          if (((*local_38 == local_40) && (local_38[1] == local_44)) ||
             ((bVar1 && (uVar2 = _isAttacking(*(undefined8 *)local_38,CONCAT44(local_44,local_40)),
                        (uVar2 & 1) != 0)))) goto LAB_1000039a8;
        }
        if (bVar1) {
          _addNode(param_3,CONCAT44(local_44,local_40));
          bVar1 = false;
        }
        else {
          _addNode(param_4,CONCAT44(local_44,local_40));
          uVar2 = _place(param_1 + -1,param_2,param_3,param_4);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          _removeAt(param_3,param_3[2] + -1);
          _removeAt(param_4,param_4[2] + -1);
          bVar1 = true;
        }
LAB_1000039a8:
      }
    }
    if (!bVar1) {
      _removeAt(param_3,param_3[2] + -1);
    }
    local_11 = 0;
  }
  return local_11;
}



int _printBoard(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  ulong local_48;
  int *local_38;
  
  if ((param_2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
    pvVar3 = _calloc((long)(param_1 * param_1),1);
    if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    for (local_38 = (int *)*param_2; local_38 != (int *)0x0; local_38 = *(int **)(local_38 + 2)) {
      *(undefined *)((long)pvVar3 + (long)(*local_38 * param_1 + local_38[1])) = 1;
    }
    for (local_38 = (int *)*param_3; local_38 != (int *)0x0; local_38 = *(int **)(local_38 + 2)) {
      *(undefined *)((long)pvVar3 + (long)(*local_38 * param_1 + local_38[1])) = 2;
    }
    for (local_48 = 0; local_48 < (ulong)(long)(param_1 * param_1); local_48 = local_48 + 1) {
      if (local_48 != 0) {
        uVar4 = (ulong)param_1;
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = local_48 / uVar4;
        }
        if (local_48 == uVar1 * uVar4) {
          _printf("\n");
        }
      }
      if (*(char *)((long)pvVar3 + local_48) == '\x01') {
        _printf("B ");
      }
      else if (*(char *)((long)pvVar3 + local_48) == '\x02') {
        _printf("W ");
      }
      else {
        uVar1 = 0;
        if ((long)param_1 != 0) {
          uVar1 = local_48 / (ulong)(long)param_1;
        }
        if (uVar1 % 2 == (local_48 - uVar1 * (long)param_1) % 2) {
          _printf("  ");
        }
        else {
          _printf("# ");
        }
      }
    }
    iVar2 = _printf("\n\n");
    return iVar2;
  }
                    // WARNING: Subroutine does not return
  _exit(1);
}



void _test(undefined4 param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined auStack_48 [24];
  undefined auStack_30 [24];
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_2;
  local_14 = param_1;
  _makeList();
  _makeList();
  _printf("%d black and %d white queens on a %d x %d board:\n");
  uVar1 = _place(local_18,local_14,auStack_30,auStack_48);
  if ((uVar1 & 1) == 0) {
    _printf("No solution exists.\n\n");
  }
  else {
    _printBoard(local_14,auStack_30,auStack_48);
  }
  _releaseList(auStack_30);
  _releaseList(auStack_48);
  return;
}



undefined4 entry(void)

{
  _test();
  _test(3,1);
  _test(3,2);
  _test(4,1);
  _test(4,2);
  _test(4,3);
  _test(5,1);
  _test(5,2);
  _test(5,3);
  _test(5,4);
  _test(5);
  _test(6,1);
  _test(6,2);
  _test(6,3);
  _test(6,4);
  _test(6,5);
  _test(6);
  _test(7,1);
  _test(7,2);
  _test(7,3);
  _test(7,4);
  _test(7,5);
  _test(7,6);
  _test(7);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _abs(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__abs_100004000)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


