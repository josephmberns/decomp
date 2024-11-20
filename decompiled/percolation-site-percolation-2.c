#include "percolation-site-percolation-2.h"



void _initialize(double param_1,long param_2)

{
  int iVar1;
  undefined uVar2;
  undefined8 local_30;
  undefined8 local_28;
  
  for (local_28 = 0; local_28 < 0xf; local_28 = local_28 + 1) {
    for (local_30 = 0; local_30 < 0xf; local_30 = local_30 + 1) {
      iVar1 = _rand();
      uVar2 = 0x20;
      if (param_1 <= (double)iVar1 / 2147483647.0) {
        uVar2 = 0x23;
      }
      *(undefined *)(param_2 + local_28 * 0xf + local_30) = uVar2;
    }
  }
  return;
}



void _show(long param_1)

{
  int iVar1;
  long lVar2;
  ulong local_48;
  ulong local_40;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100004008;
  _printf("%s\n");
  for (local_40 = 0; local_40 < 0xf; local_40 = local_40 + 1) {
    _putchar(0x7c);
    for (local_48 = 0; local_48 < 0xf; local_48 = local_48 + 1) {
      _putchar((uint)*(byte *)(param_1 + local_40 * 0xf + local_48));
    }
    _puts("|");
  }
  iVar1 = _printf("%s\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != lVar2) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined _walk(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined local_11;
  
  *(undefined *)(param_1 + param_2 * 0xf + param_3) = 0x2e;
  if ((param_2 < 0xe) && (*(char *)(param_1 + (param_2 + 1) * 0xf + param_3) == ' ')) {
    uVar1 = _walk(param_1,param_2 + 1,param_3);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  else if (param_2 == 0xe) {
    return 1;
  }
  if (((param_3 == 0) || (*(char *)(param_1 + param_2 * 0xf + (param_3 - 1)) != ' ')) ||
     (uVar1 = _walk(param_1,param_2,param_3 - 1), (uVar1 & 1) == 0)) {
    if (((param_3 < 0xe) && (*(char *)(param_1 + param_2 * 0xf + param_3 + 1) == ' ')) &&
       (uVar1 = _walk(param_1,param_2,param_3 + 1), (uVar1 & 1) != 0)) {
      local_11 = 1;
    }
    else if (((param_2 == 0) || (*(char *)(param_1 + (param_2 - 1) * 0xf + param_3) != ' ')) ||
            (uVar1 = _walk(param_1,param_2 - 1,param_3), (uVar1 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  return local_11;
}



undefined _percolate(long param_1)

{
  ulong uVar1;
  ulong local_30;
  
  local_30 = 0;
  while( true ) {
    if (0xe < local_30) {
      return 0;
    }
    if ((*(char *)(param_1 + local_30) == ' ') &&
       (uVar1 = _walk(param_1,0,local_30), (uVar1 & 1) != 0)) break;
    local_30 = local_30 + 1;
  }
  return 1;
}



undefined8 entry(void)

{
  bool bVar1;
  int iVar2;
  time_t tVar3;
  ulong uVar4;
  double dVar5;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_f0;
  double adStack_d8 [22];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_f0 = 0; local_f0 < 0xb; local_f0 = local_f0 + 1) {
    dVar5 = (double)NEON_ucvtf(local_f0);
    adStack_d8[local_f0 * 2 + 1] = 0.0;
    adStack_d8[local_f0 * 2] = dVar5 * 0.1;
  }
  bVar1 = false;
  tVar3 = _time((time_t *)0x0);
  _srand((uint)tVar3);
  for (local_110 = 0; local_110 < 0xb; local_110 = local_110 + 1) {
    for (local_118 = 0; local_118 < 100; local_118 = local_118 + 1) {
      _initialize(adStack_d8[local_110 * 2]);
      uVar4 = _percolate(0x100008000);
      if (((uVar4 & 1) != 0) &&
         (adStack_d8[local_110 * 2 + 1] = (double)((long)adStack_d8[local_110 * 2 + 1] + 1), !bVar1)
         ) {
        _printf("Percolating sample (%dx%d, probability =%5.2f):\n");
        _show(0x100008000);
        bVar1 = true;
      }
    }
  }
  iVar2 = _printf("\nFraction of %d tries that percolate through:\n");
  for (local_120 = 0; local_120 < 0xb; local_120 = local_120 + 1) {
    NEON_ucvtf(adStack_d8[local_120 * 2 + 1]);
    iVar2 = _printf("%1.1f %1.3f\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar2);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004030)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004038)();
  return tVar1;
}


