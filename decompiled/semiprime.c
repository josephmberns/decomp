#include "semiprime.h"



bool _semiprime(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 2;
  local_4 = param_1;
  while( true ) {
    bVar1 = false;
    if (local_c < 2) {
      bVar1 = local_8 * local_8 <= local_4;
    }
    if (!bVar1) break;
    while( true ) {
      iVar2 = 0;
      if (local_8 != 0) {
        iVar2 = local_4 / local_8;
      }
      if (local_4 != iVar2 * local_8) break;
      iVar2 = 0;
      if (local_8 != 0) {
        iVar2 = local_4 / local_8;
      }
      local_c = local_c + 1;
      local_4 = iVar2;
    }
    local_8 = local_8 + 1;
  }
  return local_c + (uint)(1 < local_4) == 2;
}



undefined8 entry(void)

{
  int iVar1;
  int local_18;
  
  for (local_18 = 2; local_18 < 100; local_18 = local_18 + 1) {
    iVar1 = _semiprime(local_18);
    if (iVar1 != 0) {
      _printf(" %d");
    }
  }
  _putchar(10);
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


