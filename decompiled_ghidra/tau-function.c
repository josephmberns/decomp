#include "tau-function.h"



int _divisor_count(uint param_1)

{
  uint uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 1;
  for (local_4 = param_1; (local_4 & 1) == 0; local_4 = local_4 >> 1) {
    local_8 = local_8 + 1;
  }
  for (local_c = 3; local_c * local_c <= local_4; local_c = local_c + 2) {
    local_10 = 1;
    uVar1 = local_4;
    while( true ) {
      local_4 = uVar1;
      uVar1 = 0;
      if (local_c != 0) {
        uVar1 = local_4 / local_c;
      }
      if (local_4 != uVar1 * local_c) break;
      local_10 = local_10 + 1;
      uVar1 = 0;
      if (local_c != 0) {
        uVar1 = local_4 / local_c;
      }
    }
    local_8 = local_8 * local_10;
  }
  if (1 < local_4) {
    local_8 = local_8 << 1;
  }
  return local_8;
}



undefined8 entry(void)

{
  uint local_1c;
  
  _printf("Count of divisors for the first %d positive integers:\n");
  for (local_1c = 1; local_1c < 0x65; local_1c = local_1c + 1) {
    _divisor_count(local_1c);
    _printf("%3d");
    if (local_1c % 0x14 == 0) {
      _printf("\n");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


