#include "function-composition.h"



void _compose_call(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)**(undefined8 **)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 8);
  (*(code *)**(undefined8 **)(param_2 + 0x10))(param_1,*(undefined8 *)(param_2 + 0x10));
  (*pcVar1)(uVar2);
  return;
}



undefined8 * _compose(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x18);
  *puVar1 = _compose_call;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  return puVar1;
}



void _sin_call(undefined8 param_1)

{
  _sin(param_1);
  return;
}



void _asin_call(undefined8 param_1)

{
  _asin(param_1);
  return;
}



undefined4 entry(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)_malloc(8);
  *puVar1 = _sin_call;
  puVar2 = (undefined8 *)_malloc(8);
  *puVar2 = _asin_call;
  puVar3 = (undefined8 *)_compose(puVar1,puVar2);
  (*(code *)*puVar3)(0x3fe0000000000000,puVar3);
  _printf("%f\n");
  _free(puVar3);
  _free(puVar1);
  _free(puVar2);
  return 0;
}



void _asin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__asin_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004020)();
  return;
}


