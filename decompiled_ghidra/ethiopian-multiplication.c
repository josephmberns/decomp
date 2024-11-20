#include "ethiopian-multiplication.h"



void _halve(int *param_1)

{
  *param_1 = *param_1 >> 1;
  return;
}



void _doublit(int *param_1)

{
  *param_1 = *param_1 << 1;
  return;
}



bool _iseven(uint param_1)

{
  return (param_1 & 1) == 0;
}



int _ethiopian(int param_1,int param_2,byte param_3)

{
  ulong uVar1;
  int local_20;
  int local_18;
  int local_14;
  
  param_3 = param_3 & 1;
  local_20 = 0;
  local_18 = param_2;
  local_14 = param_1;
  if (param_3 != 0) {
    _printf("ethiopian multiplication of %d by %d\n");
  }
  while (0 < local_14) {
    uVar1 = _iseven(local_14);
    if ((uVar1 & 1) == 0) {
      if (param_3 != 0) {
        _printf("%4d %6d kept\n");
      }
      local_20 = local_20 + local_18;
    }
    else if (param_3 != 0) {
      _printf("%4d %6d struck\n");
    }
    _halve(&local_14);
    _doublit(&local_18);
  }
  return local_20;
}



undefined4 entry(void)

{
  _ethiopian(0x11,0x22,1);
  _printf("%d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


