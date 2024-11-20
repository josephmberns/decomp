#include "knapsack-problem-unbounded.h"



void _knapsack(double param_1,double param_2,double param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_44;
  int local_34;
  
  if (param_4 == _n) {
    if (_best_value < param_1) {
      _best_value = param_1;
      for (local_34 = 0; local_34 < _n; local_34 = local_34 + 1) {
        *(undefined4 *)(_best + (long)local_34 * 4) = *(undefined4 *)(_count + (long)local_34 * 4);
      }
    }
  }
  else {
    local_44 = (int)(param_3 / *(double *)(&DAT_100008018 + (long)param_4 * 0x20));
    if ((int)(param_2 / *(double *)(&DAT_100008010 + (long)param_4 * 0x20)) < local_44) {
      local_44 = (int)(param_2 / *(double *)(&DAT_100008010 + (long)param_4 * 0x20));
    }
    *(int *)(_count + (long)param_4 * 4) = local_44;
    while (-1 < *(int *)(_count + (long)param_4 * 4)) {
      uVar2 = NEON_fmadd((double)(long)*(int *)(_count + (long)param_4 * 4),
                         *(undefined8 *)(&DAT_100008008 + (long)param_4 * 0x20),param_1);
      uVar3 = NEON_fmsub((double)(long)*(int *)(_count + (long)param_4 * 4),
                         *(undefined8 *)(&DAT_100008010 + (long)param_4 * 0x20),param_2);
      uVar4 = NEON_fmsub((double)(long)*(int *)(_count + (long)param_4 * 4),
                         *(undefined8 *)(&DAT_100008018 + (long)param_4 * 0x20),param_3);
      _knapsack(uVar2,uVar3,uVar4,param_4 + 1);
      piVar1 = (int *)(_count + (long)param_4 * 4);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

undefined8 entry(void)

{
  int local_18;
  
  _count = _malloc((long)_n << 2);
  _best = _malloc((long)_n << 2);
  _best_value = 0;
  _knapsack(0,0x4039000000000000,0x3fd0000000000000,0);
  for (local_18 = 0; local_18 < _n; local_18 = local_18 + 1) {
    _printf("%d %s\n");
  }
  _printf("best value: %.0f\n");
  _free(_count);
  _free(_best);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


