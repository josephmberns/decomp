#include "lu-decomposition.h"



void _mat_zero(long param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
      *(undefined8 *)(*(long *)(param_1 + (long)local_10 * 8) + (long)local_14 * 8) = 0;
    }
  }
  return;
}



long * _mat_new(int param_1)

{
  long *plVar1;
  void *pvVar2;
  int local_24;
  
  plVar1 = (long *)_malloc((long)param_1 * 8);
  pvVar2 = _malloc((long)param_1 * 8 * (long)param_1);
  *plVar1 = (long)pvVar2;
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    plVar1[local_24] = *plVar1 + (long)(param_1 * local_24) * 8;
  }
  _mat_zero(plVar1,param_1);
  return plVar1;
}



long _mat_copy(long param_1,uint param_2)

{
  long lVar1;
  undefined4 local_30;
  undefined4 local_2c;
  
  lVar1 = _mat_new(param_2);
  for (local_2c = 0; local_2c < (int)param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < (int)param_2; local_30 = local_30 + 1) {
      *(undefined8 *)(*(long *)(lVar1 + (long)local_2c * 8) + (long)local_30 * 8) =
           *(undefined8 *)(param_1 + (long)local_2c * (ulong)param_2 * 8 + (long)local_30 * 8);
    }
  }
  return lVar1;
}



void _mat_del(undefined8 *param_1)

{
  _free((void *)*param_1);
  _free(param_1);
  return;
}



ulong _mat_show(ulong param_1,char *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  char *local_38;
  int local_2c;
  int local_28;
  char *local_20;
  
  local_20 = param_2;
  if (param_2 == (char *)0x0) {
    local_20 = "%8.4g";
  }
  for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
    pcVar1 = "      ";
    if (local_28 == 0) {
      pcVar1 = " [ ";
    }
    uVar2 = _printf(pcVar1);
    for (local_2c = 0; param_1 = (ulong)uVar2, local_2c < param_3; local_2c = local_2c + 1) {
      _printf(local_20);
      if (local_2c < param_3 + -1) {
        local_38 = "  ";
      }
      else {
        local_38 = " ]\n";
        if (local_28 != param_3 + -1) {
          local_38 = "\n";
        }
      }
      uVar2 = _printf(local_38);
    }
  }
  return param_1;
}



long _mat_mul(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar2 = _mat_new(param_3);
  for (local_34 = 0; local_34 < param_3; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < param_3; local_38 = local_38 + 1) {
      for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
        puVar1 = (undefined8 *)(*(long *)(lVar2 + (long)local_34 * 8) + (long)local_38 * 8);
        uVar3 = NEON_fmadd(*(undefined8 *)
                            (*(long *)(param_1 + (long)local_34 * 8) + (long)local_3c * 8),
                           *(undefined8 *)
                            (*(long *)(param_2 + (long)local_3c * 8) + (long)local_38 * 8),*puVar1);
        *puVar1 = uVar3;
      }
    }
  }
  return lVar2;
}



void _mat_pivot(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
      *(double *)(*(long *)(param_2 + (long)local_18 * 8) + (long)local_1c * 8) =
           (double)(local_18 == local_1c);
    }
  }
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    local_24 = local_20;
    for (local_28 = local_20; local_28 < param_3; local_28 = local_28 + 1) {
      if (ABS(*(double *)(*(long *)(param_1 + (long)local_24 * 8) + (long)local_20 * 8)) <
          ABS(*(double *)(*(long *)(param_1 + (long)local_28 * 8) + (long)local_20 * 8))) {
        local_24 = local_28;
      }
    }
    if (local_24 != local_20) {
      for (local_2c = 0; local_2c < param_3; local_2c = local_2c + 1) {
        uVar1 = *(undefined8 *)(*(long *)(param_2 + (long)local_20 * 8) + (long)local_2c * 8);
        *(undefined8 *)(*(long *)(param_2 + (long)local_20 * 8) + (long)local_2c * 8) =
             *(undefined8 *)(*(long *)(param_2 + (long)local_24 * 8) + (long)local_2c * 8);
        *(undefined8 *)(*(long *)(param_2 + (long)local_24 * 8) + (long)local_2c * 8) = uVar1;
      }
    }
  }
  return;
}



