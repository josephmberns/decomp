#include "speech-synthesis.h"



pid_t _talk(undefined8 param_1)

{
  pid_t pVar1;
  uint local_20;
  pid_t local_1c;
  undefined8 local_18;
  
  local_18 = param_1;
  local_1c = _fork();
  if (local_1c < 0) {
    _perror("fork");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  if (local_1c != 0) {
    pVar1 = _waitpid(local_1c,(int *)&local_20,0);
    if (((local_20 & 0x7f) == 0) && (((int)local_20 >> 8 & 0xffU) == 0)) {
      return pVar1;
    }
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  _execlp("espeak","espeak");
  _perror("espeak");
                    // WARNING: Subroutine does not return
  __exit(1);
}



undefined4 entry(void)

{
  _talk("This is an example of speech synthesis.");
  return 0;
}



void __exit(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___exit_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _execlp(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__execlp_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

pid_t _fork(void)

{
  pid_t pVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  pVar1 = (*(code *)PTR__fork_100004018)();
  return pVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

pid_t _waitpid(pid_t param_1,int *param_2,int param_3)

{
  pid_t pVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pVar1 = (*(code *)PTR__waitpid_100004028)(param_1,param_2,param_3);
  return pVar1;
}


