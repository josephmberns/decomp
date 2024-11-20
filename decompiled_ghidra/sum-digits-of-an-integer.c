#include "sum-digits-of-an-integer.h"



int _SumDigits(ulong param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_10;
  undefined8 local_8;
  
  local_10 = 0;
  uVar2 = param_1;
  while (local_8 = uVar2, local_8 != 0) {
    iVar1 = 0;
    if ((long)param_2 != 0) {
      iVar1 = (int)(local_8 / (ulong)(long)param_2);
    }
    local_10 = local_10 + ((int)local_8 - iVar1 * param_2);
    uVar2 = 0;
    if ((long)param_2 != 0) {
      uVar2 = local_8 / (ulong)(long)param_2;
    }
  }
  return local_10;
}



undefined4 entry(void)

{
  _SumDigits(1);
  _SumDigits(0x3039,10);
  _SumDigits(0x1e0a5,10);
  _SumDigits(0xfe);
  _SumDigits(0xf0e,0x10);
  _printf("%d %d %d %d %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


