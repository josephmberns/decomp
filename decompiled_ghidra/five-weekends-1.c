#include "five-weekends-1.h"



undefined8 entry(void)

{
  time_t tVar1;
  tm tStack_60;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 0;
  _memset(&tStack_60,0,0x38);
  _printf("Months with five weekends:\n");
  for (local_1c = 0x76c; local_1c < 0x835; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < 7; local_20 = local_20 + 1) {
      tStack_60.tm_mon = *(int *)(&DAT_100008000 + (long)local_20 * 4);
      tStack_60.tm_year = local_1c + -0x76c;
      tStack_60.tm_mday = 1;
      local_24 = tStack_60.tm_mon;
      tVar1 = _mktime(&tStack_60);
      if (tVar1 == -1) {
        _printf("Error: %d %s\n");
      }
      else if (tStack_60.tm_wday == 5) {
        _printf("  %d %s\n");
        local_18 = local_18 + 1;
      }
    }
  }
  _printf("%d total\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004000)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _mktime(tm *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__mktime_100004008)();
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


