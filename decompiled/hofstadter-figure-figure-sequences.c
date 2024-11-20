#include "hofstadter-figure-figure-sequences.h"



void _setsize(long param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 local_28;
  
  local_28 = *(ulong *)(param_1 + 8);
  if (local_28 == 0) {
    local_28 = 1;
  }
  for (; local_28 < param_2; local_28 = local_28 << 1) {
  }
  if (*(ulong *)(param_1 + 8) < local_28) {
    pvVar1 = _realloc(*(void **)(param_1 + 0x10),local_28 * 8);
    *(void **)(param_1 + 0x10) = pvVar1;
    if (*(long *)(param_1 + 0x10) == 0) {
                    // WARNING: Subroutine does not return
      _abort();
    }
    *(ulong *)(param_1 + 8) = local_28;
  }
  return;
}



void _push(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  while (param_1[1] <= *param_1) {
    _setsize(param_1,param_1[1] << 1);
  }
  uVar1 = *param_1;
  *param_1 = uVar1 + 1;
  *(undefined8 *)(param_1[2] + uVar1 * 8) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 _R(int param_1)

{
  while (__rs < (ulong)(long)param_1) {
    _RS_append();
  }
  return *(undefined8 *)(_DAT_100008010 + (long)(param_1 + -1) * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _RS_append(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_28;
  
  uVar1 = __rs;
  lVar2 = _R(__rs & 0xffffffff);
  lVar3 = _S(uVar1 & 0xffffffff);
  uVar1 = lVar2 + lVar3;
  local_28 = _S(__ss);
  _push(&_rs,uVar1);
  while( true ) {
    local_28 = local_28 + 1;
    if (uVar1 <= local_28) break;
    _push(&_ss,local_28);
  }
  _push(&_ss,uVar1 + 1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 _S(int param_1)

{
  while (__ss < (ulong)(long)param_1) {
    _RS_append();
  }
  return *(undefined8 *)(_DAT_100008028 + (long)(param_1 + -1) * 8);
}



undefined8 entry(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int local_41c;
  char acStack_411 [1001];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _push(&_rs,1);
  _push(&_ss,2);
  _printf("R(1 .. 10):");
  for (local_41c = 1; local_41c < 0xb; local_41c = local_41c + 1) {
    _R(local_41c);
    _printf(" %llu");
  }
  _bzero(acStack_411,0x3e9);
  for (local_41c = 1; local_41c < 0x29; local_41c = local_41c + 1) {
    lVar3 = _R(local_41c);
    acStack_411[lVar3] = '\x01';
  }
  for (local_41c = 1; local_41c < 0x3c1; local_41c = local_41c + 1) {
    lVar3 = _S(local_41c);
    acStack_411[lVar3] = '\x01';
  }
  local_41c = 1;
  while( true ) {
    bVar1 = false;
    if (local_41c < 0x3e9) {
      bVar1 = acStack_411[local_41c] != '\0';
    }
    if (!bVar1) break;
    local_41c = local_41c + 1;
  }
  if (local_41c < 0x3e9) {
    _fprintf(*(FILE **)PTR____stderrp_100004010,"%d not seen\n");
                    // WARNING: Subroutine does not return
    _abort();
  }
  iVar2 = _puts("\nfirst 1000 ok");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__abort_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004040)();
  return pvVar1;
}


