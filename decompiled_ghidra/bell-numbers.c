#include "bell-numbers.h"



long _bellIndex(int param_1,int param_2)

{
  return (long)((param_1 * (param_1 + -1)) / 2 + param_2);
}



undefined4 _getBell(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = _bellIndex(param_2,param_3);
  return *(undefined4 *)(param_1 + lVar1 * 4);
}



void _setBell(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = _bellIndex(param_2,param_3);
  *(undefined4 *)(param_1 + lVar1 * 4) = param_4;
  return;
}



void * _bellTriangle(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  pvVar3 = _calloc((long)((param_1 * (param_1 + 1)) / 2),4);
  _setBell(pvVar3,1,0);
  for (local_2c = 2; local_2c <= param_1; local_2c = local_2c + 1) {
    uVar4 = _getBell(pvVar3,local_2c + -1,local_2c + -2);
    _setBell(pvVar3,local_2c,0,uVar4);
    for (local_30 = 1; local_30 < local_2c; local_30 = local_30 + 1) {
      iVar1 = _getBell(pvVar3,local_2c,local_30 + -1);
      iVar2 = _getBell(pvVar3,local_2c + -1,local_30 + -1);
      _setBell(pvVar3,local_2c,local_30,iVar1 + iVar2);
    }
  }
  return pvVar3;
}



undefined8 entry(void)

{
  void *pvVar1;
  int local_28;
  int local_24;
  
  pvVar1 = (void *)_bellTriangle();
  _printf("First fifteen Bell numbers:\n");
  for (local_24 = 1; local_24 < 0x10; local_24 = local_24 + 1) {
    _getBell(pvVar1,local_24,0);
    _printf("%2d: %d\n");
  }
  _printf("\nThe first ten rows of Bell\'s triangle:\n");
  for (local_24 = 1; local_24 < 0xb; local_24 = local_24 + 1) {
    _getBell(pvVar1,local_24,0);
    _printf("%d");
    for (local_28 = 1; local_28 < local_24; local_28 = local_28 + 1) {
      _getBell(pvVar1,local_24,local_28);
      _printf(", %d");
    }
    _printf("\n");
  }
  _free(pvVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


