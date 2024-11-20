#include "heronian-triangles.h"



void _addAndOrderList(long *param_1,int *param_2)

{
  bool bVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *local_28;
  
  bVar1 = false;
  if (*param_1 == 0) {
    pvVar2 = _malloc(0x20);
    *param_1 = (long)pvVar2;
    puVar3 = (undefined8 *)*param_1;
    uVar4 = *(undefined8 *)param_2;
    puVar3[1] = *(undefined8 *)(param_2 + 2);
    *puVar3 = uVar4;
    puVar3[2] = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(*param_1 + 0x18) = 0;
  }
  else {
    puVar3 = (undefined8 *)_malloc(0x20);
    for (local_28 = (int *)*param_1; *(long *)(local_28 + 6) != 0;
        local_28 = *(int **)(local_28 + 6)) {
      if ((((*(double *)(local_28 + 4) < *(double *)(param_2 + 4)) ||
           ((*(double *)(local_28 + 4) == *(double *)(param_2 + 4) && (local_28[3] < param_2[3]))))
          || ((*(double *)(local_28 + 4) == *(double *)(param_2 + 4) &&
              ((local_28[3] == param_2[3] && (*local_28 <= *param_2)))))) &&
         ((*(long *)(local_28 + 6) == 0 ||
          (((*(double *)(param_2 + 4) < *(double *)(*(long *)(local_28 + 6) + 0x10) ||
            (param_2[3] < *(int *)(*(long *)(local_28 + 6) + 0xc))) ||
           (*param_2 < **(int **)(local_28 + 6))))))) {
        uVar4 = *(undefined8 *)param_2;
        puVar3[1] = *(undefined8 *)(param_2 + 2);
        *puVar3 = uVar4;
        puVar3[2] = *(undefined8 *)(param_2 + 4);
        puVar3[3] = *(undefined8 *)(local_28 + 6);
        *(undefined8 **)(local_28 + 6) = puVar3;
        bVar1 = true;
        break;
      }
    }
    if (!bVar1) {
      uVar4 = *(undefined8 *)param_2;
      puVar3[1] = *(undefined8 *)(param_2 + 2);
      *puVar3 = uVar4;
      puVar3[2] = *(undefined8 *)(param_2 + 4);
      puVar3[3] = 0;
      *(undefined8 **)(local_28 + 6) = puVar3;
    }
  }
  return;
}



int _gcd(int param_1,int param_2)

{
  int iVar1;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = param_1 / param_2;
    }
    local_14 = _gcd(param_2,param_1 - iVar1 * param_2);
  }
  return local_14;
}



void _calculateArea(int *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  param_1[3] = *param_1 + param_1[1] + param_1[2];
  dVar2 = (double)NEON_fnmsub(0x3fe0000000000000,(double)(long)param_1[3],(double)(long)*param_1);
  dVar3 = (double)NEON_fnmsub(0x3fe0000000000000,(double)(long)param_1[3],(double)(long)param_1[1]);
  dVar1 = (double)NEON_fnmsub(0x3fe0000000000000,(double)(long)param_1[3],(double)(long)param_1[2]);
  *(double *)(param_1 + 4) = SQRT((double)(long)param_1[3] * 0.5 * dVar2 * dVar3 * dVar1);
  return;
}



undefined8 _generateTriangleList(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_90;
  ulong uStack_88;
  double local_80;
  int local_70;
  int iStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong uStack_48;
  double local_40;
  uint local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_14;
  
  local_58 = 0;
  *param_2 = 0;
  local_20 = param_2;
  local_14 = param_1;
  for (local_24 = 1; local_24 <= local_14; local_24 = local_24 + 1) {
    for (local_28 = 1; local_28 <= local_24; local_28 = local_28 + 1) {
      for (local_2c = 1; (int)local_2c <= local_28; local_2c = local_2c + 1) {
        if (local_24 < (int)(local_2c + local_28)) {
          uVar2 = _gcd(local_24,local_28);
          iVar1 = _gcd(uVar2,local_2c);
          if (iVar1 == 1) {
            local_70 = local_24;
            iStack_6c = local_28;
            uStack_68 = local_2c;
            uStack_64 = 0;
            local_60 = 0;
            uStack_48 = (ulong)local_2c;
            local_50 = CONCAT44(local_28,local_24);
            local_40 = 0.0;
            _calculateArea(&local_50);
            if (local_40 / (double)(int)local_40 == 1.0) {
              uStack_88 = uStack_48;
              local_90 = local_50;
              local_80 = local_40;
              _addAndOrderList(&local_58,&local_90);
              *local_20 = *local_20 + 1;
            }
          }
        }
      }
    }
  }
  return local_58;
}



int _printList(long param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int local_2c;
  long local_28;
  
  local_2c = 1;
  iVar2 = _printf("\nDimensions\tPerimeter\tArea");
  local_28 = param_1;
  while( true ) {
    bVar1 = false;
    if (local_28 != 0) {
      bVar1 = local_2c != param_2 + 1;
    }
    if (!bVar1) break;
    if ((param_3 == -1) || ((double)(long)param_3 == *(double *)(local_28 + 0x10))) {
      iVar2 = _printf("\n%d x %d x %d\t%d\t\t%d");
      local_2c = local_2c + 1;
    }
    local_28 = *(long *)(local_28 + 0x18);
  }
  return iVar2;
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined local_24 [4];
  long local_20;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = param_2;
  local_18 = param_1;
  if (param_1 == 4) {
    iVar1 = _atoi(*(char **)(param_2 + 8));
    pvVar3 = (void *)_generateTriangleList(iVar1,local_24);
    _printf("Triangles found : %d");
    iVar1 = _atoi(*(char **)(local_20 + 0x18));
    if (iVar1 == -1) {
      _printf("\nPrinting first %s triangles.");
    }
    else {
      _printf("\nPrinting triangles with area %s square units.");
    }
    iVar1 = _atoi(*(char **)(local_20 + 0x10));
    iVar2 = _atoi(*(char **)(local_20 + 0x18));
    _printList(pvVar3,iVar1,iVar2);
    _free(pvVar3);
  }
  else {
    _printf("Usage : %s <Max side, max triangles to print and area, -1 for area to ignore>");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


