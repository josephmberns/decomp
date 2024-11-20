#include "substring-3.h"



undefined * _substring(char *param_1,long param_2,long param_3)

{
  size_t sVar1;
  long local_30;
  long local_28;
  char *local_20;
  undefined *local_18;
  
  if (param_1 == (char *)0x0) {
    local_18 = (undefined *)0x0;
  }
  else {
    local_30 = param_3;
    if (param_3 < 0) {
      sVar1 = _strlen(param_1);
      local_30 = ((sVar1 + param_3) - param_2) + 1;
    }
    local_28 = param_2;
    local_20 = param_1;
    if (local_30 < 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      for (; local_28 != 0; local_28 = local_28 + -1) {
        if (*local_20 == '\0') {
          return (undefined *)0x0;
        }
        local_20 = local_20 + 1;
      }
      local_18 = (undefined *)_malloc(local_30 + 1);
      if (local_18 == (undefined *)0x0) {
        local_18 = (undefined *)0x0;
      }
      else {
        *local_18 = 0;
        ___strncat_chk(local_18,local_20,local_30,0xffffffffffffffff);
      }
    }
  }
  return local_18;
}



void _str_wholeless1(char *param_1)

{
  size_t sVar1;
  
  sVar1 = _strlen(param_1);
  _substring(param_1,0,sVar1 - 1);
  return;
}



void _str_fromch(char *param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  
  pcVar1 = _strchr(param_1,param_2);
  _substring(param_1,(long)pcVar1 - (long)param_1,param_3);
  return;
}



void _str_fromstr(char *param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  
  pcVar1 = _strstr(param_1,param_2);
  _substring(param_1,(long)pcVar1 - (long)param_1,param_3);
  return;
}



undefined8 entry(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)_substring("hello world shortest program",0xc,5);
  if (pcVar1 == (char *)0x0) {
    _puts("--error--");
  }
  else {
    _puts(pcVar1);
    _free(pcVar1);
  }
  pcVar1 = (char *)_substring("hello world shortest program",6,0xffffffffffffffff);
  if (pcVar1 == (char *)0x0) {
    _puts("--error--");
  }
  else {
    _puts(pcVar1);
    _free(pcVar1);
  }
  pcVar1 = (char *)_str_wholeless1("hello world shortest program");
  if (pcVar1 == (char *)0x0) {
    _puts("--error--");
  }
  else {
    _puts(pcVar1);
    _free(pcVar1);
  }
  pcVar1 = (char *)_str_fromch("hello world shortest program",0x77,5);
  if (pcVar1 == (char *)0x0) {
    _puts("--error--");
  }
  else {
    _puts(pcVar1);
    _free(pcVar1);
  }
  pcVar1 = (char *)_str_fromstr("hello world shortest program","ro",3);
  if (pcVar1 == (char *)0x0) {
    _puts("--error--");
  }
  else {
    _puts(pcVar1);
    _free(pcVar1);
  }
  return 0;
}



void ___strncat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncat_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004020)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004028)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strstr_100004030)();
  return pcVar1;
}


