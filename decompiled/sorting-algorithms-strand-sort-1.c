#include "sorting-algorithms-strand-sort-1.h"



void _push(long *param_1,long param_2)

{
  if (*param_1 == 0) {
    *param_1 = param_2;
  }
  if (param_1[1] != 0) {
    *(long *)(param_1[1] + 8) = param_2;
  }
  param_1[1] = param_2;
  return;
}



long _removehead(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *param_1 = *(long *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  return lVar1;
}



void _join(long param_1,undefined8 *param_2)

{
  _push(param_1,*param_2);
  *(undefined8 *)(param_1 + 8) = param_2[1];
  return;
}



void _merge(long *param_1,long *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long *local_48;
  long *local_40;
  long local_30;
  long lStack_28;
  long *local_20;
  long *local_18;
  
  local_30 = 0;
  lStack_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  while( true ) {
    bVar1 = false;
    if (*local_18 != 0) {
      bVar1 = *local_20 != 0;
    }
    if (!bVar1) break;
    if (*(int *)*local_20 < *(int *)*local_18) {
      local_40 = local_20;
    }
    else {
      local_40 = local_18;
    }
    uVar2 = _removehead(local_40);
    _push(&local_30,uVar2);
  }
  if (*local_18 == 0) {
    local_48 = local_20;
  }
  else {
    local_48 = local_18;
  }
  _join(&local_30,local_48);
  local_18[1] = lStack_28;
  *local_18 = local_30;
  local_20[1] = 0;
  *local_20 = 0;
  return;
}



void _sort(long param_1,uint param_2)

{
  undefined auStack_d0 [16];
  undefined4 auStack_c0 [2];
  undefined *local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  int local_8c;
  int *local_88;
  undefined4 *local_80;
  undefined8 local_78;
  long local_70;
  int *local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  int local_3c;
  undefined *local_30;
  uint local_24;
  long local_20;
  long local_18;
  
  local_30 = (undefined *)auStack_c0;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_a0 = (ulong)param_2 * 0x10;
  local_24 = param_2;
  local_20 = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_98 = (long)auStack_c0 - local_a0;
  for (local_3c = 0; local_3c < (int)local_24; local_3c = local_3c + 1) {
    *(undefined4 *)(local_98 + (long)local_3c * 0x10) =
         *(undefined4 *)(local_20 + (long)local_3c * 4);
    if (local_3c < (int)(local_24 - 1)) {
      local_a8 = local_98 + (long)local_3c * 0x10 + 0x10;
    }
    else {
      local_a8 = 0;
    }
    *(long *)(local_98 + (long)local_3c * 0x10 + 8) = local_a8;
  }
  lStack_48 = local_98 + (long)(int)local_24 * 0x10 + -0x10;
  local_70 = 0;
  local_68 = (int *)0x0;
  local_80 = (undefined4 *)0x0;
  local_78 = 0;
  local_88 = (int *)0x0;
  local_50 = local_98;
  while (local_50 != 0) {
    lStack_58 = 0;
    local_60 = 0;
    while (local_88 = (int *)_removehead(&local_50), local_88 != (int *)0x0) {
      if ((local_70 == 0) || (*local_68 <= *local_88)) {
        local_b0 = &local_70;
      }
      else {
        local_b0 = &local_60;
      }
      _push(local_b0,local_88);
    }
    _merge(&local_80,&local_70);
    lStack_48 = lStack_58;
    local_50 = local_60;
  }
  local_8c = 0;
  for (; local_80 != (undefined4 *)0x0; local_80 = *(undefined4 **)(local_80 + 2)) {
    *(undefined4 *)(local_20 + (long)local_8c * 4) = *local_80;
    local_8c = local_8c + 1;
  }
  local_b8 = local_30;
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



int _show(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_28;
  
  _printf("%s ");
  for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
    _printf("%3d ");
  }
  iVar1 = _putchar(10);
  return iVar1;
}



undefined8 entry(void)

{
  undefined auStack_54 [60];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  _memcpy(auStack_54,&DAT_100003f64,0x3c);
  _show("before sort:",auStack_54);
  _sort(auStack_54,0xf);
  _show("after sort: ",auStack_54,0xf);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004028)(param_1);
  return iVar1;
}


