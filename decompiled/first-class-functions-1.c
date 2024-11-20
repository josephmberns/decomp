#include "first-class-functions-1.h"



undefined  [16] _functionA(double param_1)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 * param_1 * param_1;
  auVar1._8_8_ = 0;
  return auVar1;
}



void _functionB(undefined8 param_1)

{
  double dVar1;
  
  dVar1 = (double)_log(param_1);
  _exp(dVar1 / 3.0);
  return;
}



void _Function1(undefined8 param_1,code *param_2)

{
  (*param_2)(param_1);
  return;
}



code * _WhichFunc(int param_1)

{
  code *pcVar1;
  
  pcVar1 = _functionA;
  if (3 < param_1) {
    pcVar1 = _functionB;
  }
  return pcVar1;
}



void _InvokeComposed(undefined8 param_1,code *param_2,code *param_3)

{
  (*param_3)(param_1);
  (*param_2)();
  return;
}



undefined8 * _Compose(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return puVar1;
}



void _CallComposed(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)*param_2;
  (*(code *)param_2[1])(param_1);
  (*pcVar1)();
  return;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  int local_24;
  
  _WhichFunc(0);
  _Function1(0x4008000000000000);
  _printf("Function1(functionA, 3.0) = %f\n");
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    uVar1 = _Compose((&_funcListA)[local_24],(&_funcListB)[local_24]);
    _CallComposed(0x3feccccccccccccd,uVar1);
    _printf("Compostion %d(0.9) = %f\n");
  }
  return 0;
}



void _exp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exp_100004000)();
  return;
}



void _log(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


