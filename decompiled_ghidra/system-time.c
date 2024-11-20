#include "system-time.h"



undefined4 entry(void)

{
  time_t local_20;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = _time((time_t *)0x0);
  _ctime(&local_20);
  _printf("%s");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _ctime(time_t *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__ctime_100004000)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004010)();
  return tVar1;
}


