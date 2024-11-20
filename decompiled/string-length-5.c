#include "string-length-5.h"



undefined8 entry(void)

{
  int iVar1;
  char local_20 [8];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _setlocale(2,"");
  builtin_strncpy(local_20,"møøse",8);
  _printf("bytes: %d\n");
  _mbstowcs((wchar_t *)0x0,local_20,0);
  iVar1 = _printf("chars: %d\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _mbstowcs(wchar_t *param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__mbstowcs_100004010)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004020)();
  return;
}


