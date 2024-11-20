#include "man-or-boy-test-1.h"



undefined8 _f_1(void)

{
  return 0xffffffff;
}



undefined8 _f0(void)

{
  return 0;
}



undefined8 _f1(void)

{
  return 1;
}



void _eval(undefined8 *param_1)

{
  (*(code *)*param_1)(param_1);
  return;
}



void _B(long param_1)

{
  code *local_58;
  int *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  long local_18;
  
  local_1c = **(int **)(param_1 + 8) + -1;
  **(int **)(param_1 + 8) = local_1c;
  local_50 = &local_1c;
  local_58 = _B;
  local_40 = *(undefined8 *)(param_1 + 0x10);
  local_38 = *(undefined8 *)(param_1 + 0x18);
  local_30 = *(undefined8 *)(param_1 + 0x20);
  local_28 = *(undefined8 *)(param_1 + 0x28);
  local_48 = param_1;
  local_18 = param_1;
  _A(&local_58);
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



undefined4 entry(int param_1,long param_2)

{
  long lVar1;
  undefined4 local_190;
  code *local_188 [7];
  code *local_150 [7];
  code *local_118 [7];
  code *local_e0 [7];
  code *local_a8 [7];
  code *local_70;
  undefined4 *local_68;
  code **local_60;
  code **local_58;
  code **local_50;
  code **local_48;
  code **local_40;
  undefined4 local_34;
  long local_30;
  int local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_30 = param_2;
  local_28 = param_1;
  if (param_1 == 2) {
    lVar1 = _strtol(*(char **)(param_2 + 8),(char **)0x0,0);
    local_190 = (undefined4)lVar1;
  }
  else {
    local_190 = 10;
  }
  local_68 = &local_34;
  local_34 = local_190;
  local_70 = _B;
  _memset(local_a8,0,0x38);
  local_a8[0] = _f1;
  local_60 = local_a8;
  _memset(local_e0,0,0x38);
  local_e0[0] = _f_1;
  local_58 = local_e0;
  _memset(local_118,0,0x38);
  local_118[0] = _f_1;
  local_50 = local_118;
  _memset(local_150,0,0x38);
  local_150[0] = _f1;
  local_48 = local_150;
  _memset(local_188,0,0x38);
  local_188[0] = _f0;
  local_40 = local_188;
  _A(&local_70);
  _printf("%d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004000)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004010)(param_1,param_2,param_3);
  return lVar1;
}


