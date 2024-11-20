#include "random-latin-squares.h"



int _randInt(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _rand();
  param_2 = param_2 - param_1;
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = iVar2 / param_2;
  }
  return (iVar2 - iVar1 * param_2) + param_1;
}



void _shuffle(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  
  if (1 < param_2) {
    for (local_20 = 0; local_20 < param_2 + -1; local_20 = local_20 + 1) {
      iVar2 = _randInt(local_20,param_2);
      uVar1 = *(undefined4 *)(param_1 + (long)local_20 * 4);
      *(undefined4 *)(param_1 + (long)local_20 * 4) = *(undefined4 *)(param_1 + (long)iVar2 * 4);
      *(undefined4 *)(param_1 + (long)iVar2 * 4) = uVar1;
    }
  }
  return;
}



int _printSquare(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_24;
  int local_20;
  
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    _printf("[");
    for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
      if (0 < local_24) {
        _printf(", ");
      }
      _printf("%d");
    }
    _printf("]\n");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



void _latinSquare(int param_1)

{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_1 < 1) {
    _printf("[]\n");
  }
  else {
    pvVar2 = _malloc((long)(param_1 * param_1) << 2);
    if (pvVar2 == (void *)0x0) {
      _printf("Failed to allocate memory.");
    }
    else {
      for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
        for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
          *(int *)((long)pvVar2 + (long)(local_2c * param_1 + local_30) * 4) = local_30;
        }
      }
      _shuffle(pvVar2,param_1);
      for (local_2c = 1; local_2c < param_1 + -1; local_2c = local_2c + 1) {
        bVar1 = false;
LAB_100003c78:
        if (!bVar1) {
          _shuffle((void *)((long)pvVar2 + (long)(local_2c * param_1) * 4),param_1);
          for (local_34 = 0; local_34 < local_2c; local_34 = local_34 + 1) {
            for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
              if (*(int *)((long)pvVar2 + (long)(local_34 * param_1 + local_30) * 4) ==
                  *(int *)((long)pvVar2 + (long)(local_2c * param_1 + local_30) * 4))
              goto LAB_100003c78;
            }
          }
          bVar1 = true;
          goto LAB_100003c78;
        }
      }
      pvVar3 = _malloc((long)param_1 << 2);
      for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
        ___memset_chk(pvVar3,0,(long)param_1 << 2,0xffffffffffffffff);
        for (local_2c = 0; local_2c < param_1 + -1; local_2c = local_2c + 1) {
          *(undefined4 *)
           ((long)pvVar3 +
           (long)*(int *)((long)pvVar2 + (long)(local_2c * param_1 + local_30) * 4) * 4) = 1;
        }
        for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
          if (*(int *)((long)pvVar3 + (long)local_34 * 4) == 0) {
            *(int *)((long)pvVar2 + (long)((param_1 + -1) * param_1 + local_30) * 4) = local_34;
            break;
          }
        }
      }
      _free(pvVar3);
      _printSquare(pvVar2,param_1);
      _free(pvVar2);
    }
  }
  return;
}



undefined4 entry(void)

{
  time_t tVar1;
  
  tVar1 = _time((time_t *)0x0);
  _srand((uint)tVar1);
  _latinSquare();
  _latinSquare(5);
  _latinSquare(10);
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004028)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004030)();
  return tVar1;
}


