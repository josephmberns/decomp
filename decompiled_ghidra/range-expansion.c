#include "range-expansion.h"



undefined4 _get_list(char *param_1,char **param_2)

{
  int iVar1;
  char *local_20;
  
  local_20 = param_1;
  while( true ) {
    while (iVar1 = _isspace((int)*local_20), iVar1 != 0) {
      local_20 = local_20 + 1;
    }
    iVar1 = _get_rnge(local_20,param_2);
    if ((iVar1 == 0) && (_strtol(local_20,param_2,10), *param_2 == local_20)) break;
    local_20 = *param_2;
    while (iVar1 = _isspace((int)*local_20), iVar1 != 0) {
      local_20 = local_20 + 1;
    }
    if (*local_20 == '\0') {
      _putchar(10);
      return 1;
    }
    if (*local_20 != ',') break;
    local_20 = local_20 + 1;
  }
  *param_2 = local_20;
  _printf("\nSyntax error at %s\n");
  return 0;
}



undefined4 _get_rnge(char *param_1,char **param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  char *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  char **local_28;
  char *local_20;
  undefined4 local_14;
  
  local_28 = param_2;
  local_20 = param_1;
  lVar2 = _strtol(param_1,&local_38,10);
  local_2c = (undefined4)lVar2;
  if (local_38 == local_20) {
    local_14 = 0;
  }
  else {
    local_20 = local_38;
    while (iVar1 = _isspace((int)*local_20), iVar1 != 0) {
      local_20 = local_20 + 1;
    }
    if (*local_20 == '-') {
      local_20 = local_20 + 1;
      uVar3 = _strtol(local_20,local_28,10);
      local_30 = (undefined4)uVar3;
      if (*local_28 == local_20) {
        local_14 = 0;
      }
      else {
        local_14 = _add_range(local_2c,uVar3 & 0xffffffff);
      }
    }
    else {
      *local_28 = local_20;
      local_14 = 0;
    }
  }
  return local_14;
}



undefined4 _add_range(int param_1,int param_2)

{
  int local_18;
  undefined4 local_14;
  
  local_18 = param_1;
  if (param_1 < param_2) {
    while (local_18 <= param_2) {
      local_18 = local_18 + 1;
      _printf("%d ");
    }
    local_14 = 1;
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



int _add_number(void)

{
  int iVar1;
  
  iVar1 = _printf("%d ");
  return iVar1;
}



undefined8 entry(void)

{
  int iVar1;
  undefined auStack_20 [12];
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = _get_list("-6,-3--1,3-5,7-11,14,15,17-20",auStack_20);
  if (iVar1 != 0) {
    _puts("Ok");
  }
  _get_list("-6 -3--1,3-5,7-11,14,15,17-20",auStack_20);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004000)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004020)(param_1,param_2,param_3);
  return lVar1;
}


