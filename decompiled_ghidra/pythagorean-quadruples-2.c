#include "pythagorean-quadruples-2.h"



undefined8 entry(void)

{
  void *pvVar1;
  int local_22c0;
  int local_22bc;
  int local_22b8;
  int local_22b0;
  int local_22ac;
  int local_22a8;
  int local_22a4;
  int aiStack_228c [2201];
  long local_28;
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_22b8 = 3;
  _bzero(aiStack_228c,0x2264);
  pvVar1 = _calloc(0x93b481,4);
  for (local_22a4 = 1; local_22a4 < 0x899; local_22a4 = local_22a4 + 1) {
    for (local_22a8 = local_22a4; local_22a8 < 0x899; local_22a8 = local_22a8 + 1) {
      *(undefined4 *)((long)pvVar1 + (long)(local_22a4 * local_22a4 + local_22a8 * local_22a8) * 4)
           = 1;
    }
  }
  for (local_22ac = 1; local_22ac < 0x899; local_22ac = local_22ac + 1) {
    local_22bc = local_22b8;
    local_22b8 = local_22b8 + 2;
    local_22c0 = local_22b8;
    local_22b0 = local_22ac;
    while (local_22b0 = local_22b0 + 1, local_22b0 < 0x899) {
      if (*(int *)((long)pvVar1 + (long)local_22bc * 4) != 0) {
        aiStack_228c[local_22b0] = 1;
      }
      local_22bc = local_22bc + local_22c0;
      local_22c0 = local_22c0 + 2;
    }
  }
  for (local_22b0 = 1; local_22b0 < 0x899; local_22b0 = local_22b0 + 1) {
    if (aiStack_228c[local_22b0] == 0) {
      _printf("%d ");
    }
  }
  _printf("\n");
  _free(pvVar1);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