void _mat_LU(undefined8 param_1,long param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  _mat_zero(param_2,param_5);
  _mat_zero(param_3,param_5);
  _mat_pivot(param_1,param_4,param_5);
  lVar1 = _mat_mul(param_4,param_1,param_5);
  for (local_44 = 0; local_44 < param_5; local_44 = local_44 + 1) {
    *(undefined8 *)(*(long *)(param_2 + (long)local_44 * 8) + (long)local_44 * 8) =
         0x3ff0000000000000;
  }
  for (local_48 = 0; local_48 < param_5; local_48 = local_48 + 1) {
    for (local_4c = 0; local_4c < param_5; local_4c = local_4c + 1) {
      if (local_4c <= local_48) {
        local_58 = 0.0;
        for (local_5c = 0; local_5c < local_4c; local_5c = local_5c + 1) {
          local_58 = (double)NEON_fmadd(*(undefined8 *)
                                         (*(long *)(param_2 + (long)local_4c * 8) +
                                         (long)local_5c * 8),
                                        *(undefined8 *)
                                         (*(long *)(param_3 + (long)local_5c * 8) +
                                         (long)local_48 * 8),local_58);
        }
        *(double *)(*(long *)(param_3 + (long)local_4c * 8) + (long)local_48 * 8) =
             *(double *)(*(long *)(lVar1 + (long)local_4c * 8) + (long)local_48 * 8) - local_58;
      }
      if (local_48 <= local_4c) {
        local_58 = 0.0;
        for (local_60 = 0; local_60 < local_48; local_60 = local_60 + 1) {
          local_58 = (double)NEON_fmadd(*(undefined8 *)
                                         (*(long *)(param_2 + (long)local_4c * 8) +
                                         (long)local_60 * 8),
                                        *(undefined8 *)
                                         (*(long *)(param_3 + (long)local_60 * 8) +
                                         (long)local_48 * 8),local_58);
        }
        *(double *)(*(long *)(param_2 + (long)local_4c * 8) + (long)local_48 * 8) =
             (*(double *)(*(long *)(lVar1 + (long)local_4c * 8) + (long)local_48 * 8) - local_58) /
             *(double *)(*(long *)(param_3 + (long)local_48 * 8) + (long)local_48 * 8);
      }
    }
  }
  _mat_del(lVar1);
  return;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = _mat_new(3);
  uVar2 = _mat_new(3);
  uVar3 = _mat_new(3);
  uVar4 = _mat_copy(&_A3,3);
  _mat_LU(uVar4,uVar1,uVar3,uVar2,3);
  _printf("A =");
  _mat_show(uVar4,0,3);
  _printf("L =");
  _mat_show(uVar1,0,3);
  _printf("U =");
  _mat_show(uVar3,0,3);
  _printf("P =");
  _mat_show(uVar2,0,3);
  _mat_del(uVar4);
  _mat_del(uVar1);
  _mat_del(uVar3);
  _mat_del(uVar2);
  _printf("\n");
  uVar1 = _mat_new(4);
  uVar2 = _mat_new(4);
  uVar3 = _mat_new(4);
  uVar4 = _mat_copy(&_A4,4);
  _mat_LU(uVar4,uVar1,uVar3,uVar2,4);
  _printf("A =");
  _mat_show(uVar4,0,4);
  _printf("L =");
  _mat_show(uVar1,0,4);
  _printf("U =");
  _mat_show(uVar3,0,4);
  _printf("P =");
  _mat_show(uVar2,0,4);
  _mat_del(uVar4);
  _mat_del(uVar1);
  _mat_del(uVar3);
  _mat_del(uVar2);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


