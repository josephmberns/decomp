#include "handle-a-signal.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _handleSigint(void)

{
  __gotint = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  _clock();
  _signal(2);
  while ((__gotint == 0 && (_usleep(500000), __gotint == 0))) {
    _printf("%d\n");
  }
  _clock();
  _printf("Program has run for %5.3f seconds\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

clock_t _clock(void)

{
  clock_t cVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  cVar1 = (*(code *)PTR__clock_100004000)();
  return cVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _signal(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__signal_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__usleep_100004018)(param_1);
  return iVar1;
}


