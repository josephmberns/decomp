#include "sedols.h"



uint _sedol_checksum(char *param_1)

{
  int iVar1;
  size_t sVar2;
  int local_2c;
  int local_28;
  uint local_14;
  
  sVar2 = _strlen(param_1);
  iVar1 = (int)sVar2;
  local_28 = 0;
  if (iVar1 == 7) {
    _fprintf(*(FILE **)PTR____stderrp_100004010,"SEDOL code already checksummed? (%s)\n");
    local_14 = (int)param_1[6] & 0x7f;
  }
  else if (((iVar1 < 8) && (5 < iVar1)) && (sVar2 = _strcspn(param_1,_reject), sVar2 == 6)) {
    for (local_2c = 0; local_2c < 6; local_2c = local_2c + 1) {
      iVar1 = _isdigit((int)param_1[local_2c]);
      if (iVar1 == 0) {
        iVar1 = _isalpha((int)param_1[local_2c]);
        if (iVar1 == 0) {
          _fprintf(*(FILE **)PTR____stderrp_100004010,"SEDOL with not alphanumeric digit\n");
          return 0xffffffff;
        }
        iVar1 = _toupper((int)param_1[local_2c]);
        iVar1 = (iVar1 + -0x37) * *(int *)(&_sedol_weights + (long)local_2c * 4);
      }
      else {
        iVar1 = (param_1[local_2c] + -0x30) * *(int *)(&_sedol_weights + (long)local_2c * 4);
      }
      local_28 = local_28 + iVar1;
    }
    local_14 = (10 - local_28 % 10) % 10 + 0x30;
  }
  else {
    _fprintf(*(FILE **)PTR____stderrp_100004010,"not a SEDOL code? (%s)\n");
    local_14 = 0xffffffff;
  }
  return local_14;
}



undefined8 entry(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  char acStack_22 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  while (pcVar2 = _fgets(acStack_22,10,*(FILE **)PTR____stdinp_100004018), pcVar2 != (char *)0x0) {
    sVar3 = _strlen(acStack_22);
    if (acStack_22[(int)sVar3 + -1] == '\n') {
      acStack_22[(int)sVar3 + -1] = '\0';
    }
    iVar1 = _sedol_checksum(acStack_22);
    if (0 < iVar1) {
      _printf("%s%c\n");
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004020)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isalpha(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isalpha_100004030)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isdigit(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isdigit_100004038)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strcspn(char *param_1,char *param_2)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strcspn_100004048)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004050)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _toupper(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__toupper_100004058)(_c);
  return iVar1;
}


