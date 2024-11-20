#include "arithmetic-numbers.h"



void _divisor_count_and_sum(uint param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_4;
  
  local_1c = 1;
  local_20 = 1;
  local_24 = 2;
  for (local_4 = param_1; (local_4 & 1) == 0; local_4 = local_4 >> 1) {
    local_1c = local_1c + 1;
    local_20 = local_20 + local_24;
    local_24 = local_24 << 1;
  }
  for (local_28 = 3; local_28 * local_28 <= local_4; local_28 = local_28 + 2) {
    local_2c = 1;
    local_30 = 1;
    local_24 = local_28;
    uVar1 = local_4;
    while( true ) {
      local_4 = uVar1;
      uVar1 = 0;
      if (local_28 != 0) {
        uVar1 = local_4 / local_28;
      }
      if (local_4 != uVar1 * local_28) break;
      local_2c = local_2c + 1;
      local_30 = local_30 + local_24;
      local_24 = local_24 * local_28;
      uVar1 = 0;
      if (local_28 != 0) {
        uVar1 = local_4 / local_28;
      }
    }
    local_1c = local_1c * local_2c;
    local_20 = local_20 * local_30;
  }
  if (1 < local_4) {
    local_1c = local_1c << 1;
    local_20 = local_20 * (local_4 + 1);
  }
  *param_2 = local_1c;
  *param_3 = local_20;
  return;
}



undefined8 entry(void)

{
  uint uVar1;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 1;
  while (local_18 < 0xf4241) {
    _divisor_count_and_sum(local_20,&local_24,&local_28);
    uVar1 = 0;
    if (local_24 != 0) {
      uVar1 = local_28 / local_24;
    }
    if (local_28 == uVar1 * local_24) {
      local_18 = local_18 + 1;
      if (2 < local_24) {
        local_1c = local_1c + 1;
      }
      if ((local_18 < 0x65) && (_printf("%3u "), local_18 % 10 == 0)) {
        _printf("\n");
      }
      if ((((local_18 == 1000) || (local_18 == 10000)) || (local_18 == 100000)) ||
         (local_18 == 1000000)) {
        _printf("\n%uth arithmetic number is %u\n");
        _printf("Number of composite arithmetic numbers <= %u: %u\n");
      }
    }
    local_20 = local_20 + 1;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


