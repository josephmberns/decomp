#include "count-occurrences-of-a-substring-1.h"



int _match(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  int local_28;
  char *local_18;
  
  local_28 = 0;
  sVar3 = _strlen(param_2);
  local_18 = param_1;
  while (*local_18 != '\0') {
    pcVar1 = local_18 + 1;
    iVar2 = _strncmp(local_18,param_2,(long)(int)sVar3);
    local_18 = pcVar1;
    if (iVar2 == 0) {
      if (param_3 == 0) {
        local_18 = pcVar1 + ((int)sVar3 + -1);
      }
      local_28 = local_28 + 1;
    }
  }
  return local_28;
}



undefined4 entry(void)

{
  _match("the three truths","th");
  _printf("%d\n");
  _match("abababababa","aba",1);
  _printf("overlap:%d\n");
  _match("abababababa","aba",0);
  _printf("not:    %d\n");
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

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strncmp_100004010)((int)param_1);
  return iVar1;
}


