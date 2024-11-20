#include "universal-turing-machine.h"



int _state_index(int *param_1,char *param_2)

{
  int iVar1;
  int local_2c;
  
  local_2c = 0;
  while( true ) {
    if (*param_1 <= local_2c) {
      return 0;
    }
    iVar1 = _strcmp(*(char **)(*(long *)(param_1 + 2) + (long)local_2c * 8),param_2);
    if (iVar1 == 0) break;
    local_2c = local_2c + 1;
  }
  return local_2c;
}



int _symbol_index(long param_1,char param_2)

{
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x20) <= local_18) {
      return 0;
    }
    if (*(char *)(*(long *)(param_1 + 0x28) + (long)local_18) == param_2) break;
    local_18 = local_18 + 1;
  }
  return local_18;
}



int _move(int param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar1 = (void *)(ulong)(uint)param_1;
  lVar3 = *(long *)((long)pvVar1 + 0x40);
  if (param_2 == 1) {
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) {
      pvVar2 = _calloc(1,0x18);
      *(void **)((long)pvVar1 + 0x40) = pvVar2;
      **(undefined4 **)((long)pvVar1 + 0x40) = *(undefined4 *)((long)pvVar1 + 0x30);
      if (lVar3 != 0) {
        *(long *)(*(long *)((long)pvVar1 + 0x40) + 8) = lVar3;
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)((long)pvVar1 + 0x40);
      }
    }
    else {
      *(undefined8 *)((long)pvVar1 + 0x40) = *(undefined8 *)(lVar3 + 0x10);
      pvVar2 = pvVar1;
    }
    param_1 = (int)pvVar2;
  }
  else if (param_2 == 0) {
    if ((lVar3 == 0) || (*(long *)(lVar3 + 8) == 0)) {
      pvVar2 = _calloc(1,0x18);
      *(void **)((long)pvVar1 + 0x40) = pvVar2;
      **(undefined4 **)((long)pvVar1 + 0x40) = *(undefined4 *)((long)pvVar1 + 0x30);
      if (lVar3 != 0) {
        *(long *)(*(long *)((long)pvVar1 + 0x40) + 0x10) = lVar3;
        *(undefined8 *)(lVar3 + 8) = *(undefined8 *)((long)pvVar1 + 0x40);
      }
    }
    else {
      *(undefined8 *)((long)pvVar1 + 0x40) = *(undefined8 *)(lVar3 + 8);
      pvVar2 = pvVar1;
    }
    param_1 = (int)pvVar2;
  }
  return param_1;
}



