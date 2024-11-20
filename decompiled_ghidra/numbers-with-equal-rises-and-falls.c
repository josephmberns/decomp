#include "numbers-with-equal-rises-and-falls.h"



bool _riseEqFall(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1 % 10;
  local_c = 0;
  local_4 = param_1;
  while (local_4 = local_4 / 10, local_4 != 0) {
    local_c = local_c + ((uint)(local_8 < local_4 % 10) - (uint)(local_4 % 10 < local_8));
    local_8 = local_4 % 10;
  }
  return local_c == 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _nextNum(void)

{
  int iVar1;
  
  do {
    _DAT_100008000 = _DAT_100008000 + 1;
    iVar1 = _riseEqFall(_DAT_100008000);
  } while (iVar1 == 0);
  return _DAT_100008000;
}



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int local_18;
  
  iVar1 = _printf("The first 200 numbers are: \n");
  local_18 = 0;
  while( true ) {
    if (199 < local_18) break;
    _nextNum(iVar1);
    iVar1 = _printf("%d ");
    local_18 = local_18 + 1;
  }
  uVar2 = _printf("\n\nThe 10,000,000th number is: ");
  uVar3 = (ulong)uVar2;
  for (; local_18 < 10000000; local_18 = local_18 + 1) {
    uVar3 = _nextNum(uVar3);
  }
  _printf("%d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


