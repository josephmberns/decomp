#include "detect-division-by-zero.h"



int _try_division(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  sigaction sStack_38;
  sigaction local_28;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_2;
  local_14 = param_1;
  iVar1 = _sigsetjmp((int *)0x100008000,1);
  if (iVar1 == 0) {
    local_28.__sigaction_u.__sa_handler = FUN_100003e6c;
    local_28.sa_mask = 0;
    local_28.sa_flags = 0x40;
    iVar1 = _sigaction(8,&local_28,&sStack_38);
    if (iVar1 < 0) {
      _perror("sigaction");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    iVar1 = _sigaction(8,&sStack_38,(sigaction *)0x0);
    if (iVar1 < 0) {
      _perror("sigaction");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    iVar1 = _printf("%d / %d is %d\n");
  }
  else {
    iVar2 = _sigaction(8,&sStack_38,(sigaction *)0x0);
    if (iVar2 < 0) {
      _perror("sigaction");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    if ((iVar1 == 1) || (iVar1 == 7)) {
      iVar1 = _printf("%d / %d: caught division by zero!\n");
    }
    else {
      iVar1 = _printf("%d / %d: caught mysterious error!\n");
    }
  }
  return iVar1;
}



void FUN_100003e6c(undefined8 param_1,long param_2)

{
                    // WARNING: Subroutine does not return
  _siglongjmp((int *)0x100008000,*(int *)(param_2 + 8));
}



undefined4 entry(void)

{
  _try_division();
  _try_division(0xffffffd4);
  _try_division(0,5);
  _try_division(0);
  _try_division(0x80000000,0xffffffff);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004000)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sigaction(int param_1,sigaction *param_2,sigaction *param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sigaction_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _siglongjmp(int *param_1,int param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__siglongjmp_100004020)(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sigsetjmp(int *param_1,int param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sigsetjmp_100004028)((int)param_1,param_2);
  return iVar1;
}


