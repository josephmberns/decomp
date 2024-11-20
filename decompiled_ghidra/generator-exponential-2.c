#include "generator-exponential-2.h"



void _seq_next(undefined8 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)*param_1)(param_1);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}



int _power_next(long param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar1;
  dVar2 = (double)_pow((double)iVar1,(double)(long)*(int *)(param_1 + 0x10));
  return (int)dVar2;
}



undefined8 * _power_seq(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x18);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = _power_next;
  *(undefined4 *)(puVar1 + 2) = param_1;
  *(undefined4 *)((long)puVar1 + 0xc) = 0xffffffff;
  return puVar1;
}



undefined4 _filter_next(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    _seq_next(lVar1);
    while (*(int *)(lVar2 + 8) < *(int *)(lVar1 + 8)) {
      _seq_next(lVar2);
    }
  } while (*(int *)(lVar2 + 8) == *(int *)(lVar1 + 8));
  return *(undefined4 *)(lVar1 + 8);
}



undefined8 * _filter_seq(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x20);
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  *puVar1 = _filter_next;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  return puVar1;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_18;
  
  uVar1 = _power_seq(2);
  uVar2 = _power_seq(3);
  uVar1 = _filter_seq(uVar1,uVar2);
  for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
    _seq_next(uVar1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    _seq_next(uVar1);
    _printf("%d\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


