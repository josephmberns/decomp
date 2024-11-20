#include "conjugate-transpose.h"



undefined  [16] _transpose(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined auVar3 [16];
  void *pvVar4;
  void *pvVar5;
  double dVar6;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  
  iStack_2c = (int)((ulong)param_1 >> 0x20);
  local_30 = (int)param_1;
  pvVar4 = _malloc((long)iStack_2c << 3);
  for (local_34 = 0; local_34 < iStack_2c; local_34 = local_34 + 1) {
    pvVar5 = _malloc((long)local_30 << 4);
    *(void **)((long)pvVar4 + (long)local_34 * 8) = pvVar5;
    for (local_38 = 0; local_38 < local_30; local_38 = local_38 + 1) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + (long)local_38 * 8) + (long)local_34 * 0x10);
      dVar6 = (double)puVar1[1];
      puVar2 = (undefined8 *)(*(long *)((long)pvVar4 + (long)local_34 * 8) + (long)local_38 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = -dVar6;
    }
  }
  auVar3._4_4_ = local_30;
  auVar3._0_4_ = iStack_2c;
  auVar3._8_8_ = pvVar4;
  return auVar3;
}



undefined4 _isHermitian(undefined8 param_1,long param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined auVar3 [16];
  int local_40;
  int iStack_3c;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  
  auVar3 = _transpose(param_1,param_2);
  local_40 = auVar3._0_4_;
  local_28 = (int)param_1;
  if (local_40 == local_28) {
    iStack_3c = auVar3._4_4_;
    iStack_24 = (int)((ulong)param_1 >> 0x20);
    if (iStack_3c == iStack_24) {
      local_2c = 0;
      do {
        if (local_40 <= local_2c) {
          return 1;
        }
        for (local_30 = 0; local_30 < iStack_3c; local_30 = local_30 + 1) {
          pdVar1 = (double *)(*(long *)(auVar3._8_8_ + (long)local_2c * 8) + (long)local_30 * 0x10);
          pdVar2 = (double *)(*(long *)(param_2 + (long)local_2c * 8) + (long)local_30 * 0x10);
          if ((*pdVar1 != *pdVar2) || (pdVar1[1] != pdVar2[1])) {
            return 0;
          }
        }
        local_2c = local_2c + 1;
      } while( true );
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000100003400)
// WARNING: Removing unreachable block (ram,0x00010000341c)
// WARNING: Removing unreachable block (ram,0x000100003514)
// WARNING: Removing unreachable block (ram,0x000100003534)

undefined  [16] _multiply(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined auVar3 [16];
  void *pvVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int local_30;
  int iStack_2c;
  int local_20;
  int iStack_1c;
  void *local_18;
  
  iStack_2c = (int)((ulong)param_1 >> 0x20);
  local_40 = (int)param_3;
  if (iStack_2c == local_40) {
    local_30 = (int)param_1;
    local_20 = local_30;
    iStack_3c = (int)((ulong)param_3 >> 0x20);
    iStack_1c = iStack_3c;
    local_18 = _malloc((long)local_30 << 3);
    for (local_44 = 0; local_44 < local_30; local_44 = local_44 + 1) {
      pvVar4 = _malloc((long)iStack_3c << 4);
      *(void **)((long)local_18 + (long)local_44 * 8) = pvVar4;
      puVar1 = (undefined8 *)
               (*(long *)((long)local_18 + (long)local_44 * 8) + (long)local_48 * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      for (local_48 = 0; local_48 < iStack_3c; local_48 = local_48 + 1) {
        pdVar2 = (double *)(*(long *)(param_2 + (long)local_44 * 8) + (long)local_48 * 0x10);
        dVar5 = *pdVar2;
        dVar6 = pdVar2[1];
        pdVar2 = (double *)(*(long *)(param_4 + (long)local_48 * 8) + (long)local_44 * 0x10);
        dVar7 = *pdVar2;
        dVar8 = pdVar2[1];
        pdVar2 = (double *)(*(long *)((long)local_18 + (long)local_44 * 8) + (long)local_48 * 0x10);
        *pdVar2 = *pdVar2 + (dVar5 * dVar7 - dVar6 * dVar8);
        pdVar2[1] = pdVar2[1] + dVar5 * dVar8 + dVar6 * dVar7;
      }
    }
  }
  auVar3._4_4_ = iStack_1c;
  auVar3._0_4_ = local_20;
  auVar3._8_8_ = local_18;
  return auVar3;
}



undefined4 _isNormal(undefined8 param_1,undefined8 param_2)

{
  double *pdVar1;
  double *pdVar2;
  long extraout_x1;
  long extraout_x1_00;
  undefined auVar3 [16];
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  undefined4 local_14;
  
  local_28 = (int)param_1;
  iStack_24 = (int)((ulong)param_1 >> 0x20);
  if (local_28 == iStack_24) {
    auVar3 = _transpose(param_1,param_2);
    _multiply(param_1,param_2,auVar3._0_8_,auVar3._8_8_);
    auVar3 = _transpose(param_1,param_2);
    _multiply(auVar3._0_8_,auVar3._8_8_,param_1,param_2);
    for (local_2c = 0; local_2c < local_28; local_2c = local_2c + 1) {
      for (local_30 = 0; local_30 < iStack_24; local_30 = local_30 + 1) {
        pdVar1 = (double *)(*(long *)(extraout_x1 + (long)local_2c * 8) + (long)local_30 * 0x10);
        pdVar2 = (double *)(*(long *)(extraout_x1_00 + (long)local_2c * 8) + (long)local_30 * 0x10);
        if ((*pdVar1 != *pdVar2) || (pdVar1[1] != pdVar2[1])) {
          return 0;
        }
      }
    }
    local_14 = 1;
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



undefined4 _isUnitary(undefined8 param_1,undefined8 param_2)

{
  double *pdVar1;
  int iVar2;
  undefined auVar3 [16];
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  undefined4 local_14;
  
  iVar2 = _isNormal(param_1,param_2);
  if (iVar2 == 1) {
    auVar3 = _transpose(param_1,param_2);
    auVar3 = _multiply(param_1,param_2,auVar3._0_8_,auVar3._8_8_);
    for (local_44 = 0; local_40 = auVar3._0_4_, local_44 < local_40; local_44 = local_44 + 1) {
      for (local_48 = 0; iStack_3c = auVar3._4_4_, local_48 < iStack_3c; local_48 = local_48 + 1) {
        if (((local_44 == local_48) &&
            ((pdVar1 = (double *)
                       (*(long *)(auVar3._8_8_ + (long)local_44 * 8) + (long)local_48 * 0x10),
             *pdVar1 != 1.0 || (pdVar1[1] != 0.0)))) ||
           ((local_44 != local_48 &&
            ((pdVar1 = (double *)
                       (*(long *)(auVar3._8_8_ + (long)local_44 * 8) + (long)local_48 * 0x10),
             *pdVar1 != 0.0 || (pdVar1[1] != 0.0)))))) {
          return 0;
        }
      }
    }
    local_14 = 1;
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



// WARNING: Removing unreachable block (ram,0x000100003ad0)
// WARNING: Removing unreachable block (ram,0x000100003af0)
// WARNING: Removing unreachable block (ram,0x000100003968)
// WARNING: Removing unreachable block (ram,0x00010000394c)
// WARNING: Removing unreachable block (ram,0x000100003cbc)
// WARNING: Removing unreachable block (ram,0x000100003cdc)

undefined8 entry(void)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  undefined auVar6 [16];
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int local_38;
  int iStack_34;
  
  _printf("Enter rows and columns :");
  _scanf("%d%d");
  pvVar4 = _malloc((long)local_38 << 3);
  _printf("Randomly Generated Complex Matrix A is : ");
  for (local_54 = 0; local_54 < local_38; local_54 = local_54 + 1) {
    _printf("\n");
    pvVar5 = _malloc((long)iStack_34 << 4);
    *(void **)((long)pvVar4 + (long)local_54 * 8) = pvVar5;
    for (local_58 = 0; local_58 < iStack_34; local_58 = local_58 + 1) {
      iVar2 = _rand();
      iVar3 = _rand();
      pdVar1 = (double *)(*(long *)((long)pvVar4 + (long)local_54 * 8) + (long)local_58 * 0x10);
      *pdVar1 = (double)((float)(iVar2 % 10) + ((float)(iVar3 % 10) * 0.0 - 0.0));
      pdVar1[1] = (double)((float)(iVar3 % 10) * 1.0 + 0.0 + 0.0);
      _printf("\t%f + %fi");
    }
  }
  auVar6 = _transpose(CONCAT44(iStack_34,local_38),pvVar4);
  _printf("\n\nTranspose of Complex Matrix A is : ");
  for (local_54 = 0; local_50 = auVar6._0_4_, local_54 < local_50; local_54 = local_54 + 1) {
    _printf("\n");
    iStack_4c = auVar6._4_4_;
    pvVar5 = _malloc((long)iStack_4c << 4);
    *(void **)(auVar6._8_8_ + (long)local_54 * 8) = pvVar5;
    for (local_58 = 0; local_58 < iStack_4c; local_58 = local_58 + 1) {
      iVar2 = _rand();
      iVar3 = _rand();
      pdVar1 = (double *)(*(long *)(auVar6._8_8_ + (long)local_54 * 8) + (long)local_58 * 0x10);
      *pdVar1 = (double)((float)(iVar2 % 10) + ((float)(iVar3 % 10) * 0.0 - 0.0));
      pdVar1[1] = (double)((float)(iVar3 % 10) * 1.0 + 0.0 + 0.0);
      _printf("\t%f + %fi");
    }
  }
  _isHermitian(CONCAT44(iStack_34,local_38),pvVar4);
  _printf("\n\nComplex Matrix A %s hermitian");
  _isUnitary(CONCAT44(iStack_34,local_38),pvVar4);
  _printf("\n\nComplex Matrix A %s unitary");
  _isNormal(CONCAT44(iStack_34,local_38),pvVar4);
  _printf("\n\nComplex Matrix A %s normal");
  return 0;
}



void ___muldc3(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____muldc3_100004000)();
  return;
}



void ___mulsc3(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____mulsc3_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004028)((int)param_1);
  return iVar1;
}


