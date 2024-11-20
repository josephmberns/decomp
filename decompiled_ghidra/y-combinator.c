#include "y-combinator.h"



undefined8 * _new(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 2) = 0;
  return puVar1;
}



void _call(undefined8 *param_1,undefined8 param_2)

{
  (*(code *)*param_1)(param_1,param_2);
  return;
}



long _Y(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = _new(param_1,0);
  *(long *)(lVar1 + 8) = lVar1;
  return lVar1;
}



long _num(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = _new(0);
  *(undefined4 *)(lVar1 + 0x10) = param_1;
  return lVar1;
}



undefined8 _fac(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 < 2) {
    local_30 = _num(1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = _num(iVar1 + -1);
    lVar3 = _call(uVar4,uVar2);
    local_30 = _num(iVar1 * *(int *)(lVar3 + 0x10));
  }
  return local_30;
}



undefined8 _fib(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_30;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 < 2) {
    local_30 = _num(1);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar3 = _num(iVar1 + -1);
    lVar4 = _call(uVar5,uVar3);
    iVar2 = *(int *)(lVar4 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar3 = _num(iVar1 + -2);
    lVar4 = _call(uVar5,uVar3);
    local_30 = _num(iVar2 + *(int *)(lVar4 + 0x10));
  }
  return local_30;
}



int _show(void)

{
  int iVar1;
  
  iVar1 = _printf(" %d");
  return iVar1;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_18;
  
  uVar1 = _Y(_fac);
  _printf("fac: ");
  for (local_18 = 1; local_18 < 10; local_18 = local_18 + 1) {
    uVar2 = _num(local_18);
    _call(uVar1,uVar2);
    _show();
  }
  _printf("\n");
  uVar1 = _Y(_fib);
  _printf("fib: ");
  for (local_18 = 1; local_18 < 10; local_18 = local_18 + 1) {
    uVar2 = _num(local_18);
    _call(uVar1,uVar2);
    _show();
  }
  _printf("\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


