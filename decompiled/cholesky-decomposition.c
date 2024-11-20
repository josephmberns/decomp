#include "cholesky-decomposition.h"



void * _cholesky(long param_1,int param_2)

{
  void *pvVar1;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  pvVar1 = _calloc((long)(param_2 * param_2),8);
  if (pvVar1 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < local_2c + 1; local_30 = local_30 + 1) {
      local_38 = 0.0;
      for (local_3c = 0; local_3c < local_30; local_3c = local_3c + 1) {
        local_38 = (double)NEON_fmadd(*(undefined8 *)
                                       ((long)pvVar1 + (long)(local_2c * param_2 + local_3c) * 8),
                                      *(undefined8 *)
                                       ((long)pvVar1 + (long)(local_30 * param_2 + local_3c) * 8),
                                      local_38);
      }
      if (local_2c == local_30) {
        local_48 = SQRT(*(double *)(param_1 + (long)(local_2c * param_2 + local_2c) * 8) - local_38)
        ;
      }
      else {
        local_48 = (1.0 / *(double *)((long)pvVar1 + (long)(local_30 * param_2 + local_30) * 8)) *
                   (*(double *)(param_1 + (long)(local_2c * param_2 + local_30) * 8) - local_38);
      }
      *(double *)((long)pvVar1 + (long)(local_2c * param_2 + local_30) * 8) = local_48;
    }
  }
  return pvVar1;
}



ulong _show_matrix(ulong param_1,int param_2)

{
  uint uVar1;
  int local_24;
  int local_20;
  
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
      _printf("%2.5f ");
    }
    uVar1 = _printf("\n");
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



undefined8 entry(void)

{
  void *pvVar1;
  undefined auStack_f0 [128];
  undefined auStack_70 [72];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_70,&DAT_100003ed8,0x48);
  pvVar1 = (void *)_cholesky(auStack_70,3);
  _show_matrix(pvVar1,3);
  _printf("\n");
  _free(pvVar1);
  _memcpy(auStack_f0,&DAT_100003f20,0x80);
  pvVar1 = (void *)_cholesky(auStack_f0,4);
  _show_matrix(pvVar1,4);
  _free(pvVar1);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


