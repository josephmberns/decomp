#include "string-matching-1.h"



bool _startsWith(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  
  sVar3 = _strlen(param_1);
  sVar4 = _strlen(param_2);
  if (sVar3 < sVar4) {
    bVar1 = false;
  }
  else {
    iVar2 = _strncmp(param_1,param_2,sVar4);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}



bool _endsWith(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  
  sVar3 = _strlen(param_1);
  sVar4 = _strlen(param_2);
  if (sVar3 < sVar4) {
    bVar1 = false;
  }
  else {
    iVar2 = _strncmp(param_1 + (sVar3 - sVar4),param_2,sVar4);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}



bool _doesContain(char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = _strstr(param_1,param_2);
  return pcVar1 != (char *)0x0;
}



undefined4 entry(void)

{
  _startsWith("Hello","Hell");
  _printf("Starts with Test ( Hello,Hell ) : %d\n");
  _endsWith("Code","ode");
  _printf("Ends with Test ( Code,ode ) : %d\n");
  _doesContain("Google","msn");
  _printf("Contains Test ( Google,msn ) : %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004008)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strncmp_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strstr_100004018)();
  return pcVar1;
}