int * _create(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  undefined8 uVar6;
  int local_2c;
  int *piVar7;
  int *piVar8;
  
  piVar3 = (int *)_malloc(0x58);
  *piVar3 = param_1;
  pvVar4 = _malloc((long)param_1 << 3);
  *(void **)(piVar3 + 2) = pvVar4;
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    uVar6 = *(undefined8 *)register0x00000008;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + 8);
    *(undefined8 *)(*(long *)(piVar3 + 2) + (long)local_2c * 8) = uVar6;
  }
  piVar3[4] = *(int *)register0x00000008;
  pvVar4 = _malloc((long)piVar3[4] << 2);
  *(void **)(piVar3 + 6) = pvVar4;
  for (local_2c = 0; piVar7 = (int *)((long)register0x00000008 + 8), local_2c < piVar3[4];
      local_2c = local_2c + 1) {
    uVar1 = _state_index(piVar3,*(undefined8 *)piVar7);
    *(undefined4 *)(*(long *)(piVar3 + 6) + (long)local_2c * 4) = uVar1;
    register0x00000008 = (BADSPACEBASE *)piVar7;
  }
  piVar8 = (int *)((long)register0x00000008 + 0x10);
  piVar3[8] = *piVar7;
  pvVar4 = _malloc((long)piVar3[8]);
  *(void **)(piVar3 + 10) = pvVar4;
  for (local_2c = 0; local_2c < piVar3[8]; local_2c = local_2c + 1) {
    iVar2 = *piVar8;
    piVar8 = piVar8 + 2;
    *(char *)(*(long *)(piVar3 + 10) + (long)local_2c) = (char)iVar2;
  }
  iVar2 = _symbol_index(piVar3,(int)(char)*piVar8);
  piVar3[0xc] = iVar2;
  iVar2 = _state_index(piVar3,*(undefined8 *)(piVar8 + 2));
  piVar3[0xd] = iVar2;
  piVar7 = piVar8 + 6;
  piVar3[0xe] = piVar8[4];
  piVar3[0x10] = 0;
  piVar3[0x11] = 0;
  for (local_2c = 0; local_2c < piVar3[0xe]; local_2c = local_2c + 1) {
    _move((int)piVar3,1);
    iVar2 = *piVar7;
    piVar7 = piVar7 + 2;
    uVar1 = _symbol_index(piVar3,(int)(char)iVar2);
    **(undefined4 **)(piVar3 + 0x10) = uVar1;
  }
  if (piVar3[0xe] == 0) {
    _move((int)piVar3,1);
  }
  while (*(long *)(*(long *)(piVar3 + 0x10) + 8) != 0) {
    *(undefined8 *)(piVar3 + 0x10) = *(undefined8 *)(*(long *)(piVar3 + 0x10) + 8);
  }
  piVar8 = piVar7 + 2;
  piVar3[0x12] = *piVar7;
  pvVar4 = _malloc((long)*piVar3 << 3);
  *(void **)(piVar3 + 0x14) = pvVar4;
  for (local_2c = 0; local_2c < *piVar3; local_2c = local_2c + 1) {
    pvVar4 = _malloc((long)piVar3[8] << 3);
    *(void **)(*(long *)(piVar3 + 0x14) + (long)local_2c * 8) = pvVar4;
  }
  for (local_2c = 0; local_2c < piVar3[0x12]; local_2c = local_2c + 1) {
    piVar5 = (int *)_malloc(0x14);
    iVar2 = _state_index(piVar3,*(undefined8 *)piVar8);
    *piVar5 = iVar2;
    iVar2 = _symbol_index(piVar3,(int)(char)piVar8[2]);
    piVar5[1] = iVar2;
    iVar2 = _symbol_index(piVar3,(int)(char)piVar8[4]);
    piVar5[2] = iVar2;
    piVar7 = piVar8 + 8;
    piVar5[3] = piVar8[6];
    piVar8 = piVar8 + 10;
    iVar2 = _state_index(piVar3,*(undefined8 *)piVar7);
    piVar5[4] = iVar2;
    *(int **)(*(long *)(*(long *)(piVar3 + 0x14) + (long)*piVar5 * 8) + (long)piVar5[1] * 8) =
         piVar5;
  }
  return piVar3;
}



int _print_state(long param_1)

{
  int iVar1;
  long local_20;
  
  _printf("%-10s ");
  for (local_20 = *(long *)(param_1 + 0x40); *(long *)(local_20 + 8) != 0;
      local_20 = *(long *)(local_20 + 8)) {
  }
  for (; local_20 != 0; local_20 = *(long *)(local_20 + 0x10)) {
    if (local_20 == *(long *)(param_1 + 0x40)) {
      _printf("[%c]");
    }
    else {
      _printf(" %c ");
    }
  }
  iVar1 = _printf("\n");
  return iVar1;
}



void _run(long param_1)

{
  long lVar1;
  undefined4 local_1c;
  
  do {
    _print_state(param_1);
    for (local_1c = 0; local_1c < *(int *)(param_1 + 0x10); local_1c = local_1c + 1) {
      if (*(int *)(*(long *)(param_1 + 0x18) + (long)local_1c * 4) == *(int *)(param_1 + 0x34)) {
        return;
      }
    }
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + (long)*(int *)(param_1 + 0x34) * 8) +
                     (long)**(int **)(param_1 + 0x40) * 8);
    **(undefined4 **)(param_1 + 0x40) = *(undefined4 *)(lVar1 + 8);
    _move((int)param_1,*(int *)(lVar1 + 0xc));
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar1 + 0x10);
  } while( true );
}



undefined4 entry(void)

{
  undefined8 uVar1;
  
  _printf("Simple incrementer\n");
  uVar1 = _create(2);
  _run(uVar1);
  _printf("\nThree-state busy beaver\n");
  uVar1 = _create(4);
  _run(uVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004018)((int)param_1);
  return iVar1;
}


