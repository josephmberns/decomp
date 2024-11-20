#include "file-extension-is-in-extensions-list-2.h"



int _strcasecmp(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  byte *local_28;
  byte *local_20;
  int local_14;
  
  local_28 = (byte *)param_2;
  local_20 = (byte *)param_1;
  while( true ) {
    iVar1 = _tolower((int)(char)*local_20);
    iVar2 = _tolower((int)(char)*local_28);
    if (iVar1 != iVar2) {
      local_14 = 1;
      if (*local_20 < *local_28) {
        local_14 = -1;
      }
      return local_14;
    }
    if (*local_20 == 0) break;
    local_20 = local_20 + 1;
    local_28 = local_28 + 1;
  }
  return 0;
}



undefined _ext_is_in_list(char *param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  long local_30;
  
  pcVar2 = _strrchr(param_1,0x2e);
  if (pcVar2 != (char *)0x0) {
    for (local_30 = 0; *(long *)(param_2 + local_30 * 8) != 0; local_30 = local_30 + 1) {
      iVar1 = _strcasecmp(pcVar2,*(char **)(param_2 + local_30 * 8));
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 entry(void)

{
  long local_20;
  
  for (local_20 = 0; (&_fnames)[local_20] != (undefined *)0x0; local_20 = local_20 + 1) {
    _ext_is_in_list((&_fnames)[local_20],&_exts);
    _printf("%s: %s\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strrchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strrchr_100004008)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tolower(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tolower_100004010)(_c);
  return iVar1;
}


