#include "remove-duplicate-elements-1.h"



int * _uniq(int *param_1,uint param_2)

{
  void *pvVar1;
  int *piVar2;
  int *local_40;
  uint local_34;
  int *local_18;
  
  if (param_2 == 0) {
    local_18 = (int *)0x0;
  }
  else {
    local_18 = (int *)_malloc(0x10);
    if (local_18 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    *local_18 = *param_1;
    local_18[2] = 0;
    local_18[3] = 0;
    for (local_34 = 1; local_40 = local_18, local_34 < param_2; local_34 = local_34 + 1) {
      for (; param_1[(int)local_34] != *local_40; local_40 = *(int **)(local_40 + 2)) {
        if (*(long *)(local_40 + 2) == 0) {
          pvVar1 = _malloc(0x10);
          *(void **)(local_40 + 2) = pvVar1;
          piVar2 = *(int **)(local_40 + 2);
          if (piVar2 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            _exit(1);
          }
          *piVar2 = param_1[(int)local_34];
          piVar2[2] = 0;
          piVar2[3] = 0;
          break;
        }
      }
    }
  }
  return local_18;
}



undefined8 entry(void)

{
  int iVar1;
  long local_50;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_40,&DAT_100003f78,0x28);
  for (local_50 = _uniq(auStack_40,10); local_50 != 0; local_50 = *(long *)(local_50 + 8)) {
    _printf("%d ");
  }
  iVar1 = _puts("");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004030)((int)param_1);
  return iVar1;
}


