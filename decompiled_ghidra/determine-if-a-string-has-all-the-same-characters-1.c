#include "determine-if-a-string-has-all-the-same-characters-1.h"



undefined4 entry(int param_1,long param_2)

{
  byte bVar1;
  size_t sVar2;
  int local_24;
  
  if (param_1 < 3) {
    if ((param_1 == 1) || (sVar2 = _strlen(*(char **)(param_2 + 8)), sVar2 == 1)) {
      if (param_1 != 1) {
        _strlen(*(char **)(param_2 + 8));
      }
      _printf("Input string : \"%s\"\nLength : %d\nAll characters are identical.\n");
    }
    else {
      bVar1 = **(byte **)(param_2 + 8);
      sVar2 = _strlen(*(char **)(param_2 + 8));
      for (local_24 = 1; local_24 < (int)sVar2; local_24 = local_24 + 1) {
        if ((int)*(char *)(*(long *)(param_2 + 8) + (long)local_24) != (uint)bVar1) {
          _printf(
                 "Input string : \"%s\"\nLength : %d\nFirst different character : \"%c\"(0x%x) at position : %d\n"
                 );
          return 0;
        }
      }
      _printf("Input string : \"%s\"\nLength : %d\nAll characters are identical.\n");
    }
  }
  else {
    _printf("Usage : %s <Test String>\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004008)();
  return sVar1;
}


