#include "string-length-4.h"



undefined4 entry(void)

{
  _wcslen(L"おはよう");
  _printf("Length in characters = %d\n");
  _printf("Length in bytes      = %d\n");
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

size_t _wcslen(wchar_t *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__wcslen_100004008)();
  return sVar1;
}


