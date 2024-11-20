#include "prime-triangle-1.h"



byte _is_prime(uint param_1)

{
  if (0x3f < param_1) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("is_prime","prime-triangle-1.c",7,"n < 64");
  }
  return (&DAT_100008000)[param_1] & 1;
}



void _swap(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + param_2 * 4);
  *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + param_3 * 4);
  *(undefined4 *)(param_1 + param_3 * 4) = uVar1;
  return;
}



byte _prime_triangle_row(int *param_1,ulong param_2)

{
  ulong uVar1;
  long local_30;
  byte local_11;
  
  if (param_2 == 2) {
    local_11 = _is_prime(*param_1 + param_1[1]);
    local_11 = local_11 & 1;
  }
  else {
    for (local_30 = 1; local_30 + 1U < param_2; local_30 = local_30 + 2) {
      uVar1 = _is_prime(*param_1 + param_1[local_30]);
      if ((uVar1 & 1) != 0) {
        _swap(param_1,local_30,1);
        uVar1 = _prime_triangle_row(param_1 + 1,param_2 - 1);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
        _swap(param_1,local_30,1);
      }
    }
    local_11 = 0;
  }
  return local_11;
}



uint _prime_triangle_count(int *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long local_30;
  uint local_24;
  
  local_24 = 0;
  if (param_2 == 2) {
    uVar2 = _is_prime(*param_1 + param_1[1]);
    local_24 = (uint)((uVar2 & 1) != 0);
  }
  else {
    for (local_30 = 1; local_30 + 1U < param_2; local_30 = local_30 + 2) {
      uVar2 = _is_prime(*param_1 + param_1[local_30]);
      if ((uVar2 & 1) != 0) {
        _swap(param_1,local_30);
        iVar1 = _prime_triangle_count(param_1 + 1,param_2 - 1);
        local_24 = local_24 + iVar1;
        _swap(param_1,local_30,1);
      }
    }
  }
  return local_24;
}



ulong _print(ulong param_1,ulong param_2)

{
  uint uVar1;
  ulong local_28;
  
  if (param_2 != 0) {
    _printf("%2u");
    for (local_28 = 1; local_28 < param_2; local_28 = local_28 + 1) {
      _printf(" %2u");
    }
    uVar1 = _printf("\n");
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



undefined8 entry(void)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_90;
  long local_88;
  ulong local_80;
  long local_78;
  double local_70;
  clock_t local_68;
  uint local_5c;
  undefined *local_50;
  uint local_48;
  uint local_44;
  undefined *local_38;
  uint local_2c;
  clock_t local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  local_1c = 0;
  local_28 = _clock();
  puVar2 = &local_90;
  for (local_2c = 2; local_2c < 0x15; local_2c = local_2c + 1) {
    local_80 = (ulong)local_2c * 4 + 0xf & 0xfffffffffffffff0;
    local_38 = (undefined *)puVar2;
    (*(code *)PTR____chkstk_darwin_100004008)();
    local_78 = (long)puVar2 - local_80;
    for (local_44 = 0; local_44 < local_2c; local_44 = local_44 + 1) {
      *(uint *)(local_78 + (ulong)local_44 * 4) = local_44 + 1;
    }
    uVar5 = _prime_triangle_row(local_78,local_2c);
    if ((uVar5 & 1) != 0) {
      _print(local_78,local_2c);
    }
    puVar2 = (ulong *)local_38;
  }
  iVar4 = _printf("\n");
  local_48 = 2;
  puVar3 = (undefined *)puVar2;
  while( true ) {
    if (0x14 < local_48) break;
    local_90 = (ulong)local_48 * 4 + 0xf & 0xfffffffffffffff0;
    local_50 = puVar3;
    (*(code *)PTR____chkstk_darwin_100004008)(iVar4);
    lVar1 = (long)puVar3 - local_90;
    for (local_5c = 0; local_5c < local_48; local_5c = local_5c + 1) {
      *(uint *)(lVar1 + (ulong)local_5c * 4) = local_5c + 1;
    }
    local_88 = lVar1;
    if (2 < local_48) {
      _printf(" ");
    }
    uVar6 = _prime_triangle_count(local_88,local_48);
    *(undefined8 *)(lVar1 + -0x10) = uVar6;
    iVar4 = _printf("%d");
    local_48 = local_48 + 1;
    puVar3 = local_50;
  }
  _printf("\n");
  local_68 = _clock();
  local_70 = ((double)(local_68 - local_28) + 0.0) / 1000000.0;
  *(double *)(puVar3 + -0x10) = local_70;
  iVar4 = _printf("\nElapsed time: %f seconds\n");
  if (*(long *)PTR____stack_chk_guard_100004018 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar4);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

clock_t _clock(void)

{
  clock_t cVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  cVar1 = (*(code *)PTR__clock_100004020)();
  return cVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


