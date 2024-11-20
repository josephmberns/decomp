#include "loops-foreach-2.h"



void entry(void)

{
  char *local_40;
  char *local_38;
  
  for (local_38 = "abcdefg"; *local_38 != '\0'; local_38 = local_38 + 1) {
    _printf("loop 1 %c\n");
  }
  for (local_40 = "123456789"; *local_40 != '\0'; local_40 = local_40 + 1) {
    _printf("loop 2 %c\n");
  }
                    // WARNING: Subroutine does not return
  _exit(0);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004000)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


