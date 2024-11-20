#include "man-or-boy-test-3.h"



long _Frame(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
           ,undefined8 param_6,undefined8 param_7)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_5;
  *(undefined8 *)(param_1 + 0x28) = param_6;
  *(undefined8 *)(param_1 + 0x30) = param_7;
  return param_1;
}



undefined4 _F(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



void _eval(undefined8 *param_1)

{
  (*(code *)*param_1)(param_1);
  return;
}



void _B(long param_1)

{
  undefined auStack_58 [60];
  int local_1c;
  long local_18;
  
  local_1c = **(int **)(param_1 + 8) + -1;
  **(int **)(param_1 + 8) = local_1c;
  local_18 = param_1;
  _memcpy(auStack_58,&PTR__B_100004018,0x38);
  _Frame(auStack_58,&local_1c,local_18,*(undefined8 *)(local_18 + 0x10),
         *(undefined8 *)(local_18 + 0x18),*(undefined8 *)(local_18 + 0x20),
         *(undefined8 *)(local_18 + 0x28));
  _A();
  return;
}



int _A(long param_1)

{
  int iVar1;
  undefined4 local_1c;
  
  if (**(int **)(param_1 + 8) < 1) {
    local_1c = _eval(*(undefined8 *)(param_1 + 0x28));
    iVar1 = _eval(*(undefined8 *)(param_1 + 0x30));
    local_1c = local_1c + iVar1;
  }
  else {
    local_1c = _B(param_1);
  }
  return local_1c;
}



undefined8 entry(int param_1,long param_2)

{
  long lVar1;
  undefined4 local_120;
  undefined auStack_118 [56];
  undefined auStack_e0 [56];
  undefined auStack_a8 [56];
  undefined auStack_70 [60];
  undefined4 local_34;
  long local_30;
  int local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_30 = param_2;
  local_28 = param_1;
  if (param_1 == 2) {
    lVar1 = _strtol(*(char **)(param_2 + 8),(char **)0x0,0);
    local_120 = (undefined4)lVar1;
  }
  else {
    local_120 = 10;
  }
  local_34 = local_120;
  _memcpy(auStack_70,&PTR__B_100004050,0x38);
  _memcpy(auStack_a8,&PTR__F_100004088,0x38);
  _memcpy(auStack_e0,&PTR__F_1000040c0,0x38);
  _memcpy(auStack_118,&PTR__F_1000040f8,0x38);
  _Frame(auStack_70,&local_34,auStack_a8,auStack_118,auStack_118,auStack_a8,auStack_e0);
  _A();
  _printf("%d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004010)(param_1,param_2,param_3);
  return lVar1;
}


