#include "repeat.h"



void _repeat(code *param_1,int param_2)

{
  undefined4 local_1c;
  
  local_1c = param_2;
  while (local_1c != 0) {
    (*param_1)();
    local_1c = local_1c + -1;
  }
  return;
}



int _example(void)

{
  int iVar1;
  
  iVar1 = _printf("Example\n");
  return iVar1;
}



undefined4 entry(void)

{
  _repeat(_example,4);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


