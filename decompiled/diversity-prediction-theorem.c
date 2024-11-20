#include "diversity-prediction-theorem.h"



float _mean(long param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0.0;
  for (local_10 = 0; local_10 != param_2; local_10 = local_10 + 1) {
    local_14 = local_14 + *(float *)(param_1 + (long)local_10 * 4);
  }
  return local_14 / (float)param_2;
}



void _variance(float param_1,long param_2,int param_3)

{
  void *pvVar1;
  undefined4 local_28;
  
  local_28 = 0;
  pvVar1 = _malloc((long)param_3 << 2);
  for (; local_28 < param_3; local_28 = local_28 + 1) {
    *(float *)((long)pvVar1 + (long)local_28 * 4) =
         (param_1 - *(float *)(param_2 + (long)local_28 * 4)) *
         (param_1 - *(float *)(param_2 + (long)local_28 * 4));
  }
  _mean(pvVar1,param_3);
  return;
}



void * _extractData(char *param_1,int *param_2)

{
  void *pvVar1;
  long lVar2;
  double dVar3;
  char *local_38;
  int local_30;
  int local_2c;
  
  local_2c = 0;
  local_30 = 1;
  while (param_1[local_2c] != '\0') {
    lVar2 = (long)local_2c;
    local_2c = local_2c + 1;
    if (param_1[lVar2] == ',') {
      local_30 = local_30 + 1;
    }
  }
  pvVar1 = _malloc((long)local_30 << 2);
  *param_2 = local_30;
  local_38 = _strtok(param_1,",");
  local_2c = 0;
  while (local_38 != (char *)0x0) {
    dVar3 = _atof(local_38);
    lVar2 = (long)local_2c;
    local_2c = local_2c + 1;
    *(float *)((long)pvVar1 + lVar2 * 4) = (float)dVar3;
    local_38 = _strtok((char *)0x0,",");
  }
  return pvVar1;
}



undefined8 entry(int param_1,long param_2)

{
  double dVar1;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined8 local_28;
  long local_20;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = param_2;
  local_18 = param_1;
  if (param_1 == 3) {
    local_28 = _extractData(*(undefined8 *)(param_2 + 0x10),&local_34);
    dVar1 = _atof(*(char **)(local_20 + 8));
    local_2c = (float)dVar1;
    local_30 = _mean(local_28,local_34);
    _variance(local_2c,local_28,local_34);
    _printf("Average Error : %.9f\n");
    _printf("Crowd Error : %.9f\n");
    _variance(local_30,local_28,local_34);
    _printf("Diversity : %.9f");
  }
  else {
    _printf("Usage : %s <reference value> <observations separated by commas>");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__atof_100004000)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004018)();
  return pcVar1;
}


