#include "totient-function.h"



int _totient(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_4 = param_1;
  for (local_c = 2; local_c * local_c <= local_4; local_c = local_c + 2) {
    iVar1 = 0;
    if (local_c != 0) {
      iVar1 = local_4 / local_c;
    }
    iVar2 = local_4;
    if (local_4 == iVar1 * local_c) {
      while( true ) {
        local_4 = iVar2;
        iVar1 = 0;
        if (local_c != 0) {
          iVar1 = local_4 / local_c;
        }
        if (local_4 != iVar1 * local_c) break;
        iVar2 = 0;
        if (local_c != 0) {
          iVar2 = local_4 / local_c;
        }
      }
      iVar1 = 0;
      if (local_c != 0) {
        iVar1 = local_8 / local_c;
      }
      local_8 = local_8 - iVar1;
    }
    if (local_c == 2) {
      local_c = 1;
    }
  }
  if (1 < local_4) {
    iVar1 = 0;
    if (local_4 != 0) {
      iVar1 = local_8 / local_4;
    }
    local_8 = local_8 - iVar1;
  }
  return local_8;
}



undefined8 entry(void)

{
  int local_1c;
  
  _printf(" n    %c   prime");
  _printf("\n---------------\n");
  for (local_1c = 1; local_1c < 0x1a; local_1c = local_1c + 1) {
    _totient(local_1c);
    _printf("%2d   %2d   %s\n");
  }
  _printf("\nNumber of primes up to %6d =%4d\n");
  for (local_1c = 0x1a; local_1c < 0x186a1; local_1c = local_1c + 1) {
    _totient(local_1c);
    if (((local_1c == 100) || (local_1c == 1000)) || (local_1c % 10000 == 0)) {
      _printf("\nNumber of primes up to %6d = %4d\n");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


