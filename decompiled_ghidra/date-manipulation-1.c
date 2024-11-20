#include "date-manipulation-1.h"



undefined4 entry(void)

{
  time_t tVar1;
  long local_58;
  tm tStack_50;
  undefined4 local_14;
  
  local_14 = 0;
  _strptime("March 7 2009 7:30pm EST","%B %d %Y %I:%M%p %Z",&tStack_50);
  tVar1 = _mktime(&tStack_50);
  local_58 = tVar1 + 0xa8c0;
  _ctime(&local_58);
  _printf("%s");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _ctime(time_t *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__ctime_100004000)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _mktime(tm *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__mktime_100004008)();
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strptime(char *param_1,char *param_2,tm *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strptime_100004018)();
  return pcVar1;
}


