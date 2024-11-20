#include "five-weekends-2.h"



undefined4 _check_month(void)

{
  int iVar1;
  FILE *pFVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 local_42c;
  char acStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  ___sprintf_chk(acStack_428,0,0x400,"ncal -m %d -M %d");
  pFVar2 = _popen(acStack_428,"r");
  if (pFVar2 == (FILE *)0x0) {
    local_42c = 0xffffffff;
  }
  else {
    sVar3 = _fread(acStack_428,1,0x400,pFVar2);
    _fclose(pFVar2);
    acStack_428[(int)sVar3] = '\0';
    pcVar4 = _strstr(acStack_428,"Fr");
    iVar1 = _sscanf(pcVar4,"Fr %d %d %d %d %d");
    if (iVar1 == 5) {
      pcVar4 = _strstr(acStack_428,"Sa");
      iVar1 = _sscanf(pcVar4,"Sa %d %d %d %d %d");
      if (iVar1 == 5) {
        pcVar4 = _strstr(acStack_428,"Su");
        iVar1 = _sscanf(pcVar4,"Su %d %d %d %d %d");
        if (iVar1 == 5) {
          local_42c = 1;
        }
        else {
          local_42c = 0;
        }
      }
      else {
        local_42c = 0;
      }
    }
    else {
      local_42c = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_42c;
}



undefined8 entry(void)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  local_20 = 0;
  for (local_18 = 0x76c; local_18 < 0x835; local_18 = local_18 + 1) {
    for (local_1c = 1; local_1c < 0xd; local_1c = local_1c + 1) {
      iVar1 = _check_month(local_18,local_1c);
      if (0 < iVar1) {
        _printf("%d-%02d ");
        local_20 = local_20 + 1;
        if (local_20 % 0x10 == 0) {
          _printf("\n");
        }
      }
    }
  }
  _printf("\nTotal: %d\n");
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004020)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _popen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__popen_100004028)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strstr_100004040)();
  return pcVar1;
}


