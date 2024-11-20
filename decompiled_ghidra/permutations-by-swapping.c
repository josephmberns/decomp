#include "permutations-by-swapping.h"



ulong _heapPermute(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  int local_2c;
  
  if (param_1 == 1) {
    _printf("\n[");
    for (local_2c = 0; local_2c < param_3; local_2c = local_2c + 1) {
      _printf("%d,");
    }
    uVar2 = _printf("\b] Sign : %d");
    uVar3 = (ulong)uVar2;
    _flag = -_flag;
  }
  else {
    for (local_2c = 0; local_2c < param_1 + -1; local_2c = local_2c + 1) {
      _heapPermute(param_1 + -1,param_2,param_3);
      if (param_1 % 2 == 0) {
        uVar1 = param_2[local_2c];
        param_2[local_2c] = param_2[param_1 + -1];
        param_2[param_1 + -1] = uVar1;
      }
      else {
        uVar1 = *param_2;
        *param_2 = param_2[param_1 + -1];
        param_2[param_1 + -1] = uVar1;
      }
    }
    uVar3 = _heapPermute(param_1 + -1,param_2,param_3);
  }
  return uVar3;
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  char *local_38;
  int local_30;
  int local_2c;
  
  local_2c = 0;
  local_30 = 1;
  if (param_1 == 1) {
    _printf("Usage : %s <comma separated list of integers>");
  }
  else {
    while (*(char *)(*(long *)(param_2 + 8) + (long)local_2c) != '\0') {
      lVar3 = (long)local_2c;
      local_2c = local_2c + 1;
      if (*(char *)(*(long *)(param_2 + 8) + lVar3) == ',') {
        local_30 = local_30 + 1;
      }
    }
    pvVar2 = _malloc((long)local_30 << 2);
    local_2c = 0;
    local_38 = _strtok(*(char **)(param_2 + 8),",");
    while (local_38 != (char *)0x0) {
      iVar1 = _atoi(local_38);
      lVar3 = (long)local_2c;
      local_2c = local_2c + 1;
      *(int *)((long)pvVar2 + lVar3 * 4) = iVar1;
      local_38 = _strtok((char *)0x0,",");
    }
    _heapPermute(local_2c,pvVar2,local_30);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004018)();
  return pcVar1;
}


