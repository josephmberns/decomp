#include "closures-value-capture-1.h"



undefined4 __tmpl(void)

{
  return 0x216da321;
}



int * _dupf(int param_1)

{
  int *piVar1;
  int *local_30;
  
  piVar1 = (int *)_mmap(0,0x24,6,0x1002,0,0);
  if (piVar1 == (int *)0xffffffffffffffff) {
    _perror("mmap");
                    // WARNING: Subroutine does not return
    _exit(-1);
  }
  ___memcpy_chk(piVar1,__tmpl,0x24,0xffffffffffffffff);
  for (local_30 = piVar1; local_30 < piVar1 + 8; local_30 = (int *)((long)local_30 + 1)) {
    if (*local_30 == -0x21524111) {
      *local_30 = param_1;
    }
  }
  return piVar1;
}



undefined8 entry(ulong param_1)

{
  uint uVar1;
  int local_70;
  ulong auStack_68 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  for (local_70 = 0; local_70 < 10; local_70 = local_70 + 1) {
    param_1 = _dupf(local_70);
    auStack_68[local_70] = param_1;
  }
  for (local_70 = 0; local_70 < 9; local_70 = local_70 + 1) {
    (*(code *)auStack_68[local_70])();
    uVar1 = _printf("func[%d]: %d\n");
    param_1 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004018)(param_1);
  return;
}



void _mmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__mmap_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


