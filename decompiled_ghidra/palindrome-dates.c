#include "palindrome-dates.h"



undefined _is_palindrome(char *param_1)

{
  long local_30;
  ulong local_28;
  
  local_28 = _strlen(param_1);
  local_30 = 0;
  while( true ) {
    if (local_28 <= local_30 + 1U) {
      return 1;
    }
    if (param_1[local_30] != param_1[local_28 - 1]) break;
    local_30 = local_30 + 1;
    local_28 = local_28 - 1;
  }
  return 0;
}



undefined8 entry(void)

{
  uint uVar1;
  tm *ptVar2;
  ulong uVar3;
  int local_50;
  long local_48;
  undefined4 local_3c;
  char acStack_38 [32];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_3c = 0;
  local_48 = _time((time_t *)0x0);
  local_50 = 0xf;
  uVar1 = _printf("Next %d palindrome dates:\n");
  uVar3 = (ulong)uVar1;
  while (0 < local_50) {
    ptVar2 = _gmtime(&local_48);
    _strftime(acStack_38,0x20,"%Y%m%d",ptVar2);
    uVar3 = _is_palindrome(acStack_38);
    if ((uVar3 & 1) != 0) {
      _strftime(acStack_38,0x20,"%F",ptVar2);
      uVar1 = _printf("%s\n");
      uVar3 = (ulong)uVar1;
      local_50 = local_50 + -1;
    }
    local_48 = local_48 + 0x15180;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar3);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * _gmtime(time_t *param_1)

{
  tm *ptVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  ptVar1 = (tm *)(*(code *)PTR__gmtime_100004010)();
  return ptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strftime(char *param_1,size_t param_2,char *param_3,tm *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strftime_100004020)();
  return sVar1;
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

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004030)();
  return tVar1;
}


