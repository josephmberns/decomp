#include "determine-if-only-one-instance-is-running-2.h"



void _sigint_handler(void)

{
  _fprintf(*(FILE **)PTR____stderrp_100004000,"Caught signal %d.\n");
  _unlink("/tmp/MyUniqueName");
                    // WARNING: Subroutine does not return
  __exit(1);
}



undefined4 entry(void)

{
  int iVar1;
  sigaction local_28;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = _open("/tmp/MyUniqueName",0xa00);
  if (iVar1 < 0) {
    _fprintf(*(FILE **)PTR____stderrp_100004000,"I am already running!\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  local_28.__sigaction_u.__sa_handler = _sigint_handler;
  local_28.sa_mask = 0;
  local_28.sa_flags = 0;
  _sigaction(2,&local_28,(sigaction *)0x0);
  _sleep(0x14);
  _unlink("/tmp/MyUniqueName");
  _close(iVar1);
  return 0;
}



void __exit(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___exit_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004028)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sigaction(int param_1,sigaction *param_2,sigaction *param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sigaction_100004030)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_100004038)(param_1);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _unlink(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__unlink_100004040)((int)param_1);
  return iVar1;
}


