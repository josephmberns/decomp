#include "padovan-sequence.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

undefined4 _pRec(int param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = _DAT_100008008;
  if (_DAT_100008008 <= (ulong)(long)param_1) {
    for (; _DAT_100008008 <= (ulong)(long)param_1; _DAT_100008008 = _DAT_100008008 + 0x1000) {
    }
    _DAT_100008000 = _realloc(_DAT_100008000,_DAT_100008008 << 2);
    ___memset_chk((void *)((long)_DAT_100008000 + uVar1 * 4),0,(_DAT_100008008 - uVar1) * 4,
                  0xffffffffffffffff);
  }
  if (*(int *)((long)_DAT_100008000 + (long)param_1 * 4) == 0) {
    if (param_1 < 3) {
      *(undefined4 *)((long)_DAT_100008000 + (long)param_1 * 4) = 1;
    }
    else {
      iVar2 = _pRec(param_1 + -2);
      iVar3 = _pRec(param_1 + -3);
      *(int *)((long)_DAT_100008000 + (long)param_1 * 4) = iVar2 + iVar3;
    }
  }
  return *(undefined4 *)((long)_DAT_100008000 + (long)param_1 * 4);
}



int _pFloor(int param_1)

{
  double dVar1;
  
  dVar1 = (double)_pow(0x3ff5320b74eca44b,(double)(param_1 + -1));
  return (int)(dVar1 / 1.045356793252533 + 0.5);
}



void _nextLSystem(char *param_1,undefined *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined *local_10;
  char *local_8;
  
  local_10 = param_2;
  local_8 = param_1;
  while (*local_8 != '\0') {
    pcVar1 = local_8 + 1;
    cVar2 = *local_8;
    local_8 = pcVar1;
    if (cVar2 == 'A') {
      *local_10 = 0x42;
      local_10 = local_10 + 1;
    }
    else if (cVar2 == 'B') {
      *local_10 = 0x43;
      local_10 = local_10 + 1;
    }
    else if (cVar2 == 'C') {
      *local_10 = 0x41;
      local_10[1] = 0x42;
      local_10 = local_10 + 2;
    }
  }
  *local_10 = 0;
  return;
}



undefined8 entry(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  size_t sVar5;
  int local_4030;
  undefined auStack_4028 [8192];
  char acStack_2028 [8192];
  long local_28;
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004018;
  _printf("P_0 .. P_19: ");
  for (local_4030 = 0; local_4030 < 0x14; local_4030 = local_4030 + 1) {
    _pRec(local_4030);
    _printf("%d ");
  }
  _printf("\n");
  _printf("The floor- and recurrence-based functions ");
  for (local_4030 = 0; local_4030 < 0x40; local_4030 = local_4030 + 1) {
    iVar1 = _pRec(local_4030);
    iVar2 = _pFloor(local_4030);
    if (iVar1 != iVar2) {
      _pRec(local_4030);
      _pFloor(local_4030);
      _printf("do not match at %d: %d != %d.\n");
      break;
    }
  }
  if (local_4030 == 0x40) {
    _printf("match from P_0 to P_63.\n");
  }
  _printf("\nThe first 10 L-system strings are:\n");
  ___strcpy_chk(acStack_2028,"A",0x2000);
  for (local_4030 = 0; local_4030 < 10; local_4030 = local_4030 + 1) {
    _printf("%s\n");
    ___strcpy_chk(auStack_4028,acStack_2028,0x2000);
    _nextLSystem(auStack_4028,acStack_2028);
  }
  _printf("\nThe floor- and L-system-based functions ");
  uVar4 = ___strcpy_chk(acStack_2028,"A",0x2000);
  local_4030 = 0;
  do {
    if (0x1f < local_4030) {
LAB_100003dcc:
      if (local_4030 == 0x20) {
        uVar3 = _printf("match from P_0 to P_31.\n");
        uVar4 = (ulong)uVar3;
      }
      if (*(long *)PTR____stack_chk_guard_100004018 != local_28) {
                    // WARNING: Subroutine does not return
        ___stack_chk_fail(uVar4);
      }
      return 0;
    }
    sVar5 = _strlen(acStack_2028);
    iVar1 = _pFloor(local_4030);
    if ((int)sVar5 != iVar1) {
      _strlen(acStack_2028);
      _pFloor(local_4030);
      uVar3 = _printf("do not match at %d: %d != %d\n");
      uVar4 = (ulong)uVar3;
      goto LAB_100003dcc;
    }
    ___strcpy_chk(auStack_4028,acStack_2028,0x2000);
    uVar4 = _nextLSystem(auStack_4028,acStack_2028);
    local_4030 = local_4030 + 1;
  } while( true );
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004008)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004020)();
  return;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004040)();
  return sVar1;
}


