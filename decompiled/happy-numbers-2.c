#include "happy-numbers-2.h"



int _dsum(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  for (local_4 = param_1; local_4 != 0; local_4 = local_4 / 10) {
    local_8 = local_8 + (local_4 % 10) * (local_4 % 10);
  }
  return local_8;
}



bool _happy(int param_1)

{
  int local_18;
  int local_14;
  
  for (local_14 = param_1; 999 < local_14; local_14 = _dsum(local_14)) {
  }
  local_18 = _dsum(local_14);
  while (local_18 != local_14 && local_18 != 1) {
    local_14 = _dsum(local_14);
    _dsum(local_18);
    local_18 = _dsum();
  }
  return local_14 == 1;
}



undefined8 entry(void)

{
  bool bVar1;
  int iVar2;
  int local_1c;
  int local_18;
  
  local_1c = 8;
  local_18 = 1;
  while( true ) {
    bVar1 = true;
    if (local_1c == 0) {
      iVar2 = _printf("\n");
      bVar1 = iVar2 == 0;
    }
    if (!bVar1) break;
    iVar2 = _happy(local_18);
    if (iVar2 != 0) {
      local_1c = local_1c + -1;
      _printf("%d ");
    }
    local_18 = local_18 + 1;
  }
  local_1c = 1000000;
  _printf("The %dth happy number: ");
  local_18 = 1;
  while (local_1c != 0) {
    iVar2 = _happy(local_18);
    if ((iVar2 != 0) && (local_1c = local_1c + -1, local_1c == 0)) {
      _printf("%d\n");
    }
    local_18 = local_18 + 1;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


