#include "priority-queue-1.h"



void _push(long *param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*(int *)((long)param_1 + 0xc) <= *(int *)(param_1 + 1) + 1) {
    if (*(int *)((long)param_1 + 0xc) == 0) {
      local_34 = 4;
    }
    else {
      local_34 = *(int *)((long)param_1 + 0xc) << 1;
    }
    *(int *)((long)param_1 + 0xc) = local_34;
    pvVar4 = _realloc((void *)*param_1,(long)*(int *)((long)param_1 + 0xc) << 4);
    *param_1 = (long)pvVar4;
  }
  local_2c = *(int *)(param_1 + 1) + 1;
  while( true ) {
    local_30 = local_2c / 2;
    bVar1 = false;
    if (1 < local_2c) {
      bVar1 = param_2 < *(int *)(*param_1 + (long)local_30 * 0x10);
    }
    if (!bVar1) break;
    puVar2 = (undefined8 *)(*param_1 + (long)local_30 * 0x10);
    uVar5 = *puVar2;
    puVar3 = (undefined8 *)(*param_1 + (long)local_2c * 0x10);
    puVar3[1] = puVar2[1];
    *puVar3 = uVar5;
    local_2c = local_30;
  }
  *(int *)(*param_1 + (long)local_2c * 0x10) = param_2;
  *(undefined8 *)(*param_1 + (long)local_2c * 0x10 + 8) = param_3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return;
}



undefined8 _pop(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int local_1c;
  int local_14;
  undefined8 local_8;
  
  if (*(int *)(param_1 + 1) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(undefined8 *)(*param_1 + 0x18);
    lVar4 = *param_1;
    puVar2 = (undefined8 *)(*param_1 + (long)*(int *)(param_1 + 1) * 0x10);
    uVar5 = *puVar2;
    *(undefined8 *)(lVar4 + 0x18) = puVar2[1];
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
    local_14 = 1;
    while (local_14 != *(int *)(param_1 + 1) + 1) {
      local_1c = *(int *)(param_1 + 1) + 1;
      iVar1 = local_14 * 2;
      if ((iVar1 <= *(int *)(param_1 + 1)) &&
         (*(int *)(*param_1 + (long)iVar1 * 0x10) < *(int *)(*param_1 + (long)local_1c * 0x10))) {
        local_1c = iVar1;
      }
      if ((iVar1 + 1 <= *(int *)(param_1 + 1)) &&
         (*(int *)(*param_1 + (long)(iVar1 + 1) * 0x10) < *(int *)(*param_1 + (long)local_1c * 0x10)
         )) {
        local_1c = iVar1 + 1;
      }
      puVar2 = (undefined8 *)(*param_1 + (long)local_1c * 0x10);
      uVar5 = *puVar2;
      puVar3 = (undefined8 *)(*param_1 + (long)local_14 * 0x10);
      puVar3[1] = puVar2[1];
      *puVar3 = uVar5;
      local_14 = local_1c;
    }
  }
  return local_8;
}



undefined8 entry(void)

{
  void *pvVar1;
  int local_24;
  
  pvVar1 = _calloc(1,0x10);
  _push(pvVar1,3,"Clear drains");
  _push(pvVar1,4,"Feed cat");
  _push(pvVar1,5,"Make tea");
  _push(pvVar1,1,"Solve RC tasks");
  _push(pvVar1,2,"Tax return");
  for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
    _pop(pvVar1);
    _printf("%s\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004010)();
  return pvVar1;
}


