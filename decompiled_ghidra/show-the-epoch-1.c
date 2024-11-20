#include "show-the-epoch-1.h"



undefined4 entry(void)

{
  tm *ptVar1;
  time_t local_20;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = 0;
  ptVar1 = _gmtime(&local_20);
  _asctime(ptVar1);
  _printf("%s");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _asctime(tm *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__asctime_100004000)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * _gmtime(time_t *param_1)

{
  tm *ptVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  ptVar1 = (tm *)(*(code *)PTR__gmtime_100004008)();
  return ptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


