#include "string-comparison-2.h"



int _compare(char *param_1,char *param_2)

{
  int iVar1;
  
  _strcmp(param_1,param_2);
  _strcmp(param_1,param_2);
  _strcmp(param_2,param_1);
  _strcmp(param_1,param_2);
  _strcmp(param_2,param_1);
  _strcmp(param_1,param_2);
  iVar1 = _printf("%s%2d%2d%2d%2d%2d%2d %s\n");
  return iVar1;
}



int _comparecase(char *param_1,char *param_2)

{
  int iVar1;
  
  _strcasecmp(param_1,param_2);
  _strcasecmp(param_1,param_2);
  _strcasecmp(param_2,param_1);
  _strcasecmp(param_1,param_2);
  _strcasecmp(param_2,param_1);
  _strcasecmp(param_1,param_2);
  iVar1 = _printf("%s%2d%2d%2d%2d%2d%2d %s ignoring case\n");
  return iVar1;
}



undefined8 entry(int param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_20;
  int local_18;
  
  _puts("\teq , ne , gt , lt , ge , le");
  local_20 = param_2;
  local_18 = param_1;
  while (local_18 = local_18 + -2, 0 < local_18) {
    uVar1 = *(undefined8 *)(local_20 + 8);
    uVar2 = *(undefined8 *)(local_20 + 0x10);
    _compare(uVar1,uVar2);
    _comparecase(uVar1,uVar2);
    local_20 = local_20 + 0x10;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcasecmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcasecmp_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004018)((int)param_1);
  return iVar1;
}


