#include "sierpinski-carpet-2.h"



void _TileCarpet(long param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  
  iVar1 = *param_4;
  iVar2 = *param_4;
  if ((param_2 == 1) && (param_3 == 1)) {
    for (local_24 = 0; local_24 < *param_4; local_24 = local_24 + 1) {
      for (local_28 = 0; local_28 < *param_4; local_28 = local_28 + 1) {
        *(undefined *)
         (*(long *)(*(long *)(param_1 + 0x10) + (long)(iVar1 * param_2 + local_24) * 8) +
         (long)(iVar2 * param_3 + local_28)) = 0x20;
      }
    }
  }
  else {
    for (local_24 = 0; local_24 < *param_4; local_24 = local_24 + 1) {
      for (local_28 = 0; local_28 < *param_4; local_28 = local_28 + 1) {
        *(undefined *)
         (*(long *)(*(long *)(param_1 + 0x10) + (long)(iVar1 * param_2 + local_24) * 8) +
         (long)(iVar2 * param_3 + local_28)) =
             *(undefined *)(*(long *)(*(long *)(param_4 + 4) + (long)local_24 * 8) + (long)local_28)
        ;
      }
    }
  }
  return;
}



int * _Sierpinski(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int *local_40;
  int local_30;
  int local_2c;
  
  if (param_1 < 2) {
    local_40 = (int *)&DAT_100008000;
  }
  else {
    local_40 = (int *)_Sierpinski(param_1 + -1);
  }
  piVar1 = (int *)_malloc(0x18);
  *piVar1 = *local_40 * 3;
  pvVar2 = _malloc((long)(*local_40 * 2 * *piVar1));
  *(void **)(piVar1 + 2) = pvVar2;
  pvVar2 = _malloc((long)*piVar1 << 3);
  *(void **)(piVar1 + 4) = pvVar2;
  for (local_2c = 0; local_2c < *local_40; local_2c = local_2c + 1) {
    *(long *)(*(long *)(piVar1 + 4) + (long)local_2c * 8) =
         *(long *)(piVar1 + 2) + (long)(local_2c * *piVar1);
    *(long *)(*(long *)(piVar1 + 4) + (long)(local_2c + *local_40) * 8) =
         *(long *)(piVar1 + 2) + (long)((local_2c + *local_40) * *piVar1);
    *(long *)(*(long *)(piVar1 + 4) + (long)(local_2c + *local_40 * 2) * 8) =
         *(long *)(piVar1 + 2) + (long)(local_2c * *piVar1);
  }
  for (local_30 = 0; local_30 < 3; local_30 = local_30 + 1) {
    for (local_2c = 0; local_2c < 2; local_2c = local_2c + 1) {
      _TileCarpet(piVar1,local_2c,local_30,local_40);
    }
  }
  if (local_40 != (int *)&DAT_100008000) {
    _free(*(void **)(local_40 + 4));
    _free(*(void **)(local_40 + 2));
    _free(local_40);
  }
  return piVar1;
}



void _CarpetPrint(FILE *param_1,int *param_2)

{
  int iVar1;
  int local_31c;
  undefined auStack_302 [730];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_31c = 0; local_31c < *param_2; local_31c = local_31c + 1) {
    ___strncpy_chk(auStack_302,*(undefined8 *)(*(long *)(param_2 + 4) + (long)local_31c * 8),
                   (long)*param_2,0x2da);
    _fprintf(param_1,"%s\n");
  }
  iVar1 = _fprintf(param_1,"\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR____stdoutp_100004010;
  uVar1 = _Sierpinski(3);
  _CarpetPrint(uVar2,uVar1);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}


