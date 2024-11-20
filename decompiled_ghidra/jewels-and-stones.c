#include "jewels-and-stones.h"



int _count_jewels(char *param_1,char *param_2)

{
  char *pcVar1;
  int local_24;
  char *local_18;
  
  local_24 = 0;
  for (local_18 = param_1; *local_18 != '\0'; local_18 = local_18 + 1) {
    pcVar1 = _strchr(param_2,(int)*local_18);
    if (pcVar1 != (char *)0x0) {
      local_24 = local_24 + 1;
    }
  }
  return local_24;
}



undefined4 entry(void)

{
  _count_jewels("aAAbbbb","aA");
  _printf("%d\n");
  _count_jewels("ZZ","z");
  _printf("%d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004008)(param_1,param_2);
  return pcVar1;
}


