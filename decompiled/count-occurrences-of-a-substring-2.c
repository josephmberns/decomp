#include "count-occurrences-of-a-substring-2.h"



int _countSubstring(char *param_1,char *param_2)

{
  size_t sVar1;
  int local_30;
  char *local_20;
  int local_14;
  
  sVar1 = _strlen(param_2);
  if ((int)sVar1 == 0) {
    local_14 = 0;
  }
  else {
    local_30 = 0;
    for (local_20 = _strstr(param_1,param_2); local_20 != (char *)0x0;
        local_20 = _strstr(local_20 + (int)sVar1,param_2)) {
      local_30 = local_30 + 1;
    }
    local_14 = local_30;
  }
  return local_14;
}



undefined4 entry(void)

{
  _countSubstring("the three truths","th");
  _printf("%d\n");
  _countSubstring("ababababab","abab");
  _printf("%d\n");
  _countSubstring("abaabba*bbaba*bbab","a*b");
  _printf("%d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004008)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strstr_100004010)();
  return pcVar1;
}


