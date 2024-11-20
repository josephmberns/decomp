#include "water-collected-between-towers.h"



int _getWater(long param_1,int param_2,int param_3,int param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0;
  for (local_18 = param_2; local_18 <= param_3; local_18 = local_18 + 1) {
    if (*(int *)(param_1 + (long)local_18 * 4) < *(int *)(param_1 + (long)param_4 * 4)) {
      local_20 = *(int *)(param_1 + (long)param_4 * 4) - *(int *)(param_1 + (long)local_18 * 4);
    }
    else {
      local_20 = 0;
    }
    local_1c = local_1c + local_20;
  }
  return local_1c;
}



int _netWater(long param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int local_40;
  int local_38;
  int local_2c;
  int local_28;
  
  bVar2 = false;
  local_40 = 0;
  if (param_2 < 3) {
    return 0;
  }
  local_28 = 0;
LAB_100003c00:
  if (param_2 + -1 <= local_28) {
    return local_40;
  }
LAB_100003c20:
  do {
    if ((local_28 == param_2 + -2) ||
       (iVar3 = local_28,
       *(int *)(param_1 + (long)local_28 * 4) <= *(int *)(param_1 + (long)(local_28 + 1) * 4)))
    break;
    while (iVar1 = iVar3, local_2c = iVar1 + 1, local_2c < param_2) {
      if (*(int *)(param_1 + (long)local_28 * 4) <= *(int *)(param_1 + (long)local_2c * 4)) {
        iVar3 = _getWater(param_1,local_28 + 1,iVar1,local_28);
        local_40 = local_40 + iVar3;
        local_28 = local_2c;
        goto LAB_100003c20;
      }
      iVar3 = local_2c;
      if (((local_2c != param_2 + -1) &&
          (iVar3 = local_2c,
          *(int *)(param_1 + (long)local_2c * 4) < *(int *)(param_1 + (long)(iVar1 + 2) * 4))) &&
         ((!bVar2 ||
          (iVar3 = local_2c,
          *(int *)(param_1 + (long)local_38 * 4) <= *(int *)(param_1 + (long)(iVar1 + 2) * 4))))) {
        local_38 = iVar1 + 2;
        bVar2 = true;
        iVar3 = local_2c;
      }
    }
    if (!bVar2) break;
    iVar3 = _getWater(param_1,local_28 + 1,local_38 + -1,local_38);
    local_40 = local_40 + iVar3;
    local_28 = local_38;
    bVar2 = false;
  } while( true );
  local_28 = local_28 + 1;
  goto LAB_100003c00;
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  int local_2c;
  
  if (param_1 == 1) {
    _printf("Usage : %s <followed by space separated series of integers>");
  }
  else {
    pvVar2 = _malloc((long)(param_1 + -1) << 2);
    for (local_2c = 1; local_2c < param_1; local_2c = local_2c + 1) {
      iVar1 = _atoi(*(char **)(param_2 + (long)local_2c * 8));
      *(int *)((long)pvVar2 + (long)(local_2c + -1) * 4) = iVar1;
    }
    _netWater(pvVar2,param_1 + -1);
    _printf("Water collected : %d");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


