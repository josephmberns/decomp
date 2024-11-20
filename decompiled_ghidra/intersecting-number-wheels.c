#include "intersecting-number-wheels.h"



undefined8 * _create(char *param_1)

{
  size_t sVar1;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)_malloc(0x10);
  if (local_18 == (undefined8 *)0x0) {
    local_18 = (undefined8 *)0x0;
  }
  else {
    *local_18 = param_1;
    sVar1 = _strlen(param_1);
    *(int *)(local_18 + 1) = (int)sVar1;
    *(undefined4 *)((long)local_18 + 0xc) = 0;
  }
  return local_18;
}



long _cycle(long *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = *(char *)(*param_1 + (long)*(int *)((long)param_1 + 0xc));
  iVar1 = *(int *)((long)param_1 + 0xc) + 1;
  iVar2 = *(int *)(param_1 + 1);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar1 / iVar2;
  }
  *(int *)((long)param_1 + 0xc) = iVar1 - iVar4 * iVar2;
  return (long)cVar3;
}



undefined8 * _insert(undefined param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *local_18;
  
  local_18 = (undefined8 *)_malloc(0x18);
  if (local_18 == (undefined8 *)0x0) {
    local_18 = (undefined8 *)0x0;
  }
  else {
    *(undefined *)(local_18 + 2) = param_1;
    *local_18 = param_2;
    local_18[1] = param_3;
  }
  return local_18;
}



undefined8 _find(char param_1,undefined8 *param_2)

{
  undefined8 *local_20;
  
  local_20 = param_2;
  while( true ) {
    if (local_20 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(char *)(local_20 + 2) == param_1) break;
    local_20 = (undefined8 *)local_20[1];
  }
  return *local_20;
}



ulong _printOne(undefined param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = _find(param_1,param_2);
  if (lVar3 == 0) {
    _printf("Missing the wheel for: %c\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  cVar1 = _cycle(lVar3);
  if ((cVar1 < '0') || ('9' < cVar1)) {
    uVar4 = _printOne((long)cVar1,param_2);
  }
  else {
    uVar2 = _printf(" %c");
    uVar4 = (ulong)uVar2;
  }
  return uVar4;
}



int _exec(undefined param_1,long param_2)

{
  int iVar1;
  int local_2c;
  
  if (param_2 == 0) {
    iVar1 = _printf("Unable to proceed.");
  }
  else {
    for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1) {
      _printOne(param_1,param_2);
    }
    iVar1 = _printf("\n");
  }
  return iVar1;
}



void _group1(void)

{
  undefined8 uVar1;
  
  uVar1 = _create("123");
  uVar1 = _insert(0x41,uVar1,0);
  _exec(0x41,uVar1);
  return;
}



void _group2(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _create("1B2");
  uVar2 = _create("34");
  uVar1 = _insert(0x41,uVar1,0);
  uVar1 = _insert(0x42,uVar2,uVar1);
  _exec(0x41,uVar1);
  return;
}



void _group3(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _create("1DD");
  uVar2 = _create("678");
  uVar1 = _insert(0x41,uVar1,0);
  uVar1 = _insert(0x44,uVar2,uVar1);
  _exec(0x41,uVar1);
  return;
}



void _group4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = _create("1BC");
  uVar2 = _create("34");
  uVar3 = _create("5B");
  uVar1 = _insert(0x41,uVar1,0);
  uVar1 = _insert(0x42,uVar2,uVar1);
  uVar1 = _insert(0x43,uVar3,uVar1);
  _exec(0x41,uVar1);
  return;
}



undefined4 entry(void)

{
  _group1();
  _group2();
  _group3();
  _group4();
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004000)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004018)();
  return sVar1;
}


