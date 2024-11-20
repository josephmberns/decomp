#include "towers-of-hanoi-1.h"



int _move(int param_1,int param_2)

{
  int iVar1;
  int in_w2;
  
  if (param_1 < 2) {
    iVar1 = _printf("Move disk from pole %d to pole %d\n");
  }
  else {
    _move(param_1 + -1,param_2);
    _printf("Move disk from pole %d to pole %d\n");
    iVar1 = _move(param_1 + -1,in_w2);
  }
  return iVar1;
}



undefined4 entry(void)

{
  _move(4,1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


