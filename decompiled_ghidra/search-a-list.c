#include "search-a-list.h"



int _search_needle(char *param_1,long param_2)

{
  int iVar1;
  int local_2c;
  
  local_2c = 0;
  while( true ) {
    if (*(long *)(param_2 + (long)local_2c * 8) == 0) {
      return -1;
    }
    iVar1 = _strcmp(*(char **)(param_2 + (long)local_2c * 8),param_1);
    if (iVar1 == 0) break;
    local_2c = local_2c + 1;
  }
  return local_2c;
}



int _search_last_needle(char *param_1,long param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_14;
  
  local_2c = _search_needle(param_1,param_2);
  local_30 = local_2c;
  if (local_2c < 0) {
    local_14 = -1;
  }
  else {
    while (local_2c = local_2c + 1, *(long *)(param_2 + (long)local_2c * 8) != 0) {
      iVar1 = _strcmp(param_1,*(char **)(param_2 + (long)local_2c * 8));
      if (iVar1 == 0) {
        local_30 = local_2c;
      }
    }
    local_14 = local_30;
  }
  return local_14;
}



undefined8 entry(void)

{
  int iVar1;
  
  _search_needle("Bush");
  _printf("Bush is at %d\n");
  iVar1 = _search_needle("Washington",&_haystack);
  if (iVar1 == -1) {
    _printf("Washington is not in the haystack\n");
  }
  _search_needle();
  _printf("First index for Zag: %d\n");
  _search_last_needle("Zag",&_haystack);
  _printf("Last index for Zag: %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004008)((int)param_1);
  return iVar1;
}


