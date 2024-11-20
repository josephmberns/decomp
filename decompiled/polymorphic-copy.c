#include "polymorphic-copy.h"



void _ObjClone(undefined8 *param_1)

{
  FUN_10000389c(param_1,*param_1);
  return;
}



void * FUN_10000389c(undefined8 *param_1,long param_2)

{
  undefined8 local_28;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    local_28 = _malloc(*(size_t *)*param_1);
  }
  else {
    local_28 = (void *)FUN_10000389c(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  if (local_28 != (void *)0x0) {
    (**(code **)(param_2 + 0x18))(param_1,local_28);
  }
  return local_28;
}



void _ObjSpeak(long *param_1)

{
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



void _ObjDestroy(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1000039a8(param_1,*param_1);
  }
  return;
}



void FUN_1000039a8(void *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x28) != 0) {
    (**(code **)(param_2 + 0x28))(param_1);
  }
  if (*(long *)(param_2 + 0x10) == 0) {
    _free(param_1);
  }
  else {
    FUN_1000039a8(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  return;
}



void FUN_100003a2c(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return;
}



char * FUN_100003a50(void)

{
  return "Hello, I\'m base object";
}



void FUN_100003a68(long param_1,long param_2)

{
  _memcpy((void *)(param_2 + 8),(void *)(param_1 + 8),0x40);
  return;
}



undefined * FUN_100003ab0(void)

{
  ___sprintf_chk(&DAT_1000080a8,0,0x5a,"woof! woof! My name is %s. I\'m a %s %s");
  return &DAT_1000080a8;
}



undefined8 * _NewDog(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(*(size_t *)_DogClass);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = _DogClass;
    puVar1[1] = param_1;
    ___strncpy_chk(puVar1 + 6,param_2,0x17,0xffffffffffffffff);
    ___strncpy_chk(puVar1 + 2,param_3,0x1f,0x20);
  }
  return puVar1;
}



void FUN_100003bd0(long param_1,long param_2)

{
  _memcpy((void *)(param_2 + 8),(void *)(param_1 + 8),0x3c);
  return;
}



undefined * FUN_100003c18(void)

{
  ___sprintf_chk(&DAT_100008102,0,0x5a,"My name is %s. I\'m a %d mo. old %s wiley %s");
  return &DAT_100008102;
}



undefined8 * _NewFerret(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(*(size_t *)_FerretClass);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = _FerretClass;
    ___strncpy_chk(puVar1 + 5,param_1,0x17,0x18);
    ___strncpy_chk(puVar1 + 1,param_2,0x1f,0x20);
    *(undefined4 *)(puVar1 + 8) = param_3;
  }
  return puVar1;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = _NewFerret("Kara","grey",0xf);
  uVar2 = _NewDog(0x4055400000000000,"Bruce","yellow");
  _printf("Ok created things\n");
  uVar3 = _ObjClone(uVar1);
  _ObjSpeak(uVar3);
  _printf("Karol says %s\n");
  _ObjSpeak(uVar1);
  _printf("Kara says %s\n");
  _ObjDestroy(uVar3);
  lVar4 = _ObjClone(uVar2);
  ___strncpy_chk(lVar4 + 0x30,"Donald",0x17,0xffffffffffffffff);
  _ObjSpeak(lVar4);
  _printf("Don says %s\n");
  _ObjSpeak(uVar2);
  _printf("Bruce says %s\n");
  _ObjDestroy(lVar4);
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


