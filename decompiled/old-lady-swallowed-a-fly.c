#include "old-lady-swallowed-a-fly.h"



undefined4 entry(void)

{
  ulong local_28;
  ulong local_20;
  
  for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
    _printf("There was an old lady who swallowed a %s\n%s\n");
    for (local_28 = local_20; local_28 != 0 && local_20 < 7; local_28 = local_28 - 1) {
      _printf("She swallowed the %s to catch the %s\n");
      if (local_28 == 1) {
        _printf("%s\n");
      }
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


