#include "quine-1.h"



undefined4 entry(void)

{
  _printf(
         "#include <stdio.h>%c%cstatic char sym[] = %c%cn%ct%c%c%c%c%c;%c%cint main(void) {%c%cconst char *code = %c%s%c;%c%cprintf(code, sym[0], sym[0], sym[3], sym[2], sym[2], sym[2], sym[2], sym[2], sym[3], sym[3], sym[0], sym[0], sym[0], sym[1], sym[3], code, sym[3], sym[0], sym[1], sym[0], sym[0], sym[1], sym[0], sym[0]);%c%c%creturn 0;%c}%c"
         );
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


