#include "fork-1.h"



undefined8 entry(void)

{
  pid_t pVar1;
  
  pVar1 = _fork();
  if (pVar1 == 0) {
    _usleep(10000);
    _printf("\tchild process: done\n");
  }
  else {
    if (pVar1 < 0) {
      _err(1,"fork error");
    }
    _printf("waiting for child %d...\n");
    _wait((int *)0x0);
    _printf("child %d finished\n");
  }
  return 0;
}



void _err(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__err_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

pid_t _fork(void)

{
  pid_t pVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  pVar1 = (*(code *)PTR__fork_100004008)();
  return pVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__usleep_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

pid_t _wait(int *param_1)

{
  pid_t pVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  pVar1 = (*(code *)PTR__wait_100004020)((int)param_1);
  return pVar1;
}


