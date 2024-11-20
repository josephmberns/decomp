#include "solve-a-hidato-puzzle.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _neighbors(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int local_2c;
  int local_28;
  int local_24;
  
  local_2c = 0;
  iVar1 = 0;
  if (__w != 0) {
    iVar1 = param_1 / __w;
  }
  iVar3 = 0;
  if (__w != 0) {
    iVar3 = param_1 / __w;
  }
  param_1 = param_1 - iVar3 * __w;
  for (local_24 = iVar1 + -1; local_24 <= iVar1 + 1; local_24 = local_24 + 1) {
    if ((-1 < local_24) && (local_24 < __h)) {
      for (local_28 = param_1 + -1; lVar2 = __board, local_28 <= param_1 + 1;
          local_28 = local_28 + 1) {
        if (((-1 < local_28) && (local_28 < __w)) && ((local_28 != param_1 || (local_24 != iVar1))))
        {
          iVar3 = FUN_1000034c4(local_24,local_28);
          *(int *)(param_2 + (long)local_2c * 4) = iVar3;
          if (*(int *)(lVar2 + (long)iVar3 * 4) != -1) {
            local_2c = local_2c + 1;
          }
        }
      }
    }
  }
  return local_2c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1000034c4(int param_1,int param_2)

{
  return param_1 * __w + param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _flood_fill(undefined4 param_1)

{
  int iVar1;
  int local_40;
  int aiStack_38 [8];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  iVar1 = _neighbors(param_1,aiStack_38);
  for (local_40 = 0; local_40 < iVar1; local_40 = local_40 + 1) {
    if ((*(int *)(__board + (long)aiStack_38[local_40] * 4) == 0) &&
       (*(int *)(__flood + (long)aiStack_38[local_40] * 4) == 0)) {
      *(undefined4 *)(__flood + (long)aiStack_38[local_40] * 4) = 1;
      _flood_fill(aiStack_38[local_40]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _check_connectity(int param_1)

{
  int local_1c;
  
  ___memset_chk(__flood,0,(long)__w * 4 * (long)__h,0xffffffffffffffff);
  for (local_1c = param_1 + 1; local_1c <= __top; local_1c = local_1c + 1) {
    if (*(int *)(__known + (long)local_1c * 4) != 0) {
      _flood_fill(*(undefined4 *)(__known + (long)local_1c * 4));
    }
  }
  local_1c = 0;
  while( true ) {
    if (__w * __h <= local_1c) {
      return 1;
    }
    if ((*(int *)(__board + (long)local_1c * 4) == 0) &&
       (*(int *)(__flood + (long)local_1c * 4) == 0)) break;
    local_1c = local_1c + 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _make_board(int param_1,int param_2,char *param_3)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *local_20;
  int local_18;
  int local_14;
  
  __top = 0;
  local_14 = param_1 * param_2;
  __h = param_2;
  __w = param_1;
  __known = _calloc((long)(local_14 + 1),4);
  __board = _calloc((long)local_14,4);
  __flood = _calloc((long)local_14,4);
  while (local_14 != 0) {
    *(undefined4 *)((long)__board + (long)(local_14 + -1) * 4) = 0xffffffff;
    local_14 = local_14 + -1;
  }
  local_20 = param_3;
  for (local_18 = 0; local_18 < __h; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < __w; local_14 = local_14 + 1) {
      iVar3 = FUN_1000034c4(local_18,local_14);
      while (iVar4 = _isspace((int)*local_20), pvVar1 = __known, iVar4 != 0) {
        local_20 = local_20 + 1;
      }
      if (*local_20 != '.') {
        if (*local_20 == '_') {
          *(undefined4 *)((long)__board + (long)iVar3 * 4) = 0;
        }
        else {
          lVar5 = _strtol(local_20,(char **)0x0,10);
          *(int *)((long)__board + (long)iVar3 * 4) = (int)lVar5;
          *(int *)((long)pvVar1 + (long)(int)lVar5 * 4) = iVar3;
          if (__top < *(int *)((long)__board + (long)iVar3 * 4)) {
            __top = *(int *)((long)__board + (long)iVar3 * 4);
          }
        }
      }
      while( true ) {
        bVar2 = false;
        if (*local_20 != '\0') {
          iVar3 = _isspace((int)*local_20);
          bVar2 = iVar3 == 0;
        }
        if (!bVar2) break;
        local_20 = local_20 + 1;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _show_board(void)

{
  long lVar1;
  int iVar2;
  char *local_38;
  int local_20;
  int local_1c;
  
  iVar2 = _printf("\n%s:\n");
  local_1c = 0;
  while (local_1c < __h) {
    for (local_20 = 0; lVar1 = __board, local_20 < __w; local_20 = local_20 + 1) {
      iVar2 = FUN_1000034c4(local_1c,local_20);
      iVar2 = *(int *)(lVar1 + (long)iVar2 * 4);
      if (iVar2 == 0) {
        local_38 = " __";
      }
      else {
        local_38 = "   ";
        if (iVar2 != -1) {
          local_38 = " %2d";
        }
      }
      _printf(local_38);
    }
    local_1c = local_1c + 1;
    iVar2 = _putchar(10);
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _fill(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_48;
  undefined4 local_3c;
  undefined4 auStack_38 [8];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  if (((*(int *)(__board + (long)param_1 * 4) == 0) ||
      (*(int *)(__board + (long)param_1 * 4) == param_2)) &&
     ((*(int *)(__known + (long)param_2 * 4) == 0 ||
      (*(int *)(__known + (long)param_2 * 4) == param_1)))) {
    if (param_2 == __top) {
      local_3c = 1;
    }
    else {
      uVar1 = *(undefined4 *)(__known + (long)param_2 * 4);
      uVar2 = *(undefined4 *)(__board + (long)param_1 * 4);
      *(int *)(__board + (long)param_1 * 4) = param_2;
      iVar3 = _check_connectity(param_2);
      if (iVar3 != 0) {
        iVar3 = _neighbors(param_1,auStack_38);
        for (local_48 = 0; local_48 < iVar3; local_48 = local_48 + 1) {
          iVar4 = _fill(auStack_38[local_48],param_2 + 1);
          if (iVar4 != 0) {
            local_3c = 1;
            goto LAB_100003dc0;
          }
        }
      }
      *(undefined4 *)(__board + (long)param_1 * 4) = uVar2;
      *(undefined4 *)(__known + (long)param_2 * 4) = uVar1;
      local_3c = 0;
    }
  }
  else {
    local_3c = 0;
  }
LAB_100003dc0:
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return local_3c;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(void)

{
  _make_board(8,8,
              " __ 33 35 __ __ .. .. .. __ __ 24 22 __ .. .. .. __ __ __ 21 __ __ .. .. __ 26 __ 13 40 11 .. .. 27 __ __ __  9 __  1 .. .   . __ __ 18 __ __ .. .  ..  .  . __  7 __ __ .  .. .. ..  .  .  5 __"
             );
  _show_board("Before");
  _fill(*(undefined4 *)(__known + 4),1);
  _show_board("After");
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004020)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004030)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004038)(param_1,param_2,param_3);
  return lVar1;
}


