#include "set-of-real-numbers.h"



// WARNING: Removing unreachable block (ram,0x00010000342c)
// WARNING: Removing unreachable block (ram,0x00010000345c)
// WARNING: Removing unreachable block (ram,0x000100003374)
// WARNING: Removing unreachable block (ram,0x0001000033a4)
// WARNING: Removing unreachable block (ram,0x0001000032f8)
// WARNING: Removing unreachable block (ram,0x000100003330)
// WARNING: Removing unreachable block (ram,0x0001000033b0)
// WARNING: Removing unreachable block (ram,0x0001000033e8)

undefined  [16] _length(undefined8 *param_1)

{
  ulong uVar1;
  undefined auVar2 [16];
  int local_5c;
  double local_58;
  double local_40;
  
  local_58 = (double)param_1[3];
  local_5c = 0;
  if ((ABS((double)param_1[3]) == INFINITY) || (ABS((double)param_1[4]) == INFINITY)) {
    local_40 = -1.0;
  }
  else if ((double)param_1[3] < (double)param_1[4]) {
    do {
      uVar1 = (*(code *)*param_1)(local_58,param_1,0);
      if ((uVar1 & 1) != 0) {
        local_5c = local_5c + 1;
      }
      local_58 = local_58 + 1e-05;
    } while (local_58 < (double)param_1[4]);
    local_40 = (double)(long)local_5c * 1e-05;
  }
  else {
    local_40 = 0.0;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_40;
  return auVar2;
}



bool _empty(undefined8 *param_1)

{
  byte bVar1;
  double dVar2;
  bool local_11;
  
  if ((double)param_1[3] == (double)param_1[4]) {
    bVar1 = (*(code *)*param_1)(param_1[3],param_1,0);
    local_11 = (bool)((bVar1 ^ 1) & 1);
  }
  else {
    dVar2 = (double)_length(param_1);
    local_11 = dVar2 == 0.0;
  }
  return local_11;
}



undefined8 * _makeSet(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  code *local_38;
  
  switch(param_3) {
  case 0:
    local_38 = FUN_1000036d0;
    break;
  case 1:
    local_38 = FUN_100003730;
    break;
  case 2:
    local_38 = FUN_100003790;
    break;
  case 3:
    local_38 = FUN_1000037f0;
    break;
  default:
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)_malloc(0x28);
  *puVar1 = local_38;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = param_2;
  return puVar1;
}



bool FUN_1000036d0(double param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(double *)(param_2 + 0x18) <= param_1) {
    bVar1 = param_1 <= *(double *)(param_2 + 0x20);
  }
  return bVar1;
}



bool FUN_100003730(double param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(double *)(param_2 + 0x18) < param_1) {
    bVar1 = param_1 <= *(double *)(param_2 + 0x20);
  }
  return bVar1;
}



bool FUN_100003790(double param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(double *)(param_2 + 0x18) <= param_1) {
    bVar1 = param_1 < *(double *)(param_2 + 0x20);
  }
  return bVar1;
}



bool FUN_1000037f0(double param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(double *)(param_2 + 0x18) < param_1) {
    bVar1 = param_1 < *(double *)(param_2 + 0x20);
  }
  return bVar1;
}



undefined8 * _makeIntersect(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)_malloc(0x28);
  *puVar1 = FUN_1000038e0;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  uVar2 = NEON_fminnm(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
  puVar1[3] = uVar2;
  uVar2 = NEON_fminnm(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
  puVar1[4] = uVar2;
  return puVar1;
}



uint FUN_1000038e0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 local_2c;
  
  uVar1 = (*(code *)**(undefined8 **)(param_2 + 8))(param_1,*(undefined8 *)(param_2 + 8),0);
  local_2c = 0;
  if ((uVar1 & 1) != 0) {
    local_2c = (*(code *)**(undefined8 **)(param_2 + 0x10))
                         (param_1,*(undefined8 *)(param_2 + 0x10),0);
  }
  return local_2c & 1;
}



undefined8 * _makeUnion(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)_malloc(0x28);
  *puVar1 = FUN_1000039f4;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  uVar2 = NEON_fminnm(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
  puVar1[3] = uVar2;
  uVar2 = NEON_fminnm(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
  puVar1[4] = uVar2;
  return puVar1;
}



uint FUN_1000039f4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 local_2c;
  
  uVar1 = (*(code *)**(undefined8 **)(param_2 + 8))(param_1,*(undefined8 *)(param_2 + 8),0);
  local_2c = 1;
  if ((uVar1 & 1) == 0) {
    local_2c = (*(code *)**(undefined8 **)(param_2 + 0x10))
                         (param_1,*(undefined8 *)(param_2 + 0x10),0);
  }
  return local_2c & 1;
}



undefined8 * _makeSubtract(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x28);
  *puVar1 = FUN_100003af0;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar1;
}



uint FUN_100003af0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 local_2c;
  
  uVar1 = (*(code *)**(undefined8 **)(param_2 + 8))(param_1,*(undefined8 *)(param_2 + 8),0);
  local_2c = 0;
  if ((uVar1 & 1) != 0) {
    local_2c = (*(code *)**(undefined8 **)(param_2 + 0x10))
                         (param_1,*(undefined8 *)(param_2 + 0x10),0);
    local_2c = local_2c ^ 1;
  }
  return local_2c & 1;
}



undefined8 entry(void)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 *puVar8;
  int local_54;
  
  pvVar1 = (void *)_makeSet();
  pvVar2 = (void *)_makeSet(0);
  pvVar3 = (void *)_makeSet(0x3ff0000000000000,0x4000000000000000,1);
  pvVar4 = (void *)_makeSet(0,0x4008000000000000,2);
  pvVar5 = (void *)_makeSet(0,0x3ff0000000000000,3);
  pvVar6 = (void *)_makeSet(0,0x3ff0000000000000,0);
  pvVar7 = (void *)_makeSet(0,0);
  for (local_54 = 0; local_54 < 3; local_54 = local_54 + 1) {
    puVar8 = (undefined8 *)_makeUnion(pvVar1,pvVar2);
    (*(code *)*puVar8)((double)(long)local_54,puVar8);
    _printf("(0, 1]   union   [0, 2) contains %d is %d\n");
    _free(puVar8);
    puVar8 = (undefined8 *)_makeIntersect(pvVar2,pvVar3);
    (*(code *)*puVar8)((double)(long)local_54,puVar8,0);
    _printf("[0, 2) intersect (1, 2] contains %d is %d\n");
    _free(puVar8);
    puVar8 = (undefined8 *)_makeSubtract(pvVar4,pvVar5);
    (*(code *)*puVar8)((double)(long)local_54,puVar8,0);
    _printf("[0, 3)     -     (0, 1) contains %d is %d\n");
    _free(puVar8);
    puVar8 = (undefined8 *)_makeSubtract(pvVar4,pvVar6);
    (*(code *)*puVar8)((double)(long)local_54,puVar8,0);
    _printf("[0, 3)     -     [0, 1] contains %d is %d\n");
    _free(puVar8);
    _printf("\n");
  }
  _empty(pvVar7);
  _printf("[0, 0] is empty %d\n");
  _free(pvVar1);
  _free(pvVar2);
  _free(pvVar3);
  _free(pvVar4);
  _free(pvVar5);
  _free(pvVar6);
  _free(pvVar7);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


